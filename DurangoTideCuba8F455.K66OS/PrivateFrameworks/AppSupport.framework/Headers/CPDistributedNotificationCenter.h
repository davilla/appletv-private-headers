/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

@interface CPDistributedNotificationCenter : NSObject {
	NSString *_centerName;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CFRunLoopSourceRef _receiveNotificationSource;	// 12 = 0xc
	BOOL _isServer;	// 16 = 0x10
	CFDictionaryRef _sendPorts;	// 20 = 0x14
	unsigned _startCount;	// 24 = 0x18
}
+ (id)centerNamed:(id)named;	// 0x322a54e1
- (void)_checkIn;	// 0x322a4871
- (void)_checkOutAndRemoveSource;	// 0x322a4935
- (void)_createReceiveSourceForRunLoop:(CFRunLoopRef)runLoop;	// 0x322a46e5
- (id)_initWithServerName:(id)serverName;	// 0x322a45dd
- (void)_notificationServerWasRestarted;	// 0x322a4549
- (void)_receivedCheckIn:(unsigned)anIn auditToken:(XXStruct_kUSYWB *)token;	// 0x322a5111
- (void)dealloc;	// 0x322a466d
- (void)deliverNotification:(id)notification userInfo:(id)info;	// 0x322a4429
- (id)name;	// 0x322a4209
- (void)postNotificationName:(id)name;	// 0x322a43f5
- (void)postNotificationName:(id)name userInfo:(id)info;	// 0x322a43d1
- (BOOL)postNotificationName:(id)name userInfo:(id)info toBundleIdentifier:(id)bundleIdentifier;	// 0x322a4d29
- (void)runServer;	// 0x322a49dd
- (void)runServerOnCurrentThread;	// 0x322a4415
- (void)startDeliveringNotificationsToMainThread;	// 0x322a49bd
- (void)startDeliveringNotificationsToRunLoop:(CFRunLoopRef)runLoop;	// 0x322a44c9
- (void)stopDeliveringNotifications;	// 0x322a4469
@end

