
import { Dimensions, PixelRatio, Platform } from 'react-native';

//UI主色
const brandPrimary = '#f78e3d';
const brandPrimaryTap = '#f77a1a';
const brandPrimaryLighter = '#FEF3EB';

const deviceWidth = Dimensions.get('window').width;
let deviceHeight = Dimensions.get('window').height;

const containerLeftWidth = Math.round(deviceWidth / 3);
let navigationBarHeight = 64;

if ( !(Platform.OS == "ios")) {
  navigationBarHeight = 54;
}

//UI主COLOR基调
const colors = {
  colorPrimary: '#FFFFFF',
  colorPrimaryDark: '#FFFFFF',
  colorAccent: '#FF8E3C',
  textColorPrimary: '#7B7770',
  windowBackground: '#F0F0F2',
  backgroundColor: '#FFFFFF',

  // 全局/品牌色
  // ---
  brandPrimary: brandPrimary, //主色
  brandPrimaryTap: brandPrimaryTap,  //主色按下时状态
  brandPrimaryLighter: brandPrimaryLighter,   //主色变浅
  brandSecondary: '#49a9ee', //辅助色1
  brandAssistant: '#f45651', //辅助色2
  brandHot: '#f96268',        //用于推荐/促销/折扣
  brandImportant: '#ff5b05',  //用于小红点
  brandSuccess: '#6abf47',    //成功 
  brandWarning: '#f4333c',    //警告 
  brandError: '#f4333c',      //错误 

  //文字色
  // ---
  textBase: '#666',                  // 基本
  textBaseInverse: '#fff',          // 基本 - 反色
  textSecondary: '#a4a9b0',          // 辅助色
  textPlaceholder: '#999',           // 文本框提示
  textDisabled: '#ccc',              // 失效
  textCaption: '#999',               // 辅助描述
  textParagraph: '#333',             // 段落
  textLink: brandPrimary,            // 链接
  iconBase: '#939495', 				       //小图标的背景，比如一些小圆点，加减号

  // 阴影色
  shadow: 'rgba(0, 0, 0, .21)',               //阴影色

  // 背景色
  // ---
  fillBody: '#F0F0F2',                        // 页面背景
  fillBase: '#fff',                           // 组件默认背景
  fillBaseLight: '#f7f7f7',                   //组件套装背景
  fillTap: '#e5e5e5',                         // 组件默认背景 _ 按下
  fillDisabled: '#ddd',                       // 通用失效背景
  fillMask: 'rgba(0, 0, 0, .5)',              // 遮罩背景
  fillOverlayInverse: 'rgba(0, 0, 0, .3)',    //浮层背景，用于轻提示

  // 边框色
  // ---
  borderBase: '#e9e9e9',
  borderSplit: '#e9e9e9',

  //主分类背景色
  //
  mainCategory: '#F7F7F7',
};

//字体
const font = {
  // 字体家族
  // ---
  familyBase: '_apple_system,"SF UI Text",Roboto,Noto,"Helvetica Neue",`elvetica,"PingFang SC","Hiragino Sans GB","Microsoft YaHei","微软雅黑",Arial,sans_serif',
  familyCode: 'Consolas,Menlo,Courier,monospace',

  // 字体尺寸
  // ---
  sizeIconText: 10,       //小号字体
  sizeDefault: 12,  //基础字体大小
  sizeCaptionSm: 13,  //小号号说明文字
  sizeSubhead: 14,  //副标题
  sizeBase: 15,     //基本
  sizeCaption: 16,  //大号号号说明文字
  sizeHeading: 17, //主标题
  sizeSm: 18,
  sizeMd: 21,
  sizeLg: 24,
  sizeXl: 30,

  // 行高
  // ---
  lineHeightBase: 15,      //单行行高
  lineHeightParagraph: 24, //多行行高

  //背景
  fillBase: 'transparent',                    //rn的text默认带有白底
}

//边框 
const border = {
  // 圆角
  // ---
  radiusXs: 2,
  radiusSm: 4,
  radiusMd: 6,
  radiusLg: 8,

  // 边框尺寸
  // ---
  widthSm: 1 / PixelRatio.get(),
  widthMd: 2 / PixelRatio.get(),
  widthLg: 4 / PixelRatio.get(),

  //边框颜色
  // ---
  color: colors.borderBase,
  split: colors.borderSplit,
}

// 间距
const spacing = {
  default: 15,    //页面边距 常用间距
  // 水平间距
  // ---
  horizontalSm: 6,
  horizontalMd: 10,
  horizontalLg: 15,

  // 垂直间距
  // ---
  verticalXs: 6,
  verticalSm: 10,
  verticalMd: 15,
  verticalLg: 18,
  verticalXl: 24,
  verticalXxl: 42,
}

//按钮
const button = {
  height: 44,   //默认按钮高度
  fontSize: font.sizeBase,  //默认按钮字体大小
  spacing: 22,  //默认左右间距

  heightSm: 34, //小号按钮高度
  fontSizeSm: 14, //小号按钮字体大小
  spacingSm: 18,//小号按钮左右间距

  heightLg: 70, //小号按钮高度
  fontSizeLg: 22, //大号按钮字体大小
  spacingLg: 22,//大号按钮左右间距

  primaryFill: brandPrimary,  //主色按钮
  primaryFillTap: brandPrimaryTap, //主色按钮按下时

  secondaryFill: colors.brandSecondary,  //次要按钮
  secondaryFillTap: colors.brandSecondary, //次要按钮按下时

  ghostColor: brandPrimary, //幽灵按钮 同时应用于背景、文字颜色、边框色
  ghostFillTap: brandPrimaryTap,  //幽灵按钮按下时
}

//输入框TextInput
const input = {
  height: 44,
  inputHeight: 40,
  labelWidth: 80,                            //InputItem、TextareaItem 文字长度基础值
  fontSize: font.sizeBase,
  iconColor: brandPrimary,
  iconColorInverse: brandPrimary,
}

//searchBar
const searchBar = {
  height: 44,
  inputHeight: 40,
  fontSize: font.sizeBase,
  iconColor: '#bbb',
  fill: '#fff',
}

//通用属性值
const values = {
  //navigationBar
  navigationBarHeight: navigationBarHeight,

  //device
  deviceWidth: deviceWidth,
  deviceHeight: deviceHeight,

  //tabBar
  tabBarHeight: 50,

  //others
  textFontSize: 14,   //逐渐用font中的值替换 
  contentFontSize: 14,  //逐渐用font中的值替换
  titleFontSize: 18,  //逐渐用font中的值替换

  //container  
  containerLeftWidth: containerLeftWidth,
  containerRightWidth: deviceWidth - containerLeftWidth - 45,
  containerHeight: deviceHeight - navigationBarHeight,
};

export default {
  colors,
  values,
  font,
  border,
  spacing,
  button,
  input,
  searchBar,
};