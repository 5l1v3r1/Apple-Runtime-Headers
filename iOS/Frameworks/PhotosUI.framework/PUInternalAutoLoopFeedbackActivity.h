//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXActivity.h>

#import <PhotosUI/PXFeedbackAssetUIViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUInternalAutoLoopFeedbackActivity : PXActivity <PXFeedbackAssetUIViewControllerDelegate>
{
}

+ (long long)activityCategory;
- (void)feedbackAssetUIViewController:(id)arg1 didFinish:(_Bool)arg2;
- (id)activityViewController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)asset;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

