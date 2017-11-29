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

import App from "./build/app";




export default class RNUnityStarter extends Component {
  render() {
    return <App {...this.props} />;
  }
}

AppRegistry.registerComponent('RNUnityStarter', () => RNUnityStarter);
