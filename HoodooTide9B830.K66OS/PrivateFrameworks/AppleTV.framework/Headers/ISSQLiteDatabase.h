/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ISSQLiteDatabase : NSObject {
@private
	sqlite3 *_db;	// 4 = 0x4
	BOOL _isInTransaction;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	CFDictionaryRef _statementCache;	// 16 = 0x10
}
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x32b68911
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x32b681d5
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x32b68201
- (id)initWithDatabaseURL:(id)databaseURL;	// 0x32b67f39
- (void)_accessDatabaseUsingBlock:(id)block;	// 0x32b689a9
- (int)_resetAndReopenDatabaseWithPath:(id)path;	// 0x32b689d9
- (sqlite3_stmt *)_statementForSQL:(id)sql cache:(BOOL)cache;	// 0x32b68a91
- (void)accessDatabaseUsingBlock:(id)block;	// 0x32b68229
- (void)dealloc;	// 0x32b68159
- (BOOL)executeSQL:(id)sql;	// 0x32b682d5
- (void)performTransactionWithBlock:(id)block;	// 0x32b684d1
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x32b68721
@end

