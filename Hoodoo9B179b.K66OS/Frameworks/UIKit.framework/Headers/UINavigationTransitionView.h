/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIWindow;

@interface UINavigationTransitionView : UIView <NSCoding> {
@private
	id _delegate;	// 48 = 0x30
	UIView *_fromView;	// 52 = 0x34
	UIView *_toView;	// 56 = 0x38
	int _transition;	// 60 = 0x3c
	UIResponder *_firstResponderToRestore;	// 64 = 0x40
	UIWindow *_originalWindow;	// 68 = 0x44
	float _fromViewAlpha;	// 72 = 0x48
	unsigned _isTransitioning : 1;	// 76 = 0x4c
	unsigned _popoverWillCleanUpNavigationTransition : 1;	// 76 = 0x4c
	unsigned _usesRoundedCorners : 1;	// 76 = 0x4c
}
@property(assign, nonatomic) id delegate;	// G=0x33163221; S=0x32ef8abd; @synthesize=_delegate
@property(readonly, assign) UIView *fromView;	// G=0x33163231; @synthesize=_fromView
@property(readonly, assign) BOOL isTransitioning;	// G=0x33162fdd; 
@property(assign, nonatomic) BOOL popoverWillCleanUpNavigationTransition;	// G=0x33162df5; S=0x33162dcd; 
@property(assign, nonatomic) BOOL usesRoundedCorners;	// G=0x3316320d; S=0x3316309d; 
+ (double)defaultDurationForTransition:(int)transition;	// 0x32f18161
- (id)initWithCoder:(id)coder;	// 0x33162e09
- (id)initWithFrame:(CGRect)frame;	// 0x32ef8a59
- (void)_cleanupTransition;	// 0x32f18bd9
- (void)_cleanupTransitionFromPopover;	// 0x3316305d
- (BOOL)_isTransitioningFromView:(id)view;	// 0x33162ff1
- (void)_navigationTransitionDidStop;	// 0x32f18b99
- (void)_notifyDelegateTransitionDidStopWithContext:(id)_notifyDelegateTransition;	// 0x32f19025
- (void)dealloc;	// 0x32f859f5
// declared property getter: - (id)delegate;	// 0x33163221
- (void)encodeWithCoder:(id)coder;	// 0x33162ef9
// declared property getter: - (id)fromView;	// 0x33163231
// declared property getter: - (BOOL)isTransitioning;	// 0x33162fdd
// declared property getter: - (BOOL)popoverWillCleanUpNavigationTransition;	// 0x33162df5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32ef8abd
// declared property setter: - (void)setPopoverWillCleanUpNavigationTransition:(BOOL)cleanUpNavigationTransition;	// 0x33162dcd
// declared property setter: - (void)setUsesRoundedCorners:(BOOL)corners;	// 0x3316309d
- (BOOL)transition:(int)transition fromView:(id)view toView:(id)view3;	// 0x32f17905
- (BOOL)transition:(int)transition toView:(id)view;	// 0x32f178e5
// declared property getter: - (BOOL)usesRoundedCorners;	// 0x3316320d
@end
