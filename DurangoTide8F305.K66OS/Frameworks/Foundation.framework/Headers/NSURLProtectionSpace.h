/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSURLProtectionSpaceInternal;

@interface NSURLProtectionSpace : NSObject <NSCopying> {
@private
	NSURLProtectionSpaceInternal *_internal;	// 4 = 0x4
}
- (id)init;	// 0x327e540d
- (id)initWithHost:(id)host port:(int)port protocol:(id)protocol realm:(id)realm authenticationMethod:(id)method;	// 0x327738ad
- (id)initWithProxyHost:(id)proxyHost port:(int)port type:(id)type realm:(id)realm authenticationMethod:(id)method;	// 0x327e5425
- (CFURLProtectionSpaceRef)_cfurlprtotectionspace;	// 0x327e53e9
- (id)_initWithCFURLProtectionSpace:(CFURLProtectionSpaceRef)cfurlprotectionSpace;	// 0x32773681
- (id)_internalInit;	// 0x327736b5
- (id)authenticationMethod;	// 0x327737c1
- (id)copyWithZone:(NSZone *)zone;	// 0x327e53f9
- (void)dealloc;	// 0x32773a59
- (id)distinguishedNames;	// 0x327e5581
- (unsigned)hash;	// 0x327e5509
- (id)host;	// 0x3277382d
- (BOOL)isEqual:(id)equal;	// 0x327e5521
- (BOOL)isProxy;	// 0x3277372d
- (int)port;	// 0x32773861
- (id)protocol;	// 0x32773745
- (id)proxyType;	// 0x327e55b1
- (id)realm;	// 0x32773879
- (BOOL)receivesCredentialSecurely;	// 0x327e54f1
- (SecTrust *)serverTrust;	// 0x327e5599
@end

