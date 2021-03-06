/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIRemoteApplication : NSObject {
	NSString *_machServiceName;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
}
- (id)initWithBundleIdentifier:(id)bundleIdentifier;	// 0x355343d9
- (id)initWithMachServiceName:(id)machServiceName;	// 0x354b0e15
- (void)backgroundContinuationEnabledDidChange:(BOOL)backgroundContinuationEnabled;	// 0x35534941
- (void)dealloc;	// 0x35534415
- (void)hideTopMostMiniAlert:(int)alert;	// 0x35534489
- (void)localNotificationDidSnooze:(id)localNotification;	// 0x35534895
- (void)localNotificationMessageDelivered:(id)delivered;	// 0x355347e9
- (void)remoteNotificationMessageDelivered;	// 0x35534791
- (void)remoteNotificationRegistrationFailedWithErrorDomain:(id)errorDomain code:(int)code localizedDescription:(id)description;	// 0x35534705
- (void)remoteNotificationRegistrationSucceededWithDeviceToken:(id)deviceToken;	// 0x35534675
- (void)sheetWithRemoteViewIdentifierDidDismiss:(id)sheetWithRemoteViewIdentifier;	// 0x35534601
- (void)showTopMostMiniAlert;	// 0x355344e5
- (void)simpleRemoteActionDidOccur:(int)simpleRemoteAction;	// 0x355345a5
- (void)statusBarWillChangeOrientation:(int)statusBar duration:(float)duration;	// 0x3553453d
- (void)updatePort;	// 0x354b0e69
- (void)wakeTimerFired;	// 0x3553499d
@end

