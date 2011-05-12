/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayInitateMessage : FTMessage {
	NSData *_selfPushToken;	// 24 = 0x18
	NSNumber *_selfNatType;	// 28 = 0x1c
	NSNumber *_selfNATIP;	// 32 = 0x20
	NSString *_peerID;	// 36 = 0x24
	NSData *_peerPushToken;	// 40 = 0x28
	NSNumber *_peerNatType;	// 44 = 0x2c
	NSNumber *_peerNATIP;	// 48 = 0x30
	NSNumber *_relayType;	// 52 = 0x34
	NSData *_relayConnectionId;	// 56 = 0x38
	NSData *_relayTransactionIdAlloc;	// 60 = 0x3c
	NSData *_relayTokenAllocReq;	// 64 = 0x40
	NSData *_selfRelayIP;	// 68 = 0x44
	NSNumber *_selfRelayPort;	// 72 = 0x48
	NSData *_peerRelayIP;	// 76 = 0x4c
	NSNumber *_peerRelayPort;	// 80 = 0x50
}
@property(copy) NSString *peerID;	// G=0x31c15905; S=0x31c15a9d; @synthesize=_peerID
@property(copy) NSNumber *peerNATIP;	// G=0x31c1594d; S=0x31c15b15; @synthesize=_peerNATIP
@property(copy) NSNumber *peerNatType;	// G=0x31c15935; S=0x31c15aed; @synthesize=_peerNatType
@property(copy) NSData *peerPushToken;	// G=0x31c1591d; S=0x31c15ac5; @synthesize=_peerPushToken
@property(copy) NSData *peerRelayIP;	// G=0x31c159f5; S=0x31c15c2d; @synthesize=_peerRelayIP
@property(copy) NSNumber *peerRelayPort;	// G=0x31c15a0d; S=0x31c15c55; @synthesize=_peerRelayPort
@property(copy) NSData *relayConnectionId;	// G=0x31c1597d; S=0x31c15b65; @synthesize=_relayConnectionId
@property(copy) NSData *relayTokenAllocReq;	// G=0x31c159ad; S=0x31c15bb5; @synthesize=_relayTokenAllocReq
@property(copy) NSData *relayTransactionIdAlloc;	// G=0x31c15995; S=0x31c15b8d; @synthesize=_relayTransactionIdAlloc
@property(copy) NSNumber *relayType;	// G=0x31c15965; S=0x31c15b3d; @synthesize=_relayType
@property(copy) NSNumber *selfNATIP;	// G=0x31c158ed; S=0x31c15a75; @synthesize=_selfNATIP
@property(copy) NSNumber *selfNatType;	// G=0x31c158d5; S=0x31c15a4d; @synthesize=_selfNatType
@property(copy) NSData *selfPushToken;	// G=0x31c158bd; S=0x31c15a25; @synthesize=_selfPushToken
@property(copy) NSData *selfRelayIP;	// G=0x31c159c5; S=0x31c15bdd; @synthesize=_selfRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x31c159dd; S=0x31c15c05; @synthesize=_selfRelayPort
- (id)bagKey;	// 0x31c15129
- (void)dealloc;	// 0x31c15391
- (void)handleResponseDictionary:(id)dictionary;	// 0x31c15135
- (id)messageBody;	// 0x31c154d5
// declared property getter: - (id)peerID;	// 0x31c15905
// declared property getter: - (id)peerNATIP;	// 0x31c1594d
// declared property getter: - (id)peerNatType;	// 0x31c15935
// declared property getter: - (id)peerPushToken;	// 0x31c1591d
// declared property getter: - (id)peerRelayIP;	// 0x31c159f5
// declared property getter: - (id)peerRelayPort;	// 0x31c15a0d
// declared property getter: - (id)relayConnectionId;	// 0x31c1597d
// declared property getter: - (id)relayTokenAllocReq;	// 0x31c159ad
// declared property getter: - (id)relayTransactionIdAlloc;	// 0x31c15995
// declared property getter: - (id)relayType;	// 0x31c15965
- (id)requiredKeys;	// 0x31c152cd
// declared property getter: - (id)selfNATIP;	// 0x31c158ed
// declared property getter: - (id)selfNatType;	// 0x31c158d5
// declared property getter: - (id)selfPushToken;	// 0x31c158bd
// declared property getter: - (id)selfRelayIP;	// 0x31c159c5
// declared property getter: - (id)selfRelayPort;	// 0x31c159dd
// declared property setter: - (void)setPeerID:(id)anId;	// 0x31c15a9d
// declared property setter: - (void)setPeerNATIP:(id)natip;	// 0x31c15b15
// declared property setter: - (void)setPeerNatType:(id)type;	// 0x31c15aed
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x31c15ac5
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x31c15c2d
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x31c15c55
// declared property setter: - (void)setRelayConnectionId:(id)anId;	// 0x31c15b65
// declared property setter: - (void)setRelayTokenAllocReq:(id)req;	// 0x31c15bb5
// declared property setter: - (void)setRelayTransactionIdAlloc:(id)alloc;	// 0x31c15b8d
// declared property setter: - (void)setRelayType:(id)type;	// 0x31c15b3d
// declared property setter: - (void)setSelfNATIP:(id)natip;	// 0x31c15a75
// declared property setter: - (void)setSelfNatType:(id)type;	// 0x31c15a4d
// declared property setter: - (void)setSelfPushToken:(id)token;	// 0x31c15a25
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x31c15bdd
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x31c15c05
@end

