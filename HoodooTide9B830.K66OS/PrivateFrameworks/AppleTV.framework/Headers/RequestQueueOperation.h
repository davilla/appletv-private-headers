/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ClientIdentity, NSString, XPCClient;

__attribute__((visibility("hidden")))
@interface RequestQueueOperation : ISOperation {
@private
	XPCClient *_client;	// 60 = 0x3c
	ClientIdentity *_clientIdentity;	// 64 = 0x40
	BOOL _disconnected;	// 68 = 0x44
	NSString *_requestGroupIdentifier;	// 72 = 0x48
	NSString *_requestIdentifier;	// 76 = 0x4c
}
@property(retain) XPCClient *client;	// G=0x32b4eadd; S=0x32b4ec31; 
@property(assign, getter=isClientConnected) BOOL clientConnected;	// G=0x32b4ebed; S=0x32b4ec99; 
@property(retain) ClientIdentity *clientIdentity;	// G=0x32b4ece1; S=0x32b4ecf5; @synthesize=_clientIdentity
@property(retain) NSString *requestGroupIdentifier;	// G=0x32b4ed19; S=0x32b4ed2d; @synthesize=_requestGroupIdentifier
@property(retain) NSString *requestIdentifier;	// G=0x32b4ed51; S=0x32b4ed65; @synthesize=_requestIdentifier
- (id)initWithRequest:(id)request;	// 0x32b4e9c9
// declared property getter: - (id)client;	// 0x32b4eadd
// declared property getter: - (id)clientIdentity;	// 0x32b4ece1
- (id)copyRequest;	// 0x32b4eb3d
- (id)copyResponseDictionary;	// 0x32b4eb41
- (void)dealloc;	// 0x32b4ea55
// declared property getter: - (BOOL)isClientConnected;	// 0x32b4ebed
// declared property getter: - (id)requestGroupIdentifier;	// 0x32b4ed19
// declared property getter: - (id)requestIdentifier;	// 0x32b4ed51
// declared property setter: - (void)setClient:(id)client;	// 0x32b4ec31
// declared property setter: - (void)setClientConnected:(BOOL)connected;	// 0x32b4ec99
// declared property setter: - (void)setClientIdentity:(id)identity;	// 0x32b4ecf5
// declared property setter: - (void)setRequestGroupIdentifier:(id)identifier;	// 0x32b4ed2d
// declared property setter: - (void)setRequestIdentifier:(id)identifier;	// 0x32b4ed65
@end

