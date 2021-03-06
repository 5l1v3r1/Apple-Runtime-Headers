//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EFSQLPreparedStatement, NSDictionary;

@interface EFSQLRow : NSObject
{
    _Bool _namedColumnsInitialized;
    struct sqlite3_stmt *_statement;
    EFSQLPreparedStatement *_preparedStatement;
    NSDictionary *_columns;
    unsigned long long _columnCount;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long columnCount; // @synthesize columnCount=_columnCount;
@property(nonatomic) _Bool namedColumnsInitialized; // @synthesize namedColumnsInitialized=_namedColumnsInitialized;
@property(readonly, nonatomic) NSDictionary *columns; // @synthesize columns=_columns;
@property(retain, nonatomic) EFSQLPreparedStatement *preparedStatement; // @synthesize preparedStatement=_preparedStatement;
@property(readonly, nonatomic) struct sqlite3_stmt *statement; // @synthesize statement=_statement;
- (id)_queryString;
- (id)debugDescription;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)columnNames;
- (_Bool)columnExistsWithName:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (_Bool)columnExistsAtIndex:(unsigned long long)arg1;
- (id)initWithPreparedStatement:(id)arg1;
- (id)initWithSQLiteStatement:(struct sqlite3_stmt *)arg1;
- (id)initWithColumns:(id)arg1;

@end

