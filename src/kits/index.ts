/**
 * @providesModule kits
 */

import noop from './noop'
import Loading from './loaing'
import Fetch from './fetch';
import UITheme from './theme';
import Config, { PUBLICKEY, Auth, IDevice, IUserInfo } from './config'
import UI from './ui'
import Toast from './toast'
import Toasting from './loading-w';

import { toFixed } from './util'
import OrderLocalStorage from './order-local-storage';

export {
  noop,
  Loading,
  Fetch,
  UITheme,
  UI,
  Toast,
  Config,
  PUBLICKEY,
  Auth,
  IDevice,
  toFixed,
  OrderLocalStorage,
  IUserInfo,
  Toasting
}