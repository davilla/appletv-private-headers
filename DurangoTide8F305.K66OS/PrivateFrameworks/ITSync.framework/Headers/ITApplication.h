/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ITSync.framework/ITSync
 */

#import <NSObject.h> // Unknown library


@interface ITApplication : NSObject {
}
+ (id)sharedInstance;	// 0x3408ab45
- (void)forwardInvocation:(id)invocation;	// 0x3408a831
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3408a7d1
- (id)newBackgroundTaskWithExpirationHandler:(id)expirationHandler debugInfo:(id)info;	// 0x3408a245
- (void)registerForApplicationStateNotifications:(id)applicationStateNotifications enteredBackgroundSelector:(SEL)selector enteringForegroundSelector:(SEL)selector3;	// 0x3408a2dd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3408a781
- (void)unregisterForApplicationStateNotifications:(id)applicationStateNotifications enteredBackgroundSelector:(SEL)selector enteringForegroundSelector:(SEL)selector3;	// 0x3408a279
@end

