/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UITransitionView, UIWindow, UIViewController;

@interface UIWindowController : NSObject {
	UITransitionView *_transitionView;	// 4 = 0x4
	UIWindow *_window;	// 8 = 0x8
	int _currentTransition;	// 12 = 0xc
	id _target;	// 16 = 0x10
	SEL _didEndSelector;	// 20 = 0x14
	UIViewController *_fromViewController;	// 24 = 0x18
	UIViewController *_toViewController;	// 28 = 0x1c
	CGPoint _beginOriginForToView;	// 32 = 0x20
	CGPoint _endOriginForToView;	// 40 = 0x28
	BOOL _presenting;	// 48 = 0x30
	int _toModalStyle;	// 52 = 0x34
	BOOL _needsDidAppear;	// 56 = 0x38
	BOOL _needsDidDisappear;	// 57 = 0x39
}
@property(assign, nonatomic) BOOL presenting;	// G=0x30ebe8f9; S=0x30ce22b9; @synthesize=_presenting
@property(readonly, assign, nonatomic) UITransitionView *transitionView;	// G=0x30d39779; @synthesize=_transitionView
@property(assign, nonatomic) UIWindow *window;	// G=0x30ce3669; S=0x30ce22a9; @synthesize=_window
+ (id)windowControllerForWindow:(id)window;	// 0x30ce21d9
+ (void)windowWillBeDeallocated:(id)window;	// 0x30c36a8d
- (CGPoint)_adjustOrigin:(CGPoint)origin givenOtherOrigin:(CGPoint)origin2 forTransition:(int)transition;	// 0x30cf7515
- (CGRect)_boundsForViewController:(id)viewController transition:(int)transition orientation:(int)orientation fullScreenLayout:(BOOL)layout inWindow:(id)window;	// 0x30ce4961
- (CGSize)_flipSize:(CGSize)size;	// 0x30ebe1ad
- (CGPoint)_originForViewController:(id)viewController orientation:(int)orientation actualStatusBarHeight:(float)height fullScreenLayout:(BOOL)layout inWindow:(id)window;	// 0x30ce482d
- (void)_prepareKeyboardForTransition:(int)transition fromView:(id)view;	// 0x30ce4c09
- (void)_transplantView:(id)view toSuperview:(id)superview atIndex:(unsigned)index;	// 0x30ce4741
- (void)dealloc;	// 0x30ebe119
- (double)durationForTransition:(int)transition;	// 0x30ce4e99
// declared property getter: - (BOOL)presenting;	// 0x30ebe8f9
// declared property setter: - (void)setPresenting:(BOOL)presenting;	// 0x30ce22b9
// declared property setter: - (void)setWindow:(id)window;	// 0x30ce22a9
- (void)transition:(int)transition fromViewController:(id)viewController toViewController:(id)viewController3 target:(id)target didEndSelector:(SEL)selector;	// 0x30ce22c9
// declared property getter: - (id)transitionView;	// 0x30d39779
- (CGPoint)transitionView:(id)view beginOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x30cf7479
- (CGPoint)transitionView:(id)view endOriginForFromView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x30d398b1
- (CGPoint)transitionView:(id)view endOriginForToView:(id)view2 forTransition:(int)transition defaultOrigin:(CGPoint)origin;	// 0x30cf8089
- (void)transitionView:(id)view startCustomTransitionWithDuration:(double)duration;	// 0x30ebe8a5
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x30cfa821
- (void)transitionViewDidStart:(id)transitionView;	// 0x30ce4ebd
- (BOOL)transitionViewShouldUseViewControllerCallbacks;	// 0x30ce4eb5
// declared property getter: - (id)window;	// 0x30ce3669
@end

