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
	WAKWindow *_wakWindow;	// 84 = 0x54
	int _inGestureType;	// 88 = 0x58
	int _tilingArea;	// 92 = 0x5c
	BOOL _didFirstTileLayout;	// 96 = 0x60
	BOOL _layoutTilesInMainThread;	// 97 = 0x61
	BOOL _tilingModeIsLocked;	// 98 = 0x62
	BOOL _allowsPaintingAndScriptsWhilePanning;	// 99 = 0x63
}
@property(assign) BOOL allowsPaintingAndScriptsWhilePanning;	// G=0x304e84c5; S=0x304e84d5; converted property
@property(assign) BOOL drawsGrid;	// G=0x304e8589; S=0x304e8585; converted property
@property(assign) BOOL keepsZoomedOutTiles;	// G=0x304e85f5; S=0x302cb911; converted property
@property(assign) BOOL layoutTilesInMainThread;	// G=0x304e8659; S=0x3034aff5; converted property
@property(assign) BOOL logsTilingChanges;	// G=0x304e859d; S=0x304e8599; converted property
@property(assign) unsigned maxTileCount;	// G=0x304e858d; S=0x3029a389; converted property
@property(assign) BOOL tileDrawingEnabled;	// G=0x304e85cd; S=0x304e85a1; converted property
@property(assign) CGSize tileSize;	// G=0x304e8579; S=0x3029a385; converted property
@property(assign) BOOL tilesOpaque;	// G=0x304e85d1; S=0x3029a651; converted property
@property(assign) int tilingArea;	// G=0x304e8481; S=0x302cbbc1; converted property
@property(assign, getter=isTilingEnabled) BOOL tilingEnabled;	// G=0x304e8595; S=0x3029a38d; converted property
@property(readonly, retain) WAKWindow *wakWindow;	// G=0x304e8669; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x302984c5
- (CGSize)_adjustAvailableScreenSize:(id)size;	// 0x30298ae9
- (CGSize)_adjustScreenSize:(id)size;	// 0x30298a4d
- (void)_didScroll;	// 0x3036c63d
- (void)_screenChanged:(id)changed;	// 0x304e83ed
- (void)_updateForScreen:(id)screen;	// 0x30298935
- (unsigned)adjustedMaxTileCount;	// 0x304e8591
// converted property getter: - (BOOL)allowsPaintingAndScriptsWhilePanning;	// 0x304e84c5
- (void)dealloc;	// 0x30373999
// converted property getter: - (BOOL)drawsGrid;	// 0x304e8589
- (void)dumpTiles;	// 0x304e8639
// converted property getter: - (BOOL)isTilingEnabled;	// 0x304e8595
// converted property getter: - (BOOL)keepsZoomedOutTiles;	// 0x304e85f5
- (void)layoutSubviews;	// 0x3029cbe9
// converted property getter: - (BOOL)layoutTilesInMainThread;	// 0x304e8659
- (void)layoutTilesNow;	// 0x302d145d
- (void)layoutTilesNowForRect:(CGRect)rect;	// 0x304e83ad
- (void)layoutTilesNowOnWebThread;	// 0x304e838d
- (void)lockTilingMode;	// 0x304e8491
// converted property getter: - (BOOL)logsTilingChanges;	// 0x304e859d
// converted property getter: - (unsigned)maxTileCount;	// 0x304e858d
- (void)removeAllNonVisibleTiles;	// 0x302d1e81
- (void)removeAllTiles;	// 0x302cbc75
- (void)removeForegroundTiles;	// 0x304e8619
// converted property setter: - (void)setAllowsPaintingAndScriptsWhilePanning:(BOOL)panning;	// 0x304e84d5
// converted property setter: - (void)setDrawsGrid:(BOOL)grid;	// 0x304e8585
- (void)setInGesture:(int)gesture;	// 0x3036f47d
// converted property setter: - (void)setKeepsZoomedOutTiles:(BOOL)tiles;	// 0x302cb911
// converted property setter: - (void)setLayoutTilesInMainThread:(BOOL)mainThread;	// 0x3034aff5
// converted property setter: - (void)setLogsTilingChanges:(BOOL)changes;	// 0x304e8599
// converted property setter: - (void)setMaxTileCount:(unsigned)count;	// 0x3029a389
- (void)setNeedsDisplay;	// 0x3029c4b1
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x304e8501
- (void)setNeedsLayout;	// 0x302988ad
// converted property setter: - (void)setTileDrawingEnabled:(BOOL)enabled;	// 0x304e85a1
// converted property setter: - (void)setTileSize:(CGSize)size;	// 0x3029a385
// converted property setter: - (void)setTilesOpaque:(BOOL)opaque;	// 0x3029a651
// converted property setter: - (void)setTilingArea:(int)area;	// 0x302cbbc1
// converted property setter: - (void)setTilingEnabled:(BOOL)enabled;	// 0x3029a38d
- (void)setTransform:(CGAffineTransform)transform;	// 0x304e8531
- (void)setWAKWindow:(id)window;	// 0x304e831d
// converted property getter: - (BOOL)tileDrawingEnabled;	// 0x304e85cd
// converted property getter: - (CGSize)tileSize;	// 0x304e8579
// converted property getter: - (BOOL)tilesOpaque;	// 0x304e85d1
// converted property getter: - (int)tilingArea;	// 0x304e8481
- (void)unlockTilingMode;	// 0x304e84a5
- (void)updateTilingMode;	// 0x302cbbf9
- (CGRect)visibleRect;	// 0x304e8359
// converted property getter: - (id)wakWindow;	// 0x304e8669
- (void)willMoveToWindow:(id)window;	// 0x3029c6f1
- (WKWindow *)wkWindow;	// 0x30298bc1
@end
