import React from 'react';
import { View, TouchableWithoutFeedback } from 'react-native';
import { FlexProps } from './propstype';

export default class ExFlex extends React.Component<FlexProps, any> {
  static Item: any;

  static defaultProps = {
    direction: 'row',
    wrap: 'nowrap',
    justify: 'start',
    align: 'center',
    onPress: (_x?: any) => { },
  }

  render() {
    let { style, direction, wrap, justify, align, children, onPress, ...restProps } = this.props;

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

    const flexStyle = {
      flexDirection: direction,
      flexWrap: wrap,
      justifyContent: transferConst[0],
      alignItems: transferConst[1],
    };

    return (
      <TouchableWithoutFeedback onPress={onPress} {...restProps}>
        <View style={[flexStyle, style]}>
          {children}
        </View>
      </TouchableWithoutFeedback>
    )
  }
}
