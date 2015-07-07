//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface XCEventGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;
    struct __CFRunLoopObserver *_generationObserver;
    unsigned long long _generation;
}

+ (id)sharedGenerator;
@property unsigned long long generation; // @synthesize generation=_generation;
@property(readonly) NSObject<OS_dispatch_queue> *eventQueue; // @synthesize eventQueue=_eventQueue;
- (double)pinchClosedInRect:(struct CGRect)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (double)pinchOpenInRect:(struct CGRect)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (double)_pinchFromStartPoint1:(struct CGPoint)arg1 startPoint2:(struct CGPoint)arg2 toEndPoint1:(struct CGPoint)arg3 endPoint2:(struct CGPoint)arg4 orientation:(long long)arg5 handler:(CDUnknownBlockType)arg6;
- (double)pressAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 liftAtPoint:(struct CGPoint)arg3 velocity:(double)arg4 orientation:(long long)arg5 name:(id)arg6 handler:(CDUnknownBlockType)arg7;
- (double)pressAtPoint:(struct CGPoint)arg1 forDuration:(double)arg2 orientation:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (double)panFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 orientation:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (double)twoFingerTapInRect:(struct CGRect)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (double)doubleTapAtPoint:(struct CGPoint)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (double)tapAtPoint:(struct CGPoint)arg1 orientation:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_startEventSequenceWithSteppingCallback:(CDUnknownBlockType)arg1;
- (void)_scheduleCallback:(CDUnknownBlockType)arg1 afterInterval:(double)arg2;
- (id)init;

@end

