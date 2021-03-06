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
+ (id)_cf2nsCookies:(CFArrayRef)cookies;	// 0x31aa7581
+ (CFArrayRef)_ns2cfCookies:(id)cookies;	// 0x31aa7679
+ (id)cookieWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x31aa74b9
+ (id)cookieWithProperties:(id)properties;	// 0x31aa7445
+ (id)cookiesWithResponseHeaderFields:(id)responseHeaderFields forURL:(id)url;	// 0x31aa7cbd
+ (id)requestHeaderFieldsWithCookies:(id)cookies;	// 0x31aa7c65
- (id)init;	// 0x31aa7525
- (id)initWithCFHTTPCookie:(OpaqueCFHTTPCookie *)cfhttpcookie;	// 0x31aa7501
- (id)initWithCoder:(id)coder;	// 0x31aa82e9
- (id)initWithProperties:(id)properties;	// 0x31aa748d
- (id)Comment;	// 0x31aa7a4d
- (id)CommentURL;	// 0x31aa7a5d
- (id)Discard;	// 0x31aa7b61
- (id)Domain;	// 0x31aa7a1d
- (id)Expires;	// 0x31aa7a3d
- (id)MaxAge;	// 0x31aa7bc9
- (id)Name;	// 0x31aa79fd
- (id)OriginURL;	// 0x31aa7a6d
- (id)Path;	// 0x31aa7a2d
- (id)Port;	// 0x31aa7b95
- (id)Secure;	// 0x31aa7b2d
- (id)Value;	// 0x31aa7a0d
- (id)Version;	// 0x31aa7aed
- (OpaqueCFHTTPCookie *)_GetInternalCFHTTPCookie;	// 0x31aa7781
- (int)_compareForHeaderOrder:(id)headerOrder;	// 0x31aa7d05
- (BOOL)_isExpired;	// 0x31aa7e95
- (id)_key;	// 0x31aa7e15
- (id)comment;	// 0x31aa7955
- (id)commentURL;	// 0x31aa798d
- (void)dealloc;	// 0x31aa753d
- (id)description;	// 0x31aa7edd
- (id)domain;	// 0x31aa78e5
- (void)encodeWithCoder:(id)coder;	// 0x31aa82b9
- (id)expiresDate;	// 0x31aa77f9
- (unsigned)hash;	// 0x31aa8229
- (BOOL)isEqual:(id)equal;	// 0x31aa81dd
- (BOOL)isHTTPOnly;	// 0x31aa77dd
- (BOOL)isSecure;	// 0x31aa77c1
- (BOOL)isSessionOnly;	// 0x31aa77a5
- (id)name;	// 0x31aa7875
- (id)path;	// 0x31aa791d
- (id)portList;	// 0x31aa79c5
- (id)properties;	// 0x31aa7749
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31b33779
- (id)value;	// 0x31aa78ad
- (unsigned)version;	// 0x31aa7791
@end

