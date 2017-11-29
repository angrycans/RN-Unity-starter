
interface FlexProps {
    style?: Object | Array<Object>;
    direction?: 'row' | 'row-reverse' | 'column' | 'column-reverse';
    wrap?: 'nowrap' | 'wrap' | 'wrap-reverse';
    justify?: 'start' | 'end' | 'center' | 'between' | 'around';
    align?: 'start' | 'center' | 'bottom' | 'end' | 'baseline' | 'stretch';
    alignContent?: 'start' | 'end' | 'center' | 'between' | 'around' | 'stretch';
    children?: any;
    onPress?: (e?: any) => void;
    onLongPress?: any;
    onPressIn?: any;
    onPressOut?: any;
    disabled?: boolean;
}
interface FlexItemProps {
    flex?: number;
    direction?: 'row' | 'row-reverse' | 'column' | 'column-reverse';
    wrap?: 'nowrap' | 'wrap' | 'wrap-reverse';
    justify?: 'start' | 'end' | 'center' | 'between' | 'around';
    align?: 'start' | 'center' | 'bottom' | 'end' | 'baseline' | 'stretch';
    alignContent?: 'start' | 'end' | 'center' | 'between' | 'around' | 'stretch';
    style?: Object | Array<Object>;
    children?: any;
    onPress?: any;
    onLongPress?: any;
    onPressIn?: any;
    onPressOut?: any;
    disabled?: boolean;
}

export {
    FlexProps,
    FlexItemProps
}