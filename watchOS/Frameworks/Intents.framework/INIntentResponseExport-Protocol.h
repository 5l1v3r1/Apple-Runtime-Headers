//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class NSData, _INPBIntentResponse;

@protocol INIntentResponseExport <NSObject, JSExport>
@property(readonly, nonatomic) int code;
@property(readonly, copy, nonatomic) _INPBIntentResponse *backingStore;
- (int)_intentHandlingStatus;
- (void)_setPayloadResponseMessageData:(NSData *)arg1;
- (NSData *)_payloadResponseMessageData;
- (id)init;
@end

