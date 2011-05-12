/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSMutableSet;

@interface AVObjectRegistry : NSObject {
	NSMutableSet *_registeredObjects;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
}
+ (id)defaultObjectRegistry;	// 0x3264aa81
- (id)init;	// 0x3264aac5
- (void)dealloc;	// 0x3265dac5
- (void)finishedRelease;	// 0x3265d995
- (BOOL)isObjectRegistered:(id)registered;	// 0x32651979
- (void)registerObject:(id)object;	// 0x3264ab55
- (void)registerObjectForSafeRetain:(id)safeRetain;	// 0x3265da49
- (void)safeInvokeWithDescription:(id)description;	// 0x326526c1
- (void)safeInvokeWithDescriptionDelayed:(id)descriptionDelayed;	// 0x32653655
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x326500d9
- (void)safePerformOnMainThreadTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x3265d7b9
- (void)safePerformOnThread:(id)thread target:(id)target selector:(SEL)selector object:(id)object;	// 0x32655705
- (void)safePerformTarget:(id)target selector:(SEL)selector object:(id)object delay:(double)delay;	// 0x32653561
- (void)safePostDelayedNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x32657565
- (void)safePostDelayedNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x3265d6a5
- (void)safePostNotificationFromMainThreadTarget:(id)mainThreadTarget name:(id)name userInfo:(id)info;	// 0x32653031
- (void)safePostNotificationFromThread:(id)thread target:(id)target name:(id)name userInfo:(id)info;	// 0x3265d72d
- (BOOL)safeRetainObject:(id)object;	// 0x3265d9b5
- (BOOL)shouldReleaseObject:(id)object requireThread:(id)thread;	// 0x3265d8c1
- (void)unregisterObject:(id)object;	// 0x32654c79
@end

