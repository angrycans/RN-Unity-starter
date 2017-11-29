import { AsyncStorage } from 'react-native';
import moment from 'moment';

const ORDERLOCALSTORAGEKEY = 'LOCAL::STORGE::ORDER::KEY';

class OrderLocalStorage {
  static async set(member: string, data: any) {
    let curr: string = moment().format('YYYYMMDD');
    let curr_at: string = moment().format('YYYY-MM-DD HH:mm:ss');
    let d = await AsyncStorage.getItem(ORDERLOCALSTORAGEKEY);
    let d_json = JSON.parse(d);

    if (d_json) {
      for (var key in d_json) {
          if (d_json.hasOwnProperty(key)) {
              if (key != curr) {
                  delete d_json[key];
              }
          }
      }  
      if (d_json[curr]) {
        if (d_json[curr][member]) {
          d_json[curr][member][curr_at] = data;
        } else {
          d_json[curr][member] = {};
          d_json[curr][member][curr_at] = data;
        }
      } else {
        d_json[curr] = {};
        d_json[curr][member] = {};
        d_json[curr][member][curr_at] = data;
      }
    } else {
      d_json = {};
      d_json[curr] = {};
      d_json[curr][member] = {};
      d_json[curr][member][curr_at] = data;
    }
    if (__DEV__) {
      console.log('order-local-storage=>', d_json);
    }

    AsyncStorage.setItem(ORDERLOCALSTORAGEKEY, JSON.stringify(d_json));
  }

  static async delete(member: string, create_at: Date) {
    let curr: string = moment().format('YYYYMMDD');
    let curr_at: string = moment(create_at).format('YYYY-MM-DD HH:mm:ss');
    let d = await AsyncStorage.getItem(ORDERLOCALSTORAGEKEY);
    let d_json = JSON.parse(d);

    if (d_json[curr] && d_json[curr][member] && d_json[curr][member][curr_at]) {
      delete d_json[curr][member][curr_at];
    }

    return await AsyncStorage.setItem(ORDERLOCALSTORAGEKEY, JSON.stringify(d_json));
  }

  static async get(member: string) {
    let d = await AsyncStorage.getItem(ORDERLOCALSTORAGEKEY);
    if (!d) {
      return null;
    }
    let d_json = JSON.parse(d);
    let curr: string = moment().format('YYYYMMDD');

    return d_json[curr] ? d_json[curr][member] : null;
  }

  static clear() {
    AsyncStorage.clear();
  }
}

export default OrderLocalStorage;
