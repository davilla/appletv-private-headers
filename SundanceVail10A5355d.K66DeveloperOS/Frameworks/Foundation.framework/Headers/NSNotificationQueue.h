/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationQueue : NSObject {
	id _notificationCenter;	// 4 = 0x4
	id _asapQueue;	// 8 = 0x8
	id _asapObs;	// 12 = 0xc
	id _idleQueue;	// 16 = 0x10
	id _idleObs;	// 20 = 0x14
}
+ (id)defaultQueue;	// 0x346cb11d
- (id)init;	// 0x346cb1cd
- (id)initWithNotificationCenter:(id)notificationCenter;	// 0x346cb209
- (void)_flushNotificationQueue;	// 0x346cb31d
- (void)dealloc;	// 0x346cb2bd
- (void)dequeueNotificationsMatching:(id)matching coalesceMask:(unsigned)mask;	// 0x346cb7bd
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style;	// 0x346cb365
- (void)enqueueNotification:(id)notification postingStyle:(unsigned)style coalesceMask:(unsigned)mask forModes:(id)modes;	// 0x346cb389
@end

