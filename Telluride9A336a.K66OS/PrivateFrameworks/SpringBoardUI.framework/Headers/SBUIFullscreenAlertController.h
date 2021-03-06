/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import "SpringBoardUI-Structs.h"
#import "NSCopying.h"
#import <UIViewController.h> // Unknown library

@class NSNumber, NSString, NSInvocation;

@interface SBUIFullscreenAlertController : UIViewController <NSCopying> {
	BOOL _shouldAnimateIn;	// 157 = 0x9d
	NSNumber *_animationStartTime;	// 160 = 0xa0
	NSString *_activationContext;	// 164 = 0xa4
	NSInvocation *_pendingDeactivationInvocation;	// 168 = 0xa8
}
@property(retain, nonatomic) NSString *activationContext;	// G=0x30a0c785; S=0x30a0c819; @synthesize=_activationContext
@property(retain, nonatomic) NSNumber *animationStartTime;	// G=0x30a0c795; S=0x30a0c7f1; @synthesize=_animationStartTime
@property(retain) NSInvocation *pendingDeactivationInvocation;	// G=0x30a0c775; S=0x30a0c841; converted property
@property(assign, nonatomic) BOOL shouldAnimateIn;	// G=0x30a0c7a5; S=0x30a0c7b5; @synthesize=_shouldAnimateIn
- (id)init;	// 0x30a0cc31
// declared property getter: - (id)activationContext;	// 0x30a0c785
- (BOOL)allowSuspension;	// 0x30a0c745
- (void)animateViewOut;	// 0x30a0c979
// declared property getter: - (id)animationStartTime;	// 0x30a0c795
- (id)copyWithZone:(NSZone *)zone;	// 0x30a0c8c9
- (void)dealloc;	// 0x30a0c8d9
- (void)didFinishLaunchingFrontmost;	// 0x30a0c881
- (void)didReceiveMemoryWarning;	// 0x30a0c7c5
- (BOOL)displaysAboveStatusBar;	// 0x30a0c749
- (void)finishedAnimatingIn;	// 0x30a0c751
- (void)finishedAnimatingOut;	// 0x30a0c755
- (BOOL)handleHeadsetButtonPressed:(BOOL)pressed;	// 0x30a0c771
- (BOOL)handleLockButtonPressed;	// 0x30a0c761
- (BOOL)handleMenuButtonTap;	// 0x30a0c76d
- (BOOL)handleVolumeDownButtonPressed;	// 0x30a0c769
- (BOOL)handleVolumeUpButtonPressed;	// 0x30a0c765
- (BOOL)hasTranslucentBackground;	// 0x30a0c75d
- (BOOL)isSlidingViewController;	// 0x30a0c741
// converted property getter: - (id)pendingDeactivationInvocation;	// 0x30a0c775
- (void)requestActivationAnimated:(BOOL)animated animateCurrentDisplayOut:(BOOL)anOut withDelay:(BOOL)delay;	// 0x30a0cbd5
- (void)requestDeactivationAnimated:(BOOL)animated animateOldDisplayInWithStyle:(int)style;	// 0x30a0cb7d
// declared property setter: - (void)setActivationContext:(id)context;	// 0x30a0c819
// declared property setter: - (void)setAnimationStartTime:(id)time;	// 0x30a0c7f1
// converted property setter: - (void)setPendingDeactivationInvocation:(id)invocation;	// 0x30a0c841
// declared property setter: - (void)setShouldAnimateIn:(BOOL)animateIn;	// 0x30a0c7b5
// declared property getter: - (BOOL)shouldAnimateIn;	// 0x30a0c7a5
- (void)viewDidLoad;	// 0x30a0ca59
- (void)viewDidUnload;	// 0x30a0c94d
- (BOOL)viewIsReadyToBeRemoved;	// 0x30a0c759
- (void)viewWillAnimateOut;	// 0x30a0c74d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30a0c9bd
@end

