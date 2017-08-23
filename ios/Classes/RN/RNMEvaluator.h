//
//  RNMEvaluator.h
//  Unity-iPhone
//
//  Created by angrycans on 2017/8/23.
//
//

#ifndef RNMEvaluator_h
#define RNMEvaluator_h

#import "RCTBridgeModule.h"

@interface RNMEvaluator : NSObject <RCTBridgeModule>

typedef void (^EvaluatorCallback)(NSString* error, id returnValue);

+(void)callSyncFunction:(RCTBridge*)bridge name:(NSString *)name args:(NSArray *)args cb:(EvaluatorCallback)cb;
+(void)callAsyncFunction:(RCTBridge*)bridge name:(NSString *)name args:(NSArray *)args cb:(EvaluatorCallback)cb;

@end

#endif /* RNMEvaluator_h */
