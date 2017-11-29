import Theme from '../../../theme';
import { StyleSheet } from 'react-native';

export default StyleSheet.create({
  container: {
    flexDirection: 'row',
    alignItems: 'center',
    justifyContent: 'center',
  },
  defaultHighlight: {
    backgroundColor: Theme.colors.fillBaseLight,
    borderColor: Theme.colors.borderBase,
  },
  primaryHighlight: {
    backgroundColor: Theme.button.primaryFillTap,
    borderColor: Theme.button.primaryFill,
  },
  secondaryHighlight: {
    backgroundColor: Theme.button.secondaryFillTap,
    borderColor: Theme.button.secondaryFill,
    opacity: 0.9,
  },
  ghostHighlight: {
    backgroundColor: Theme.button.ghostFillTap,
    borderColor: Theme.button.ghostColor,
  },
  warningHighlight: {
    backgroundColor: Theme.colors.brandWarning,
    borderColor: Theme.colors.brandWarning,
  },
  wrapperStyle: {
    alignItems: 'center',
    justifyContent: 'center',
    borderRadius: Theme.border.radiusXs,
    borderWidth: Theme.border.widthMd,
  },
  largeRaw: {
    height: Theme.button.heightLg,
    paddingLeft: Theme.button.spacingLg,
    paddingRight: Theme.button.spacingLg,
  },
  normalRaw: {
    height: Theme.button.height,
    paddingLeft: Theme.button.spacing,
    paddingRight: Theme.button.spacing,
  },
  smallRaw: {
    height: Theme.button.heightSm,
    paddingLeft: Theme.button.spacingSm,
    paddingRight: Theme.button.spacingSm,
  },
  defaultRaw: {
    height: Theme.button.height,
    backgroundColor: Theme.colors.fillBase,
    borderColor: Theme.colors.borderBase,
  },
  primaryRaw: {
    backgroundColor: Theme.button.primaryFill,
    borderColor: Theme.button.primaryFill,
  },
  secondaryRaw: {
    backgroundColor: Theme.button.secondaryFill,
    borderColor: Theme.button.secondaryFill,
  },
  ghostRaw: {
    backgroundColor: 'transparent',
    borderColor: Theme.button.ghostColor,
  },
  warningRaw: {
    backgroundColor: Theme.colors.fillBase,
    borderColor: Theme.colors.brandWarning,
  },
  disabledRaw: {
    backgroundColor: Theme.colors.fillDisabled,
    borderColor: Theme.colors.fillDisabled,
  },
  acrossRaw: {
    width: '100%',
  },
  defaultHighlightText: {
    color: Theme.colors.textBase,
  },
  primaryHighlightText: {
    color: Theme.colors.textBaseInverse,
  },
  secondaryHighlightText: {
    color: Theme.colors.textBaseInverse,
  },
  ghostHighlightText: {
    color: Theme.colors.textBaseInverse,
  },
  warningHighlightText: {
    color: Theme.colors.textBaseInverse,
  },
  largeRawText: {
    fontSize: Theme.button.fontSizeLg,
  },
  normalRawText: {
    fontSize: Theme.button.fontSize,
  },
  smallRawText: {
    fontSize: Theme.button.fontSizeSm,
  },
  defaultRawText: {
    color: Theme.colors.textBase,
  },
  primaryRawText: {
    color: Theme.colors.textBaseInverse,
  },
  secondaryRawText: {
    color: Theme.colors.textBaseInverse,
  },
  ghostRawText: {
    color: Theme.button.ghostColor,
  },
  warningRawText: {
    color: Theme.colors.brandWarning,
  },
  disabledRawText: {
    color: Theme.colors.textDisabled,
  },
  iconRawText: {
    paddingRight: Theme.spacing.horizontalSm,
  },
  indicator: {
    marginRight: Theme.spacing.horizontalMd,
  },
});