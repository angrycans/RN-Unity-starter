//
//  NavigateBridge.m
//  RNUnityStarter
//
//  Created by angrycans on 2017/7/19.
//  Copyright © 2017年 Facebook. All rights reserved.
//
#import "NativeBridge.h"
#import "UnityAppController.h"
@implementation NativeBridge
RCT_EXPORT_MODULE();
RCT_EXPORT_METHOD(restartUnity)
{
  RCTLogInfo(@"I will restart Unity!");
    
  const char* str = [[NSString stringWithFormat:@""] UTF8String];
    
  //UnitySendMessage("Main Camera", "GetMessage", str);
    UnitySendMessage("Main Camera", "ReloadScene", str);
    
//  dispatch_async(dispatch_get_main_queue(), ^{
//    [[NSNotificationCenter defaultCenter]postNotificationName:@"openUnity" object:nil];
//  });
//    UnityAppController *appController = (UnityAppController *)[[UIApplication sharedApplication] valueForKeyPath:@"delegate.unityAppController"];
//    
//       [appController restartUnity:[UIApplication sharedApplication]];
//    
//    
}

/*
 RN call ios call unity
 */
RCT_EXPORT_METHOD(SendMessageToUnity:(NSString *)params)
{
    //RCTLogInfo(@"SendMessageToUnity=>");
    const char* str = [params cStringUsingEncoding:NSUTF8StringEncoding];
    UnitySendMessage("Main Camera", "NativeMessage", str);
   
}
@end
