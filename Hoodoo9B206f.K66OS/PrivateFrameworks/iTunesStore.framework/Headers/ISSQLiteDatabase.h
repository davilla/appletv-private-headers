/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library


@interface ISSQLiteDatabase : NSObject {
	sqlite3 *_db;	// 4 = 0x4
	BOOL _isInTransaction;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 16 = 0x10
}
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x3011fa7d
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x3011f341
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x3011f36d
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x3011f0a5
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x3011fb15
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x3011fb45
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x3011fbfd
- (void)accessDatabaseUsingBlock:(id)block;	// 0x3011f395
- (void)dealloc;	// 0x3011f2c5
- (BOOL)executeSQL:(id)sql;	// 0x3011f441
- (void)performTransactionWithBlock:(id)block;	// 0x3011f63d
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x3011f88d
@end
