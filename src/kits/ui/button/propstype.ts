interface ButtonProps {
  type?: 'primary' | 'secondary' | 'warning' | 'ghost' | 'default';
  size?: 'large' | 'small' | 'normal';
  activeStyle?: boolean | Object;
  disabled?: boolean;
  onClick?: (x: any) => void;
  style?: Object | Array<Object>;
  across?: boolean;
  loading?: boolean;
  icon?: any;
  onPress?: (x?: any) => void;
  onPressIn?: (x?: any) => void;
  onPressOut?: (x?: any) => void;
  onShowUnderlay?: (x?: any) => void;
  onHideUnderlay?: (x?: any) => void;
  styles?: any;
  contentStyle?: any;
  iconStyle?: any;
  onLayout?: any;
  delayPressDisable?: boolean;
  isChecked?: boolean;
}

export default ButtonProps;
