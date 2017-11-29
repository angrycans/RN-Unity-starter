import * as React from 'react';
import { View, StyleSheet, ViewStyle, Dimensions } from 'react-native';
import UnityView from '../../unityview.js'


export default class Home extends React.Component<any, any> {

  constructor(props) {
    super(props);
  }

  componentDidMount() { }

  componentWillUnmount() { }

  render() {
    return (
      <View style={styles.container}>
        <UnityView style={{ width: Dimensions.get("window").width, height: Dimensions.get("window").height }} />
      </View>
    );
  }
}
const styles = StyleSheet.create({
  container: {
    marginTop: 0
  } as ViewStyle,

  content: {},

  push: {
    margin: 10
    
  }
});
