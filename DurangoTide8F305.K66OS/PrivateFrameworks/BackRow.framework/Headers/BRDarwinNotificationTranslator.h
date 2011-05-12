/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class NSMutableDictionary;

@interface BRDarwinNotificationTranslator : BRSingleton {
@private
	NSMutableDictionary *_registrations;	// 4 = 0x4
}
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x32a19ea5
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x32a19e4d
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x32a19ed9
+ (void)setSingleton:(id)singleton;	// 0x32a19e01
+ (id)singleton;	// 0x32a19df5
- (id)init;	// 0x32a19f11
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x32a1a3d9
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x32a1a20d
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x32a19e0d
- (id)_registrationForToken:(int)token;	// 0x32a19f6d
- (void)dealloc;	// 0x32a1a04d
@end

