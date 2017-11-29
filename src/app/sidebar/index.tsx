import * as React from 'react';

import { Image } from "react-native";
import { Container, Content, Text, List, ListItem } from "native-base";
const routes = ["Home", "Chat", "Profile"];
export default class SideBar extends React.Component<any, any> {
  render() {
    return (
      <Container>
        <Content>

          <Image
            style={{ height: 80, width: 70 }}
            source={{
              uri: "https://github.com/GeekyAnts/NativeBase-KitchenSink/raw/react-navigation/img/logo.png"
            }}
          />
          <List
            dataArray={routes}
            renderRow={data => {
              return (
                <ListItem
                  button
                  onPress={() => this.props.navigation.navigate(data)}>
                  <Text>{data}</Text>
                </ListItem>
              );
            }}
          />
        </Content>
      </Container >
    );
  }
}
