/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionDefinition : PBCodable {
@private
	int _iD;	// 4 = 0x4
	NSString *_optionText;	// 8 = 0x8
	int _type;	// 12 = 0xc
	NSMutableArray *_allowableValuess;	// 16 = 0x10
	int _defaultValue;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableArray *allowableValuess;	// G=0x32b9989d; S=0x32b9a0a5; @synthesize=_allowableValuess
@property(readonly, assign, nonatomic) int allowableValuessCount;	// G=0x32b99ffd; 
@property(assign, nonatomic) int defaultValue;	// G=0x32b9987d; S=0x32b9988d; @synthesize=_defaultValue
@property(assign, nonatomic) int iD;	// G=0x32b998dd; S=0x32b998ed; @synthesize=_iD
@property(retain, nonatomic) NSString *optionText;	// G=0x32b998cd; S=0x32b9a07d; @synthesize=_optionText
@property(assign, nonatomic) int type;	// G=0x32b998ad; S=0x32b998bd; @synthesize=_type
- (id)init;	// 0x32b998fd
- (void)addAllowableValues:(id)values;	// 0x32b99f01
- (id)allowableValuesAtIndex:(unsigned)index;	// 0x32b99f31
// declared property getter: - (id)allowableValuess;	// 0x32b9989d
// declared property getter: - (int)allowableValuessCount;	// 0x32b99ffd
- (void)dealloc;	// 0x32b9a021
// declared property getter: - (int)defaultValue;	// 0x32b9987d
- (id)description;	// 0x32b99a25
- (id)dictionaryRepresentation;	// 0x32b99929
// declared property getter: - (int)iD;	// 0x32b998dd
// declared property getter: - (id)optionText;	// 0x32b998cd
- (BOOL)readFrom:(id)from;	// 0x32b99d2d
- (void)setAllowableValues:(id)values atIndex:(unsigned)index;	// 0x32b99f95
// declared property setter: - (void)setAllowableValuess:(id)valuess;	// 0x32b9a0a5
// declared property setter: - (void)setDefaultValue:(int)value;	// 0x32b9988d
// declared property setter: - (void)setID:(int)anId;	// 0x32b998ed
// declared property setter: - (void)setOptionText:(id)text;	// 0x32b9a07d
// declared property setter: - (void)setType:(int)type;	// 0x32b998bd
// declared property getter: - (int)type;	// 0x32b998ad
- (void)writeTo:(id)to;	// 0x32b99ba1
@end

