/**
 * Created by Acans angrycans@gmail.com on 2017/6/16
 * 路由入口
 */
import React from "react";
import { StackNavigator, NavigationActions } from "react-navigation";
import { Config } from 'kits';
import { msg } from "plume2";
import Toast from "react-native-root-toast";


type IProps = {
  stackNavigator: StackNavigator,
}

let CurrRouteName: any = null;
function getCurrentRouteName(navigationState) {
  if (!navigationState) {
    return null;
  }
  const route = navigationState.routes[navigationState.index];
  // dive into nested navigators
  if (route.routes) {
    return getCurrentRouteName(route);
  }
  return route.routeName;
}
class AppRouter extends React.Component<IProps, any> {
  toast: Toast;
  Routes: any;
  navigation: any;

  constructor(props) {
    super(props);
    msg.on("app:toast", txt => {
      this.toast && this.toast.destroy();
      this.toast = Toast.show(txt, { position: Toast.positions.CENTER });
    });
    msg.on('route:goToNext', this.goToNext);
    msg.on('route:backToLast', this.backToLast);
    msg.on('route:backToTop', this.backToTop);
    msg.on('route:popToRoute', this.popToRoute);
    msg.on('route:replaceRoute', this.replaceRoute);
    msg.on('route:replaceAtIndex', this.replaceAtIndex);
  }

  componentWillUnmount() {
    msg.off("app:toast", () => {
      this.toast && this.toast.destroy();
    });
    msg.off('route:goToNext', () => { });
    msg.off('route:backToLast', () => { });
    msg.off('route:backToTop', () => { });
    msg.off('route:popToRoute', () => { });
    msg.off('route:replaceRoute', () => { });
    msg.off('route:replaceAtIndex', () => { });
  }

  render() {
    return (
      <this.props.stackNavigator
        ref={(navigator) => (navigator ? this.navigation = navigator._navigation : null)}
        onNavigationStateChange={(prevState, currentState) => {
          if (!currentState) {
            return;
          }
          const currentScreen = getCurrentRouteName(currentState);
          const prevScreen = getCurrentRouteName(prevState);
          if (prevScreen !== currentScreen) {
            Config.CURRSCENE = currentScreen;
            CurrRouteName = currentScreen
            this.Routes = currentState.routes;
          }
        }}
      />
    );
  }

  goToNext = (routeName) => {
    //console.log('route:goToNext', routeName);
    this.navigation.navigate(routeName)
  }
  backToLast = () => {
    //console.log(this.navigation)
    this.navigation.goBack();
  }
  backToTop = () => {
    console.log(this.Routes);
    if (this.Routes && this.Routes.length > 0) {
      this.navigation.goBack(this.Routes[1].key);
    } else {
      this.navigation.goBack();
    }
  }
  popToRoute = (index) => {
    //console.log(this.Routes);
    this.navigation.goBack(this.Routes[index].key);
  }
  replaceRoute = (routeName) => {
    const navigateAction = NavigationActions.navigate({

      routeName: routeName,

      params: {},

      action: NavigationActions.navigate({ routeName })
    })

    this.navigation.dispatch(navigateAction)


  }
  replaceAtIndex = (routeName) => {
    const resetAction = NavigationActions.reset({
      index: 0,
      actions: [
        NavigationActions.navigate({ routeName })
      ]
    })
    this.navigation.dispatch(resetAction)
  }

}
export default AppRouter;

export { CurrRouteName };
