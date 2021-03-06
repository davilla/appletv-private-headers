/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMProperty.h"
#import "NSCopying.h"

@class EDBorders, NSColorStub;

__attribute__((visibility("hidden")))
@interface EMBordersProperty : CMProperty <NSCopying> {
@private
	EDBorders *edValue;	// 8 = 0x8
	NSColorStub *mBorderColor;	// 12 = 0xc
	NSColorStub *mBorderTopColor;	// 16 = 0x10
	NSColorStub *mBorderLeftColor;	// 20 = 0x14
	NSColorStub *mBorderBottomColor;	// 24 = 0x18
	NSColorStub *mBorderRightColor;	// 28 = 0x1c
	int mBorderStyle[5];	// 32 = 0x20
	int mBorderWidth[5];	// 52 = 0x34
}
- (id)initWithEDBorders:(id)edborders;	// 0x3291b88d
- (id)initWithOADStroke:(id)oadstroke;	// 0x32b13655
- (id)borderColor;	// 0x32b13541
- (int *)borderStyles;	// 0x32b13551
- (int *)borderWidths;	// 0x32b13561
- (id)colorString;	// 0x3291c591
- (id)copyWithZone:(NSZone *)zone;	// 0x32b13929
- (id)cssString;	// 0x3291bf1d
- (id)cssStringForName:(id)name;	// 0x3291bee9
- (BOOL)hasSameColorsAs:(id)as;	// 0x32b13b05
- (BOOL)hasSameStylesAs:(id)as;	// 0x32b139fd
- (BOOL)hasSameWidthsAs:(id)as;	// 0x32b13a81
- (BOOL)isEqual:(id)equal;	// 0x32b1358d
- (BOOL)isNoneAtLocation:(int)location;	// 0x32b13571
- (void)setBorderStyleAndWidth:(int)width location:(unsigned)location;	// 0x3291bc89
- (void)setNoneAtLocation:(int)location;	// 0x3291bebd
- (id)stringFromColor:(id)color;	// 0x3291c705
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x3291c251
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x3291c549
- (id)styleHashNumber;	// 0x3291c18d
- (id)styleString;	// 0x3291bfad
- (id)widthHashNumber;	// 0x3291c485
- (id)widthString;	// 0x3291c2a5
@end

