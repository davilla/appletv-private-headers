/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRImageProxyProvider : XXUnknownSuperclass <BRProvider> {
	NSArray *_images;	// 4 = 0x4
}
+ (id)providerWithAssets:(id)assets;	// 0x27214d
+ (id)providerWithImageProxies:(id)imageProxies;	// 0x2720b9
- (id)initWithAssets:(id)assets;	// 0x272189
- (id)initWithImageProxies:(id)imageProxies;	// 0x2720f5
- (id)controlFactory;	// 0x27222d
- (id)dataAtIndex:(long)index;	// 0x272251
- (long)dataCount;	// 0x272231
- (void)dealloc;	// 0x2721e1
- (id)hashForDataAtIndex:(long)index;	// 0x2722f1
@end
