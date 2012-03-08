/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPGraphicUser.h"
#import "CPRegion.h"

@class NSMutableArray, CPZoneProfile, NSArray, CPCharSequence;

@interface CPZone : CPRegion <CPGraphicUser> {
	NSMutableArray *zoneBorders;	// 68 = 0x44
	CGPoint *outerVertices;	// 72 = 0x48
	CGPoint *swollenOuterVertices;	// 76 = 0x4c
	double area;	// 80 = 0x50
	BOOL isStraddleZone;	// 88 = 0x58
	CPZoneProfile *zoneProfile;	// 92 = 0x5c
	NSArray *leftGuides;	// 96 = 0x60
	NSArray *rightGuides;	// 100 = 0x64
	NSArray *gutters;	// 104 = 0x68
	NSArray *spacers;	// 108 = 0x6c
	CPCharSequence *charactersInZone;	// 112 = 0x70
	NSMutableArray *textLinesInZone;	// 116 = 0x74
	NSArray *graphicsInZone;	// 120 = 0x78
	NSMutableArray *backgroundGraphics;	// 124 = 0x7c
	unsigned usedGraphicCount;	// 128 = 0x80
}
@property(readonly, assign) double area;	// G=0x3484f36d; converted property
@property(readonly, retain) NSMutableArray *backgroundGraphics;	// G=0x3484f8e5; converted property
@property(retain) CPCharSequence *charactersInZone;	// G=0x3484e7d1; S=0x3484ed31; converted property
@property(readonly, retain) NSArray *graphicsInZone;	// G=0x348502bd; converted property
@property(retain) NSArray *gutters;	// G=0x3484e831; S=0x3484e9c9; converted property
@property(assign) BOOL isStraddleZone;	// G=0x3484e7e1; S=0x3484e7f1; converted property
@property(retain) NSArray *leftGuides;	// G=0x3484e811; S=0x3484ea59; converted property
@property(readonly, assign) CGPoint *outerVertices;	// G=0x3484f491; converted property
@property(retain) NSArray *rightGuides;	// G=0x3484e821; S=0x3484ea11; converted property
@property(retain) NSArray *spacers;	// G=0x3484e841; S=0x3484e981; converted property
@property(readonly, assign) CGPoint *swollenOuterVertices;	// G=0x3484f3f1; converted property
@property(readonly, retain) NSMutableArray *textLinesInZone;	// G=0x3484e7a9; converted property
@property(readonly, assign) unsigned usedGraphicCount;	// G=0x3484e865; converted property
@property(retain) NSMutableArray *zoneBorders;	// G=0x3484e7bd; S=0x3484fdcd; converted property
@property(retain) CPZoneProfile *zoneProfile;	// G=0x3484e801; S=0x3484eaa1; converted property
- (id)init;	// 0x3484e875
- (void)accept:(id)accept;	// 0x3484f479
- (void)addContentFrom:(id)from;	// 0x3484ec35
- (void)addPDFChar:(void *)aChar;	// 0x3484ed79
// converted property getter: - (double)area;	// 0x3484f36d
// converted property getter: - (id)backgroundGraphics;	// 0x3484f8e5
- (long)borderZOrder;	// 0x3484f6a9
- (BOOL)bordersWindClockwise;	// 0x3484e7cd
- (BOOL)canContain:(CGRect)contain;	// 0x3484ede9
// converted property getter: - (id)charactersInZone;	// 0x3484e7d1
- (int)compareArea:(id)area;	// 0x3484eae9
- (BOOL)contains:(id)contains;	// 0x3484ee3d
- (id)copyWithZone:(NSZone *)zone;	// 0x34850329
- (CGColorRef)createBackgroundColor;	// 0x3484fbb9
- (void)dealloc;	// 0x348505a9
// converted property getter: - (id)graphicsInZone;	// 0x348502bd
// converted property getter: - (id)gutters;	// 0x3484e831
- (BOOL)hasBorders;	// 0x3484feb9
- (BOOL)hasNeighborShape:(id)shape;	// 0x3484fd5d
- (void)incrementUsedGraphicCount;	// 0x3484e851
- (BOOL)isRectangular;	// 0x3484f0f9
// converted property getter: - (BOOL)isStraddleZone;	// 0x3484e7e1
- (BOOL)isZone;	// 0x3484e7b9
// converted property getter: - (id)leftGuides;	// 0x3484e811
- (BOOL)mapToWordPairs:(/*function-pointer*/ void *)wordPairs passing:(void *)passing;	// 0x3484ffed
- (BOOL)mapToWordPairsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x3484fed9
- (BOOL)mapToWords:(/*function-pointer*/ void *)words passing:(void *)passing;	// 0x348501c1
- (BOOL)mapToWordsWithIndex:(/*function-pointer*/ void *)index passing:(void *)passing;	// 0x348500f1
- (long)neighborZOrder;	// 0x3484f519
// converted property getter: - (CGPoint *)outerVertices;	// 0x3484f491
- (BOOL)rectangleBordersAtLeft:(id *)left top:(id *)top right:(id *)right bottom:(id *)bottom;	// 0x3484efa1
- (void)removeUnfilledNeighborShapes;	// 0x3484f81d
// converted property getter: - (id)rightGuides;	// 0x3484e821
// converted property setter: - (void)setCharactersInZone:(id)zone;	// 0x3484ed31
// converted property setter: - (void)setGutters:(id)gutters;	// 0x3484e9c9
// converted property setter: - (void)setIsStraddleZone:(BOOL)zone;	// 0x3484e7f1
// converted property setter: - (void)setLeftGuides:(id)guides;	// 0x3484ea59
// converted property setter: - (void)setRightGuides:(id)guides;	// 0x3484ea11
// converted property setter: - (void)setSpacers:(id)spacers;	// 0x3484e981
// converted property setter: - (void)setZoneBorders:(id)borders;	// 0x3484fdcd
// converted property setter: - (void)setZoneProfile:(id)profile;	// 0x3484eaa1
// converted property getter: - (id)spacers;	// 0x3484e841
// converted property getter: - (CGPoint *)swollenOuterVertices;	// 0x3484f3f1
- (CGRect)swollenZoneBounds;	// 0x3484f119
// converted property getter: - (id)textLinesInZone;	// 0x3484e7a9
// converted property getter: - (unsigned)usedGraphicCount;	// 0x3484e865
- (unsigned)vertexCount;	// 0x3484f7f1
- (unsigned)wordCount;	// 0x34850245
// converted property getter: - (id)zoneBorders;	// 0x3484e7bd
- (CGRect)zoneBounds;	// 0x3484f265
// converted property getter: - (id)zoneProfile;	// 0x3484e801
@end
