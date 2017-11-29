import * as React from "react";
import {
  TouchableOpacity,
  Text,
  ListView,
  View,
  ViewStyle,
  TextStyle,
  StyleSheet
} from "react-native";
import Theme from "../theme";
import ExIcon from "./icon/exicon";

/**
 * 宫格布局键盘
 * @param row         行数,默认为3
 * @param cell        列数,默认为4
 * @param onPress     每个按钮点击事件
 * @param from        数据
 */
export default class GKeyboard extends React.Component<any, any> {
  props: {
    style: ViewStyle; //数字键盘样式
    row?: number; //行数,默认为3
    cell?: number; //列数，默认为4
    onPress: Function;
    from: Array<{ display: any; value: any }>;
  };

  _dataSource(array) {
    const ds = new ListView.DataSource({
      rowHasChanged: (r1, r2) => r1 !== r2
    });
    return ds.cloneWithRows(array);
  }

  _renderRow = (rowData, index = 0) => {
    let height = this.props.style.height;
    let width = this.props.style.width;
    let row = this.props.row || 4;
    let cell = this.props.cell || 4;
    let display = rowData.display;

    // console.log(`width/height/row/cel:::::${width / row}--${height / cell}--${row}--${cell}`)
    return (
      <TouchableOpacity
        key={index}
        activeOpacity={0.5}
        style={[
          {
            width: Number(width) / row,
            height: Number(height) / cell
          },
          styles.item
        ]}
        onPress={() => {
          this.props.onPress(rowData.value);
        }}
      >
        {typeof display === "string" || typeof display === "number"
          ? <Text style={styles.number}>
              {display.toString()}
            </Text>
          : <ExIcon
              onPress={() => {
                this.props.onPress(rowData.value);
              }}
              name={display.name || ""}
              size={32}
              color={Theme.colors.textBase}
            />}
      </TouchableOpacity>
    );
  };

  render() {
    let datas = this.props.from || [];
    return (
      <View
        style={[
          this.props.style,
          {
            width: Number(this.props.style.width) + 2 * Theme.border.widthSm,
            height: Number(this.props.style.height) + 2 * Theme.border.widthSm
          },
          styles.container
        ]}
      >
        {datas.map((item, index) => {
          return this._renderRow(item, index);
        })}
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flexDirection: "row",
    flexWrap: "wrap",
    borderWidth: Theme.border.widthSm,
    borderColor: Theme.border.color
  } as ViewStyle,

  item: {
    justifyContent: "center",
    alignItems: "center",
    flexDirection: "column",
    borderWidth: Theme.border.widthSm,
    borderColor: Theme.border.color,
    backgroundColor: "white"
  } as ViewStyle,

  number: {
    fontSize: 26,
    color: Theme.colors.textBase
  } as TextStyle
});
