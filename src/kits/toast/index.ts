import { msg } from 'plume2'

class Toast {
  static show = (text: any) => {
    msg.emit("app:toast", text);
  }
}

export default Toast;