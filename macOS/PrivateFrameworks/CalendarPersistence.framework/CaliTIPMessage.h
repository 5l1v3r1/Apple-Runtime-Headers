//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/ETagObject-Protocol.h>

@class CalDAVScheduleChangesProperty, ICSDocument, ICSEvent, NSData, NSString;

@interface CaliTIPMessage : NSObject <ETagObject>
{
    NSData *_data;
    CalDAVScheduleChangesProperty *_scheduleChanges;
    NSString *_eTag;
    NSString *_filename;
    ICSDocument *_document;
    ICSEvent *_event;
    BOOL _localImport;
}

- (void).cxx_destruct;
@property BOOL localImport; // @synthesize localImport=_localImport;
- (id)eTag;
- (id)serverFilename;
@property(readonly, copy) NSString *description;
- (long long)compare:(id)arg1;
- (id)occurrences;
- (id)allOccurrences;
- (id)masterEvent;
- (id)event;
- (id)calendar;
- (id)document;
- (id)filename;
- (id)scheduleChanges;
- (id)data;
- (id)initWithData:(id)arg1 filename:(id)arg2 eTag:(id)arg3 scheduleChanges:(id)arg4;
- (id)initWithData:(id)arg1 filename:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

