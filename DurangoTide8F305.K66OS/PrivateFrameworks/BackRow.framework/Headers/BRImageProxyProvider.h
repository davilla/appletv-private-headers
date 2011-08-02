/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

@interface BRImageProxyProvider : NSObject <BRProvider> {
@private
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x32953f29
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x32953fad
- (id)initWithAssets:(id)assets;	// 0x32953ed9
- (id)initWithImageProxies:(id)imageProxies;	// 0x32953f5d
- (id)controlFactory;	// 0x32953d45
- (id)dataAtIndex:(long)index;	// 0x32953de5
- (long)dataCount;	// 0x32953e71
- (void)dealloc;	// 0x32953e91
- (id)hashForDataAtIndex:(long)index;	// 0x32953d49
@end
