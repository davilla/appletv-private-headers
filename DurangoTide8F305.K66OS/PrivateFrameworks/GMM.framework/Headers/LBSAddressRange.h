/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface LBSAddressRange : PBCodable {
@private
	NSMutableArray *_numbers;	// 4 = 0x4
	NSMutableArray *_parameters;	// 8 = 0x8
	BOOL _parameter_is_synthesized;	// 12 = 0xc
	BOOL _hasParameter_is_synthesized;	// 13 = 0xd
	BOOL _same_parity;	// 14 = 0xe
	BOOL _hasSame_parity;	// 15 = 0xf
	NSString *_prefix;	// 16 = 0x10
	NSString *_suffix;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) BOOL hasParameter_is_synthesized;	// G=0x32ba60bd; @synthesize=_hasParameter_is_synthesized
@property(readonly, assign, nonatomic) BOOL hasPrefix;	// G=0x32ba6055; 
@property(readonly, assign, nonatomic) BOOL hasSame_parity;	// G=0x32ba609d; @synthesize=_hasSame_parity
@property(readonly, assign, nonatomic) BOOL hasSuffix;	// G=0x32ba6069; 
@property(retain, nonatomic) NSMutableArray *numbers;	// G=0x32ba60ed; S=0x32ba6a6d; @synthesize=_numbers
@property(readonly, assign, nonatomic) int numbersCount;	// G=0x32ba6975; 
@property(assign, nonatomic) BOOL parameter_is_synthesized;	// G=0x32ba60cd; S=0x32ba601d; @synthesize=_parameter_is_synthesized
@property(retain, nonatomic) NSMutableArray *parameters;	// G=0x32ba60dd; S=0x32ba6a95; @synthesize=_parameters
@property(readonly, assign, nonatomic) int parametersCount;	// G=0x32ba6829; 
@property(retain, nonatomic) NSString *prefix;	// G=0x32ba608d; S=0x32ba6abd; @synthesize=_prefix
@property(assign, nonatomic) BOOL same_parity;	// G=0x32ba60ad; S=0x32ba6039; @synthesize=_same_parity
@property(retain, nonatomic) NSString *suffix;	// G=0x32ba607d; S=0x32ba6ae5; @synthesize=_suffix
- (id)init;	// 0x32ba6a19
- (void)addNumber:(int)number;	// 0x32ba684d
- (void)addParameter:(float)parameter;	// 0x32ba6701
- (void)dealloc;	// 0x32ba6999
- (id)description;	// 0x32ba6255
- (id)dictionaryRepresentation;	// 0x32ba60fd
// declared property getter: - (BOOL)hasParameter_is_synthesized;	// 0x32ba60bd
// declared property getter: - (BOOL)hasPrefix;	// 0x32ba6055
// declared property getter: - (BOOL)hasSame_parity;	// 0x32ba609d
// declared property getter: - (BOOL)hasSuffix;	// 0x32ba6069
- (int)numberAtIndex:(unsigned)index;	// 0x32ba687d
// declared property getter: - (id)numbers;	// 0x32ba60ed
// declared property getter: - (int)numbersCount;	// 0x32ba6975
- (float)parameterAtIndex:(unsigned)index;	// 0x32ba6731
// declared property getter: - (BOOL)parameter_is_synthesized;	// 0x32ba60cd
// declared property getter: - (id)parameters;	// 0x32ba60dd
// declared property getter: - (int)parametersCount;	// 0x32ba6829
// declared property getter: - (id)prefix;	// 0x32ba608d
- (BOOL)readFrom:(id)from;	// 0x32ba6565
// declared property getter: - (BOOL)same_parity;	// 0x32ba60ad
- (void)setNumber:(int)number atIndex:(unsigned)index;	// 0x32ba68ed
// declared property setter: - (void)setNumbers:(id)numbers;	// 0x32ba6a6d
- (void)setParameter:(float)parameter atIndex:(unsigned)index;	// 0x32ba67a1
// declared property setter: - (void)setParameter_is_synthesized:(BOOL)synthesized;	// 0x32ba601d
// declared property setter: - (void)setParameters:(id)parameters;	// 0x32ba6a95
// declared property setter: - (void)setPrefix:(id)prefix;	// 0x32ba6abd
// declared property setter: - (void)setSame_parity:(BOOL)parity;	// 0x32ba6039
// declared property setter: - (void)setSuffix:(id)suffix;	// 0x32ba6ae5
// declared property getter: - (id)suffix;	// 0x32ba607d
- (void)writeTo:(id)to;	// 0x32ba63f5
@end

