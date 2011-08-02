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
@private
	CFURLProtocolRef cfProt;	// 8 = 0x8
}
+ (BOOL)canInitWithRequest:(id)request;	// 0x31033025
+ (id)canonicalRequestForRequest:(id)request;	// 0x31034e59
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x310a0db1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x310a0b85
- (void)_resumeLoading;	// 0x310a0d99
- (void)_suspendLoading;	// 0x310a0d81
- (void)dealloc;	// 0x310a09a5
- (void)finalize;	// 0x310a0969
- (void)startLoading;	// 0x310a0d69
- (void)stopLoading;	// 0x310a0951
@end
