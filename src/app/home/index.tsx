import * as React from 'react';
import { View, Text, StyleSheet, ViewStyle, Dimensions } from 'react-native';
import FontAwesome from 'react-native-vector-icons-iconfont/FontAwesome';
import UnityView from '../../unityview.js'


export default class Home extends React.Component<any, any> {

  constructor(props) {
    super(props);
  }

  componentDidMount() { }

  componentWillUnmount() { }

  render() {
    return (
      <View style={styles.container}>
        <Text>Hello, test-ui!</Text>
        <FontAwesome name="rocket" size={30} color="#900" />
        <UnityView style={{ width: Dimensions.get("window").width, height: 200 }} />

      </View>
    );
  }
}
const styles = StyleSheet.create({
  container: {
    marginTop: 0
  } as ViewStyle,

  content: {},

  push: {
    margin: 10
  }
});
