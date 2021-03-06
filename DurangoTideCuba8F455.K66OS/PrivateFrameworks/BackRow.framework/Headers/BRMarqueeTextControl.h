/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRFadeMaskLayer, BRScrollingTextPlane, NSTimer;
@protocol BRMarqueeScrollingDelegate;

@interface BRMarqueeTextControl : BRControl {
@private
	BRScrollingTextPlane *_plane;	// 44 = 0x2c
	BRControl *_leftFade;	// 48 = 0x30
	BRControl *_rightFade;	// 52 = 0x34
	BRFadeMaskLayer *_mask;	// 56 = 0x38
	NSTimer *_scrollTimer;	// 60 = 0x3c
	NSTimer *_fadeMaskTimer;	// 64 = 0x40
	float _maskRemovalTime;	// 68 = 0x44
	float _scrollPosition;	// 72 = 0x48
	BOOL _autoScrolls;	// 76 = 0x4c
	BOOL _crossfadeEnabled;	// 77 = 0x4d
	BOOL _crossfading;	// 78 = 0x4e
	BOOL _useAlphaFadeMask;	// 79 = 0x4f
	id<BRMarqueeScrollingDelegate> _scrollingDelegate;	// 80 = 0x50
}
@property(retain) id attributedString;	// G=0x32f7304d; S=0x32f7306d; converted property
@property(assign) BOOL autoScrolls;	// G=0x32f72bc1; S=0x32f72fd9; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x32f72be9; S=0x32f72bd1; converted property
@property(assign) float scrollPosition;	// G=0x32f72bf9; S=0x32f72fa5; converted property
@property(assign) id scrollingDelegate;	// G=0x32f72c09; S=0x32f72c19; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x32f72c39; S=0x32f72c29; converted property
- (id)init;	// 0x32f73571
- (BOOL)_autoscrollInProgress;	// 0x32f72c49
- (void)_beginScroll:(id)scroll;	// 0x32f73ced
- (void)_clearFadeMaskTimer;	// 0x32f72d8d
- (void)_clearScrollTimer;	// 0x32f72db9
- (void)_realignCenteredTextToLeftJustified;	// 0x32f72e69
- (void)_removeFadeMask:(id)mask;	// 0x32f72de5
- (void)_resetScrollTimer;	// 0x32f73671
- (void)_scrollDidStart:(id)_scroll;	// 0x32f72d0d
- (void)_scrollDidStop:(id)_scroll;	// 0x32f72c79
- (void)_scrollDidStop:(id)_scroll finished:(BOOL)finished;	// 0x32f72cc1
- (void)_updateEdgeMaskingIfScrollingNeeded:(BOOL)needed;	// 0x32f73749
- (id)accessibilityLabel;	// 0x32f72f81
// converted property getter: - (id)attributedString;	// 0x32f7304d
// converted property getter: - (BOOL)autoScrolls;	// 0x32f72bc1
- (void)controlWasActivated;	// 0x32f73359
- (void)controlWasDeactivated;	// 0x32f73395
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x32f72be9
- (void)dealloc;	// 0x32f734f1
- (void)layoutSubcontrols;	// 0x32f74149
- (float)maxScrollPosition;	// 0x32f73b35
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x32f739fd
- (CGSize)pixelBounds;	// 0x32f73b11
- (id)preferredActionForKey:(id)key;	// 0x32f73405
- (CGSize)renderedSize;	// 0x32f73a95
// converted property getter: - (float)scrollPosition;	// 0x32f72bf9
// converted property getter: - (id)scrollingDelegate;	// 0x32f72c09
// converted property setter: - (void)setAttributedString:(id)string;	// 0x32f7306d
// converted property setter: - (void)setAutoScrolls:(BOOL)scrolls;	// 0x32f72fd9
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x32f72bd1
// converted property setter: - (void)setScrollPosition:(float)position;	// 0x32f72fa5
// converted property setter: - (void)setScrollingDelegate:(id)delegate;	// 0x32f72c19
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x32f731f1
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x32f72c29
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f73999
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x32f72c39
@end

