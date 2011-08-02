/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet;

@interface ATVKeyValueStoreUtilities : NSObject {
@private
	NSMutableSet *_keyValueStores;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x306cc811
- (id)init;	// 0x306cc685
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x306cc40d
- (void)_accountRemovedNotification:(id)notification;	// 0x306cc889
- (void)_startPeriodicCleanupTaskOnKeyValueStore:(id)store;	// 0x306cc509
- (void)dealloc;	// 0x306cc615
- (BOOL)isKeyValueStoreAvailable;	// 0x306cc5ad
- (void)startMonitoringStore:(id)store;	// 0x306cc701
@end

