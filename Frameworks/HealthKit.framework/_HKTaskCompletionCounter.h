/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface _HKTaskCompletionCounter : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completion;

    NSObject<OS_dispatch_queue> *_queue;
    int _target;
}

+ (id)counterWithTargetCount:(int)arg1 queue:(id)arg2 completion:(id)arg3;

- (void).cxx_destruct;
- (void)_invalidate;
- (void)decrementCounter;

@end
