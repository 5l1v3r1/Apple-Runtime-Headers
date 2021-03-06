//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaMiningKit/CLSSimilarlyStackableItem-Protocol.h>
#import <MediaMiningKit/NSObject-Protocol.h>
#import <MediaMiningKit/PLRegionsClusteringItem-Protocol.h>

@class CLLocation, NSArray, NSData, NSDate, NSDateComponents, NSSet, NSString, VNSceneprint;
@protocol CLSItemScoringContext;

@protocol CLSInvestigationItem <NSObject, PLRegionsClusteringItem, CLSSimilarlyStackableItem>
+ (id <CLSItemScoringContext>)contextForItems:(NSArray *)arg1;
@property(readonly) _Bool clsHasInterestingScenes;
@property(readonly) _Bool clsHasPoorResolution;
@property(readonly) _Bool clsAvoidIfPossibleForKeyItem;
@property(readonly) _Bool clsIsInhabited;
@property(readonly, nonatomic) NSDate *cls_localDate;
@property(readonly, nonatomic) NSDate *cls_universalDate;
@property(readonly, nonatomic) NSDateComponents *cls_localDateComponents;
@property(readonly, nonatomic) VNSceneprint *clsSceneprint;
@property(readonly, nonatomic) NSData *clsDistanceIdentity;
@property(readonly, copy, nonatomic) NSSet *clsSceneClassifications;
@property(readonly, nonatomic) _Bool clsIsInterestingReframe;
@property(readonly, nonatomic) double clsDuration;
@property(readonly, nonatomic) _Bool clsIsNonMemorable;
@property(readonly, nonatomic) _Bool clsHasCustomPlaybackVariation;
@property(readonly, nonatomic) _Bool clsHasInterestingAudioClassification;
@property(readonly, nonatomic) _Bool clsIsInterestingHDR;
@property(readonly, nonatomic) _Bool clsIsInterestingSDOF;
@property(readonly, nonatomic) _Bool clsIsInterestingPanorama;
@property(readonly, nonatomic) _Bool clsIsInterestingLivePhoto;
@property(readonly, nonatomic) _Bool clsIsInterestingVideo;
@property(readonly, nonatomic) _Bool clsIsLongExposure;
@property(readonly, nonatomic) _Bool clsIsLoopOrBounce;
@property(readonly, nonatomic) _Bool isBlurry;
@property(readonly, nonatomic) _Bool clsIsAestheticallyPrettyGood;
@property(readonly, nonatomic) _Bool isVideo;
@property(readonly, nonatomic) _Bool isFavorite;
@property(readonly, nonatomic) _Bool isScreenshotOrScreenRecording;
@property(readonly, nonatomic) _Bool isUtility;
@property(readonly, nonatomic) double clsFaceScore;
@property(readonly, nonatomic) double clsAutoplaySuggestionScore;
@property(readonly, nonatomic) double clsHighlightVisibilityScore;
@property(readonly, nonatomic) double clsAestheticScore;
@property(readonly, nonatomic) double clsSharpnessScore;
@property(readonly, nonatomic) double clsExposureScore;
@property(readonly, nonatomic) double clsContentScore;
@property(readonly, nonatomic) long long clsShareCount;
@property(readonly, nonatomic) long long clsPlayCount;
@property(readonly, nonatomic) long long clsViewCount;
@property(readonly, nonatomic) NSArray *peopleNames;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *clsIdentifier;
@property(readonly, nonatomic) unsigned long long clsPeopleCount;
@property(readonly, nonatomic) NSArray *clsUnprefetchedPeopleNames;
@property(readonly, nonatomic) NSArray *clsPeopleNames;
@property(readonly, nonatomic) CLLocation *clsLocation;
- (double)scoreWithContext:(id <CLSItemScoringContext>)arg1;
- (struct CGImage *)createThumbnailWithResolution:(unsigned long long)arg1 fillMode:(_Bool)arg2 networkAllowed:(_Bool)arg3;
@end

