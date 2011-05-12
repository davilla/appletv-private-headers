/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class WAKWindow;

@interface UIWebTiledView : UIView {
	WAKWindow *_wakWindow;	// 44 = 0x2c
	int _inGestureType;	// 48 = 0x30
	int _tilingArea;	// 52 = 0x34
	BOOL _didFirstTileLayout;	// 56 = 0x38
	BOOL _layoutTilesInMainThread;	// 57 = 0x39
	BOOL _tilingModeIsLocked;	// 58 = 0x3a
}
@property(assign) BOOL drawsGrid;	// G=0x321c1d1d; S=0x321c1d19; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x321c1d39; S=0x321c1d49; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x321c1d31; S=0x321c1d2d; converted property
@property(assign) unsigned maxTileCount;	// G=0x321c1d21; S=0x32005af5; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x321c1d35; S=0x321c1d8d; converted property
@property(assign) CGSize tileSize;	// G=0x321c1d0d; S=0x32005af1; converted property
@property(assign) BOOL tilesOpaque;	// G=0x321c1d69; S=0x32005d91; converted property
@property(assign) int tilingArea;	// G=0x321c1ced; S=0x3200a289; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x321c1d29; S=0x32005af9; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x321c1d59; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x31ff9435
- (void)_didScroll;	// 0x32080ab9
- (void)_screenChanged:(id)changed;	// 0x321c1e05
- (void)_updateForScreen:(id)screen;	// 0x31ffc851
- (unsigned)adjustedMaxTileCount;	// 0x321c1d25
- (void)dealloc;	// 0x321c1efd
// converted property getter: - (BOOL)drawsGrid;	// 0x321c1d1d
// converted property getter: - (BOOL)isTilingEnabled;	// 0x321c1d29
- (void)layoutSubviews;	// 0x31ffd955
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x321c1d39
- (void)layoutTilesNow;	// 0x32080105
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x321c1fad
- (void)layoutTilesNowOnWebThread;	// 0x321c1e91
- (void)lockTilingMode;	// 0x321c1cfd
// converted property getter: - (BOOL)logsTilingChanges;	// 0x321c1d31
// converted property getter: - (unsigned)maxTileCount;	// 0x321c1d21
- (void)removeAllNonVisibleTiles;	// 0x3207e8a9
- (void)removeAllTiles;	// 0x32080bcd
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x321c1d19
- (void)setInGesture:(int)gesture;	// 0x321c1ddd
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x321c1d49
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x321c1d2d
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x32005af5
- (void)setNeedsDisplay;	// 0x321c1f6d
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x320064e5
- (void)setNeedsLayout;	// 0x31ff9881
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x321c1d8d
- (void)setTileMinificationFilter:(id)filter;	// 0x31ffb265
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x32005af1
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x32005d91
// converted property setter: - (void)setTilingArea:(int)area;	// 0x3200a289
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x32005af9
- (void)setTransform:(CGAffineTransform)transform;	// 0x321c1eb1
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x321c1d35
// converted property getter: - (CGSize)tileSize;	// 0x321c1d0d
// converted property getter: - (BOOL)tilesOpaque;	// 0x321c1d69
// converted property getter: - (int)tilingArea;	// 0x321c1ced
- (void)unlockTilingMode;	// 0x321c1db9
- (void)updateTilingMode;	// 0x3200a2bd
- (CGRect)visibleRect;	// 0x32083981
// converted property getter: - (id)wakWindow;	// 0x321c1d59
- (void)willMoveToWindow:(id)window;	// 0x31ffc825
- (WKWindow *)wkWindow;	// 0x31ff98f9
@end

