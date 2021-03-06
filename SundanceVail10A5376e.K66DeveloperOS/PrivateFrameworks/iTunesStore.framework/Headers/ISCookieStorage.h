/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class ISSQLiteDatabase, NSURL;
@protocol OS_dispatch_queue;

@interface ISCookieStorage : NSObject {
	ISSQLiteDatabase *_db;	// 4 = 0x4
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
	void *_processAssertion;	// 12 = 0xc
	int _processAssertionCount;	// 16 = 0x10
	NSURL *_storageLocation;	// 20 = 0x14
}
@property(readonly, assign) NSURL *storageLocation;	// G=0x307887e5; 
+ (BOOL)_setupCookieDatabase:(id)database;	// 0x30789151
+ (id)sharedInstance;	// 0x30789351
+ (id)sharedStorage;	// 0x30787a09
- (id)init;	// 0x30787789
- (id)initWithStorageLocation:(id)storageLocation;	// 0x3078779d
- (void)_beginProcessAssertion;	// 0x3078881d
- (void)_bindInsertStatement:(sqlite3_stmt *)statement forCookie:(id)cookie userIdentifier:(id)identifier;	// 0x30788901
- (BOOL)_bindStatement:(sqlite3_stmt *)statement withValues:(id)values;	// 0x30788a81
- (id)_columnNameForCookieProperty:(id)cookieProperty;	// 0x30788c35
- (id)_copyPrivateCookiesForURL:(id)url userIdentifier:(id)identifier;	// 0x30788d21
- (void)_endProcessAssertion;	// 0x30789065
- (id)cookieHeadersForURL:(id)url userIdentifier:(id)identifier;	// 0x30787c09
- (void)dealloc;	// 0x3078797d
- (void)removeAllCookies;	// 0x307882a5
- (void)removeCookiesWithProperties:(id)properties;	// 0x3078832d
- (void)setCookies:(id)cookies forUserIdentifier:(id)userIdentifier;	// 0x30787ebd
- (void)setCookiesForHTTPResponse:(id)httpresponse userIdentifier:(id)identifier;	// 0x30788099
// declared property getter: - (id)storageLocation;	// 0x307887e5
- (void)synchronizeCookies;	// 0x30789361
@end

