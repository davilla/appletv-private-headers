/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray, LBSAddressRange, LBSFeatureId;

__attribute__((visibility("hidden")))
@interface LBSAddressComponent : PBCodable {
@private
	int _type;	// 4 = 0x4
	NSMutableArray *_parsed_names;	// 8 = 0x8
	int _feature_type;	// 12 = 0xc
	BOOL _hasFeature_type;	// 16 = 0x10
	LBSFeatureId *_feature_id;	// 20 = 0x14
	LBSAddressRange *_range;	// 24 = 0x18
}
@property(retain, nonatomic) LBSFeatureId *feature_id;	// G=0x3445267d; S=0x34452fcd; @synthesize=_feature_id
@property(assign, nonatomic) int feature_type;	// G=0x3445269d; S=0x34452629; @synthesize=_feature_type
@property(readonly, assign, nonatomic) BOOL hasFeature_id;	// G=0x34452645; 
@property(readonly, assign, nonatomic) BOOL hasFeature_type;	// G=0x3445268d; @synthesize=_hasFeature_type
@property(readonly, assign, nonatomic) BOOL hasRange;	// G=0x34452659; 
@property(retain, nonatomic) NSMutableArray *parsed_names;	// G=0x344526ad; S=0x34452fa5; @synthesize=_parsed_names
@property(readonly, assign, nonatomic) int parsed_namesCount;	// G=0x34452f15; 
@property(retain, nonatomic) LBSAddressRange *range;	// G=0x3445266d; S=0x34452ff5; @synthesize=_range
@property(assign, nonatomic) int type;	// G=0x344526bd; S=0x344526cd; @synthesize=_type
- (id)init;	// 0x344526dd
- (void)addParsed_name:(id)name;	// 0x34452e19
- (void)dealloc;	// 0x34452f39
- (id)description;	// 0x3445282d
- (id)dictionaryRepresentation;	// 0x34452709
// declared property getter: - (id)feature_id;	// 0x3445267d
// declared property getter: - (int)feature_type;	// 0x3445269d
// declared property getter: - (BOOL)hasFeature_id;	// 0x34452645
// declared property getter: - (BOOL)hasFeature_type;	// 0x3445268d
// declared property getter: - (BOOL)hasRange;	// 0x34452659
- (id)parsed_nameAtIndex:(unsigned)index;	// 0x34452e49
// declared property getter: - (id)parsed_names;	// 0x344526ad
// declared property getter: - (int)parsed_namesCount;	// 0x34452f15
// declared property getter: - (id)range;	// 0x3445266d
- (BOOL)readFrom:(id)from;	// 0x34452be1
// declared property setter: - (void)setFeature_id:(id)anId;	// 0x34452fcd
// declared property setter: - (void)setFeature_type:(int)type;	// 0x34452629
- (void)setParsed_name:(id)name atIndex:(unsigned)index;	// 0x34452ead
// declared property setter: - (void)setParsed_names:(id)names;	// 0x34452fa5
// declared property setter: - (void)setRange:(id)range;	// 0x34452ff5
// declared property setter: - (void)setType:(int)type;	// 0x344526cd
// declared property getter: - (int)type;	// 0x344526bd
- (void)writeTo:(id)to;	// 0x344529a9
@end

