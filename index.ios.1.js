/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 * @flow
 */

import React, { Component } from 'react';
import {
  AppRegistry,
  StyleSheet,
  Text,
  View,
  Button,
  NativeModules, PixelRatio, Dimensions, TouchableHighlight
} from 'react-native';


require('react-native-eval')


import UnityView from './src/unityview.js'


var NativeBridge = NativeModules.NativeBridge;



export default class RNUnityStarter extends Component {
  render() {
    return (
      <View style={styles.container} >
        <UnityView style={{ width: Dimensions.get("window").width, height: Dimensions.get("window").height }} />
        <TouchableHighlight style={[styles.box2, { position: 'absolute', top: 0 }]}
          onPress={() => {
            NativeBridge.restartUnity();
            NativeBridge.SendMessageToUnity(JSON.stringify({ gameobject: 'obj', func: "func", params: "1" }));
          }}>
          <View></View>
        </TouchableHighlight>
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: 'center',
    alignItems: 'center',
    backgroundColor: '#F5FCFF',
  },
  welcome: {
    fontSize: 20,
    textAlign: 'center',
    margin: 10,
  },
  instructions: {
    textAlign: 'center',
    color: '#333333',
    marginBottom: 5,
  },
  box2: {
    width: 200,
    height: 200,
    backgroundColor: '#00FF00'
  }
});

AppRegistry.registerComponent('RNUnityStarter', () => RNUnityStarter);
