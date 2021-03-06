/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "NSCopying.h"
#import "CPCopying.h"
#import <NSObject.h> // Unknown library

@class CPZoneBorder;

@interface CPZoneBorderIntersection : NSObject <NSCopying, CPCopying> {
	CGRect intersectionRect;	// 4 = 0x4
	CPZoneBorder *intersectingBorder;	// 20 = 0x14
	BOOL forwardVector;	// 24 = 0x18
	BOOL backwardVector;	// 25 = 0x19
}
@property(assign) BOOL backwardVector;	// G=0x34d19249; S=0x34d19239; converted property
@property(assign) BOOL forwardVector;	// G=0x34d19229; S=0x34d19219; converted property
@property(retain) CPZoneBorder *intersectingBorder;	// G=0x34d19209; S=0x34d191f9; converted property
@property(assign) CGRect intersectionRect;	// G=0x34d191d5; S=0x34d191b9; converted property
- (id)initSuper;	// 0x34d19185
// converted property getter: - (BOOL)backwardVector;	// 0x34d19249
- (int)comparePositionLengthwise:(id)lengthwise;	// 0x34d19259
- (id)copyWithZone:(NSZone *)zone;	// 0x34d191b1
// converted property getter: - (BOOL)forwardVector;	// 0x34d19229
// converted property getter: - (id)intersectingBorder;	// 0x34d19209
// converted property getter: - (CGRect)intersectionRect;	// 0x34d191d5
// converted property setter: - (void)setBackwardVector:(BOOL)vector;	// 0x34d19239
// converted property setter: - (void)setForwardVector:(BOOL)vector;	// 0x34d19219
// converted property setter: - (void)setIntersectingBorder:(id)border;	// 0x34d191f9
// converted property setter: - (void)setIntersectionRect:(CGRect)rect;	// 0x34d191b9
@end

