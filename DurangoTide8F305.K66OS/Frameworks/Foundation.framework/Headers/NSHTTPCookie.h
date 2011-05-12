/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSHTTPCookieInternal;

@interface NSHTTPCookie : NSObject {
@private
	NSHTTPCookieInternal *_cookiePrivate;	// 4 = 0x4
}
+ (id)_cf2nsCookies:(CFArrayRef)cookies;	// 0x327464f9
+ (CFArrayRef)_ns2cfCookies:(id)cookies;	// 0x3275fd0d
+ (id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x3275fbc5
+ (id)cookieWithProperties:(id)properties;	// 0x327e034d
+ (id)cookiesWithResponseHeaderFields:(id)responseHeaderFields forURL:(id)url;	// 0x327464c1
+ (id)requestHeaderFieldsWithCookies:(id)cookies;	// 0x3275fcc1
- (id)init;	// 0x327e0335
- (id)initWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x3275fc05
- (id)initWithCoder:(id)coder;	// 0x327e01e1
- (id)initWithProperties:(id)properties;	// 0x327e01c1
- (OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;	// 0x327e01b1
- (int)_compareForHeaderOrder:(id)headerOrder;	// 0x327e03c1
- (BOOL)_isExpired;	// 0x327e04b1
- (id)_key;	// 0x327e02b9
- (id)comment;	// 0x327e0855
- (id)commentURL;	// 0x327e0881
- (void)dealloc;	// 0x3274a925
- (id)description;	// 0x327e04f9
- (id)domain;	// 0x3275fc7d
- (void)encodeWithCoder:(id)coder;	// 0x327e020d
- (id)expiresDate;	// 0x327e07b9
- (unsigned)hash;	// 0x327e0239
- (BOOL)isEqual:(id)equal;	// 0x327e0749
- (BOOL)isHTTPOnly;	// 0x32772f49
- (BOOL)isSecure;	// 0x3275fca9
- (BOOL)isSessionOnly;	// 0x327e03a5
- (id)name;	// 0x3275fc51
- (id)path;	// 0x3275fc25
- (id)portList;	// 0x327e08ad
- (id)properties;	// 0x327e078d
- (id)value;	// 0x327e0829
- (unsigned)version;	// 0x327e038d
@end

