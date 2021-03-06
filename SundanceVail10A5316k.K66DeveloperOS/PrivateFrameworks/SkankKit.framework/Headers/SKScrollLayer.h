/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SKLayer.h"
#import "SkankKit-Structs.h"

@class SKScrollBar, CAScrollLayer;

@interface SKScrollLayer : SKLayer {
	CAScrollLayer *_scrollContent;	// 56 = 0x38
	SKScrollBar *_scrollBarH;	// 60 = 0x3c
	SKScrollBar *_scrollBarV;	// 64 = 0x40
	CGRect _contentRect;	// 68 = 0x44
	CGPoint _origin;	// 84 = 0x54
	CGPoint _mouseDownPoint;	// 92 = 0x5c
	BOOL _enableDrag;	// 100 = 0x64
}
@property(readonly, retain) CAScrollLayer *scrollContent;	// G=0x3281c125; converted property
- (id)init;	// 0x3281c011
- (void)addSublayer:(id)sublayer;	// 0x3281c429
- (CGRect)contentBounds;	// 0x3281c135
- (BOOL)drags;	// 0x3281c55d
- (BOOL)handleEvent:(GSEventRef)event inLayer:(id)layer;	// 0x3281c5a5
// converted property getter: - (id)scrollContent;	// 0x3281c125
- (void)setBounds:(CGRect)bounds;	// 0x3281c1c1
- (void)setEnableDrag:(BOOL)drag;	// 0x3281c56d
- (void)setOrigin:(CGPoint)origin;	// 0x3281c4a1
- (void)setXOrigin:(float)origin;	// 0x3281c53d
- (void)setYOrigin:(float)origin;	// 0x3281c51d
- (void)updateContentSize;	// 0x3281c299
- (CGRect)viewableBounds;	// 0x3281c169
@end

