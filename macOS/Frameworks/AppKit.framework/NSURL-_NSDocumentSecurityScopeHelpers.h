//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURL.h>

#import <AppKit/NSPasteboardReading-Protocol.h>
#import <AppKit/NSPasteboardWriting-Protocol.h>

@class NSString;

@interface NSURL (_NSDocumentSecurityScopeHelpers) <NSPasteboardWriting, NSPasteboardReading>
+ (id)_securityScopedURLFromPasteboard:(id)arg1;
+ (id)_convertedFileReferenceURLDataOrNil:(struct __CFData *)arg1;
+ (id)_URLFromPasteboardNSData:(struct __CFData *)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)URLFromPasteboard:(id)arg1;
- (id)_NSDocument_debugDescription;
- (void)_NSDocument_createSecurityScope;
- (long long)_NSDocument_startAccessingKnownSecurityScopedResource;
- (void)_NSDocument_setHasKnownSecurityScope:(BOOL)arg1;
- (BOOL)_urlForNSOpenSavePanelIsMobileDocumentsURL;
- (id)_absoluteStringConvertingFileReferenceURLIfRequired;
- (id)pasteboardPropertyListForType:(id)arg1;
- (unsigned long long)writingOptionsForType:(id)arg1 pasteboard:(id)arg2;
- (id)writableTypesForPasteboard:(id)arg1;
- (BOOL)__isAbsolute;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (void)writeToPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

