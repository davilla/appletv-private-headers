/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADDrawable.h"

@class NSMutableArray, OADTableProperties, OADTableGrid;

__attribute__((visibility("hidden")))
@interface OADTable : OADDrawable {
@private
	OADTableProperties *mProperties;	// 24 = 0x18
	OADTableGrid *mGrid;	// 28 = 0x1c
	NSMutableArray *mRows;	// 32 = 0x20
}
- (id)init;	// 0x31190ca5
- (id)addRow;	// 0x31194bd5
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x31256ba9
- (void)dealloc;	// 0x31191d4d
- (id)grid;	// 0x31194a0d
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x31256c65
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x31256bd5
- (id)rowAtIndex:(unsigned)index;	// 0x31195761
- (unsigned)rowCount;	// 0x31195741
- (void)setParentTextListStyle:(id)style;	// 0x31195685
- (id)tableProperties;	// 0x31190f81
@end

