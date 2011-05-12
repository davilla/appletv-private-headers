/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSNotificationCenter : NSObject {
@private
	void *_impl;	// 4 = 0x4
	void *_callback_block[4];	// 8 = 0x8
	void *_pad[8];	// 24 = 0x18
}
+ (id)defaultCenter;	// 0x32740441
- (id)init;	// 0x327afb95
- (void)addObserver:(id)observer selector:(SEL)selector name:(id)name object:(id)object;	// 0x3274c7bd
- (id)addObserverForName:(id)name object:(id)object queue:(id)queue usingBlock:(id)block;	// 0x32748edd
- (void)dealloc;	// 0x327afad9
- (id)description;	// 0x327afc35
- (void)finalize;	// 0x327afb19
- (BOOL)isEmpty;	// 0x327afc61
- (void)postNotification:(id)notification;	// 0x32751f91
- (void)postNotificationName:(id)name object:(id)object;	// 0x327421a9
- (void)postNotificationName:(id)name object:(id)object userInfo:(id)info;	// 0x3274058d
- (void)removeObserver:(id)observer;	// 0x3274429d
- (void)removeObserver:(id)observer name:(id)name object:(id)object;	// 0x327442bd
@end

