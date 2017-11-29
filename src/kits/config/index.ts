/**
 * cash-pad 全局配置中心
 */

interface IConfig {
  HTTP_TIME_OUT: number;
  VERSION: string;
  IOS_VERSION: string;
  ANDROID_VERSION: string;
  HOST: string;
  LOGINHOST?: string;
  CURRSCENE: string;
  DNAME: string;
  ENVID: number;
  DEVICE: IDevice;
  DEVICES?: IOutDevice[];
  HOSTS?: string[];
	VEMHOSTS?:string[];
	LOGINHOSTS?: string[];
  ADMINAPIHOSTS: string[];
  ISD2CAPP: boolean;
  ROUTES: any[];
  GOODS_WEIGHT: any,
  GOODS_NO_CODE: any
  GOODS_NORMAL: any,
  DB?: any,
  ONLINE: boolean,
  DEVICETYPE: string,
  SYNC_ORDER_NUMBER: number,
  SYNC_TIME_DURATION: number,
  NET_PAGE_SIZE: number,
  DB_PAGE_SIZE: number,
  SYNCOFFORDER: number,
  ADMINID: string,
}
interface IOutDevice {
  name?: string,
  address: string,
  bondState: number,
  from: string
}

interface IUserInfo {
  companyName: string,
  adminId: string,
  role: number,
  employeeId: string,
  employeeName: string,

}
interface IAuth {
  userinfo: IUserInfo;
  sessionId: string;
  role: string;
  sceneBName: string;
}

interface IDevice {
  brand: string;
  model: string;
}

const Config = {
  HTTP_TIME_OUT: 10, //单位秒
  VERSION: '0.0.5',
  IOS_VERSION: '0.0.5',
  ANDROID_VERSION: '0.0.5',
  //LOGINHOST: '',//test1
  LOGINHOST: 'http://172.21.4.97:8080',//性能
  HOST: 'http://172.19.67.103:8080',
  CURRSCENE: 'none',
  DNAME: '',
  ENVID: 0,
  DEVICE: { brand: '', model: '' },
	LOGINHOSTS: [
		'http://www.1000.com', // 线上
		'http://172.19.66.61:8080', // test1
		'http://172.21.4.97:8080', // test2
		'http://172.21.4.97:8080', // test3
		'http://172.21.4.97:8080', // test4
		'http://172.21.33.186:8080', // test5
		'http://172.21.36.31:8080',// 性能
		'http://172.21.4.97:8080', // 开发
		'http://172.19.71.3:8080', // 联调环境

	],
	HOSTS: [
		'http://cash-pad-api.1000.com', // 线上
		'http://172.21.34.132:8080', // test1
		'http://172.21.34.35:8080', // test2
		'http://172.21.36.116:8080', // test3
		'http://172.21.36.116:8080', // test4
		'http://172.21.33.71:8080', // test5
		'http://172.19.67.103:8080', // 性能
		'http://172.21.4.97:8080', // 开发
		'http://172.19.71.155:8080' // 联调环境
	],
	VEMHOSTS: [
		'http://cash-vem-api.1000.com', // 线上
		'http://172.19.66.91:8080', // test1
		'http://172.19.64.29:8080', // test2
		'http://172.19.64.29:8080', // test3
		'http://172.19.68.126:8080', // test4
		'http://172.19.69.39:8080', // test5
		'http://172.19.67.28:8080', // 性能
		'http://172.21.4.97:8080', // 开发
		'http://172.19.71.167:8080' // 联调环境
	],
  ADMINAPIHOSTS: [
    "http://app-api.1000.com",
    "http://172.19.66.19:8080",
    "http://172.21.3.182:8080",
    "",
    "http://172.19.68.97:8080",
    "http://172.21.33.206:8080",
    "http://172.19.67.173:8080",
    "http://172.19.65.243:8080",
    "http://172.19.71.45:8080",
  ],
  ISD2CAPP: false,
  ROUTES: [],
  SYNCOFFORDER: 0,
  GOODS_WEIGHT: 3,    //称重
  GOODS_NO_CODE: 4,   //无码
  GOODS_NORMAL: 1,    //0，1标品
  DEVICES: [],
  DB: null,
  ONLINE: true,
  DEVICETYPE: "mobile",      //设备类型
  SYNC_ORDER_NUMBER: 100, // 同步离线订单数量
  SYNC_TIME_DURATION: 15,  //全量同步时间 天数
  NET_PAGE_SIZE: 500,
  DB_PAGE_SIZE: 6,
  ADMINID: "",
};

let Auth = {} as IAuth;

const PUBLICKEY =
  '-----BEGIN RSA PUBLIC KEY-----' +
  'MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCJZn2ECdwejJdoCN+VJ5ENtZDoXH47/W+9oWBFNLK9rgU2kH/O9ZgDjC8WudhX6xNYNlAU/0fOEodS7+3K9JSwTxid7PtsoK+bs6ue4omj5S3ny+lST5tXYqEu1Bk+j8KEg13/Xme+C7s4qZUHS1Q67Rq9a7zcJKaj/79UXdQxowIDAQAB' +
  '-----END RSA PUBLIC KEY-----';

export default Config as IConfig;

export { PUBLICKEY, Auth, IDevice, IUserInfo };
