//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSTextField, NSView, QLOverlayView;
@protocol QLPreviewTextOverlayHostDelegate;

@interface QLPreviewTextOverlayController : NSObject
{
    QLOverlayView *_overlayView;
    NSTextField *_textOverlayField;
    CALayer *_pathOverlayLayer;
    NSView<QLPreviewTextOverlayHostDelegate> *_hostView;
}

@property(retain) NSView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain) NSTextField *textOverlayField; // @synthesize textOverlayField=_textOverlayField;
@property NSView<QLPreviewTextOverlayHostDelegate> *hostView; // @synthesize hostView=_hostView;
- (void)setShowOverlay:(BOOL)arg1;
- (BOOL)hasRoundedCorners;
- (void)updateOverlayFrame;
- (void)removeOverlay;
- (void)createOverlay;
- (void)dealloc;

@end

