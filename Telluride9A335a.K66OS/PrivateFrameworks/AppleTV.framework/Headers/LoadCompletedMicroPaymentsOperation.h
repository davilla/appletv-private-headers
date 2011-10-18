/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"
#import "ISStoreURLOperationDelegate.h"

@class ClientIdentity;
@protocol LoadCompletedMicroPaymentsDelegate;

__attribute__((visibility("hidden")))
@interface LoadCompletedMicroPaymentsOperation : ISOperation <ISStoreURLOperationDelegate> {
@private
	ClientIdentity *_clientIdentity;	// 60 = 0x3c
	BOOL _partialFailure;	// 64 = 0x40
}
@property(retain) ClientIdentity *clientIdentity;	// G=0x343476fd; S=0x34347711; @synthesize=_clientIdentity
@property(assign) id<LoadCompletedMicroPaymentsDelegate> delegate;	// @dynamic
@property(assign, getter=isPartialFailure) BOOL partialFailure;	// G=0x34347735; S=0x34347745; @synthesize=_partialFailure
- (id)_copyResponseForApplication:(id)application startID:(id)anId endID:(id)anId3 returningError:(id *)error;	// 0x34346f9d
- (id)_newFetchOperationForApplication:(id)application startID:(id)anId endID:(id)anId3;	// 0x343470fd
- (void)_runForApplication:(id)application;	// 0x34347401
- (void)_sendQueueResponseToDelegate:(id)delegate;	// 0x343476a5
// declared property getter: - (id)clientIdentity;	// 0x343476fd
- (void)dealloc;	// 0x34346ddd
// declared property getter: - (BOOL)isPartialFailure;	// 0x34347735
- (void)run;	// 0x34346e31
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x34347711
// declared property setter: - (void)setPartialFailure:(BOOL)failure;	// 0x34347745
@end

