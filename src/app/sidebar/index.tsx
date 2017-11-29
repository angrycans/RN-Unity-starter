import * as React from 'react';
import {
  StyleSheet,
  ViewStyle,
  NativeModules
} from 'react-native';
import { Container, Content, Text, List, ListItem } from "native-base";
const routes = ["Home", "Reload"];
const NativeBridge = NativeModules.NativeBridge;


export default class SideBar extends React.Component<any, any> {

  _onPress = (data) => {
    if (data == 'Reload') {
      NativeBridge.restartUnity();
      NativeBridge.SendMessageToUnity(JSON.stringify({ gameobject: 'obj', func: "func", params: "1" }));

    }
  }
  render() {
    return (
      <Container style={styles.container}>
        <Content>
          <List
            dataArray={routes}
            renderRow={data => {
              return (
                <ListItem
                  button
                  onPress={() => this._onPress(data)}>
                  <Text>{data}</Text>
                </ListItem>
              );
            }}
          />
        </Content>
      </Container >
    );
  }
}
const styles = StyleSheet.create({
  container: {
    width: '100%',
  } as ViewStyle,

});
