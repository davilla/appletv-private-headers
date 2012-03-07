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
- (void)addObjectsToStraddler:(id)straddler from:(id)from;	// 0x31f79f45
- (unsigned)categorizeGraphicsIn:(id)anIn;	// 0x31f7c145
- (void)cutHorizontalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x31f7a455
- (void)cutVerticalBorders:(id)borders whereObscuredByShape:(id)shape;	// 0x31f7a1a5
- (void)dealloc;	// 0x31f7a159
- (id)makeZoneForStraddlersFrom:(id)from;	// 0x31f7a021
- (void)makeZonesIn:(id)anIn;	// 0x31f7c2e5
- (void)makeZonesWithBoundaryIn:(id)anIn;	// 0x31f7a6fd
- (void)mergeQualifyingRectanglesIn:(id)anIn;	// 0x31f7bdd5
- (BOOL)overlap:(id)overlap with:(id)with;	// 0x31f79e25
@end
