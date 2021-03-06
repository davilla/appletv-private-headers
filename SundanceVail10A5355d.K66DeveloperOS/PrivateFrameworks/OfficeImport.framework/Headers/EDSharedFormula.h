/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDFormula.h"

@class EDReference;

@interface EDSharedFormula : EDFormula {
	unsigned mBaseFormulaIndex;	// 8 = 0x8
	int mRowBaseOrOffset;	// 12 = 0xc
	int mColumnBaseOrOffset;	// 16 = 0x10
	EDReference *mBaseFormulaRange;	// 20 = 0x14
}
@property(assign) unsigned baseFormulaIndex;	// G=0x31db01c1; S=0x31c32011; converted property
@property(assign) int columnBaseOrOffset;	// G=0x31c3ab25; S=0x31c319cd; converted property
@property(assign) int rowBaseOrOffset;	// G=0x31c3ab15; S=0x31c319bd; converted property
- (id)init;	// 0x31c3190d
- (id)initWithFormula:(id)formula;	// 0x31db0165
- (void)archiveByAppendingToMutableData:(CFDataRef)mutableData;	// 0x31db03ed
// converted property getter: - (unsigned)baseFormulaIndex;	// 0x31db01c1
- (id)baseFormulaRange;	// 0x31db01d5
- (id)baseFormulaWithRowBlocks:(id)rowBlocks;	// 0x31c3a38d
// converted property getter: - (int)columnBaseOrOffset;	// 0x31c3ab25
- (void)dealloc;	// 0x31c4447d
- (bool)isBaseFormula;	// 0x31c3a12d
- (bool)isSharedFormula;	// 0x31db01d1
// converted property getter: - (int)rowBaseOrOffset;	// 0x31c3ab15
// converted property setter: - (void)setBaseFormulaIndex:(unsigned)index;	// 0x31c32011
// converted property setter: - (void)setColumnBaseOrOffset:(int)offset;	// 0x31c319cd
// converted property setter: - (void)setRowBaseOrOffset:(int)offset;	// 0x31c319bd
- (void)unarchiveFromData:(CFDataRef)data offset:(unsigned *)offset;	// 0x31db02dd
- (void)updateBaseFormulaRangeWithRow:(int)row column:(int)column;	// 0x31db01e5
- (id)warningWithRowBlocks:(id)rowBlocks;	// 0x31c3a28d
@end

