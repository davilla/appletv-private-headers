/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ITDBGeniusDatabase : NSObject {
@private
	CPSqliteDatabase *_db;	// 4 = 0x4
	CPSqliteConnection *_dbrc;	// 8 = 0x8
	int _transactionCount;	// 12 = 0xc
	double _connectionFailedTime;	// 16 = 0x10
	unsigned _hasGeniusSchema : 1;	// 24 = 0x18
	unsigned _hasGeniusSchemaCached : 1;	// 24 = 0x18
}
+ (id)fallbackGeniusDatabaseFilePath;	// 0x31bd37d5
+ (id)geniusDatabaseFilePath;	// 0x31bc3a35
+ (id)sharedGeniusDatabase;	// 0x31bc387d
- (id)init;	// 0x31bc38c5
- (CPSqliteStatement *)_cachedStatementForReading:(id)reading;	// 0x31bd3f9d
- (void)_connect;	// 0x31bc396d
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x31bd3c49
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x31bd3799
- (unsigned)_getCountOfResultsInTable:(id)table where:(id)where limit:(unsigned)limit;	// 0x31bc3f29
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x31bd3abd
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x31bd3921
- (BOOL)_hasAnySongs;	// 0x31bc3cc5
- (CPSqliteDatabase *)_loadedDatabaseAtPath:(id)path;	// 0x31bc3bb9
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x31bd3ed5
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where limit:(unsigned)limit sqliteStatement:(CPSqliteStatement *)statement;	// 0x31bd3765
- (BOOL)_schemaHasDefinedTable:(id)table;	// 0x31bc3e89
- (void)beginTransaction;	// 0x31bd3829
- (id)copyGeniusConfigrationDataAndBytes;	// 0x31bd3601
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x31bd355d
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x31bd34f1
- (unsigned)defaultMinTrackCount;	// 0x31bd367d
- (unsigned)defaultTrackCount;	// 0x31bd363d
- (void)endTransaction;	// 0x31bd386d
- (unsigned)geniusConfigurationVersion;	// 0x31bd35c9
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x31bd34ad
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x31bd346d
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x31bd342d
- (BOOL)hasDatabase;	// 0x31bd373d
- (BOOL)hasGeniusCapableiTunes;	// 0x31bc3c05
- (BOOL)hasGeniusDataAvailable;	// 0x31bd36bd
- (BOOL)hasGeniusFeatureEnabled;	// 0x31bc3909
@end

