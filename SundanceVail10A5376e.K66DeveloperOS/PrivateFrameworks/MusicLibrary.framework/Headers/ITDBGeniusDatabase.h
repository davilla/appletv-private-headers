/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "MusicLibrary-Structs.h"

@class ML3MusicLibrary, ML3SqliteDatabase;

@interface ITDBGeniusDatabase : NSObject {
	ML3MusicLibrary *_musicLibrary;	// 4 = 0x4
	ML3SqliteDatabase *_geniusDB;	// 8 = 0x8
	double _connectionFailedTime;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 20 = 0x14
	BOOL _isInTransaction;	// 24 = 0x18
}
@property(assign, nonatomic) BOOL isInTransaction;	// G=0x3482bdcd; S=0x3482bddd; @synthesize=_isInTransaction
+ (id)sharedGeniusDatabase;	// 0x348218a1
- (id)init;	// 0x348218f9
- (void).cxx_destruct;	// 0x3482bded
- (void)_connect;	// 0x34821af5
- (BOOL)_copyBlobData:(id *)data blobAllocType:(int)type table:(id)table blobColumn:(id)column where:(id)where;	// 0x3482b295
- (id)_copyBlobDataAndBytesInTable:(id)table blobColumn:(id)column where:(id)where;	// 0x3482b719
- (unsigned)_getInt32ValueInTable:(id)table column:(id)column;	// 0x3482abc5
- (unsigned long long)_getInt64ValueInTable:(id)table column:(id)column where:(id)where limit:(unsigned)limit;	// 0x3482adf9
- (BOOL)_hasAnySongs;	// 0x3482ba39
- (unsigned)_hasRowsInTable:(id)table;	// 0x34821e15
- (void)_invalidateDatabase;	// 0x3482ab91
- (BOOL)_readBlobForRowID:(unsigned long long)rowID intoData:(id)data table:(const char *)table blobColumn:(const char *)column;	// 0x3482b7d9
- (BOOL)_readBlobIntoData:(id)data table:(id)table blobColumn:(id)column where:(id)where;	// 0x3482b771
- (id)copyGeniusConfigrationDataAndBytes;	// 0x3482bbd5
- (id)copyGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x3482bc31
- (id)copyGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID;	// 0x3482bca5
- (id)database;	// 0x34821fa5
- (unsigned)defaultMinTrackCount;	// 0x3482bb75
- (unsigned)defaultTrackCount;	// 0x3482bba5
- (unsigned)geniusConfigurationVersion;	// 0x3482bc0d
- (BOOL)getGeniusConfigrationDataAndBytesIntoData:(id)data;	// 0x3482bd19
- (BOOL)getGeniusMetadataDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x3482bd4d
- (BOOL)getGeniusSimilaritiesDataAndBytesForGlobalID:(unsigned long long)globalID intoData:(id)data;	// 0x3482bd8d
- (BOOL)hasDatabase;	// 0x3482ba09
- (BOOL)hasGeniusDataAvailable;	// 0x3482bb05
- (BOOL)hasGeniusFeatureEnabled;	// 0x34821aa9
// declared property getter: - (BOOL)isInTransaction;	// 0x3482bdcd
// declared property setter: - (void)setIsInTransaction:(BOOL)transaction;	// 0x3482bddd
@end

