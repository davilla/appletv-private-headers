/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class EDReference;

@interface EMCellMapper : CMMapper {
	EDCellHeader *edCell;	// 8 = 0x8
	EDReference *edMergedCellReference;	// 12 = 0xc
	int rowNumber;	// 16 = 0x10
	int firstColumn;	// 20 = 0x14
	int lastColumn;	// 24 = 0x18
	int columnSpan;	// 28 = 0x1c
	BOOL firstCellFlag;	// 32 = 0x20
	BOOL spreadLeftFlag;	// 33 = 0x21
	double columnWidth;	// 36 = 0x24
}
@property(readonly, assign) int columnSpan;	// G=0x31d687d5; converted property
@property(readonly, assign) double columnWidth;	// G=0x31d687ad; converted property
@property(assign) int firstColumn;	// G=0x31d6878d; S=0x31d6879d; converted property
@property(assign) int lastColumn;	// G=0x31c3e6d5; S=0x31c3e935; converted property
- (id)initWithEDCell:(EDCellHeader *)edcell rowInfo:(EDRowInfo *)info parent:(id)parent state:(id)state;	// 0x31c3e501
- (id)initWithParent:(id)parent;	// 0x31c3e609
- (void)adjustColumnSpanForGrid:(double *)grid columnCount:(unsigned)count nextCell:(EDCellHeader *)cell withState:(id)state;	// 0x31c3e949
// converted property getter: - (int)columnSpan;	// 0x31d687d5
// converted property getter: - (double)columnWidth;	// 0x31d687ad
// converted property getter: - (int)firstColumn;	// 0x31d6878d
- (BOOL)isCellEmpty;	// 0x31c3e905
- (BOOL)isCellMerged;	// 0x31c3e6e9
- (BOOL)isCellSpreading:(id)spreading;	// 0x31c3e77d
- (BOOL)isFirstCell;	// 0x31d687e5
// converted property getter: - (int)lastColumn;	// 0x31c3e6d5
- (void)mapAt:(id)at withState:(id)state;	// 0x31d687f5
- (void)mapAt:(id)at withState:(id)state height:(double)height;	// 0x31c3ea51
- (id)mapHyperlinkAt:(id)at;	// 0x31d68821
- (void)mapRowColSpansAt:(id)at withState:(id)state;	// 0x31c3ee39
- (void)resetColumnSpan:(int)span;	// 0x31d687c5
- (void)setFirstCellFlag;	// 0x31c3e6c1
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x31d6879d
// converted property setter: - (void)setLastColumn:(int)column;	// 0x31c3e935
@end
