import React, { Component } from 'react';

import { requireNativeComponent } from 'react-native';

class UnityView extends Component<any, any> {

  root: any;
  setNativeProps(props) {
    this.root.setNativeProps(props);
  }
  render() {
    return (
      <UnityViewNative
        {...this.props}
        style={[
          { backgroundColor: 'transparent' },
          this.props.style,
        ]}
        ref={(r) => { this.root = r }}
      />
    );
  }
}

(UnityView as any).propTypes = {

};

const UnityViewNative = requireNativeComponent('RCTUnityView', UnityView as any);

export default UnityView; 