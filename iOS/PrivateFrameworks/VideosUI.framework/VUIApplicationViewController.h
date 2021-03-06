//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <VideosUI/TVApplicationControllerDelegate-Protocol.h>
#import <VideosUI/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, TVApplicationController, UINavigationController, VUIBootURLController;

@interface VUIApplicationViewController : UIViewController <TVApplicationControllerDelegate, UIGestureRecognizerDelegate>
{
    TVApplicationController *_applicationController;
    VUIBootURLController *_bootURLController;
    UINavigationController *_navigationController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) VUIBootURLController *bootURLController; // @synthesize bootURLController=_bootURLController;
@property(retain, nonatomic) TVApplicationController *applicationController; // @synthesize applicationController=_applicationController;
- (void)_startApplicationControllerWithBootURL:(id)arg1;
- (id)_initialViewControllerWithAppContext:(id)arg1;
- (void)_exposeObjectsInJSContext:(id)arg1;
- (id)_launchOptions;
- (Class)_applicationControllerClass;
- (void)appController:(id)arg1 didFailWithError:(id)arg2;
- (void)appController:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)viewDidLoad;
- (id)preferredFocusEnvironments;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

