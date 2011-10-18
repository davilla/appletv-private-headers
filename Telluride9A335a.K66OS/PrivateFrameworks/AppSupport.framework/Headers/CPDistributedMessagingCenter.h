/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSOperationQueue, NSMutableDictionary, NSString, CPDistributedMessagingCallout;

@interface CPDistributedMessagingCenter : NSObject {
	NSString *_centerName;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	unsigned _sendPort;	// 12 = 0xc
	NSOperationQueue *_asyncQueue;	// 16 = 0x10
	CFRunLoopSourceRef _serverSource;	// 20 = 0x14
	NSString *_requiredEntitlement;	// 24 = 0x18
	NSMutableDictionary *_callouts;	// 28 = 0x1c
	unsigned _parkedServerPort;	// 32 = 0x20
	CPDistributedMessagingCallout *_currentCallout;	// 36 = 0x24
	unsigned _replyPort;	// 40 = 0x28
	BOOL _portPassing;	// 44 = 0x2c
	BOOL _delayedReply;	// 45 = 0x2d
}
+ (id)centerNamed:(id)named;	// 0x340698b9
- (void)_dispatchMessageNamed:(id)named userInfo:(id)info reply:(id *)reply auditToken:(XXStruct_kUSYWB *)token;	// 0x34069c51
- (id)_initAnonymousServer;	// 0x3406967d
- (id)_initClientWithPort:(unsigned)port;	// 0x3406892d
- (id)_initWithServerName:(id)serverName;	// 0x340688bd
- (BOOL)_isTaskEntitled:(XXStruct_kUSYWB *)entitled;	// 0x34069a3d
- (id)_requiredEntitlement;	// 0x34068705
- (BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id *)reply error:(id *)error toTarget:(id)target selector:(SEL)selector context:(void *)context;	// 0x34068cc5
- (BOOL)_sendMessage:(id)message userInfo:(id)info receiveReply:(id *)reply error:(id *)error toTarget:(id)target selector:(SEL)selector context:(void *)context nonBlocking:(BOOL)blocking;	// 0x3406a641
- (BOOL)_sendMessage:(id)message userInfoData:(id)data oolKey:(id)key oolData:(id)data4 makeServer:(BOOL)server receiveReply:(id *)reply nonBlocking:(BOOL)blocking error:(id *)error;	// 0x3406a159
- (unsigned)_sendPort;	// 0x3406a9b5
- (void)_sendReplyMessage:(id)message portPassing:(BOOL)passing onMachPort:(unsigned)port;	// 0x34069b29
- (unsigned)_serverPort;	// 0x3406971d
- (void)_setSendPort:(unsigned)port;	// 0x340689e5
- (void)_setupInvalidationSource;	// 0x3406aaa5
- (void)dealloc;	// 0x34069781
- (id)delayReply;	// 0x34068f01
- (BOOL)doesServerExist;	// 0x34069209
- (id)name;	// 0x340686f5
- (void)registerForMessageName:(id)messageName target:(id)target selector:(SEL)selector;	// 0x34068d21
- (void)runServerOnCurrentThread;	// 0x34068d0d
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)entitlement;	// 0x34069ec1
- (void)sendDelayedReply:(id)reply dictionary:(id)dictionary;	// 0x340690a9
- (id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info;	// 0x34068b61
- (id)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info error:(id *)error;	// 0x34068b99
- (void)sendMessageAndReceiveReplyName:(id)name userInfo:(id)info toTarget:(id)target selector:(SEL)selector context:(void *)context;	// 0x34068bd5
- (BOOL)sendMessageName:(id)name userInfo:(id)info;	// 0x34068afd
- (BOOL)sendNonBlockingMessageName:(id)name userInfo:(id)info;	// 0x34068b31
- (void)stopServer;	// 0x34069e55
- (void)unregisterForMessageName:(id)messageName;	// 0x34069119
@end

