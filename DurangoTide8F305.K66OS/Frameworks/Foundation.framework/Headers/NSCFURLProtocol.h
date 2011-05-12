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
+ (BOOL)canInitWithRequest:(id)request;	// 0x32771025
+ (id)canonicalRequestForRequest:(id)request;	// 0x32772e59
+ (BOOL)requestIsCacheEquivalent:(id)equivalent toRequest:(id)request;	// 0x327dedb1
- (id)initWithRequest:(id)request cachedResponse:(id)response client:(id)client;	// 0x327deb85
- (void)_resumeLoading;	// 0x327ded99
- (void)_suspendLoading;	// 0x327ded81
- (void)dealloc;	// 0x327de9a5
- (void)finalize;	// 0x327de969
- (void)startLoading;	// 0x327ded69
- (void)stopLoading;	// 0x327de951
@end

