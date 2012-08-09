/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

@interface GEOIndexQueryNode : PBCodable {
	NSString *_field;	// 4 = 0x4
	NSMutableArray *_operands;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *field;	// G=0x37a57bf9; S=0x37a57c09; @synthesize=_field
@property(readonly, assign, nonatomic) BOOL hasField;	// G=0x37a57139; 
@property(readonly, assign, nonatomic) BOOL hasValue;	// G=0x37a57151; 
@property(retain, nonatomic) NSMutableArray *operands;	// G=0x37a57c39; S=0x37a57c49; @synthesize=_operands
@property(assign, nonatomic) int type;	// G=0x37a57bd9; S=0x37a57be9; @synthesize=_type
@property(retain, nonatomic) NSString *value;	// G=0x37a57c19; S=0x37a57c29; @synthesize=_value
- (void)addOperands:(id)operands;	// 0x37a57189
- (void)clearOperands;	// 0x37a57169
- (void)copyTo:(id)to;	// 0x37a57945
- (void)dealloc;	// 0x37a570cd
- (id)description;	// 0x37a57235
- (id)dictionaryRepresentation;	// 0x37a572a5
// declared property getter: - (id)field;	// 0x37a57bf9
// declared property getter: - (BOOL)hasField;	// 0x37a57139
// declared property getter: - (BOOL)hasValue;	// 0x37a57151
- (unsigned)hash;	// 0x37a57b4d
- (BOOL)isEqual:(id)equal;	// 0x37a57a65
// declared property getter: - (id)operands;	// 0x37a57c39
- (id)operandsAtIndex:(unsigned)index;	// 0x37a57215
- (unsigned)operandsCount;	// 0x37a571f5
- (BOOL)readFrom:(id)from;	// 0x37a57789
// declared property setter: - (void)setField:(id)field;	// 0x37a57c09
// declared property setter: - (void)setOperands:(id)operands;	// 0x37a57c49
// declared property setter: - (void)setType:(int)type;	// 0x37a57be9
// declared property setter: - (void)setValue:(id)value;	// 0x37a57c29
// declared property getter: - (int)type;	// 0x37a57bd9
// declared property getter: - (id)value;	// 0x37a57c19
- (void)writeTo:(id)to;	// 0x37a57795
@end
