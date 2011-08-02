/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class EDRowBlock;

__attribute__((visibility("hidden")))
@interface EMRowMapper : CMMapper {
@private
	EDRowBlock *mRowBlock;	// 8 = 0x8
	EDRowInfo *mRowInfo;	// 12 = 0xc
	double *columnGrid;	// 16 = 0x10
	int columnCount;	// 20 = 0x14
}
+ (void)mapEmptyRowAt:(id)at colspan:(int)colspan height:(double)height;	// 0x32b12015
- (id)initWithEDRowBlock:(id)edrowBlock rowInfo:(EDRowInfo *)info parent:(id)parent;	// 0x32b0b1d9
- (EDCellHeader *)cellWithColumnNumber:(int)columnNumber;	// 0x32b0e5fd
- (void)insertEmptyCellAt:(id)at withColSpan:(int)colSpan height:(double)height;	// 0x32b0e769
- (BOOL)isColumnHidden:(int)hidden;	// 0x32b0b745
- (BOOL)isMergedCell:(EDCellHeader *)cell;	// 0x32cc892d
- (void)mapAt:(id)at withState:(id)state;	// 0x32b0b2d5
- (void)mapEmptyCellsAt:(id)at withState:(id)state firstColumn:(int)column lastColumn:(int)column4;	// 0x32b0e4bd
@end
