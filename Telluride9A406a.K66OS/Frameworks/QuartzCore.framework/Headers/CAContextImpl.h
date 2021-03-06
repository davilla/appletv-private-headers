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
@property(assign) CGColorSpaceRef colorSpace;	// G=0x33f14a39; S=0x33f14c05; converted property
@property(retain) id layer;	// G=0x33e5a509; S=0x33e87299; converted property
@property(assign) float level;	// G=0x33f14a4d; S=0x33e87239; converted property
- (id)initRemoteWithOptions:(id)options;	// 0x33e86c2d
- (id)initWithOptions:(id)options localContext:(bool)context;	// 0x33e86c75
// converted property getter: - (CGColorSpaceRef)colorSpace;	// 0x33f14a39
- (unsigned)contextId;	// 0x33e87695
- (unsigned)createFencePort;	// 0x33f14bb9
- (unsigned)createSlot;	// 0x33f14b51
- (void)dealloc;	// 0x33eae949
- (void)deleteSlot:(unsigned)slot;	// 0x33f14b3d
- (void)invalidate;	// 0x33f14c19
// converted property getter: - (id)layer;	// 0x33e5a509
// converted property getter: - (float)level;	// 0x33f14a4d
- (id)options;	// 0x33f14a61
- (void)orderAbove:(unsigned)above;	// 0x33e87fc5
- (void)orderBelow:(unsigned)below;	// 0x33f14bed
- (Context *)renderContext;	// 0x33f14a91
// converted property setter: - (void)setColorSpace:(CGColorSpaceRef)space;	// 0x33f14c05
- (void)setFence:(unsigned)fence count:(unsigned)count;	// 0x33f14b65
- (void)setFencePort:(unsigned)port;	// 0x33f14b91
// converted property setter: - (void)setLayer:(id)layer;	// 0x33e87299
// converted property setter: - (void)setLevel:(float)level;	// 0x33e87239
- (void)setObject:(id)object forSlot:(unsigned)slot;	// 0x33f14b29
- (BOOL)valid;	// 0x33f14a75
@end

