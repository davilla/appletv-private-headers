/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "CPRegion.h"


@interface CPColumn : CPRegion {
	BOOL hasCentredParagraph;	// 68 = 0x44
	BOOL hasColumnBreak;	// 69 = 0x45
	float maxLeftPad;	// 72 = 0x48
	float maxRightPad;	// 76 = 0x4c
	float maxRight;	// 80 = 0x50
	float minLeft;	// 84 = 0x54
	BOOL complete;	// 88 = 0x58
}
@property(assign) BOOL complete;	// G=0x30b9e795; S=0x30b9e7a5; @synthesize
@property(assign) BOOL hasCentredParagraph;	// G=0x30b9e755; S=0x30b9e765; converted property
@property(assign) BOOL isImageRegion;	// G=0x30b9e74d; S=0x30b9e96d; converted property
@property(assign) float maxLeftPad;	// G=0x30b9e775; S=0x30b9eb75; converted property
@property(assign) float maxRightPad;	// G=0x30b9e785; S=0x30b9eac1; converted property
- (id)init;	// 0x30b9e80d
- (void)accept:(id)accept;	// 0x30b9e9e5
- (float)bottomBaseline;	// 0x30b9e929
- (CGRect)columnBounds;	// 0x30b9ea81
// declared property getter: - (BOOL)complete;	// 0x30b9e795
- (id)copyWithZone:(NSZone *)zone;	// 0x30b9e7b5
- (void)dealloc;	// 0x30b9e7e1
- (id)description;	// 0x30b9e8a1
// converted property getter: - (BOOL)hasCentredParagraph;	// 0x30b9e755
- (int)inOrder;	// 0x30bc0399
- (BOOL)isBoxRegion;	// 0x30b9e741
- (BOOL)isGraphicalRegion;	// 0x30b9e745
// converted property getter: - (BOOL)isImageRegion;	// 0x30b9e74d
- (BOOL)isRowRegion;	// 0x30b9e749
- (BOOL)isShapeRegion;	// 0x30b9e751
- (float)leftPad;	// 0x30b9ea99
// converted property getter: - (float)maxLeftPad;	// 0x30b9e775
// converted property getter: - (float)maxRightPad;	// 0x30b9e785
- (int)outOrder;	// 0x30bc03c9
- (CGRect)paddedBounds;	// 0x30b9ea01
- (float)rightPad;	// 0x30b9eb21
- (float)selectionBottom;	// 0x30b9e8ed
// declared property setter: - (void)setComplete:(BOOL)complete;	// 0x30b9e7a5
// converted property setter: - (void)setHasCentredParagraph:(BOOL)paragraph;	// 0x30b9e765
- (void)setHasColumnBreak:(BOOL)aBreak;	// 0x30b9e731
// converted property setter: - (void)setIsImageRegion:(BOOL)region;	// 0x30b9e96d
// converted property setter: - (void)setMaxLeftPad:(float)pad;	// 0x30b9eb75
// converted property setter: - (void)setMaxRightPad:(float)pad;	// 0x30b9eac1
@end

