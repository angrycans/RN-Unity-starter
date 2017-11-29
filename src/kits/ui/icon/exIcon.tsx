import React from 'react';
import { TouchableOpacity } from 'react-native';
import FontAwesome from 'react-native-vector-icons-iconfont/FontAwesome';
import IconFont from 'react-native-vector-icons-iconfont/IconFont';

export interface IconPropType {
  name: string;
  size?: 'xxs' | 'xs' | 'sm' | 'md' | 'lg' | 'llg' | number;
  color?: string;
  style?: Object | Array<Object>;
  onPress?: (x?: any) => void;
}

export default class ExIcon extends React.Component<any, any> {
  static defaultProps = {
    size: 'md',
    color: '#999',
    onPress: (_x?: any) => { },
  };

  onPress = (...arg) => {
    if (this.props.onPress) {
      (this.props.onPress as any)(...arg);
    }
  };

  render() {
    const { size, name, color, style } = this.props;
    const sizeMap = { 'xxs': 15, 'xs': 18, 'sm': 21, 'md': 22, 'lg': 36, 'llg': 100 };
    const fontSize = typeof size === 'string' ? sizeMap[size] : size;
    const textIconStyle = [
      { flexDirection: 'row' },
      style,
    ];

    let renderIcon: any;

    if (name.indexOf("qm-") > -1) {
      renderIcon = <IconFont
        style={textIconStyle}
        name={name.substring(3)}
        size={fontSize}
        color={color}
      />

    } else {
      renderIcon = <FontAwesome
        style={textIconStyle}
        name={name}
        size={fontSize}
        color={color}
      />
    }

    return (
      this.props.onPress ? <TouchableOpacity onPress={this.onPress} activeOpacity={1}>
        {renderIcon}
      </TouchableOpacity> : renderIcon
    )
  }
}