/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WAKResponder.h"
#import "WebCore-Structs.h"

@class NSMutableSet;

@interface WAKView : WAKResponder {
@private
	WKViewContext viewContext;	// 4 = 0x4
	WKView *viewRef;	// 60 = 0x3c
	NSMutableSet *subviewReferences;	// 64 = 0x40
}
@property(assign) unsigned autoresizingMask;	// G=0x35f8da55; S=0x358ba125; converted property
@property(assign) CGRect frame;	// G=0x3592469d; S=0x358fbb4d; converted property
@property(assign) BOOL needsDisplay;	// G=0x35f8d775; S=0x35976069; converted property
@property(retain) id nextKeyView;	// G=0x35973ae5; S=0x358ba225; converted property
@property(assign) float scale;	// G=0x35a529b5; S=0x35974c0d; converted property
+ (id)_wrapperForViewRef:(WKView *)viewRef;	// 0x358fbfed
+ (id)focusView;	// 0x35f8d7b1
- (id)init;	// 0x35a1a051
- (id)initWithFrame:(CGRect)frame;	// 0x358b9685
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x35f8d7e5
- (void)_handleEvent:(id)event;	// 0x35afe17d
- (BOOL)_handleResponderCall:(int)call;	// 0x35918ecd
- (id)_initWithViewRef:(WKView *)viewRef;	// 0x358b97fd
- (void)_setDrawsOwnDescendants:(BOOL)descendants;	// 0x358c5a61
- (id)_subviewReferences;	// 0x358ba1d9
- (WKView *)_viewRef;	// 0x358ba1c9
- (BOOL)accessibilityIsIgnored;	// 0x35b2e36d
- (void)addSubview:(id)subview;	// 0x358ba171
// converted property getter: - (unsigned)autoresizingMask;	// 0x35f8da55
- (CGRect)bounds;	// 0x358c59f1
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x35a74f35
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x35ac6f5d
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x35947cdd
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x359488c5
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x35f8da91
- (void)dealloc;	// 0x359076bd
- (id)description;	// 0x35f8d96d
- (void)display;	// 0x35f8db95
- (void)displayIfNeeded;	// 0x35f8d779
- (void)displayRect:(CGRect)rect;	// 0x35f8db1d
- (void)displayRectIgnoringOpacity:(CGRect)opacity;	// 0x35a53abd
- (void)displayRectIgnoringOpacity:(CGRect)opacity inContext:(CGContextRef)context;	// 0x35f8daed
- (void)drawRect:(CGRect)rect;	// 0x35924699
// converted property getter: - (CGRect)frame;	// 0x3592469d
- (void)frameSizeChanged;	// 0x359163b9
- (id)hitTest:(CGPoint)test;	// 0x35afdf2d
- (BOOL)inLiveResize;	// 0x35f8d791
- (void)invalidateGState;	// 0x35916b69
- (BOOL)isDescendantOf:(id)of;	// 0x3592e271
- (id)lastScrollableAncestor;	// 0x35f8dba9
- (void)layout;	// 0x35f8d799
- (void)layoutIfNeeded;	// 0x35f8d79d
- (void)lockFocus;	// 0x35f8da7d
- (BOOL)mouse:(CGPoint)mouse inRect:(CGRect)rect;	// 0x35afe081
// converted property getter: - (BOOL)needsDisplay;	// 0x35f8d775
- (BOOL)needsPanelToBecomeKey;	// 0x35f8d77d
// converted property getter: - (id)nextKeyView;	// 0x35973ae5
- (id)nextResponder;	// 0x35f8d7a1
- (id)nextValidKeyView;	// 0x35f8d785
- (id)previousKeyView;	// 0x35f8d789
- (id)previousValidKeyView;	// 0x35f8d781
- (void)releaseGState;	// 0x35f8d78d
- (void)removeFromSuperview;	// 0x35a4ca49
// converted property getter: - (float)scale;	// 0x35a529b5
- (void)scrollPoint:(CGPoint)point;	// 0x359480fd
- (BOOL)scrollRectToVisible:(CGRect)visible;	// 0x35f8da25
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x358ba125
- (void)setBoundsOrigin:(CGPoint)origin;	// 0x35f8db4d
- (void)setBoundsSize:(CGSize)size;	// 0x359162ad
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x358fbb4d
- (void)setFrameOrigin:(CGPoint)origin;	// 0x35f8db7d
- (void)setFrameSize:(CGSize)size;	// 0x35f8db65
- (void)setHidden:(BOOL)hidden;	// 0x35a40f1d
// converted property setter: - (void)setNeedsDisplay:(BOOL)display;	// 0x35976069
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x359183f5
- (void)setNeedsLayout:(BOOL)layout;	// 0x35f8d795
// converted property setter: - (void)setNextKeyView:(id)view;	// 0x358ba225
// converted property setter: - (void)setScale:(float)scale;	// 0x35974c0d
- (id)subviews;	// 0x35923b99
- (id)superview;	// 0x358fbf75
- (void)unlockFocus;	// 0x35f8da69
- (void)viewDidMoveToWindow;	// 0x358fc255
- (void)viewWillDraw;	// 0x35923b65
- (CGRect)visibleRect;	// 0x35f8dad5
- (void)willRemoveSubview:(id)subview;	// 0x35a4cbf5
- (id)window;	// 0x358c5b85
@end

