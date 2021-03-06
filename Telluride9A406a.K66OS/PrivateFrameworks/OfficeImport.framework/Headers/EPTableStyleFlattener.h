/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EPStyleFlattener.h"

@class EDTable;

__attribute__((visibility("hidden")))
@interface EPTableStyleFlattener : EPStyleFlattener {
@private
	EDTable *mTable;	// 72 = 0x48
	unsigned mHeaderRowCount;	// 76 = 0x4c
	unsigned mTotalsRowCount;	// 80 = 0x50
}
- (int)borderFlagsForStyleType:(int)styleType row:(int)row column:(int)column;	// 0x32a167d1
- (void)cacheSizes:(id)sizes inObject:(id)object;	// 0x32a1591d
- (void)clearCache;	// 0x32a17c0d
- (id)collectionFromWorksheet:(id)worksheet;	// 0x329c6475
- (id)extractCellStyleElements:(id)elements parentScope:(id)scope row:(int)row column:(int)column;	// 0x32a1610d
- (id)extractGlobalStyleElements:(id)elements;	// 0x32a15c61
- (id)extractRowStyleElements:(id)elements parentScope:(id)scope row:(int)row;	// 0x32a15dd9
- (bool)isObjectSupported:(id)supported;	// 0x329c3715
- (id)keysInTheOrderTheyShouldBeApplied;	// 0x329c6359
- (int)stripeOffset:(int)offset row:(bool)row;	// 0x32a17b65
- (id)styleFromObject:(id)object;	// 0x32a1573d
@end

