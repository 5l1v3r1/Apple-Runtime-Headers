//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class SKStarRatingControl, UIAlertAction;

@interface SKStarRatingAlertController : UIAlertController
{
    SKStarRatingControl *_ratingControl;
    UIAlertAction *_submitAction;
    CDUnknownBlockType _completion;
}

+ (id)starRatingAlertController;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (void)_updateButtonState;
- (void)_ratingControlChanged:(id)arg1;
@property(nonatomic) float rating;
- (void)dealloc;
- (void)setupActionsWithBundle:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

