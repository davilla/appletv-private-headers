/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAContext.h"


__attribute__((visibility("hidden")))
@interface CAContextImpl : CAContext {
@private
	Context *_impl;	// 4 = 0x4
}
@property(assign) CGColorSpaceRef colorSpace;	// G=0x3362aa39; S=0x3362ac05; converted property
@property(retain) id layer;	// G=0x33570509; S=0x3359d299; converted property
@property(assign) float level;	// G=0x3362aa4d; S=0x3359d239; converted property
- (id)initRemoteWithOptions:(id)options;	// 0x3359cc2d
- (id)initWithOptions:(id)options localContext:(bool)context;	// 0x3359cc75
// converted property getter: - (CGColorSpaceRef)colorSpace;	// 0x3362aa39
- (unsigned)contextId;	// 0x3359d695
- (unsigned)createFencePort;	// 0x3362abb9
- (unsigned)createSlot;	// 0x3362ab51
- (void)dealloc;	// 0x335c4949
- (void)deleteSlot:(unsigned)slot;	// 0x3362ab3d
- (void)invalidate;	// 0x3362ac19
// converted property getter: - (id)layer;	// 0x33570509
// converted property getter: - (float)level;	// 0x3362aa4d
- (id)options;	// 0x3362aa61
- (void)orderAbove:(unsigned)above;	// 0x3359dfc5
- (void)orderBelow:(unsigned)below;	// 0x3362abed
- (Context *)renderContext;	// 0x3362aa91
// converted property setter: - (void)setColorSpace:(CGColorSpaceRef)space;	// 0x3362ac05
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x3362ab65
- (void)setFencePort:(unsigned)port;	// 0x3362ab91
// converted property setter: - (void)setLayer:(id)layer;	// 0x3359d299
// converted property setter: - (void)setLevel:(float)level;	// 0x3359d239
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x3362ab29
- (BOOL)valid;	// 0x3362aa75
@end

