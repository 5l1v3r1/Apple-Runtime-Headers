//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel, UIVisualEffectView, VUITextLayout, _UIFloatingContentView;

__attribute__((visibility("hidden")))
@interface VUIMenuCollectionViewCell : UICollectionViewCell
{
    _Bool _shouldAppearSelected;
    NSString *_title;
    VUITextLayout *_titleLayout;
    UILabel *_titleLabel;
    _UIFloatingContentView *_floatingView;
    UIVisualEffectView *_backgroundVisualEffectView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *backgroundVisualEffectView; // @synthesize backgroundVisualEffectView=_backgroundVisualEffectView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
@property(nonatomic) _Bool shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_updateTitleTextColor;
- (void)_updateSelectedBackgroundColor;
- (unsigned long long)_floatingViewControlState;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateFloatingViewControlState;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

