/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSURLRequest, NSLock, NSCachedURLResponse;
@protocol NSURLProtocolClient;

__attribute__((visibility("hidden")))
@interface NSURLProtocolInternal : NSObject {
@private
	id<NSURLProtocolClient> client;	// 4 = 0x4
	NSURLRequest *request;	// 8 = 0x8
	NSCachedURLResponse *cachedResponse;	// 12 = 0xc
	NSLock *mutex;	// 16 = 0x10
}
- (id)init;	// 0x3204a5a5
- (void)dealloc;	// 0x3204b539
@end

