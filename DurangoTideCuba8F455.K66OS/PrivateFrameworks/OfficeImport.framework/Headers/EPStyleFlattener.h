/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "EDProcessor.h"

@class NSMutableArray, EDWorksheet, EDRowBlocks, EDRowBlock, NSArray, EDColumnInfoCollection;

__attribute__((visibility("hidden")))
@interface EPStyleFlattener : EDProcessor {
@private
	EDWorksheet *mWorksheet;	// 16 = 0x10
	EDRowBlocks *mRowBlocks;	// 20 = 0x14
	EDRowBlock *mCurrentRowBlock;	// 24 = 0x18
	EDColumnInfoCollection *mColumnInfos;	// 28 = 0x1c
	NSArray *mKeys;	// 32 = 0x20
	NSMutableArray *mRanges;	// 36 = 0x24
	int mFirstRow;	// 40 = 0x28
	int mLastRow;	// 44 = 0x2c
	int mFirstColumn;	// 48 = 0x30
	int mLastColumn;	// 52 = 0x34
	unsigned mFirstRowStripeSize;	// 56 = 0x38
	unsigned mSecondRowStripeSize;	// 60 = 0x3c
	unsigned mFirstColumnStripeSize;	// 64 = 0x40
	unsigned mSecondColumnStripeSize;	// 68 = 0x44
}
- (void)applyDifferentialStyle:(id)style borderFlags:(int)flags precedence:(int)precedence toCell:(EDCellHeader **)cell row:(int)row column:(int)column;	// 0x32cbb0ad
- (void)applyProcessorToObject:(id)object sheet:(id)sheet;	// 0x32c6f949
- (void)applyStyleElements:(id)elements toCell:(EDCellHeader *)cell row:(int)row column:(int)column;	// 0x32cbae31
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x32cf03cd
- (void)cacheRange:(id)range;	// 0x32cba2e5
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x32cba3b9
- (EDCellHeader *)cellWithSetupStyleAtRowNumber:(int)rowNumber columnNumber:(int)number;	// 0x32cbad21
- (void)clearCache;	// 0x32cbc29d
- (id)collectionFromWorksheet:(id)worksheet;	// 0x32cf03b9
- (void)dealloc;	// 0x32c6fd59
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x32cf03c5
- (id)extractGlobalStyleElements:(id)elements;	// 0x32cf0421
- (id)extractKeys:(id)keys from:(id)from parent:(id)parent;	// 0x32cba5a5
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x32cf03c1
- (id)flattenBorder:(int)border borders:(id)borders differentialBorders:(id)borders3 flag:(bool)flag precedence:(int)precedence row:(int)row column:(int)column isBorderCopied:(bool *)copied;	// 0x32cbb539
- (id)flattenBorders:(id)borders differentialBorders:(id)borders2 borderFlags:(int)flags precedence:(int)precedence row:(int)row column:(int)column isBordersCopied:(bool *)copied;	// 0x32cbb319
- (id)flattenFill:(id)fill differentialFill:(id)fill2 isFillCopied:(bool *)copied;	// 0x32cbb981
- (id)flattenFont:(id)font differentialFont:(id)font2 isFontCopied:(bool *)copied;	// 0x32cbbb9d
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x32cf03c9
- (void)processObject:(id)object;	// 0x32cb9d75
- (id)styleFromObject:(id)object;	// 0x32cf03bd
- (id)wrapDifferentialStyleInATableStyleElement:(id)atableStyleElement type:(int)type;	// 0x32cf0489
@end

