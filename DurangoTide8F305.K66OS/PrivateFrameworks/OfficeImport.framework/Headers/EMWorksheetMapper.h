/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EMSheetMapper.h"

@class ECColumnWidthConvertor, CMStyle, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EMWorksheetMapper : EMSheetMapper {
@private
	EDWorksheet *edWorksheet;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	unsigned mMaxPopulatedColumn;	// 16 = 0x10
	unsigned mMaxPopulatedRow;	// 20 = 0x14
	double *mColumnGrid;	// 24 = 0x18
	double *mRowGrid;	// 28 = 0x1c
	int mWidth;	// 32 = 0x20
	int mHeight;	// 36 = 0x24
	ECColumnWidthConvertor *mColumnWidthConvertor;	// 40 = 0x28
}
- (id)initWithEDWorksheet:(id)edworksheet parent:(id)parent;	// 0x343beeb9
- (void)_initWithState:(id)state;	// 0x343bfa39
- (int)columnCount;	// 0x343c12c5
- (double *)columnGrid;	// 0x343c12b5
- (id)columnWidthConvertor;	// 0x343c07d5
- (void)countRowsAndColumnsWithState:(id)state;	// 0x343bfac1
- (void)dealloc;	// 0x343c6c9d
- (double)defaultColumnWidth;	// 0x344fea81
- (double)defaultRowHeight;	// 0x344fead5
- (int)height;	// 0x343c6185
- (BOOL)isVisible;	// 0x343c027d
- (void)mapAt:(id)at withState:(id)state;	// 0x343bf9a5
- (void)mapColumnInfosAt:(id)at withState:(id)state;	// 0x343c0301
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x343c602d
- (void)mapGridAt:(id)at;	// 0x343c1169
- (void)mapTableAt:(id)at withState:(id)state;	// 0x343c000d
- (void)mapTableStyleAt:(id)at withState:(id)state;	// 0x343c5ea5
- (int)maxRowNumber;	// 0x344c086d
- (int)preprocessHeightWithState:(id)state;	// 0x344bc919
- (CGSize)preprocessSizeWithState:(id)state;	// 0x344bc4b5
- (int)preprocessWidthWithState:(id)state;	// 0x344bc595
- (double *)rowGrid;	// 0x344bff75
- (void)setRowGrid;	// 0x343bfe39
- (int)width;	// 0x343c6175
- (double)xlColumnWidthToPoints:(double)points;	// 0x344feab9
@end

