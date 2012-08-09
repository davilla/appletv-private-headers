/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "XPCProxyTarget.h"
#import "_UIViewServiceDeputyRotationDelegate.h"
#import "_UIViewServiceDeputy.h"
#import "_UIViewServiceTextEffectsOperator_RemoteViewControllerInterface.h"
#import <NSObject.h> // Unknown library

@class UIResponder, _UIAsyncInvocation, UIWindow;
@protocol _UIViewServiceDeputyDelegate;

__attribute__((visibility("hidden")))
@interface _UIViewServiceTextEffectsOperator : NSObject <XPCProxyTarget, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {
	id _remoteViewControllerProxy;	// 4 = 0x4
	_UIAsyncInvocation *_prepareForDisconnectionInvocation;	// 8 = 0x8
	_UIAsyncInvocation *_invalidationInvocation;	// 12 = 0xc
	UIWindow *_hostedWindow;	// 16 = 0x10
	UIResponder *_responder;	// 20 = 0x14
	id<_UIViewServiceDeputyDelegate> _delegate;	// 24 = 0x18
	int __automatic_invalidation_retainCount;	// 28 = 0x1c
	BOOL __automatic_invalidation_invalidated;	// 32 = 0x20
}
+ (id)operatorWithRemoteViewControllerProxy:(id)remoteViewControllerProxy;	// 0x33e10a55
- (int)__automatic_invalidation_logic;	// 0x33e107ed
- (void)__createHostedTextEffectsWithReplyHandler:(id)replyHandler;	// 0x33e11165
- (void)__hostDidEnterBackground;	// 0x33e11481
- (void)__hostViewWillDisappear:(BOOL)__hostView;	// 0x33e11585
- (void)__hostWillEnterForeground;	// 0x33e114cd
- (void)__prepareForDisconnectionWithCompletionHandler:(id)completionHandler;	// 0x33e11609
- (void)__setContentSize:(id)size;	// 0x33e112b5
- (void)__setNextAutomaticOrderOutDirection:(int)direction duration:(double)duration;	// 0x33e11371
- (void)_forceResponderOrderOut;	// 0x33e10dad
- (void)_invalidateUnconditionallyThen:(id)then;	// 0x33e10f75
- (BOOL)_isDeallocating;	// 0x33e10a29
- (void)_prepareForDisconnectionUnconditionallyThen:(id)disconnectionUnconditionallyThen;	// 0x33e10e0d
- (BOOL)_responderIsActive;	// 0x33e113b5
- (BOOL)_tryRetain;	// 0x33e109d9
- (void)dealloc;	// 0x33e11065
- (void)finishRotation;	// 0x33e116e9
- (id)invalidate;	// 0x33e116a9
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x33e116ed
- (oneway void)release;	// 0x33e10905
- (id)retain;	// 0x33e108cd
- (unsigned)retainCount;	// 0x33e109c5
- (void)rotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33e116e1
- (void)setDeputyDelegate:(id)delegate;	// 0x33e11699
- (void)setHostedWindow:(id)window;	// 0x33e116c9
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33e116d9
- (void)windowDidGainFirstResponder:(id)window;	// 0x33e110dd
@end
