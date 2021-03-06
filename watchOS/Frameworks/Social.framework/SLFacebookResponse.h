//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSCoding-Protocol.h>

@class NSData, NSDictionary, NSHTTPURLResponse;

@interface SLFacebookResponse : NSObject <NSCoding>
{
    NSData *_responseData;
    NSHTTPURLResponse *_urlResponse;
    id _untypedResponseParameters;
    int _httpErrorCode;
}

- (void).cxx_destruct;
@property(readonly) int httpErrorCode; // @synthesize httpErrorCode=_httpErrorCode;
- (id)failedRequestIDs;
@property(readonly) NSDictionary *responseParameters;
- (id)untypedResponseParameters;
- (_Bool)isBatchResponse;
- (id)checkpointURL;
- (_Bool)hasMissingTokenOrAppID;
- (_Bool)hasBadTokenError;
- (_Bool)hasHTTPStatusOK;
- (_Bool)hasError;
@property(readonly) int APIresponseErrorCode;
- (int)httpStatusCode;
@property(readonly) NSHTTPURLResponse *urlResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseData:(id)arg1 urlResponse:(id)arg2;

@end

