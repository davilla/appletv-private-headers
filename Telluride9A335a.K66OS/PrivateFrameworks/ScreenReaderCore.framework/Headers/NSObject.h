/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library


@interface NSObject (SCRCThread)
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x323a2099
+ (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x323a4041
- (id)_getRetainedValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time copy:(BOOL)copy;	// 0x323a3b75
- (id)_getRetainedValueForKeyPathOnMainThread:(id)keyPathOnMainThread copy:(BOOL)copy;	// 0x323a2e65
- (void)_scr_safeGetValueForBlock:(id)block lock:(id)lock;	// 0x323a3ab9
- (void)_scr_safeGetValueForKeyPath:(id)keyPath;	// 0x323a2f71
- (void)_scr_safeGetValueForKeyPath:(id)keyPath lock:(id)lock;	// 0x323a2f85
- (void)_scr_safeGetValueForSelector:(id)selector lock:(id)lock;	// 0x323a4225
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x323a3d59
- (id)copyValueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x323a3d81
- (id)copyValueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x323a32c9
- (id)performSelector:(SEL)selector withObjectsAsArray:(id)objectsAsArray;	// 0x323a3f29
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey count:(unsigned long)count objects:(id)objects;	// 0x323a08fd
- (double)performSelector:(SEL)selector withThreadKey:(id)threadKey waitTime:(double)time cancelMask:(unsigned long)mask count:(unsigned long)count objects:(id)objects;	// 0x323a29bd
- (id)threadDescription;	// 0x323a4209
- (id)valueForBlock:(id)block forThreadKey:(id)threadKey waitTime:(double)time;	// 0x323a3dad
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey;	// 0x323a3cf5
- (id)valueForKeyPath:(id)keyPath forThreadKey:(id)threadKey waitTime:(double)time;	// 0x323a3d1d
- (id)valueForKeyPathOnMainThread:(id)keyPathOnMainThread;	// 0x323a2e39
- (id)valueForSelector:(SEL)selector forThreadKey:(id)threadKey waitTime:(double)time copyValue:(BOOL)value withObjects:(id)objects;	// 0x323a4391
@end

