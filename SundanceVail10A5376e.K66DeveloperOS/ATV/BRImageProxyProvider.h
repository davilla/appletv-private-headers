/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRProvider.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRImageProxyProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x28f219
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x28f185
- (id)initWithAssets:(id)assets;	// 0x28f255
- (id)initWithImageProxies:(id)imageProxies;	// 0x28f1c1
- (id)controlFactory;	// 0x28f2f9
- (id)dataAtIndex:(long)index;	// 0x28f31d
- (long)dataCount;	// 0x28f2fd
- (void)dealloc;	// 0x28f2ad
- (id)hashForDataAtIndex:(long)index;	// 0x28f3bd
- (id)imageProxies;	// 0x28f46d
@end

