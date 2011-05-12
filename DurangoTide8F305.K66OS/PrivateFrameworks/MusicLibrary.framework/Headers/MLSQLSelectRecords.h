/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "MLSQLSelect.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MLSQLSelectRecords : MLSQLSelect {
@private
	XXStruct_T9QubB *_classDesc;	// 48 = 0x30
	NSString *_recordTableID;	// 52 = 0x34
}
@property(readonly, retain) NSString *recordTableID;	// G=0x333c9ead; converted property
+ (unsigned)countOfRecordFromStore:(CPRecordStoreRef)store recordClass:(const XXStruct_T9QubB *)aClass where:(id)where;	// 0x333cc449
+ (id)expressionToken;	// 0x333c9ea1
- (id)initWithRecordClass:(const XXStruct_T9QubB *)recordClass;	// 0x333c9ebd
- (id)initWithRecordClass:(const XXStruct_T9QubB *)recordClass recordTableAlias:(id)alias;	// 0x333cc205
- (void)dealloc;	// 0x333caab5
- (BOOL)performReadFromStore:(CPRecordStoreRef)store records:(const CFArrayRef *)records;	// 0x333cbd75
- (BOOL)performReadFromStore:(CPRecordStoreRef)store soleRecord:(const void **)record requireResults:(BOOL)results;	// 0x333cbdbd
- (BOOL)performWithConnection:(CPSqliteConnection *)connection store:(CPRecordStoreRef)store records:(const CFArrayRef *)records;	// 0x333cc381
- (BOOL)performWithConnection:(CPSqliteConnection *)connection store:(CPRecordStoreRef)store soleRecord:(const void **)record requireResults:(BOOL)results;	// 0x333cc3fd
// converted property getter: - (id)recordTableID;	// 0x333c9ead
@end

