/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@class WebSecurityOriginPrivate;
@protocol WebQuotaManager;

@interface WebSecurityOrigin : NSObject {
	WebSecurityOriginPrivate *_private;	// 4 = 0x4
	id<WebQuotaManager> _applicationCacheQuotaManager;	// 8 = 0x8
	id<WebQuotaManager> _databaseQuotaManager;	// 12 = 0xc
}
@property(assign) unsigned long long quota;	// G=0x316ce9e5; S=0x316cea05; converted property
- (id)initWithURL:(id)url;	// 0x316cde89
- (SecurityOrigin *)_core;	// 0x316ce915
- (id)_initWithWebCoreSecurityOrigin:(SecurityOrigin *)webCoreSecurityOrigin;	// 0x3167174d
- (id)applicationCacheQuotaManager;	// 0x316ce925
- (id)databaseIdentifier;	// 0x316ce369
- (id)databaseQuotaManager;	// 0x316ce975
- (void)dealloc;	// 0x31671799
- (id)domain;	// 0x316ce77d
- (void)finalize;	// 0x316ce80d
- (id)host;	// 0x316ce219
- (BOOL)isEqual:(id)equal;	// 0x316ce7a1
- (unsigned short)port;	// 0x316ce78d
- (id)protocol;	// 0x316ce0c9
// converted property getter: - (unsigned long long)quota;	// 0x316ce9e5
// converted property setter: - (void)setQuota:(unsigned long long)quota;	// 0x316cea05
- (id)stringValue;	// 0x316ce621
- (id)toString;	// 0x316ce4c5
- (unsigned long long)usage;	// 0x316ce9c5
@end

