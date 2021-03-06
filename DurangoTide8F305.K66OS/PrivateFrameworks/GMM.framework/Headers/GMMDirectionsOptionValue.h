/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionValue : PBCodable {
@private
	int _iD;	// 4 = 0x4
	int _value;	// 8 = 0x8
	BOOL _hasValue;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasValue;	// G=0x32b9a759; @synthesize=_hasValue
@property(assign, nonatomic) int iD;	// G=0x32b9a779; S=0x32b9a789; @synthesize=_iD
@property(assign, nonatomic) int value;	// G=0x32b9a769; S=0x32b9a73d; @synthesize=_value
- (id)init;	// 0x32b9a7c5
- (void)dealloc;	// 0x32b9a799
- (id)description;	// 0x32b9a899
- (id)dictionaryRepresentation;	// 0x32b9a7f1
// declared property getter: - (BOOL)hasValue;	// 0x32b9a759
// declared property getter: - (int)iD;	// 0x32b9a779
- (BOOL)readFrom:(id)from;	// 0x32b9a9d5
// declared property setter: - (void)setID:(int)anId;	// 0x32b9a789
// declared property setter: - (void)setValue:(int)value;	// 0x32b9a73d
// declared property getter: - (int)value;	// 0x32b9a769
- (void)writeTo:(id)to;	// 0x32b9a97d
@end

