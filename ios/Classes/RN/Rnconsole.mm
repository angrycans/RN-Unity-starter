#import "RNMEvaluator.h"
#import <React/RCTRootView.h>


extern "C" void rnlog(const char *txt){
    
    NSLog(@"rnlog: %@", [NSString stringWithUTF8String:txt]);
    RCTRootView *view = (RCTRootView*)[UIApplication sharedApplication].keyWindow.rootViewController.view;
    if (view == NULL) {
        return ;
    }
    [RNMEvaluator callSyncFunction:view.bridge
                              name:@"console.log"
                              args: @[[NSString stringWithUTF8String:txt]]
                                cb:nil];
    
}
