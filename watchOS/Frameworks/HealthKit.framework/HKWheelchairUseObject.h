//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@interface HKWheelchairUseObject : NSObject <NSCopying, NSSecureCoding>
{
    int _wheelchairUse;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) int wheelchairUse; // @synthesize wheelchairUse=_wheelchairUse;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithWheelchairUse:(int)arg1;

@end

