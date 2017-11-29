import React from 'react';
import { View } from 'react-native';
import Theme from '../../theme';

export interface WingBlankProps {
    size?: 'sm' | 'md' | 'lg';
    style?: Object | Array<Object>;
}

export default class WingBlank extends React.Component<WingBlankProps, any> {

    static defaultProps = {
        size: 'md',
    };

    render() {
        const { size, style, children } = this.props;
        const sizeName = size.replace(/\b(\w)(\w*)/g, function ($0, $1, $2) {
            if (__DEV__) console.log(`$0的value: ${$0};$1的value: ${$1};$2的value: ${$2}`);
            return $1.toUpperCase() + $2.toLowerCase();
        });
        const margin = Theme.spacing[`horizontal${sizeName}`];

        return (
            <View style={[{ marginLeft: margin, marginRight: margin }, style]}>
                {children}
            </View>
        );
    }
}