//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriTVUI/SiriTVUITabularDataCellItem.h>

@class NSDictionary;

@interface SiriTVUITabularDataTextCellItem : SiriTVUITabularDataCellItem
{
    _Bool _highlighted;
    NSDictionary *_attributedTexts;
    NSDictionary *_images;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(copy, nonatomic) NSDictionary *images; // @synthesize images=_images;
@property(copy, nonatomic) NSDictionary *attributedTexts; // @synthesize attributedTexts=_attributedTexts;
- (id)initWithAttributedTexts:(id)arg1;
- (id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(struct CGSize)arg3;
- (id)initWithAttributedTexts:(id)arg1 images:(id)arg2 imageSize:(struct CGSize)arg3 highlighted:(_Bool)arg4;
- (id)init;

@end

