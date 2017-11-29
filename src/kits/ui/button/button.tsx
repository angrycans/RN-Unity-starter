/**
 * Created by Acans angrycans@gmail.com on 2017/4/7
 * 常用button组件
 * 样式参考 https://github.com/APSL/react-native-button
 * https://github.com/APSL/react-native-button/blob/master/Example/button/Example.js
 */

import * as React from 'react';
import {
  Image,
  Text,
  View,
  StyleSheet,
  ViewStyle,
  TextStyle,
  TouchableHighlight
} from 'react-native';

const noop = () => { };

interface IProps {
  text: string
  textStyle?: TextStyle
  style?: ViewStyle
  source?: any
  imageStyle?: ViewStyle
  disabled?: boolean
  onPress?: () => void
}

export default class Button extends React.Component<IProps, any> {
  static defaultProps = {
    /*自定义按钮样式*/
    style: {},
    /*按钮press的回调*/
    onPress: noop,
    disabled: false,
  };

  render() {
    //console.log(this.props)
    return (
      <TouchableHighlight
        style={[styles.button, this.props.style]}
        onPress={() => { this.props.onPress() }}
      >
        {this.props.source ?
          <View style={styles.view}>
            <Image style={[styles.img, this.props.imageStyle]} source={this.props.source} />
            <Text style={[styles.text, this.props.textStyle]}>{this.props.text}</Text>
          </View>
          :
          <Text style={[styles.text, this.props.textStyle]}>{this.props.text}</Text>
        }
      </TouchableHighlight>
    )
  }
}

const styles = StyleSheet.create({
  button: {
    height: 44,
    flexDirection: 'row',
    alignItems: 'center',
    borderWidth: 1,
    borderRadius: 8,
    alignSelf: 'center',
    justifyContent: 'center',
    borderColor: '#2980b9',
    backgroundColor: '#3498db'
  } as ViewStyle,
  text: {
    fontSize: 18,
    textAlign: 'center',
    backgroundColor: 'transparent',
  } as ViewStyle,
  view: {
    flexDirection: 'row',
    alignItems: 'center'
  } as ViewStyle,
  img: {
    width: 20,
    height: 20,
    marginRight: 5
  } as ViewStyle,

})