/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

@interface GMMDirectionsIconResponse : PBCodable {
@private
	int _iconVersion;	// 4 = 0x4
	BOOL _hasIconVersion;	// 8 = 0x8
	NSMutableArray *_iconDefinitions;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasIconVersion;	// G=0x3444631d; @synthesize=_hasIconVersion
@property(retain, nonatomic) NSMutableArray *iconDefinitions;	// G=0x3444630d; S=0x34446855; @synthesize=_iconDefinitions
@property(readonly, assign, nonatomic) int iconDefinitionsCount;	// G=0x344467a9; 
@property(assign, nonatomic) int iconVersion;	// G=0x3444632d; S=0x344462f1; @synthesize=_iconVersion
- (id)init;	// 0x34446815
- (void)addIconDefinition:(id)definition;	// 0x344466ad
- (void)dealloc;	// 0x344467cd
- (id)description;	// 0x3444633d
// declared property getter: - (BOOL)hasIconVersion;	// 0x3444631d
- (id)iconDefinitionAtIndex:(unsigned)index;	// 0x344466dd
// declared property getter: - (id)iconDefinitions;	// 0x3444630d
// declared property getter: - (int)iconDefinitionsCount;	// 0x344467a9
// declared property getter: - (int)iconVersion;	// 0x3444632d
- (BOOL)readFrom:(id)from;	// 0x34446551
- (void)setIconDefinition:(id)definition atIndex:(unsigned)index;	// 0x34446741
// declared property setter: - (void)setIconDefinitions:(id)definitions;	// 0x34446855
// declared property setter: - (void)setIconVersion:(int)version;	// 0x344462f1
- (void)writeTo:(id)to;	// 0x34446421
@end

