/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMStyle.h"

@class EDStyle;

__attribute__((visibility("hidden")))
@interface EMCellStyle : CMStyle {
@private
	EDStyle *edStyle;	// 12 = 0xc
	BOOL _nameContainsItalic;	// 16 = 0x10
	BOOL _nameContainsBold;	// 17 = 0x11
}
- (id)init;	// 0x318ea171
- (id)initWithEDStyle:(id)edstyle;	// 0x318ea04d
- (id)_parseFontName:(id)name;	// 0x318ea4a9
- (void)addAlignmentStyle:(id)style;	// 0x318eb739
- (void)addBordersStyle:(id)style;	// 0x318eafdd
- (void)addFillStyle:(id)style;	// 0x318eb601
- (void)addFontStyle:(id)style;	// 0x318ea1a1
- (void)changeWithContentFormatType:(int)contentFormatType;	// 0x318ed191
- (void)changeWithContentWidth:(double)contentWidth columnWidth:(double)width;	// 0x318ed009
@end
