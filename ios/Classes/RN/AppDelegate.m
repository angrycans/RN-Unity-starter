/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import "AppDelegate.h"

#import <React/RCTBundleURLProvider.h>
#import <React/RCTRootView.h>
#import <React/RCTLog.h>

#import "RNMEvaluator.h"


@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
  NSURL *jsCodeLocation;
    RCTBridge* bridge;
  //jsCodeLocation = [[RCTBundleURLProvider sharedSettings] jsBundleURLForBundleRoot:@"index.ios" fallbackResource:nil];

//  jsCodeLocation = [NSURL URLWithString:@"http://172.19.3.17:8081/index.ios.bundle?platform=ios&dev=true"];
//
//  RCTRootView *rootView = [[RCTRootView alloc] initWithBundleURL:jsCodeLocation
//                                                      moduleName:@"RNUnityStarter"
//                                               initialProperties:nil
//                                                   launchOptions:launchOptions];
    
#ifdef DEBUG
    NSLog(@"build version debug");

#if TARGET_IPHONE_SIMULATOR
    // Run from locally running dev server
    //jsCodeLocation = [NSURL URLWithString:@"http://loaclhost:8081/index.ios.bundle?platform=ios&dev=true"];
    bridge = [[RCTBridge alloc] initWithBundleURL:[NSURL URLWithString:@"http://loaclhost:8081/index.ios.bundle?platform=ios&dev=true"]
                                   moduleProvider:nil
                                    launchOptions:nil];
    
#else
    // Run on device with code coming from dev server on PC (change the IP to your PCs IP)
    bridge = [[RCTBridge alloc] initWithBundleURL:[NSURL URLWithString:@"http://172.19.3.17:8081/index.ios.bundle?platform=ios&dev=true"]
                                              moduleProvider:nil
                                               launchOptions:nil];
#endif
    
    
#else
    // For production load from pre-bundled file on disk. To re-generate the static bundle, run
    //
    // $ curl http://localhost:8081/index.ios.bundle -o main.jsbundle
    NSLog(@"build version release");
    jsCodeLocation = [[NSBundle mainBundle] URLForResource:@"main" withExtension:@"jsbundle"];
    bridge = [[RCTBridge alloc] initWithBundleURL:jsCodeLocation
                                   moduleProvider:nil
                                    launchOptions:nil];
#endif
    
    
   
    RCTRootView* rootView = [[RCTRootView alloc] initWithBridge:bridge moduleName:@"RNUnityStarter" initialProperties:nil];
  rootView.backgroundColor = [[UIColor alloc] initWithRed:1.0f green:1.0f blue:1.0f alpha:1];

  self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
  UIViewController *rootViewController = [UIViewController new];
  rootViewController.view = rootView;
  self.window.rootViewController = rootViewController;
    
    _unityAppController = [[UnityAppController alloc]init];//这里初始化unity
    [_unityAppController application:application didFinishLaunchingWithOptions:launchOptions];
    
    //self.window = _unityAppController.window;
  [self.window makeKeyAndVisible];
    NSLog(@"test callSyncFunction");

    [RNMEvaluator callSyncFunction:bridge
                              name:@"console.log"
                              args:@[@2,@2]
                                cb:^(NSString *error, id returnValue) {
                                    if (error)
                                        NSLog(@"Error occured: %@", error);
                                    else
                                        NSLog(@"Function returned: %@", returnValue);
                                }];
  return YES;
}
-(void)applicationWillResignActive:(UIApplication *)application{
    [_unityAppController applicationWillResignActive:application];
}

-(void)applicationDidEnterBackground:(UIApplication *)application{
    [_unityAppController applicationDidEnterBackground:application];
}

-(void)applicationWillEnterForeground:(UIApplication *)application{
    [_unityAppController applicationWillEnterForeground:application];
}

-(void)applicationDidBecomeActive:(UIApplication *)application{
    [_unityAppController applicationDidBecomeActive:application];
}

-(void)applicationWillTerminate:(UIApplication *)application{
    [_unityAppController applicationWillTerminate:application];
}
@end
