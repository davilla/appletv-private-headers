/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import <NSObject.h> // Unknown library

@class NSMachPort;

__attribute__((visibility("hidden")))
@interface PCDarwinNotificationRunLoopSource : NSObject {
@private
	id _target;	// 4 = 0x4
	SEL _selector;	// 8 = 0x8
	NSMachPort *_port;	// 12 = 0xc
	int _notifyToken;	// 16 = 0x10
}
- (id)initWithDarwinNotificationName:(id)darwinNotificationName target:(id)target selector:(SEL)selector;	// 0x30262851
- (void)dealloc;	// 0x302627b5
- (void)handleMachMessage:(void *)message;	// 0x30262745
- (void)invalidate;	// 0x302627f1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x30262775
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x30262795
@end

