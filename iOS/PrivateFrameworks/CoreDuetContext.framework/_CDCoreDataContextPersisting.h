//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, _DKCoreDataStorage;
@protocol OS_dispatch_queue;

@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting>
{
    NSObject<OS_dispatch_queue> *_queue;
    _DKCoreDataStorage *_storage;
    NSCountedSet *_keyPathRegistrationCount;
}

+ (id)persistenceWithStorage:(id)arg1;
+ (id)persistenceWithDirectory:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)loadRegistrations;
- (id)loadValues;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteAllData;
- (void)deleteRegistration:(id)arg1;
- (void)saveRegistration:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)uniqunessPredicateForRegistration:(id)arg1;
- (id)uniquenessPredicateForKeyPath:(id)arg1;
- (_Bool)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(CDUnknownBlockType)arg3;
- (_Bool)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2;
- (_Bool)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(CDUnknownBlockType)arg3;
- (id)getMOC;
- (id)initWithStorage:(id)arg1;

@end

