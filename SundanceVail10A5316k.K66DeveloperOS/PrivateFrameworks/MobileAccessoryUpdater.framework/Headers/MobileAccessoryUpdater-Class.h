/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MobileAccessoryUpdater.framework/MobileAccessoryUpdater
 */

#import "MobileAccessoryUpdater-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;
@protocol MobileAccessoryUpdaterDelegate;

@interface MobileAccessoryUpdater : NSObject {
@private
	id<MobileAccessoryUpdaterDelegate> _delegate;	// 4 = 0x4
	NSString *_bundleIdentifier;	// 8 = 0x8
	NSString *_clientIdentifier;	// 12 = 0xc
	char *_cClientIdentifier;	// 16 = 0x10
	xpc_connection_s *_connection;	// 20 = 0x14
	dispatch_queue_s *_sessionQueue;	// 24 = 0x18
	dispatch_queue_s *_callbackQueue;	// 28 = 0x1c
	NSString *_activeFilter;	// 32 = 0x20
}
- (id)initWithGroupIdentifer:(id)groupIdentifer delegate:(id)delegate options:(id)options error:(id *)error;	// 0x30da3565
- (id)initWithPluginIdentifier:(id)pluginIdentifier delegate:(id)delegate options:(id)options error:(id *)error;	// 0x30da358d
- (id)initWithPluginIdentifier:(id)pluginIdentifier isGroupIdentifier:(BOOL)identifier delegate:(id)delegate options:(id)options error:(id *)error;	// 0x30da35b5
- (void)createConnection;	// 0x30da3965
- (BOOL)createSession;	// 0x30da3e01
- (void)dealloc;	// 0x30da48f9
- (BOOL)doesOperationCodeRequireFilter:(int)filter;	// 0x30da41a9
- (id)getActiveDeviceClass;	// 0x30da47c5
- (const char *)getActiveDeviceClassCString;	// 0x30da47d5
- (int)getOperationCodeFromName:(id)name;	// 0x30da40a9
- (void)handleInboundEvent:(void *)event;	// 0x30da3f31
- (void)performNextStepWithOptions:(id)options;	// 0x30da4889
- (void)performStep:(id)step withOptions:(id)options;	// 0x30da4805
- (id)queryNextStep:(id *)step;	// 0x30da4315
- (BOOL)registerForBSDNotifications;	// 0x30da3899
- (BOOL)registerForIdentifier:(id)identifier isGroupIdentifier:(BOOL)identifier2;	// 0x30da3ae1
- (BOOL)sendMessageForCommand:(int)command withOptions:(id)options requiresFilter:(BOOL)filter;	// 0x30da41d9
- (BOOL)setActiveDeviceClass:(id)aClass;	// 0x30da4769
- (BOOL)setLastRemoteFindDate:(id)date;	// 0x30da48a5
@end

