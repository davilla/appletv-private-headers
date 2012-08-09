/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import "UIViewController.h"
#import "_UIRemoteViewController_ViewControllerOperatorInterface.h"
#import "XPCProxyTarget.h"

@class UIActionSheet, NSArray, _UISizeTrackingView, _UIViewServiceInterface, _UITextServiceSession, NSError, UIDimmingView, _UIRemoteView, _UIAsyncInvocation, NSString;
@protocol OS_dispatch_semaphore;

@interface _UIRemoteViewController : UIViewController <XPCProxyTarget, _UIRemoteViewController_ViewControllerOperatorInterface, UIActionSheetDelegate> {
	NSString *_serviceBundleIdentifier;	// 196 = 0xc4
	_UIViewServiceInterface *_serviceInterface;	// 200 = 0xc8
	id _serviceViewControllerProxy;	// 204 = 0xcc
	NSArray *_serviceViewControllerSupportedInterfaceOrientations;	// 208 = 0xd0
	unsigned _serviceAccessibilityServerPort;	// 212 = 0xd4
	unsigned _serviceRegisteredScrollToTopViewCount;	// 216 = 0xd8
	id _viewControllerOperatorProxy;	// 220 = 0xdc
	_UIAsyncInvocation *_viewControllerOperatorHalfDisconnectionInvocation;	// 224 = 0xe0
	id _textEffectsOperatorProxy;	// 228 = 0xe4
	_UIAsyncInvocation *_textEffectsOperatorHalfDisconnectionInvocation;	// 232 = 0xe8
	BOOL _fencingCurrentTransaction;	// 236 = 0xec
	NSObject<OS_dispatch_semaphore> *_fenceBarrier;	// 240 = 0xf0
	_UISizeTrackingView *_sizeTrackingView;	// 244 = 0xf4
	_UIRemoteView *_serviceViewControllerRemoteView;	// 248 = 0xf8
	_UIRemoteView *_fullScreenTextEffectsRemoteView;	// 252 = 0xfc
	_UIAsyncInvocation *_terminationInvocation;	// 256 = 0x100
	int _terminationErrorLock;	// 260 = 0x104
	NSError *_terminationError;	// 264 = 0x108
	UIActionSheet *_hostedActionSheet;	// 268 = 0x10c
	_UITextServiceSession *_textServiceSession;	// 272 = 0x110
	int __automatic_invalidation_retainCount;	// 276 = 0x114
	BOOL __automatic_invalidation_invalidated;	// 280 = 0x118
	UIDimmingView *_hostedDimmingView;	// 284 = 0x11c
}
@property(readonly, assign, nonatomic) NSString *serviceBundleIdentifier;	// G=0x30609a2d; 
@property(readonly, assign, nonatomic) id serviceViewControllerProxy;	// G=0x3060c8d5; 
+ (id)requestViewController:(id)controller fromServiceWithBundleIdentifier:(id)bundleIdentifier connectionHandler:(id)handler;	// 0x30608611
+ (BOOL)shouldPropagateAppearanceCustomizations;	// 0x3060c895
- (int)__automatic_invalidation_logic;	// 0x306083a9
- (void)__dismissActionSheetWithClickedButtonIndex:(int)clickedButtonIndex animated:(BOOL)animated;	// 0x3060ac71
- (void)__dismissTextServiceSessionAnimated:(BOOL)animated;	// 0x3060c801
- (void)__presentActionSheetFromYCoordinate:(float)ycoordinate withTitle:(id)title buttonTitles:(id)titles cancelButtonIndex:(int)index destructiveButtonIndex:(int)index5 style:(int)style;	// 0x3060a8ed
- (void)__setSupportedInterfaceOrientations:(id)orientations;	// 0x3060bd31
- (void)__setViewServiceIsDisplayingPopover:(BOOL)popover;	// 0x3060bf39
- (void)__showServiceForText:(id)text type:(int)type fromRectValue:(id)rectValue;	// 0x3060c5e1
- (void)__viewServiceDidPromoteFirstResponder;	// 0x3060c175
- (void)__viewServiceDidRegisterScrollToTopView;	// 0x3060a5f1
- (void)__viewServiceDidUnregisterScrollToTopView;	// 0x3060a64d
- (void)__viewServiceDidUpdateTintColor:(id)__viewService duration:(double)duration;	// 0x3060c405
- (void)__viewServicePopoverDidChangeContentSize:(id)__viewServicePopover animated:(BOOL)animated fenceSendRight:(id)right;	// 0x3060c1f1
- (void)__viewServicePopoverDidSetUseToolbarShine:(BOOL)__viewServicePopover;	// 0x3060c355
- (void)_alertIsAppearing:(id)appearing;	// 0x3060ae59
- (void)_alertIsDisappearing:(id)disappearing;	// 0x3060b069
- (void)_appearanceInvocationsDidChange:(id)_appearanceInvocations;	// 0x3060c4fd
- (id)_appearanceSource;	// 0x3060c4ed
- (void)_applicationDidEnterBackground:(id)_application;	// 0x30609bd1
- (void)_applicationDidFinishSuspendSnapshot:(id)_application;	// 0x30609c69
- (void)_applicationWillEnterForeground:(id)_application;	// 0x30609aad
- (BOOL)_customizesForPresentationInPopover;	// 0x3060c401
- (void)_didResignContentViewControllerOfPopover:(id)popover;	// 0x3060bcdd
- (void)_didRotateFromInterfaceOrientation:(int)interfaceOrientation forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3060bbbd
- (void)_firstResponderDidChange:(id)_firstResponder;	// 0x3060a84d
- (void)_hostDidEnterBackground:(id)_host;	// 0x30609bf1
- (void)_hostWillEnterForeground:(id)_host;	// 0x30609b59
- (BOOL)_ignoreAppSupportedOrientations;	// 0x3060b985
- (id)_initWithViewServiceBundleIdentifier:(id)viewServiceBundleIdentifier connectionInfo:(XXStruct_bL93lD)info;	// 0x306089b5
- (BOOL)_isDeallocating;	// 0x306085e5
- (void)_scrollToTopFromTouchAtViewLocation:(CGPoint)viewLocation resultHandler:(id)handler;	// 0x3060a6ad
- (BOOL)_serviceHasScrollToTopView;	// 0x3060a831
- (void)_statusBarOrientationDidChange:(id)_statusBarOrientation;	// 0x30609a65
- (void)_terminateUnconditionallyThen:(id)then;	// 0x30609d4d
- (id)_terminateWithError:(id)error;	// 0x30609c89
- (BOOL)_tryRetain;	// 0x30608595
- (void)_willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3060b989
- (void)_willBecomeContentViewControllerOfPopover:(id)popover;	// 0x3060bc89
- (void)_willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration forwardToChildControllers:(BOOL)childControllers skipSelf:(BOOL)aSelf;	// 0x3060bab1
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3060adcd
- (BOOL)canBecomeFirstResponder;	// 0x3060a849
- (void)dealloc;	// 0x3060a489
- (void)dimmingViewWasTapped:(id)tapped;	// 0x3060c155
- (id)disconnect;	// 0x30609cf9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x3060c8e5
- (oneway void)release;	// 0x306084c1
- (id)retain;	// 0x30608489
- (unsigned)retainCount;	// 0x30608581
// declared property getter: - (id)serviceBundleIdentifier;	// 0x30609a2d
// declared property getter: - (id)serviceViewControllerProxy;	// 0x3060c8d5
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3060b849
- (unsigned)supportedInterfaceOrientations;	// 0x3060b891
- (void)synchronizeAnimationsInActions:(id)actions;	// 0x306095b5
- (void)viewDidAppear:(BOOL)view;	// 0x3060b639
- (void)viewDidDisappear:(BOOL)view;	// 0x3060b765
- (void)viewServiceDidTerminateWithError:(id)viewService;	// 0x3060c899
- (void)viewWillAppear:(BOOL)view;	// 0x3060b15d
- (void)viewWillDisappear:(BOOL)view;	// 0x3060b689
@end
