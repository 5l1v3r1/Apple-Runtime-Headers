//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/CSLNavigationTransitionAnimator.h>

@class CSLNavigationTransactionAnimatorHelper;

@interface CSLAppSwitcherToAppTransition : CSLNavigationTransitionAnimator
{
    CSLNavigationTransactionAnimatorHelper *_helper;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CSLNavigationTransactionAnimatorHelper *helper; // @synthesize helper=_helper;
- (void)_didComplete;
- (void)completeTransition;
- (void)prepareTransition;
- (void)_begin;
- (id)initWithHelper:(id)arg1;

@end

