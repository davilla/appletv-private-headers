/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSOperation.h> // Unknown library

@class NSData, NSDictionary, NSError, CPDistributedMessagingCenter, NSString, NSThread;

@interface CPDistributedMessagingAsyncOperation : NSOperation {
	CPDistributedMessagingCenter *_center;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	NSData *_userInfoData;	// 20 = 0x14
	NSString *_oolKey;	// 24 = 0x18
	NSData *_oolData;	// 28 = 0x1c
	id _target;	// 32 = 0x20
	SEL _selector;	// 36 = 0x24
	void *_context;	// 40 = 0x28
	BOOL _makeServer;	// 44 = 0x2c
	NSThread *_calloutThread;	// 48 = 0x30
	NSDictionary *_reply;	// 52 = 0x34
	NSError *_error;	// 56 = 0x38
}
- (id)initWithCenter:(id)center messageName:(id)name userInfoData:(id)data oolKey:(id)key oolData:(id)data5 target:(id)target selector:(SEL)selector context:(void *)context makeServer:(BOOL)server;	// 0x31a07b65
- (void)_performCallout;	// 0x31a078bd
- (void)_releaseSendingData;	// 0x31a07a45
- (void)dealloc;	// 0x31a07ab5
- (void)main;	// 0x31a0792d
@end

