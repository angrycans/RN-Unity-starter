/**
 * Created by Acans angrycans@gmail.com on 2017/4/7
 * 常用button组件
 * 样式参考 https://github.com/APSL/react-native-button
 * https://github.com/APSL/react-native-button/blob/master/Example/button/Example.js
 *
 * Change by ljh on 2017/4/11
 * 组件和样式参考ant mobile的代码
 */

import React from 'react';
import {
  TouchableHighlight,
  Text,
  StyleSheet,
  View,
  ActivityIndicator
} from 'react-native';
import buttonStyles from './style/index';
import PropsType from './propstype';
import { UI } from 'kits';

export default class ExButton extends React.Component<PropsType, any> {
  static defaultProps = {
    disabled: false,
    activeStyle: {},
    loading: false,
    across: false,
    onPress: (_x?: any) => { },
    onPressIn: (_x?: any) => { },
    onPressOut: (_x?: any) => { },
    onShowUnderlay: (_x?: any) => { },
    onHideUnderlay: (_x?: any) => { },
    styles: buttonStyles,
    contentStyle: {},
    iconStyle: {}
  };

  constructor(props) {
    super(props);
    this.state = {
      pressIn: false,
      touchIt: false,
    }
  }

  onPress = (...arg) => {
    if (this.props.onPress) {
      (this.props.onPress as any)(...arg);
    }
  };

  onPressIn = (...arg) => {
    if (!this.props.disabled) {
      this.setState({ pressIn: true });
    }
    if (this.props.onPressIn) {
      (this.props.onPressIn as any)(...arg);
    }
  }

  onPressOut = (...arg) => {
    if (!this.props.disabled) {
      this.setState({ pressIn: false });
    }
    if (this.props.onPressOut) {
      (this.props.onPressOut as any)(...arg);
    }
  }

  onShowUnderlay = (...arg) => {
    if (!this.props.disabled) {
      this.setState({ touchIte: true });
    }
    if (this.props.onShowUnderlay) {
      (this.props.onShowUnderlay as any)(...arg);
    }
  }

  onHideUnderlay = (...arg) => {
    if (!this.props.disabled) {
      this.setState({ touchIt: false });
    }
    if (this.props.onHideUnderlay) {
      (this.props.onHideUnderlay as any)(...arg);
    }
  }

  render() {
    // TODO: replace `TouchableHighlight` with `TouchableWithoutFeedback` in version 1.1.0

    //console.log(this.props.children, this.props);
    const { size = 'normal', type = 'default', disabled, across, icon, activeStyle, onPress,
      style, styles, iconStyle, loading, ...restProps, } = this.props;

    ['activeOpacity', 'delayPressOut', 'underlayColor', 'onPress', 'onPressIn',
      'onPressOut', 'onShowUnderlay', 'onHideUnderlay'].forEach((prop) => {
        if (restProps.hasOwnProperty(prop)) {
          delete restProps[prop];
        }
      });

    const textStyle = [
      styles[`${size}RawText`],
      styles[`${type}RawText`],
      disabled && styles.disabledRawText,
      this.state.pressIn && styles[`${type}HighlightText`],
    ]

    const wrapperStyle = [
      styles.wrapperStyle,
      styles[`${size}Raw`],
      styles[`${type}Raw`],
      across && styles.acrossRaw,
      disabled && styles.disabledRaw,
      this.state.pressIn && activeStyle && styles[`${type}Highlight`],
      this.state.touchIt && activeStyle,
      style,
    ]

    const underlayColor = (StyleSheet.flatten(
      styles[activeStyle ? `${type}Highlight` : `${type}Raw`]
    ) as any).backgroundColor;

    const indicatorColor = (StyleSheet.flatten(
      this.state.pressIn ? styles[`${type}HighlightText`] : styles[`${type}RawText`]
    ) as any).color;

    //console.log("exbutton ", this, this.props.children);

    return (
      <TouchableHighlight
        activeOpacity={0.4}
        underlayColor={underlayColor}
        style={wrapperStyle}
        onPress={this.onPress}
        onPressIn={this.onPressIn}
        onPressOut={this.onPressOut}
        onShowUnderlay={this.onShowUnderlay}
        onHideUnderlay={this.onHideUnderlay}
        disabled={disabled}
        {...restProps}
      >
        <View style={styles.container} onLayout={this.props.onLayout}>
          {
            loading ? (
              <ActivityIndicator
                style={styles.indicator}
                animating
                color={indicatorColor}
                size='small'
              />
            ) : null
          }
          {
            icon ? (
              <UI.ExIcon name={icon} style={[textStyle, styles.iconRawText, iconStyle]} onPress={this.onPress} />
            ) : null
          }
          <Text style={[textStyle, this.props.contentStyle]}>{this.props.children}</Text>
        </View>
      </TouchableHighlight>
    )
  }
}
