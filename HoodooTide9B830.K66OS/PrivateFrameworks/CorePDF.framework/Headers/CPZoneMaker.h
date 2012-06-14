/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPCharSequence;

@interface CPZoneMaker : NSObject {
	CPCharSequence *charactersOnPage;	// 4 = 0x4
}
- (void)addObjectsToStraddler:(id)straddler from:(id)from;	// 0x310b4f45
- (unsigned)categorizeGraphicsIn:(id)anIn;	// 0x310b7145
- (void)cutHorizontalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x310b5455
- (void)cutVerticalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x310b51a5
- (void)dealloc;	// 0x310b5159
- (id)makeZoneForStraddlersFrom:(id)from;	// 0x310b5021
- (void)makeZonesIn:(id)anIn;	// 0x310b72e5
- (void)makeZonesWithBoundaryIn:(id)anIn;	// 0x310b56fd
- (void)mergeQualifyingRectanglesIn:(id)anIn;	// 0x310b6dd5
- (BOOL)overlap:(id)overlap with:(id)with;	// 0x310b4e25
@end
