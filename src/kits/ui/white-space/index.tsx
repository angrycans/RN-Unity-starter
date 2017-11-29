import React from 'react';
import { View } from 'react-native';
import Theme from '../../theme';

export interface WhiteSpaceProps {
  size?: 'xs' | 'sm' | 'md' | 'lg' | 'xl';
  style?: Object | Array<Object>;
}

export default class WhiteSpace extends React.Component<WhiteSpaceProps, any> {
  static defaultProps = {
    size: 'md',
  };

  render() {
    const { size, style, } = this.props;
    const sizeName = size.replace(/\b(\w)(\w*)/g, function ($0, $1, $2) {
      if (__DEV__) console.log(`$0的value: ${$0};$1的value: ${$1};$2的value: ${$2}`);
      return $1.toUpperCase() + $2.toLowerCase();
    });
    return (
      <View style={[{ height: Theme.spacing[`vertical${sizeName}`] }, style]} />
    )
  }
}