/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCoreFrameScrollView.h"
#import "WebCore-Structs.h"
#import "WAKView.h"

@class WAKClipView;

@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
	WAKView *_documentView;	// 40 = 0x28
	WAKClipView *_contentView;	// 44 = 0x2c
	id _delegate;	// 48 = 0x30
	CGPoint _scrollOrigin;	// 52 = 0x34
}
@property(readonly, retain) WAKClipView *contentView;	// G=0x3177fca1; converted property
@property(assign) id delegate;	// G=0x319952e9; S=0x31770201; converted property
@property(retain) WAKView *documentView;	// G=0x317806c1; S=0x317805ed; converted property
@property(assign) BOOL drawsBackground;	// G=0x31f9dacd; S=0x31770211; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x31f9dac5; S=0x31770221; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x31f9dabd; S=0x31770219; converted property
@property(assign) int horizontalScrollingMode;	// G=0x31f9daf1; S=0x31f9dae5; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x319a6089; converted property
@property(assign) int verticalScrollingMode;	// G=0x31f9daf5; S=0x31f9dae9; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x3176fc79
- (id).cxx_construct;	// 0x3176fc71
- (void)_adjustScrollers;	// 0x317c60a5
- (BOOL)_selfHandleEvent:(id)event;	// 0x31f9da7d
- (CGRect)actualDocumentVisibleRect;	// 0x319249dd
// converted property getter: - (id)contentView;	// 0x3177fca1
- (void)dealloc;	// 0x3195bb91
// converted property getter: - (id)delegate;	// 0x319952e9
- (id)description;	// 0x31f9dc11
// converted property getter: - (id)documentView;	// 0x317806c1
- (CGRect)documentVisibleRect;	// 0x317cc7d1
- (void)drawRect:(CGRect)rect;	// 0x317f9609
// converted property getter: - (BOOL)drawsBackground;	// 0x31f9dacd
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x31f9dac5
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x31f9dabd
- (float)horizontalLineScroll;	// 0x31f9dad9
// converted property getter: - (int)horizontalScrollingMode;	// 0x31f9daf1
- (BOOL)inProgrammaticScroll;	// 0x31f9ddc9
- (void)reflectScrolledClipView:(id)view;	// 0x31f9dadd
// converted property getter: - (CGPoint)scrollOrigin;	// 0x319a6089
- (void)scrollPoint:(CGPoint)point;	// 0x319951c1
- (void)scrollWheel:(id)wheel;	// 0x31f9db39
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x317816f5
- (void)setActualScrollPosition:(CGPoint)position;	// 0x319950f9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31770201
// converted property setter: - (void)setDocumentView:(id)view;	// 0x317805ed
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x31770211
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x31770221
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x31770219
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x31f9dae5
- (void)setLineScroll:(float)scroll;	// 0x31770271
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x317cc251
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x31f9dafd
- (void)setScrollingMode:(int)mode;	// 0x31f9daed
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x31781909
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x31f9dae9
- (float)verticalLineScroll;	// 0x31f9dad5
// converted property getter: - (int)verticalScrollingMode;	// 0x31f9daf5
@end

