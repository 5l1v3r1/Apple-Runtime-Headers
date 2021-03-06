//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraUI/NSObject-Protocol.h>

@class CAMCaptureCoordinationInfo, CAMCaptureRequest, CAMStillImageLocalPersistenceResult, CAMStillImagePersistenceCoordinator;

@protocol CAMStillImagePersistenceCoordinatorDelegate <NSObject>
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(CAMCaptureCoordinationInfo *)arg2 request:(CAMCaptureRequest *)arg3;
- (void)stillImagePersistenceCoordinator:(CAMStillImagePersistenceCoordinator *)arg1 requestsRemotePersistenceForLocalPersistenceResult:(CAMStillImageLocalPersistenceResult *)arg2 fullsizeRenderLocalResult:(CAMStillImageLocalPersistenceResult *)arg3 spatialOverCaptureLocalResult:(CAMStillImageLocalPersistenceResult *)arg4 request:(CAMCaptureRequest *)arg5 powerAssertionReason:(unsigned int)arg6;
@end

