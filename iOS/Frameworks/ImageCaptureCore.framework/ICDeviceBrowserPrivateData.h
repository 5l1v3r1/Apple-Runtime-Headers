//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICDeviceBrowserPrivateData : NSObject
{
    id _delegate;
    _Bool _browsing;
    NSMutableArray *_internalDevices;
}

@property(retain) NSMutableArray *internalDevices; // @synthesize internalDevices=_internalDevices;
@property(getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;
@property id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

@end

