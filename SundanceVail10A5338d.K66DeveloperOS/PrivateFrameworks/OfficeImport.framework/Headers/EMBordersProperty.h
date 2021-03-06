/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class EDBorders, TSUColor;

@interface EMBordersProperty : CMProperty <NSCopying> {
	EDBorders *edValue;	// 8 = 0x8
	TSUColor *mBorderColor;	// 12 = 0xc
	TSUColor *mBorderTopColor;	// 16 = 0x10
	TSUColor *mBorderLeftColor;	// 20 = 0x14
	TSUColor *mBorderBottomColor;	// 24 = 0x18
	TSUColor *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x33a1a1d9
- (id)initWithOADStroke:(id)oadstroke;	// 0x33b39a19
- (id)borderColor;	// 0x33b39cad
- (int *)borderStyles;	// 0x33b39cbd
- (int *)borderWidths;	// 0x33b39ccd
- (id)colorString;	// 0x33a1aea5
- (id)copyWithZone:(NSZone *)zone;	// 0x33b39949
- (id)cssString;	// 0x33a1a869
- (id)cssStringForName:(id)name;	// 0x33a1a83d
- (BOOL)hasSameColorsAs:(id)as;	// 0x33b39dd1
- (BOOL)hasSameStylesAs:(id)as;	// 0x33b39cf9
- (BOOL)hasSameWidthsAs:(id)as;	// 0x33b39d65
- (BOOL)isEqual:(id)equal;	// 0x33b39879
- (BOOL)isNoneAtLocation:(int)location;	// 0x33b39cdd
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x33a1a545
- (void)setNoneAtLocation:(int)location;	// 0x33a1a811
- (id)stringFromColor:(id)color;	// 0x33a1b015
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x33a1ab81
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x33a1ae5d
- (id)styleHashNumber;	// 0x33a1aab9
- (id)styleString;	// 0x33a1a8ed
- (id)widthHashNumber;	// 0x33a1ad95
- (id)widthString;	// 0x33a1abc9
@end

