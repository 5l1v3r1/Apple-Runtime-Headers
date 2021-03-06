//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebBookmarks/WebBookmarksXPCConnectionDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_xpc_object, WebBookmarksXPCConnectionDelegate;

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate>
{
    NSObject<OS_xpc_object> *_listenerConnection;
    NSMutableArray *_clientConnections;
    NSMutableDictionary *_messageHandlers;
    id <WebBookmarksXPCConnectionDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) id <WebBookmarksXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)connection:(id)arg1 didCloseWithError:(id)arg2;
- (void)setMessageHandlers:(id)arg1;
- (void)setHandler:(CDUnknownBlockType)arg1 forMessageNamed:(const char *)arg2;
- (void)_handleIncomingConnection:(id)arg1;
- (id)initListenerForMachService:(const char *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

