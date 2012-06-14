/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class NSString, NSRecursiveLock;

@interface ISTelephonyObserver : NSObject <ISSingleton> {
	CTServerConnectionRef _connection;	// 4 = 0x4
	CFMachPortRef _connectionPort;	// 8 = 0x8
	CFRunLoopSourceRef _connectionRunLoopSource;	// 12 = 0xc
	NSString *_dataStatusIndicator;	// 16 = 0x10
	NSRecursiveLock *_lock;	// 20 = 0x14
	NSString *_operatorName;	// 24 = 0x18
	CFRunLoopRef _runLoop;	// 28 = 0x1c
}
@property(readonly, assign) NSString *dataStatusIndicator;	// G=0x3011b411; 
@property(readonly, assign) NSString *operatorName;	// G=0x3011b4dd; 
+ (void)setSharedInstance:(id)instance;	// 0x3011b205
+ (id)sharedInstance;	// 0x3011b259
- (id)init;	// 0x3011b12d
- (BOOL)_establishServerConnection;	// 0x3011b58d
- (void)_handleMessage:(void *)message withSize:(long)size;	// 0x3011b819
- (void)_handleNotificationWithName:(CFStringRef)name userInfo:(CFDictionaryRef)info;	// 0x3011b871
- (void)_handleServerInvalidated;	// 0x3011b9a5
- (void)_invalidateServerConnection;	// 0x3011b6f1
- (void)_registerForNotifications;	// 0x3011b7d1
- (BOOL)beginObservingOnRunLoop:(CFRunLoopRef)loop;	// 0x3011b2cd
// declared property getter: - (id)dataStatusIndicator;	// 0x3011b411
- (void)dealloc;	// 0x3011b191
// declared property getter: - (id)operatorName;	// 0x3011b4dd
@end
