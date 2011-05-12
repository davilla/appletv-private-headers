/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 44 = 0x2c
	UIView *_fromView;	// 48 = 0x30
	UIView *_toView;	// 52 = 0x34
	int _transition;	// 56 = 0x38
	UIView *_firstResponderToRestore;	// 60 = 0x3c
	UIWindow *_originalWindow;	// 64 = 0x40
	float _fromViewAlpha;	// 68 = 0x44
	unsigned _isTransitioning : 1;	// 72 = 0x48
	unsigned _popoverWillCleanUpNavigationTransition : 1;	// 72 = 0x48
	unsigned _usesRoundedCorners : 1;	// 72 = 0x48
}
@property(assign, nonatomic) id delegate;	// G=0x321a3d55; S=0x31fad7a1; @synthesize=_delegate
@property(readonly, assign) UIView *fromView;	// G=0x321a3d45; @synthesize=_fromView
@property(readonly, assign) BOOL isTransitioning;	// G=0x3209fc89; 
@property(assign, nonatomic) BOOL popoverWillCleanUpNavigationTransition;	// G=0x321a3d1d; S=0x321a3cfd; 
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x321a3d31; S=0x321a3f49; 
+ (double)defaultDurationForTransition:(int)transition;	// 0x31fcbcb5
- (id)initWithCoder:(id)coder;	// 0x321a3e69
- (id)initWithFrame:(CGRect)frame;	// 0x31fad72d
- (void)_cleanupTransition;	// 0x31fcc835
- (void)_cleanupTransitionFromPopover;	// 0x321a3d65
- (BOOL)_isTransitioningFromView:(id)view;	// 0x3209fc25
- (void)_navigationTransitionDidStop;	// 0x31fcc7fd
- (void)_notifyDelegateTransitionDidStopWithContext:(id)_notifyDelegateTransition;	// 0x31fccc65
- (void)dealloc;	// 0x31ff4721
// declared property getter: - (id)delegate;	// 0x321a3d55
- (void)encodeWithCoder:(id)coder;	// 0x321a3da1
// declared property getter: - (id)fromView;	// 0x321a3d45
// declared property getter: - (BOOL)isTransitioning;	// 0x3209fc89
// declared property getter: - (BOOL)popoverWillCleanUpNavigationTransition;	// 0x321a3d1d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fad7a1
// declared property setter: - (void)setPopoverWillCleanUpNavigationTransition:(BOOL)cleanUpNavigationTransition;	// 0x321a3cfd
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x321a3f49
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x31fcb2e5
- (BOOL)transition:(int)transition toView:(id)view;	// 0x31fcb2c5
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x321a3d31
@end

