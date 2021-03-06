/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCoding, NSCopying> {
@private
	NSURLProtectionSpaceInternal *_internal;	// 4 = 0x4
}
- (id)init;	// 0x31aaf399
- (id)initWithCoder:(id)coder;	// 0x31aaf749
- (id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;	// 0x31aaf07d
- (id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;	// 0x31aaf28d
- (CFURLProtectionSpaceRef)_cfurlprtotectionspace;	// 0x31aaf6e9
- (id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;	// 0x31aaf361
- (id)_internalInit;	// 0x31aaf03d
- (id)authenticationMethod;	// 0x31aaf5c1
- (id)copyWithZone:(NSZone *)zone;	// 0x31aaf531
- (void)dealloc;	// 0x31aaf3b1
- (id)distinguishedNames;	// 0x31aaf659
- (void)encodeWithCoder:(id)coder;	// 0x31aaf6f9
- (unsigned)hash;	// 0x31aaf541
- (id)host;	// 0x31aaf469
- (BOOL)isEqual:(id)equal;	// 0x31aaf555
- (BOOL)isProxy;	// 0x31aaf44d
- (int)port;	// 0x31aaf4a5
- (id)protocol;	// 0x31aaf681
- (id)proxyType;	// 0x31aaf4b9
- (id)realm;	// 0x31aaf3f5
- (BOOL)receivesCredentialSecurely;	// 0x31aaf431
- (SecTrust *)serverTrust;	// 0x31aaf66d
@end

