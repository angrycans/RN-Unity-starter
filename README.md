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
    'RCTAnimation',
    'RCTImage',
    'RCTWebSocket', # needed for debugging
    # Add any other subspecs you want to use in your project
  ]
pod install

3.xcode add 
RN dir 
change main.mm

4.run
npm start 
npm run ios

```

```
remote: error: File ios/Libraries/libiPhone-lib.a is 663.56 MB; this exceeds GitHub's file size limit of 100.00 MB
git not add the file
```