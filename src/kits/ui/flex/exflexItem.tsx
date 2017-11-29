import React from 'react';
import { View, TouchableWithoutFeedback } from 'react-native';
import { FlexItemProps } from './propstype';

export default class ExFlexItem extends React.Component<FlexItemProps, any> {
  static defaultProps = {
    flex: 1,
    direction: 'column',
    wrap: 'nowrap',
    justify: 'start',
    align: 'start',
  };

  render() {
    let { style, children, flex, direction, wrap, justify, align, onPress, ...restProps } = this.props;

    let transferConst = [justify, align];
    transferConst = transferConst.map((el) => {
      let tempTxt;
      switch (el) {
        case 'start':
          tempTxt = 'flex-start';
          break;
        case 'end':
          tempTxt = 'flex-end';
          break;
        case 'between':
          tempTxt = 'space-between';
          break;
        case 'around':
          tempTxt = 'space-around';
          break;
        default:
          tempTxt = el;
          break;
      }

      return tempTxt;
    });

    const flexItemStyle = {
      flex: flex,
      flexDirection: direction,
      flexWrap: wrap,
      justifyContent: transferConst[0],
      alignItems: transferConst[1],
    };

    //support other TouchableWithoutFeedback props
    // support TouchabledHighlight
    return (
      <TouchableWithoutFeedback onPress={onPress} {...restProps}>
        <View style={[flexItemStyle, style]}>
          {children}
        </View>
      </TouchableWithoutFeedback>
    )
  }
}