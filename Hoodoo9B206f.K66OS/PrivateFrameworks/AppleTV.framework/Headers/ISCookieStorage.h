/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, ISSQLiteDatabase;

__attribute__((visibility("hidden")))
@interface ISCookieStorage : NSObject {
@private
	ISSQLiteDatabase *_db;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	void *_processAssertion;	// 12 = 0xc
	int _processAssertionCount;	// 16 = 0x10
	NSURL *_storageLocation;	// 20 = 0x14
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x368150a5; 
+ (id)sharedInstance;	// 0x36815f59
+ (id)sharedStorage;	// 0x368144a1
- (id)init;	// 0x368142f1
- (id)initWithStorageLocation:(id)storageLocation;	// 0x36814305
- (void)_beginProcessAssertion;	// 0x368150dd
- (void)_bindInsertStatement:(sqlite3_stmt *)statement forCookie:(id)cookie userIdentifier:(id)identifier;	// 0x368151c5
- (BOOL)_bindStatement:(sqlite3_stmt *)statement withValues:(id)values;	// 0x36815341
- (id)_columnNameForCookieProperty:(id)cookieProperty;	// 0x368154e9
- (id)_cookieForSelectStatement:(sqlite3_stmt *)selectStatement;	// 0x368155b5
- (CFSetRef)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;	// 0x36815859
- (void)_endProcessAssertion;	// 0x36815c7d
- (BOOL)_setupCookieDatabase:(id)database;	// 0x36815d6d
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x368146a1
- (void)dealloc;	// 0x36814419
- (void)removeAllCookies;	// 0x36814bc9
- (void)removeCookiesWithProperties:(id)properties;	// 0x36814c51
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x368147dd
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x36814999
// declared property getter: - (id)storageLocation;	// 0x368150a5
- (void)synchronizeCookies;	// 0x36815f69
@end

