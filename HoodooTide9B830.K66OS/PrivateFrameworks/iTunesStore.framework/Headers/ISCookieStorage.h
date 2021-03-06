/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import <NSObject.h> // Unknown library

@class ISSQLiteDatabase, NSURL;

@interface ISCookieStorage : NSObject {
@private
	ISSQLiteDatabase *_db;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	void *_processAssertion;	// 12 = 0xc
	int _processAssertionCount;	// 16 = 0x10
	NSURL *_storageLocation;	// 20 = 0x14
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x35557115; 
+ (id)sharedInstance;	// 0x35557fc9
+ (id)sharedStorage;	// 0x35556511
- (id)init;	// 0x35556361
- (id)initWithStorageLocation:(id)storageLocation;	// 0x35556375
- (void)_beginProcessAssertion;	// 0x3555714d
- (void)_bindInsertStatement:(sqlite3_stmt *)statement forCookie:(id)cookie userIdentifier:(id)identifier;	// 0x35557235
- (BOOL)_bindStatement:(sqlite3_stmt *)statement withValues:(id)values;	// 0x355573b1
- (id)_columnNameForCookieProperty:(id)cookieProperty;	// 0x35557559
- (id)_cookieForSelectStatement:(sqlite3_stmt *)selectStatement;	// 0x35557625
- (CFSetRef)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;	// 0x355578c9
- (void)_endProcessAssertion;	// 0x35557ced
- (BOOL)_setupCookieDatabase:(id)database;	// 0x35557ddd
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x35556711
- (void)dealloc;	// 0x35556489
- (void)removeAllCookies;	// 0x35556c39
- (void)removeCookiesWithProperties:(id)properties;	// 0x35556cc1
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x3555684d
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x35556a09
// declared property getter: - (id)storageLocation;	// 0x35557115
- (void)synchronizeCookies;	// 0x35557fd9
@end

