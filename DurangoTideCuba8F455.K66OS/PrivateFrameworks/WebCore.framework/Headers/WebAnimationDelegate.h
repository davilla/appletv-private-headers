/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebAnimationDelegate : NSObject {
@private
	GraphicsLayerCA *m_graphicsLayer;	// 4 = 0x4
}
@property(readonly, assign) GraphicsLayerCA *graphicsLayer;	// G=0x3189a119; converted property
- (void)animationDidStart:(id)animation;	// 0x31714599
// converted property getter: - (GraphicsLayerCA *)graphicsLayer;	// 0x3189a119
- (void)setLayer:(GraphicsLayerCA *)layer;	// 0x316eaba9
@end

