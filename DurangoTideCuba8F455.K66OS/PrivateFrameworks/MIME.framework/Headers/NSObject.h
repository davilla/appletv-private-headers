/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"


@protocol NSObject
- (id)autorelease;
- (Class)class;
- (BOOL)conformsToProtocol:(id)protocol;
- (id)description;
- (unsigned)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isKindOfClass:(Class)aClass;
- (BOOL)isMemberOfClass:(Class)aClass;
- (BOOL)isProxy;
- (id)performSelector:(SEL)selector;
- (id)performSelector:(SEL)selector withObject:(id)object;
- (id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
- (oneway void)release;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)retain;
- (unsigned)retainCount;
- (id)self;
- (Class)superclass;
- (NSZone *)zone;
@end

@interface NSObject (LockingAdditions)
+ (void)mf_clearLocks;	// 0x3150cf9d
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)lock;	// 0x3150c5dd
- (void)_mf_checkToAllowLock:(id)allowLock;	// 0x3150ca79
- (void)_mf_checkToAllowOrderingWithLock:(id)lock;	// 0x3150c859
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)lock;	// 0x3150c72d
- (id)_mf_lockOrderingForType:(int)type;	// 0x3150c995
- (BOOL)_mf_ntsIsLocked;	// 0x3150cb81
- (id)mf_exclusiveLocks;	// 0x3150c54d
- (void)mf_lock;	// 0x3150ded1
- (id)mf_lockOrdering;	// 0x3150c549
- (void)mf_lockWithPriority;	// 0x3150deb1
- (id)mf_strictLockOrdering;	// 0x3150c545
- (BOOL)mf_tryLock;	// 0x3150cdcd
- (BOOL)mf_tryLockWithPriority;	// 0x3150cda9
- (void)mf_unlock;	// 0x3150cdf1
@end

