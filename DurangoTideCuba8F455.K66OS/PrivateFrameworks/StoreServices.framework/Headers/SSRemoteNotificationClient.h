/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"


@interface SSRemoteNotificationClient : NSObject {
@private
	dispatch_queue_s *_dispatchQueue;	// 4 = 0x4
	int _notifyToken;	// 8 = 0x8
}
+ (id)sharedClient;	// 0x3274087d
- (id)init;	// 0x327403b5
- (void)dealloc;	// 0x327403f9
- (id)popQueuedNotifications;	// 0x327404f1
- (void)registerForRemoteNotifications;	// 0x327406b5
- (void)unregisterForRemoteNotifications;	// 0x32740669
@end

