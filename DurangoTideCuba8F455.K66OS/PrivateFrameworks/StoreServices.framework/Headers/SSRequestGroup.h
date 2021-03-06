/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableSet, NSArray;

@interface SSRequestGroup : NSObject {
@private
	NSString *_identifier;	// 4 = 0x4
	NSMutableSet *_requests;	// 8 = 0x8
	Class _requestClass;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *groupIdentifier;	// G=0x3272a86d; @synthesize=_identifier
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x3272a991; 
- (id)init;	// 0x3272aaf9
- (id)initWithGroupIdentifier:(id)groupIdentifier;	// 0x3272aae1
- (id)initWithGroupIdentifier:(id)groupIdentifier requestClass:(Class)aClass;	// 0x3272aba9
- (void)_daemonExited:(id)exited;	// 0x3272ad5d
- (void)_mainThreadDaemonExited:(id)exited;	// 0x3272a8c5
- (void)_registerForDaemonNotifications;	// 0x3272acf1
- (void)_reloadRequestsFromDaemon;	// 0x3272ada1
- (void)_setGroupIdentifier:(id)identifier forRequestWithIdentifier:(id)identifier2;	// 0x3272af29
- (void)_unregisterForDaemonNotifications;	// 0x3272a87d
- (void)addRequest:(id)request;	// 0x3272a9b1
- (void)dealloc;	// 0x3272ab11
// declared property getter: - (id)groupIdentifier;	// 0x3272a86d
- (void)removeRequest:(id)request;	// 0x3272a905
// declared property getter: - (id)requests;	// 0x3272a991
@end

