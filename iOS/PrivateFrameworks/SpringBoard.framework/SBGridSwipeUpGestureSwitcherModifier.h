//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBGestureSwitcherModifier.h>

@interface SBGridSwipeUpGestureSwitcherModifier : SBGestureSwitcherModifier
{
    struct CGPoint _translation;
}

- (void)_applyPrototypeSettings;
- (long long)finalActionForGestureEvent:(id)arg1;
- (id)handleGestureEvent:(id)arg1;
- (struct _NSRange)fullSizeSnapshotsRange;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)contentViewScale;
- (void)didMoveToParentModifier:(id)arg1;

@end

