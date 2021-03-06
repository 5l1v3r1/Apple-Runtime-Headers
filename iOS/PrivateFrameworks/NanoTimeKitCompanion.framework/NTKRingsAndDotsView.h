//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIColor;

@interface NTKRingsAndDotsView : UIView <NTKColoringView>
{
    _Bool _hidesOverlapShadow;
    UIColor *_overrideColor;
    NSArray *_ringColors;
    NSMutableArray *_ringsFillFractions;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    double _diameter;
    double _ringWidth;
    double _ringGapWidth;
    double _appearanceAnimationProgress;
    NSArray *_ringViews;
    NSArray *_overlapArcArray;
}

+ (id)emptyFillFractions;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *overlapArcArray; // @synthesize overlapArcArray=_overlapArcArray;
@property(retain, nonatomic) NSArray *ringViews; // @synthesize ringViews=_ringViews;
@property(nonatomic) double appearanceAnimationProgress; // @synthesize appearanceAnimationProgress=_appearanceAnimationProgress;
@property(nonatomic) double ringGapWidth; // @synthesize ringGapWidth=_ringGapWidth;
@property(nonatomic) double ringWidth; // @synthesize ringWidth=_ringWidth;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIColor *secondaryForegroundColor; // @synthesize secondaryForegroundColor=_secondaryForegroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) _Bool hidesOverlapShadow; // @synthesize hidesOverlapShadow=_hidesOverlapShadow;
@property(retain, nonatomic) NSMutableArray *ringsFillFractions; // @synthesize ringsFillFractions=_ringsFillFractions;
@property(retain, nonatomic) NSArray *ringColors; // @synthesize ringColors=_ringColors;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
- (double)radiusForRingAtIndex:(long long)arg1;
- (void)_setDiameter:(double)arg1;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
@property(retain, nonatomic) UIColor *color; // @dynamic color;
- (id)initWithFrame:(struct CGRect)arg1 diameter:(double)arg2 ringWidth:(double)arg3 ringGapWidth:(double)arg4 overlapStrokeWidth:(double)arg5;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

