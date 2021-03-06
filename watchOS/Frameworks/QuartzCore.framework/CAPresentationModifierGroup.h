//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAPresentationModifierGroup : NSObject
{
    void *_shmem;
    unsigned int _capacity;
    unsigned int _count;
}

+ (id)groupWithCapacity:(unsigned int)arg1;
- (void)flush;
@property(readonly) unsigned int count;
@property(readonly) unsigned int capacity;
- (struct Shmem *)shmem;
- (void)markWritten:(unsigned long)arg1;
- (void)resetBitMask;
- (unsigned long)nextSlot;
- (void)dealloc;
- (id)initWithCapacity:(unsigned int)arg1;

@end

