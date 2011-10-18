/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKView.h"
#import "WebCore-Structs.h"
#import "WebCoreFrameScrollView.h"


@interface WAKScrollView : WAKView <WebCoreFrameScrollView> {
@private
	WAKView *_documentView;	// 68 = 0x44
	id _delegate;	// 72 = 0x48
	CGPoint _scrollOrigin;	// 76 = 0x4c
}
@property(retain) id contentView;	// G=0x3590c6bd; S=0x35f8d749; converted property
@property(assign) id delegate;	// G=0x359486b5; S=0x358ba109; converted property
@property(retain) WAKView *documentView;	// G=0x358c5bf9; S=0x358c5a81; converted property
@property(assign) BOOL drawsBackground;	// G=0x35f8d4b9; S=0x358ba119; converted property
@property(assign) BOOL hasHorizontalScroller;	// G=0x35f8d4b5; S=0x358ba121; converted property
@property(assign) BOOL hasVerticalScroller;	// G=0x35f8d4b1; S=0x358ba11d; converted property
@property(assign) int horizontalScrollingMode;	// G=0x35f8d4d9; S=0x35f8d4cd; converted property
@property(readonly, assign) CGPoint scrollOrigin;	// G=0x359480e5; converted property
@property(assign) int verticalScrollingMode;	// G=0x35f8d4dd; S=0x35f8d4d1; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x358b9e25
- (CGRect)actualDocumentVisibleRect;	// 0x35947a59
// converted property getter: - (id)contentView;	// 0x3590c6bd
- (void)dealloc;	// 0x35a9c46d
// converted property getter: - (id)delegate;	// 0x359486b5
- (id)description;	// 0x35f8d4e5
// converted property getter: - (id)documentView;	// 0x358c5bf9
- (CGRect)documentVisibleRect;	// 0x3590c68d
- (void)drawRect:(CGRect)rect;	// 0x35f8d4c9
// converted property getter: - (BOOL)drawsBackground;	// 0x35f8d4b9
// converted property getter: - (BOOL)hasHorizontalScroller;	// 0x35f8d4b5
// converted property getter: - (BOOL)hasVerticalScroller;	// 0x35f8d4b1
- (float)horizontalLineScroll;	// 0x35f8d4c1
// converted property getter: - (int)horizontalScrollingMode;	// 0x35f8d4d9
- (BOOL)inProgrammaticScroll;	// 0x35f8d4e1
- (void)reflectScrolledClipView:(id)view;	// 0x35f8d4c5
// converted property getter: - (CGPoint)scrollOrigin;	// 0x359480e5
- (void)scrollWheel:(id)wheel;	// 0x35f8d611
- (void)scrollingModes:(int *)modes vertical:(int *)vertical;	// 0x358c6f29
- (void)setActualScrollPosition:(CGPoint)position;	// 0x35ac6e7d
// converted property setter: - (void)setContentView:(id)view;	// 0x35f8d749
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x358ba109
// converted property setter: - (void)setDocumentView:(id)view;	// 0x358c5a81
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x358ba119
// converted property setter: - (void)setHasHorizontalScroller:(BOOL)scroller;	// 0x358ba121
// converted property setter: - (void)setHasVerticalScroller:(BOOL)scroller;	// 0x358ba11d
// converted property setter: - (void)setHorizontalScrollingMode:(int)mode;	// 0x35f8d4cd
- (void)setLineScroll:(float)scroll;	// 0x358ba16d
- (void)setScrollBarsSuppressed:(BOOL)suppressed repaintOnUnsuppress:(BOOL)unsuppress;	// 0x3597584d
- (void)setScrollOrigin:(CGPoint)origin updatePositionAtAll:(BOOL)all immediately:(BOOL)immediately;	// 0x35f8d701
- (void)setScrollingMode:(int)mode;	// 0x35f8d4d5
- (void)setScrollingModes:(int)modes vertical:(int)vertical andLock:(BOOL)lock;	// 0x358c7151
// converted property setter: - (void)setVerticalScrollingMode:(int)mode;	// 0x35f8d4d1
- (float)verticalLineScroll;	// 0x35f8d4bd
// converted property getter: - (int)verticalScrollingMode;	// 0x35f8d4dd
@end

