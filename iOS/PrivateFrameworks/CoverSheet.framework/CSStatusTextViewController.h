//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoverSheet/CSCoverSheetViewControllerBase.h>

@class CSStatusTextView, MCProfileConnection, NSString;
@protocol CSStatusTextViewControllerDelegate;

@interface CSStatusTextViewController : CSCoverSheetViewControllerBase
{
    CSStatusTextView *_view;
    NSString *_overrideFooterText;
    MCProfileConnection *_profileConnection;
    id <CSStatusTextViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CSStatusTextViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *overrideFooterText; // @synthesize overrideFooterText=_overrideFooterText;
- (id)_legalContact;
- (id)_legalString;
- (void)_updateTextForLegal;
- (void)_updateTextForProvisionalEnrollment;
- (void)_updateTextForSupervision;
- (void)_updateTextForDeviceInformation;
- (void)_updateTextForProfiles;
- (void)_updateText;
- (void)_profileStateChangedNotification:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)statusTextView;
- (id)init;

@end

