/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, SSXPCConnection;
@protocol SSDownloadHandlerDelegate;

@interface SSDownloadHandler : NSObject {
@private
	SSXPCConnection *_controlConnection;	// 4 = 0x4
	id<SSDownloadHandlerDelegate> _delegate;	// 8 = 0x8
	dispatch_queue_s *_dispatchQueue;	// 12 = 0xc
	NSArray *_downloadPhasesToIgnore;	// 16 = 0x10
	long long _handlerID;	// 20 = 0x14
	SSXPCConnection *_observerConnection;	// 28 = 0x1c
	BOOL _sessionsNeedPowerAssertion;	// 32 = 0x20
	BOOL _sessionsShouldBlockOtherDownloads;	// 33 = 0x21
}
@property(assign) id<SSDownloadHandlerDelegate> delegate;	// G=0x3421121d; S=0x3421179d; 
@property(copy) NSArray *downloadPhasesToIgnore;	// G=0x342113cd; S=0x34211849; 
@property(readonly, assign) long long handlerIdentifier;	// G=0x34211569; 
@property(assign) BOOL sessionsNeedPowerAssertion;	// G=0x342115f5; S=0x3421195d; 
@property(assign) BOOL sessionsShouldBlockOtherDownloads;	// G=0x342116c9; S=0x34211a11; 
- (id)init;	// 0x34210f69
- (void)_connectToDaemon;	// 0x34211cc5
- (id)_controlConnection;	// 0x34212159
- (void)_handleMessage:(void *)message fromServerConnection:(xpc_connection_s *)serverConnection;	// 0x342122f5
- (id)_newSessionWithMessage:(void *)message;	// 0x342124e9
- (BOOL)_sendAuthenticationSessionWithMessage:(void *)message;	// 0x34212559
- (void)_sendDisconnectMessage;	// 0x34212655
- (BOOL)_sendSessionCancelWithMessage:(void *)message;	// 0x342126c5
- (BOOL)_sendSessionHandleWithMessage:(void *)message;	// 0x3421276d
- (BOOL)_sendSessionPauseWithMessage:(void *)message;	// 0x34212815
- (void)_setValue:(void *)value forProperty:(const char *)property;	// 0x342128c1
- (void)dealloc;	// 0x342110f9
// declared property getter: - (id)delegate;	// 0x3421121d
- (id)description;	// 0x34211ac5
// declared property getter: - (id)downloadPhasesToIgnore;	// 0x342113cd
// declared property getter: - (long long)handlerIdentifier;	// 0x34211569
- (void)resetDisavowedSessions;	// 0x34211581
// declared property getter: - (BOOL)sessionsNeedPowerAssertion;	// 0x342115f5
// declared property getter: - (BOOL)sessionsShouldBlockOtherDownloads;	// 0x342116c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3421179d
// declared property setter: - (void)setDownloadPhasesToIgnore:(id)ignore;	// 0x34211849
// declared property setter: - (void)setSessionsNeedPowerAssertion:(BOOL)assertion;	// 0x3421195d
// declared property setter: - (void)setSessionsShouldBlockOtherDownloads:(BOOL)blockOtherDownloads;	// 0x34211a11
@end

