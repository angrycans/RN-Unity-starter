/**
 * 不四舍五入的取两位小数 fomart 保留2位小数后 去尾数0
 */
export const toFixed = (number: (number | string)) => {
  if (typeof number != 'string') {
    number = number.toString();
  }
  let numberArray = number.split('.');
  if (numberArray[1]) {
    if (numberArray[1].length == 1) {
      numberArray[1] = numberArray[1];
    } else if (numberArray[1].length > 2) {
      numberArray[1] = numberArray[1].substring(0, 2);
    }
  }
  return parseFloat(numberArray.join('.'));
}


/**
 * flatModues and return a module mapper
 */
export const flatModules = (modules: Array<Object | Function> = []): Object => {
  let modulesObj = {};

  for (let m of modules) {
    Object.keys(m).forEach((v) => {
      modulesObj[v] = m[v];
    });
  } return modulesObj;
};
