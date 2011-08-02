/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <CALayer.h> // Unknown library


__attribute__((visibility("hidden")))
@interface TileHostLayer : CALayer {
@private
	TileCache *_tileCache;	// 48 = 0x30
}
- (id)initWithTileCache:(TileCache *)tileCache;	// 0x315b1885
- (id)actionForKey:(id)key;	// 0x315b19b1
- (void)renderInContext:(CGContextRef)context;	// 0x3172fc7d
@end

