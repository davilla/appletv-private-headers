/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSData, NSString, NSNumber;

@interface FTRelayCancelMessage : FTMessage {
	NSString *_peerID;	// 24 = 0x18
	NSData *_peerPushToken;	// 28 = 0x1c
	NSNumber *_relayType;	// 32 = 0x20
	NSNumber *_reason;	// 36 = 0x24
	NSData *_relayConnectionID;	// 40 = 0x28
	NSData *_selfRelayIP;	// 44 = 0x2c
	NSNumber *_selfRelayPort;	// 48 = 0x30
	NSData *_peerRelayIP;	// 52 = 0x34
	NSNumber *_peerRelayPort;	// 56 = 0x38
}
@property(copy) NSString *peerID;	// G=0x33fa40c5; S=0x33fa419d; @synthesize=_peerID
@property(copy) NSData *peerPushToken;	// G=0x33fa40dd; S=0x33fa41c5; @synthesize=_peerPushToken
@property(copy) NSData *peerRelayIP;	// G=0x33fa416d; S=0x33fa42b5; @synthesize=_peerRelayIP
@property(copy) NSNumber *peerRelayPort;	// G=0x33fa4185; S=0x33fa42dd; @synthesize=_peerRelayPort
@property(copy) NSNumber *reason;	// G=0x33fa410d; S=0x33fa4215; @synthesize=_reason
@property(copy) NSData *relayConnectionID;	// G=0x33fa4125; S=0x33fa423d; @synthesize=_relayConnectionID
@property(copy) NSNumber *relayType;	// G=0x33fa40f5; S=0x33fa41ed; @synthesize=_relayType
@property(copy) NSData *selfRelayIP;	// G=0x33fa413d; S=0x33fa4265; @synthesize=_selfRelayIP
@property(copy) NSNumber *selfRelayPort;	// G=0x33fa4155; S=0x33fa428d; @synthesize=_selfRelayPort
- (id)bagKey;	// 0x33fa39c9
- (void)dealloc;	// 0x33fa3ab9
- (id)messageBody;	// 0x33fa3b91
// declared property getter: - (id)peerID;	// 0x33fa40c5
// declared property getter: - (id)peerPushToken;	// 0x33fa40dd
// declared property getter: - (id)peerRelayIP;	// 0x33fa416d
// declared property getter: - (id)peerRelayPort;	// 0x33fa4185
// declared property getter: - (id)reason;	// 0x33fa410d
// declared property getter: - (id)relayConnectionID;	// 0x33fa4125
// declared property getter: - (id)relayType;	// 0x33fa40f5
- (id)requiredKeys;	// 0x33fa39d5
// declared property getter: - (id)selfRelayIP;	// 0x33fa413d
// declared property getter: - (id)selfRelayPort;	// 0x33fa4155
// declared property setter: - (void)setPeerID:(id)anId;	// 0x33fa419d
// declared property setter: - (void)setPeerPushToken:(id)token;	// 0x33fa41c5
// declared property setter: - (void)setPeerRelayIP:(id)ip;	// 0x33fa42b5
// declared property setter: - (void)setPeerRelayPort:(id)port;	// 0x33fa42dd
// declared property setter: - (void)setReason:(id)reason;	// 0x33fa4215
// declared property setter: - (void)setRelayConnectionID:(id)anId;	// 0x33fa423d
// declared property setter: - (void)setRelayType:(id)type;	// 0x33fa41ed
// declared property setter: - (void)setSelfRelayIP:(id)ip;	// 0x33fa4265
// declared property setter: - (void)setSelfRelayPort:(id)port;	// 0x33fa428d
@end

