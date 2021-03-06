//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTokenFieldCell.h>

@class NSImage;

@interface CSKTokenFieldCell : NSTokenFieldCell
{
    NSImage *_findUnfocusedIcon;
    NSImage *_findDefaultIcon;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *findDefaultIcon; // @synthesize findDefaultIcon=_findDefaultIcon;
@property(readonly, nonatomic) NSImage *findUnfocusedIcon; // @synthesize findUnfocusedIcon=_findUnfocusedIcon;
- (struct CGRect)_findIconRectFromContainerRect:(struct CGRect)arg1;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)drawingRectForBounds:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)commonInit;

@end

