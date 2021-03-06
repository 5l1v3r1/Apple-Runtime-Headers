//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSFetchRequestResult-Protocol.h>
#import <VoiceMemos/UIActivityItemSource-Protocol.h>

@class AVAsset, CLLocation, NSDate, NSString, NSURL;

@protocol RCRecording <NSFetchRequestResult, UIActivityItemSource>
@property(readonly, nonatomic) AVAsset *avAsset;
@property(readonly, nonatomic) BOOL uploaded;
@property(nonatomic) BOOL recordedOnWatch;
@property(readonly, nonatomic) BOOL downloading;
@property(readonly, nonatomic) BOOL evicted;
@property(readonly, nonatomic) BOOL editing;
@property(readonly, nonatomic) BOOL manuallyRenamed;
@property(readonly, nonatomic) BOOL playable;
@property(readonly, nonatomic) BOOL pendingRestore;
@property(readonly, nonatomic) BOOL synced;
@property(readonly, nonatomic) long long iTunesPersistentID;
@property(readonly, copy, nonatomic) NSString *uniqueID;
@property(readonly, copy, nonatomic) NSString *customLabel;
@property(readonly, copy, nonatomic) NSString *titleDisallowingEmptyString;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) CLLocation *location;
@property(readonly, nonatomic) double duration;
@property(readonly, copy, nonatomic) NSURL *URIRepresentation;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *path;
@property(readonly, copy, nonatomic) NSDate *evictionDate;
@property(readonly, copy, nonatomic) NSDate *date;
@property(readonly, nonatomic) BOOL isContentBeingModified;
@end

