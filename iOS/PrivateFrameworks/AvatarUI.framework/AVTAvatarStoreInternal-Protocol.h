//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AvatarUI/AVTAvatarStore-Protocol.h>
#import <AvatarUI/AVTStickerBackend-Protocol.h>

@class AVTAvatarRecord, AVTMemoji, NSString;

@protocol AVTAvatarStoreInternal <AVTAvatarStore, AVTStickerBackend>
+ (unsigned long long)maximumNumberOfFetchableAvatars;
+ (unsigned long long)maximumNumberOfSavableAvatars;
- (void)duplicateAvatar:(AVTAvatarRecord *)arg1 completionBlock:(void (^)(_Bool, id <AVTAvatarRecord>, NSError *))arg2;
- (void)deleteAvatarWithIdentifier:(NSString *)arg1 completionBlock:(void (^)(_Bool, NSError *))arg2;
- (void)saveAvatarRecord:(AVTAvatarRecord *)arg1 thumbnailAvatar:(AVTMemoji *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3 thumbnailGenerationCompletionBlock:(void (^)(_Bool, NSError *))arg4;
@end

