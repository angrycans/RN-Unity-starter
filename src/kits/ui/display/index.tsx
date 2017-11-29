import React, { Component } from 'react';
import {
  View,
  Dimensions,
} from 'react-native';

const screen = Dimensions.get('window');
const WIDTH = screen.width;
const HEIGHT = screen.height;


export default class Display extends Component<any, any> {
  constructor(props) {
    super(props);
  }

  enableStyle() {
    if (this.props.enable)
      return {};

    return {
      position: 'absolute',
      top: HEIGHT,
      left: WIDTH,
      height: 0,
      width: 0,
    };
  }

  render() {
    //console.log("this.enableStyle", this.props.enable, this.enableStyle(), this.props.text);
    return (
      <View ref="display" style={[this.props.style, this.enableStyle.bind(this)()]}>
        {this.props.children}
      </View>
    );
  }


}