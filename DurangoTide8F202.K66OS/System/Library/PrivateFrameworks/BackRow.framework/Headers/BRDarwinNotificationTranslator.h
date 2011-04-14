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
+ (BOOL)deregisterDarwinNotification:(const char *)notification;	// 0x329a4f35
+ (int)notificationTokenForDarwinNotification:(const char *)darwinNotification;	// 0x329a4edd
+ (BOOL)registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x329a4f69
+ (void)setSingleton:(id)singleton;	// 0x329a4e91
+ (id)singleton;	// 0x329a4e85
- (id)init;	// 0x329a4fa1
- (BOOL)_deregisterDarwinNotification:(const char *)notification;	// 0x329a5469
- (BOOL)_registerDarwinNotification:(const char *)notification sendsNotificationNamed:(id)named;	// 0x329a529d
- (id)_registrationForDarwinNotification:(const char *)darwinNotification;	// 0x329a4e9d
- (id)_registrationForToken:(int)token;	// 0x329a4ffd
- (void)dealloc;	// 0x329a50dd
@end
