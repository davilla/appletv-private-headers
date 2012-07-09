/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRControl;

__attribute__((visibility("hidden")))
@interface BRWindow : XXUnknownSuperclass {
	BRControl *_content;	// 4 = 0x4
	BRControl *_plane;	// 8 = 0x8
	int _level;	// 12 = 0xc
	BOOL _orderedIn;	// 16 = 0x10
	BOOL _opaque;	// 17 = 0x11
}
@property(assign) BOOL acceptsFocus;	// G=0x255825; S=0x255805; converted property
@property(retain) BRControl *content;	// G=0x255635; S=0x25558d; converted property
@property(assign) BOOL isOpaque;	// G=0x255849; S=0x2557c9; converted property
@property(assign) int level;	// G=0x255685; S=0x255645; converted property
@property(readonly, assign, getter=isOrderedIn) BOOL orderedIn;	// G=0x255859; converted property
+ (void)_controlWasFocused:(id)focused;	// 0x25620d
+ (void)_establishRootContext;	// 0x255881
+ (void)_establishRootLayerBounds;	// 0x255c8d
+ (void)adjustToDisplayChange;	// 0x255281
+ (BOOL)dispatchEvent:(id)event;	// 0x25617d
+ (id)focusedControl;	// 0x255871
+ (id)focusedLeafControl;	// 0x2561e1
+ (void)initialize;	// 0x255195
+ (CGRect)interfaceFrame;	// 0x255261
+ (BOOL)makeFocusedControl:(id)control;	// 0x25586d
+ (CGSize)maxBounds;	// 0x25524d
+ (id)rootLayer;	// 0x255fed
+ (void)setMaxBounds:(CGSize)bounds;	// 0x256019
+ (id)window;	// 0x255215
+ (id)windowList;	// 0x256009
- (id)init;	// 0x255451
- (void)_addWindow:(id)window atIndex:(long)index;	// 0x256539
- (id)_controlPlane;	// 0x256259
- (void)_orderWindow:(id)window above:(id)above;	// 0x256495
- (void)_orderWindow:(id)window below:(id)below;	// 0x2563f1
- (void)_orderWindowBack:(id)back;	// 0x25635d
- (void)_orderWindowFront:(id)front;	// 0x2562c9
- (void)_orderWindowOut:(id)anOut;	// 0x256269
- (void)_updateContent;	// 0x2567bd
- (void)_updateRenderedWindows;	// 0x2565ed
// converted property getter: - (BOOL)acceptsFocus;	// 0x255825
// converted property getter: - (id)content;	// 0x255635
- (void)dealloc;	// 0x2554fd
- (BOOL)dispatchEvent:(id)event;	// 0x255869
// converted property getter: - (BOOL)isOpaque;	// 0x255849
// converted property getter: - (BOOL)isOrderedIn;	// 0x255859
// converted property getter: - (int)level;	// 0x255685
- (void)orderAbove:(id)above;	// 0x255785
- (void)orderBack;	// 0x255701
- (void)orderBelow:(id)below;	// 0x255741
- (void)orderFront;	// 0x2556c1
- (void)orderOut;	// 0x255695
// converted property setter: - (void)setAcceptsFocus:(BOOL)focus;	// 0x255805
// converted property setter: - (void)setContent:(id)content;	// 0x25558d
// converted property setter: - (void)setIsOpaque:(BOOL)opaque;	// 0x2557c9
// converted property setter: - (void)setLevel:(int)level;	// 0x255645
@end
