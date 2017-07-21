//
//  NavigateBridge.m
//  RNUnityStarter
//
//  Created by angrycans on 2017/7/19.
//  Copyright © 2017年 Facebook. All rights reserved.
//
#import "NavigateBridge.h"
#import "UnityAppController.h"
@implementation NavigateBridge
RCT_EXPORT_MODULE();
RCT_EXPORT_METHOD(startUnity)
{
  RCTLogInfo(@"I will start Unity!");
  dispatch_async(dispatch_get_main_queue(), ^{
    [[NSNotificationCenter defaultCenter]postNotificationName:@"openUnity" object:nil];
  });
}
@end
