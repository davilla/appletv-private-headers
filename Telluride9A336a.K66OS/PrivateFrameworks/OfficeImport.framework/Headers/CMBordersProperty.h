/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMProperty.h"

@class NSColorStub;

__attribute__((visibility("hidden")))
@interface CMBordersProperty : CMProperty {
@private
	NSColorStub *mBorderColor;	// 8 = 0x8
	NSColorStub *mBorderTopColor;	// 12 = 0xc
	NSColorStub *mBorderLeftColor;	// 16 = 0x10
	NSColorStub *mBorderBottomColor;	// 20 = 0x14
	NSColorStub *mBorderRightColor;	// 24 = 0x18
	int mBorderStyle[5];	// 28 = 0x1c
	int mBorderWidth[5];	// 48 = 0x30
	int mCustomWidth;	// 68 = 0x44
}
+ (BOOL)isStroked:(id)stroked;	// 0x34c85d49
- (id)init;	// 0x34cc090d
- (id)initWithOADStroke:(id)oadstroke;	// 0x34c459e1
- (void)adjustValues;	// 0x34cd42a5
- (id)colorString;	// 0x34c462a5
- (id)cssString;	// 0x34c45d51
- (id)cssStringForName:(id)name;	// 0x34c45d1d
- (BOOL)isNoneAtLocation:(int)location;	// 0x34e6fc39
- (void)setFromOadStroke:(id)oadStroke atLocation:(int)location state:(id)state;	// 0x34d4d0f5
- (void)setNoneAtLocation:(int)location;	// 0x34e6fc55
- (id)stringFromColor:(id)color;	// 0x34c46419
- (id)stringFromStyleEnum:(int)styleEnum;	// 0x34c45fd1
- (id)stringFromWidthEnum:(int)widthEnum;	// 0x34c46215
- (id)styleString;	// 0x34c45de1
- (id)widthString;	// 0x34c46025
@end
