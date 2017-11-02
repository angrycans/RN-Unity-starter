```
1.react-native init RNUnityStarter
cd RNUnityStarter
rm -rf ios
2.unity create project
RNUnityStarter/unity 
build setting ->player setting ios
Target SDK :Device SDK
Target minimum iOS Version 8.0
build to ios Dir

2.cd ios
http://facebook.github.io/react-native/releases/next/docs/integration-with-existing-apps.html
pod init
podfile add 
 pod 'React', :path => '../node_modules/react-native', :subspecs => [
    'Core',
    'DevSupport', # Include this to enable In-App Devmenu if RN >= 0.43
    'RCTText',
    'RCTNetwork',
    'BatchedBridge',
    'RCTImage',
    'RCTWebSocket', # needed for debugging
    # Add any other subspecs you want to use in your project
  ]
  # Explicitly include Yoga if you are using RN >= 0.42.0
  pod 'yoga', :path => '../node_modules/react-native/ReactCommon/yoga'


pod install

3.xcode add 
/ios/Classes/RN 
/ios/Classes/main.mm
/ios/Classes/UnityAppController.h
/ios/Classes/UnityAppController.mm

Preprocessor Macros  add
DEBUG=1

xcode open Unity-iPhone.xcworkspace

4.cp src index.ios.js to root dir


5.run
change /ios/Classes/AppDelegate.m Ip to your machine' Ip
npm start 
xcode run ios device

or use ios-deploy 
npm run ios

```

```
remote: error: File ios/Libraries/libiPhone-lib.a is 663.56 MB; this exceeds GitHub's file size limit of 100.00 MB
git not add the file
```