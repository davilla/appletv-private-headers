/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPanGestureRecognizer.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 120 = 0x78
	SEL _scrollViewAction;	// 124 = 0x7c
	CGPoint _reconsideredLockingLocation;	// 128 = 0x80
	unsigned _lastLockingAxis : 2;	// 136 = 0x88
	unsigned _lockingAxis : 2;	// 136 = 0x88
	unsigned _hasChildScrollView : 1;	// 136 = 0x88
	unsigned _hasParentScrollView : 1;	// 136 = 0x88
	unsigned _caughtDeceleratingScrollView : 1;	// 136 = 0x88
	unsigned _directionalLockEnabled : 1;	// 136 = 0x88
	unsigned _waitingForParentScrollView : 1;	// 137 = 0x89
}
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x33c8801d; S=0x339c26f1; 
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x339c26bd; S=0x339c2619; @synthesize=_scrollView
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x339c242d
- (CGPoint)_adjustScreenLocation:(CGPoint)location;	// 0x33a9dbe5
- (void)_centroidMovedTo:(CGPoint)to atTime:(double)time;	// 0x33a9d679
- (float)_hysteresis;	// 0x33a9e9d1
- (void)_resetGestureRecognizer;	// 0x33a831b5
- (void)_scrollViewDidEndZooming;	// 0x33af8489
- (BOOL)_shouldTryToBeginWithEvent:(id)event;	// 0x33a9dd75
- (BOOL)canBePreventedByGestureRecognizer:(id)recognizer;	// 0x33a7cd81
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x33c8801d
- (void)removeTarget:(id)target action:(SEL)action;	// 0x33c87ee9
// declared property getter: - (id)scrollView;	// 0x339c26bd
- (void)setDelegate:(id)delegate;	// 0x339c2629
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x339c26f1
// declared property setter: - (void)setScrollView:(id)view;	// 0x339c2619
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33a7a8f5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33abdca5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33a9d3cd
- (CGPoint)translationInView:(id)view;	// 0x33a9e7a9
- (CGPoint)velocityInView:(id)view;	// 0x33aa0609
@end

