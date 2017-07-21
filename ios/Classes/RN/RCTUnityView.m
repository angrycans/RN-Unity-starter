//
//  RCTUnityView.m
//  Unity-iPhone
//
//  Created by angrycans on 2017/7/20.
//
//

#import "RCTUnityView.h"

@implementation RCTUnityView

-(id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self){
        UnityAppController* unityAppController=(UnityAppController*)[[UIApplication sharedApplication] valueForKeyPath:@"delegate.unityAppController"]; 
   // self.uView = (UIView*)GetAppController().unityView;
        self.uView = (UIView*)unityAppController.unityView;
    }
    return self;
}

-(void)layoutSubviews
{
    [super layoutSubviews];
    [self.uView removeFromSuperview];
    self.uView.frame = self.bounds;
    [self insertSubview:self.uView atIndex:0];
    [self.uView setNeedsLayout];
}  

@end  
