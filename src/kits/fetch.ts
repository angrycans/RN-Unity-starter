/**
 * 网络层封装
 */
import { msg } from 'plume2';
import { Config, Auth } from 'kits';
import { Platform } from "react-native";

interface AsyncResult<T> {
  res: T;
  err: Error;
}

interface IResponse {
  data: any;
  status: number;
  message: string;
  sessionId?: string;
}

/**
 * 封装业务fetch
 * @param input 输入url等
 * @param init 初始化http header信息等
 */
async function Common<T>(
  input: RequestInfo,
  init?: RequestInit,
  toasthide?: boolean
): Promise<AsyncResult<T>> {
  //封装请求信息
  const request: RequestInit = {
    method: 'POST',
    headers: new Headers({
      "Content-Type": 'application/json',
      mode: 'cors',
      platform: Platform.OS,
      credentials: 'omit', //不携带cookie
      Store: true,
      Authorization: Auth.sessionId ? Auth.sessionId : ''
    }),
    ...init
  };
  // 添加网络超时机制
  const timeoutId = setTimeout(() => {
    msg.emit('app:toast', '网络请求超时');
    return { res: null, err: new Error('timeout') };
  }, Config.HTTP_TIME_OUT * 1000);

  try {
    if (__DEV__) {
      console.groupCollapsed &&
        console.groupCollapsed('HTTP REQUEST=>' + input);
      console.time && console.time('HTTP REQUEST START');
      console.groupCollapsed && console.groupCollapsed('REQUEST body => ');
      console.log('Request', request);
      //console.log("RequestInfo", input);
      console.groupEnd && console.groupEnd();
    }
    const response = await fetch(input, request);
    clearTimeout(timeoutId);
    //RN 0.45.1 BUG 等待修复
    //setTimeout(() => null, 0);
    const responseData: IResponse = await response.json();
    const { message, data, status, sessionId } = responseData;

    //接口返回错误
    if (__DEV__) {
      console.log('status', status);
    }
    if (status != 1) {
      //如果接口返回‘用户信息获取失败’
      //说明sessionid 超时或者不正确 请重新登录
      if (message.includes('用户信息获取失败')) {
        //清除session
        //msg.emit('app:toast', "用户信息获取失败,请重新登录");
        msg.emit('app:toast', '用户信息获取失败,请重新登录.');
        if (__DEV__) {
          console.log('用户信息获取失败,请重新登录 sid=' + Auth.sessionId);
        }
        // Auth.Userinfo = {};
        // Auth.sessionId = '';
      } else {
        if (!toasthide) {
          msg.emit('app:toast', message);
        }
      }
    }
    //是否是login接口
    if (sessionId) {
      if (__DEV__) {
        console.log('is login and login ok');
      }
      Auth.sessionId = sessionId;
    }

    let ret = {
      res: status ? data : null,
      err: status != 1 ? new Error(message) : null
    };

    if (__DEV__) {
      console.groupCollapsed &&
        console.groupCollapsed('HTTP RESPONES OK RETURN=> ');
      console.log('RESPONSE', responseData);
      console.log('return', ret);
      console.timeEnd && console.timeEnd();
      console.groupEnd && console.groupEnd();
      console.groupEnd && console.groupEnd();
    }
    return ret;
  } catch (err) {
    clearTimeout(timeoutId);
    //trace error
    if (__DEV__) {
      console.trace(err);
    }
    let msgtext: string = '网络请求失败,请检查网络';
    //全局消息通知
    if (!toasthide) {
      msg.emit('app:toast', msgtext);
    }
    return { res: null, err: new Error(msgtext) };
  }
}

function Post(uri: string, body?: Object, toasthide: boolean = false) {
  return Common(
    Config.HOST + uri,
    { method: 'POST', body: JSON.stringify(body) },
    toasthide
  );
}

function Delete(uri: string, body?: Object, toasthide: boolean = false) {
  return Common(
    Config.HOST + uri,
    { method: 'DELETE', body: JSON.stringify(body) },
    toasthide
  );
}

/**
 * GET
 * @param uri
 */
function Put(uri: string, body?: Object, toasthide: boolean = false) {
  return Common(
    Config.HOST + uri,
    { method: 'PUT', body: JSON.stringify(body) },
    toasthide
  );
}

/**
 * GET
 * @param uri
 */
function Get(uri: string, toasthide: boolean = false) {
  return Common(Config.HOST + uri, { method: 'GET' }, toasthide);
}

export default {
  Common,
  Post,
  Get,
  Delete,
  Put
};
