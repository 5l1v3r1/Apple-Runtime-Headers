//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableAttributedString.h>

__attribute__((visibility("hidden")))
@interface _NSFullyBakedAXMutableAttributedString : NSMutableAttributedString
{
    NSMutableAttributedString *contents;
}

- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)dealloc;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithAttributedString:(id)arg1;

@end

