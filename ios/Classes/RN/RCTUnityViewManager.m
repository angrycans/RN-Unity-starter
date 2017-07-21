//
//  RCTUnityViewManager.m
//  Unity-iPhone
//
//  Created by angrycans on 2017/7/20.
//
//
#import "RCTUnityViewManager.h"
#import "RCTUIManager.h"
#import "RCTUnityView.h"

@implementation RCTUnityViewManager

RCT_EXPORT_MODULE();
@synthesize bridge = _bridge;

- (UIView *)view
{
    return [[RCTUnityView alloc] init];
}

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}

@end
