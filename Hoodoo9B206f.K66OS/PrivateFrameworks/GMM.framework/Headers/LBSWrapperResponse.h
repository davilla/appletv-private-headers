/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLocResponse;

@interface LBSWrapperResponse : PBCodable {
	BOOL _hasStatus;	// 4 = 0x4
	int _status;	// 8 = 0x8
	LBSGLocResponse *_reply;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasReply;	// G=0x33ce0849; 
@property(assign, nonatomic) BOOL hasStatus;	// G=0x33ce0bf5; S=0x33ce0c05; @synthesize=_hasStatus
@property(retain, nonatomic) LBSGLocResponse *reply;	// G=0x33ce0c25; S=0x33ce0c35; @synthesize=_reply
@property(assign, nonatomic) int status;	// G=0x33ce0c15; S=0x33ce0825; @synthesize=_status
- (void)dealloc;	// 0x33ce07e1
- (id)description;	// 0x33ce0861
- (id)dictionaryRepresentation;	// 0x33ce08d1
// declared property getter: - (BOOL)hasReply;	// 0x33ce0849
// declared property getter: - (BOOL)hasStatus;	// 0x33ce0bf5
- (BOOL)readFrom:(id)from;	// 0x33ce097d
// declared property getter: - (id)reply;	// 0x33ce0c25
// declared property setter: - (void)setHasStatus:(BOOL)status;	// 0x33ce0c05
// declared property setter: - (void)setReply:(id)reply;	// 0x33ce0c35
// declared property setter: - (void)setStatus:(int)status;	// 0x33ce0825
// declared property getter: - (int)status;	// 0x33ce0c15
- (void)writeTo:(id)to;	// 0x33ce0b1d
@end
