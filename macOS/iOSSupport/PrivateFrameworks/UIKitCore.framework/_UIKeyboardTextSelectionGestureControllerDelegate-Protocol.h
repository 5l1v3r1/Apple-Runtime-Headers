//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIKeyboardTaskQueue, UIView, _UIKeyboardTextSelectionController;

@protocol _UIKeyboardTextSelectionGestureControllerDelegate <NSObject>
@property(readonly, nonatomic) _UIKeyboardTextSelectionController *textSelectionController;
@property(readonly, nonatomic) UIKeyboardTaskQueue *taskQueue;

@optional
@property(readonly, nonatomic) double timestampOfLastTouchesEnded;
- (BOOL)shouldAllowTwoFingerSelectionGestureOnView:(UIView *)arg1;
- (void)setTwoFingerTapTimestamp:(double)arg1;
- (BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(struct CGPoint)arg2 toBegin:(BOOL)arg3;
- (void)didEndGesture;
- (void)willBeginGesture;
- (BOOL)hasMarkedText;
- (BOOL)transitionInProgress;
@end

