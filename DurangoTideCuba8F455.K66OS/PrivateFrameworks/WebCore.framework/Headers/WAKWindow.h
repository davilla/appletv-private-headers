/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "WAKResponder.h"

@class CALayer;

@interface WAKWindow : WAKResponder {
@private
	WKWindow *_wkWindow;	// 4 = 0x4
	CALayer *_hostLayer;	// 8 = 0x8
	TileCache *_tileCache;	// 12 = 0xc
	CGRect _cachedVisibleRect;	// 16 = 0x10
	CALayer *_rootLayer;	// 32 = 0x20
}
@property(assign) CGSize availableScreenSize;	// G=0x31719ce5; S=0x31603a79; converted property
@property(retain) id contentView;	// G=0x31604d61; S=0x316230fd; converted property
@property(readonly, retain) CALayer *hostLayer;	// G=0x315b1909; converted property
@property(retain) CALayer *rootLayer;	// G=0x31b1d4cd; S=0x31b1d4bd; converted property
@property(assign) float screenScale;	// G=0x315f51d1; S=0x31603a9d; converted property
@property(assign) CGSize screenSize;	// G=0x31719b11; S=0x31603a55; converted property
@property(retain) id tileMinificationFilter;	// G=0x31b1d755; S=0x315f4e85; converted property
@property(assign) BOOL tilesOpaque;	// G=0x31b1d775; S=0x3161a8b9; converted property
@property(assign) int tilingDirection;	// G=0x31b1d715; S=0x31736185; converted property
@property(assign) int tilingMode;	// G=0x31b1d735; S=0x31646b69; converted property
@property(assign) BOOL useOrientationDependentFontAntialiasing;	// G=0x31605239; S=0x31603389; converted property
+ (id)_wrapperForWindowRef:(WKWindow *)windowRef;	// 0x315f4941
+ (BOOL)hasLandscapeOrientation;	// 0x31605251
+ (void)setOrientationProvider:(id)provider;	// 0x3160337d
- (id)initWithFrame:(CGRect)frame;	// 0x3162309d
- (id)initWithLayer:(id)layer;	// 0x315b1249
- (id)_newFirstResponderAfterResigning;	// 0x31743c8d
- (WKWindow *)_windowRef;	// 0x315f4765
// converted property getter: - (CGSize)availableScreenSize;	// 0x31719ce5
- (void)close;	// 0x31b1d82d
// converted property getter: - (id)contentView;	// 0x31604d61
- (CGPoint)convertBaseToScreen:(CGPoint)screen;	// 0x3178c529
- (CGPoint)convertScreenToBase:(CGPoint)base;	// 0x31b1d4b5
- (void)dealloc;	// 0x31b1d845
- (id)description;	// 0x31b1d5c9
- (void)didRotate;	// 0x31b1d4dd
- (id)firstResponder;	// 0x316c007d
- (CGRect)frame;	// 0x31731c51
- (BOOL)hasPendingDraw;	// 0x31b1d6f5
// converted property getter: - (id)hostLayer;	// 0x315b1909
- (void)hostLayerSizeChanged;	// 0x3161cf89
- (BOOL)isKeyWindow;	// 0x315f4a61
- (int)keyViewSelectionDirection;	// 0x31730819
- (void)layoutTiles;	// 0x3164f49d
- (void)layoutTilesNow;	// 0x31603dc1
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x31b1d7b1
- (BOOL)makeFirstResponder:(id)responder;	// 0x31743d25
- (void)makeKeyWindow;	// 0x31b1d50d
- (id)recursiveDescription;	// 0x31b1d521
- (void)removeAllNonVisibleTiles;	// 0x316d1e59
- (void)removeAllTiles;	// 0x3173a811
// converted property getter: - (id)rootLayer;	// 0x31b1d4cd
// converted property getter: - (float)screenScale;	// 0x315f51d1
// converted property getter: - (CGSize)screenSize;	// 0x31719b11
- (void)sendEvent:(id)event;	// 0x317762e5
- (void)sendEvent:(id)event contentChange:(int *)change;	// 0x317761ed
// converted property setter: - (void)setAvailableScreenSize:(CGSize)size;	// 0x31603a79
// converted property setter: - (void)setContentView:(id)view;	// 0x316230fd
- (void)setFrame:(CGRect)frame display:(BOOL)display;	// 0x31b1d7f5
- (void)setNeedsDisplay;	// 0x31b1d795
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x316027b9
// converted property setter: - (void)setRootLayer:(id)layer;	// 0x31b1d4bd
// converted property setter: - (void)setScreenScale:(float)scale;	// 0x31603a9d
// converted property setter: - (void)setScreenSize:(CGSize)size;	// 0x31603a55
// converted property setter: - (void)setTileMinificationFilter:(id)filter;	// 0x315f4e85
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x3161a8b9
// converted property setter: - (void)setTilingDirection:(int)direction;	// 0x31736185
// converted property setter: - (void)setTilingMode:(int)mode;	// 0x31646b69
// converted property setter: - (void)setUseOrientationDependentFontAntialiasing:(BOOL)antialiasing;	// 0x31603389
// converted property getter: - (id)tileMinificationFilter;	// 0x31b1d755
// converted property getter: - (BOOL)tilesOpaque;	// 0x31b1d775
// converted property getter: - (int)tilingDirection;	// 0x31b1d715
// converted property getter: - (int)tilingMode;	// 0x31b1d735
// converted property getter: - (BOOL)useOrientationDependentFontAntialiasing;	// 0x31605239
- (CGRect)visibleRect;	// 0x31650681
- (void)willRotate;	// 0x31b1d58d
@end

