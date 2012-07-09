/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import <CAEAGLLayer.h> // Unknown library


@interface WebGLLayer : CAEAGLLayer {
	GraphicsLayer *m_layerOwner;	// 52 = 0x34
	GraphicsContext3D *m_context;	// 56 = 0x38
}
@property(assign) GraphicsLayer *layerOwner;	// G=0x35da24ad; S=0x35da249d; converted property
- (id)initWithGraphicsContext3D:(GraphicsContext3D *)graphicsContext3D;	// 0x35da2421
- (CGImageRef)copyImageSnapshotWithColorSpace:(CGColorSpaceRef)colorSpace;	// 0x35da245d
- (void)display;	// 0x35da2461
// converted property getter: - (GraphicsLayer *)layerOwner;	// 0x35da24ad
// converted property setter: - (void)setLayerOwner:(GraphicsLayer *)owner;	// 0x35da249d
@end
