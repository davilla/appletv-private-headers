/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLProtocol.h"


__attribute__((visibility("hidden")))
@interface NSCFURLProtocol : NSURLProtocol {
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x3467b8b5
+ (id)canonicalRequestForRequest:(id)request;	// 0x3467b995
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x346fc7f5
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x346fc90d
- (void)_resumeLoading;	// 0x346fcd31
- (void)_suspendLoading;	// 0x346fcd1d
- (void)dealloc;	// 0x346fc885
- (void)finalize;	// 0x346fc8cd
- (void)startLoading;	// 0x346fccf5
- (void)stopLoading;	// 0x346fcd09
@end

