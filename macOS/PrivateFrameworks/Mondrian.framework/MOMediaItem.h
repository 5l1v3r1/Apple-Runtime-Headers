//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Mondrian/NSCopying-Protocol.h>

@class NSDate, NSString, NSURL;

@interface MOMediaItem : NSObject <NSCopying>
{
    NSURL *_url;
    unsigned long long _urlHash;
    NSString *_urlNormaliseString;
    BOOL _isRemote;
    BOOL _reloading;
    BOOL _needsReload;
    NSString *_filename;
    unsigned long long _type;
    double _aspectRatio;
    NSDate *_creationDate;
    NSString *_title;
    struct CGSize _bestResolution;
}

+ (id)thumbnailImagesOperationForMediaItems:(id)arg1 withResolution:(unsigned long long)arg2 mode:(unsigned long long)arg3 placeholder:(BOOL)arg4 colorSpace:(id)arg5 andCompletionHandler:(CDUnknownBlockType)arg6;
+ (id)unsupportedThumbnailWithSize:(struct CGSize)arg1 andColorSpace:(id)arg2 cooked:(char *)arg3;
+ (id)cloudThumbnailWithSize:(struct CGSize)arg1 andColorSpace:(id)arg2 cooked:(char *)arg3;
+ (id)urlForScheme:(id)arg1 host:(id)arg2 pathComponents:(id)arg3;
+ (id)urlForScheme:(id)arg1 host:(id)arg2 path:(id)arg3;
+ (id)operationWithBlock:(CDUnknownBlockType)arg1 cancellationBlock:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) struct CGSize bestResolution; // @synthesize bestResolution=_bestResolution;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (long long)compareForThumbnailOrdering:(id)arg1 resolution:(unsigned long long)arg2 direction:(unsigned long long)arg3 pivot:(id)arg4;
- (BOOL)hasThumbnailImageReadyForResolution:(unsigned long long)arg1;
- (BOOL)hasThumbnailImageReadyForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4;
- (BOOL)hasThumbnailImageReadyForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4 readyImage:(out id *)arg5 readyImageCooked:(out char *)arg6;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 cooked:(char *)arg7;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 colorSpace:(id)arg4 cooked:(char *)arg5;
- (id)thumbnailImageForResolution:(unsigned long long)arg1;
- (id)thumbnailImageOperationForResolution:(unsigned long long)arg1 size:(struct CGSize)arg2 mode:(unsigned long long)arg3 reason:(unsigned long long)arg4 placeholder:(BOOL)arg5 colorSpace:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
- (BOOL)thumbnailIsRoundedForReason:(unsigned long long)arg1;
- (struct CGRect)thumbnailContentRectForReason:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (unsigned long long)bestResolutionForSize:(struct CGSize)arg1 scale:(double)arg2 quality:(double)arg3 align:(BOOL)arg4;
- (BOOL)wantsMondrianMemoryCaches:(unsigned long long)arg1;
- (unsigned long long)thumbnailVersion;
- (void)invalidate:(BOOL)arg1;
- (void)invalidate;
- (BOOL)isRemote;
- (void)_reloadPropertiesIfNeeded;
- (void)_reloadProperties;
@property(readonly, nonatomic) NSString *urlNormaliseString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithURL:(id)arg1;
@property(readonly, retain, nonatomic) NSString *accessibilityRoleDescription; // @dynamic accessibilityRoleDescription;
@property(readonly, retain, nonatomic) NSString *accessibilityLabel; // @dynamic accessibilityLabel;

@end

