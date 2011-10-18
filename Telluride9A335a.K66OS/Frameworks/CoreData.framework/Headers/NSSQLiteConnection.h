/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import "NSSQLConnection.h"

@class NSSQLEntity, NSMutableSet, NSString, NSMutableDictionary, NSSQLiteStatement;

__attribute__((visibility("hidden")))
@interface NSSQLiteConnection : NSSQLConnection {
@private
	sqlite3 *_db;	// 28 = 0x1c
	sqlite3_stmt *_vmstatement;	// 32 = 0x20
	int _rowsProcessedCount;	// 36 = 0x24
	unsigned _lastEntityKey;	// 40 = 0x28
	NSSQLEntity *_finalEntity;	// 44 = 0x2c
	NSSQLEntity *_lastEntity;	// 48 = 0x30
	sqlite3_stmt *_fetchPKStatement;	// 52 = 0x34
	sqlite3_stmt *_updatePKStatement;	// 56 = 0x38
	NSSQLiteStatement *_beginStatement;	// 60 = 0x3c
	NSSQLiteStatement *_commitStatement;	// 64 = 0x40
	NSSQLiteStatement *_rollbackStatement;	// 68 = 0x44
	NSMutableSet *_vmCachedStatements;	// 72 = 0x48
	NSMutableDictionary *_pragmaSettings;	// 76 = 0x4c
	CFDictionaryRef _cachedEntityUpdateStatements;	// 80 = 0x50
	double _timeOutOption;	// 84 = 0x54
	void *_extraBuffersForRegisteredFunctions[5];	// 92 = 0x5c
	NSString *_dbPathRegisteredWithBackupd;	// 112 = 0x70
	long long _vacuumTracker;	// 116 = 0x74
	sqliteConnectionFlags _sqliteConnectionFlags;	// 124 = 0x7c
	unsigned long long _debugInode;	// 128 = 0x80
}
+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;	// 0x33186849
+ (const char *)_databaseOpenURLStringForURL:(id)url;	// 0x33187899
+ (BOOL)_destroyPersistentStoreAtURL:(id)url options:(id)options error:(id *)error;	// 0x33186a91
+ (BOOL)_replacePersistentStoreAtURL:(id)url destinationOptions:(id)options withPersistentStoreFromURL:(id)url3 sourceOptions:(id)options4 error:(id *)error;	// 0x331872f1
+ (void)_setDebugFlags:(int)flags;	// 0x33186845
+ (void)initialize;	// 0x330ec5e1
+ (int)readMagicWordFromPath:(const char *)path;	// 0x33187975
- (id)initWithAdapter:(id)adapter;	// 0x330c32ad
- (id)_adapter;	// 0x330c3619
- (void)_bindVariablesWithDeletedRow:(id)deletedRow;	// 0x33186879
- (void)_bindVariablesWithInsertedRow:(id)insertedRow;	// 0x3318c559
- (void)_bindVariablesWithUpdatedRow:(id)updatedRow andOriginalRow:(id)row forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x3318bf79
- (void **)_buffersForRegisteredFunctions;	// 0x330c43fd
- (void)_clearBindVariablesForInsertedRow;	// 0x3318c409
- (void)_clearBindVariablesForUpdateStatement:(id)updateStatement forDeltasMask:(CFBitVectorRef)deltasMask;	// 0x3318bc61
- (void)_clearCachedStatements;	// 0x330e45b9
- (void)_clearOtherStatements;	// 0x330e4691
- (void)_clearTransactionCaches;	// 0x330e442d
- (void)_configureAutoVacuum;	// 0x331897ad
- (void)_configureIntegrityCheck;	// 0x330c4435
- (void)_configurePageSize;	// 0x3318966d
- (void)_configurePragmaOptions:(int)options;	// 0x3318ce85
- (void)_configureSynchronousMode;	// 0x330c440d
- (void)_configureUbiquityMetadataTable;	// 0x330c5225
- (void)_ensureDatabaseOpen;	// 0x330c510d
- (void)_ensureNoFetchInProgress;	// 0x330c51c5
- (void)_ensureNoStatementPrepared;	// 0x330c5169
- (void)_ensureNoTransactionOpen;	// 0x3318e4dd
- (void)_executeSQLString:(id)string;	// 0x330c456d
- (void)_finalizeStatement;	// 0x330c7e69
- (void)_forceDisconnectOnError;	// 0x3318cdf9
- (long long)_getCurrentAutoVacuumValue;	// 0x3318924d
- (BOOL)_hasTableWithName:(id)name;	// 0x3318a419
- (id)_newValueForColumn:(id)column atIndex:(unsigned)index inStatement:(sqlite3_stmt *)statement;	// 0x330c7235
- (void)_performPostSaveTasks;	// 0x331892b1
- (void)_registerExtraFunctions;	// 0x330c4015
- (int)_rowsChangedByLastExecute;	// 0x3318c9b1
- (void)_setupVacuumIfNecessary;	// 0x33189035
- (sqlite3_stmt *)_vmstatement;	// 0x3318684d
- (void)addPeerRangeForPeerID:(id)peerID entityName:(id)name rangeStart:(id)start rangeEnd:(id)end peerRangeStart:(id)start5 peerRangeEnd:(id)end6;	// 0x33188299
- (id)allPeerRanges;	// 0x331879d5
- (void)beginTransaction;	// 0x3318ccf5
- (void)cacheCurrentDBStatementOn:(id)on;	// 0x3318b2a5
- (void)cacheUpdateStatement:(id)statement forEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x3318b949
- (id)cachedUpdateStatementForEntity:(id)entity andDeltasMask:(CFBitVectorRef)mask;	// 0x3318b91d
- (BOOL)canConnect;	// 0x330c3585
- (void)commitTransaction;	// 0x3318cb61
- (void)connect;	// 0x330c3685
- (BOOL)databaseIsEmpty;	// 0x330c9939
- (void)dealloc;	// 0x330e47ed
- (void)deleteCorrelation:(id)correlation;	// 0x33186a15
- (void)deleteRow:(id)row;	// 0x3318b369
- (id)describeResults;	// 0x3318b2f9
- (void)disconnect;	// 0x330e42a5
- (void)endFetch;	// 0x330c7dcd
- (void)endPrimaryKeyGeneration;	// 0x3318a3d5
- (void)execute;	// 0x330c5ec5
- (long long)fetchMaxPrimaryKeyForEntity:(id)entity;	// 0x3318d41d
- (int)fetchResultSet:(void *)set usingFetchPlan:(id)plan;	// 0x330d6e35
- (id)fetchTableCreationSQL;	// 0x3318a58d
- (id)fetchTableNames;	// 0x3318a951
- (id)fetchUbiqiutyKnowledgeVector;	// 0x331889e9
- (void)finalize;	// 0x3318e539
- (long long)generatePrimaryKeysForEntity:(id)entity batch:(unsigned)batch;	// 0x331899e9
- (void)handleCorruptedDB:(id)db;	// 0x3318b1ad
- (BOOL)hasMetadataTable;	// 0x3318a3f5
- (BOOL)hasPrimaryKeyTable;	// 0x331899c5
- (void)insertCorrelation:(id)correlation;	// 0x3318691d
- (void)insertRow:(id)row;	// 0x3318ba1d
- (BOOL)isFetchInProgress;	// 0x330d750d
- (BOOL)isLocalFS;	// 0x3318685d
- (BOOL)isOpen;	// 0x330c3601
- (id)newFetchedArray;	// 0x330c70ed
- (BOOL)performIntegrityCheck;	// 0x3318ac89
- (void)prepareForPrimaryKeyGeneration;	// 0x3318a3e5
- (void)prepareSQLStatement:(id)statement;	// 0x330c5719
- (CFArrayRef)rawIntegerRowsForSQL:(id)sql;	// 0x3318d781
- (void)releaseSQLStatement;	// 0x330c7e29
- (void)resetSQLStatement;	// 0x3318b315
- (void)rollbackTransaction;	// 0x3318c9d1
- (void)setExclusiveLockingMode:(BOOL)mode;	// 0x3318b0a9
- (void)updateCorrelation:(id)correlation;	// 0x33186999
- (void)updateRow:(id)row;	// 0x3318b5e5
- (void)updateUbiquityKnowledgeForPeerWithID:(id)anId andTransactionNumber:(id)number;	// 0x331883d9
- (void)updateUbiquityKnowledgeVector:(id)vector;	// 0x3318863d
- (void)willCreateSchema;	// 0x33189549
@end

