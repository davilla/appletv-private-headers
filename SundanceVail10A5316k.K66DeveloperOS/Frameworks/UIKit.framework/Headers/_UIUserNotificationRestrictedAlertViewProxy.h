/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UITargetedProxy.h"
#import "UIAlertViewDelegate.h"


__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy : _UITargetedProxy <UIAlertViewDelegate> {
@private
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x304ae6cd; S=0x304ae6dd; converted property
+ (id)restrictedProxyForAlertView:(id)alertView;	// 0x304ae6a1
// converted property getter: - (id)delegate;	// 0x304ae6cd
- (void)forwardInvocation:(id)invocation;	// 0x304ae815
- (id)methodSignatureForSelector:(SEL)selector;	// 0x304ae739
- (BOOL)respondsToSelector:(SEL)selector;	// 0x304ae7c9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x304ae6dd
@end
