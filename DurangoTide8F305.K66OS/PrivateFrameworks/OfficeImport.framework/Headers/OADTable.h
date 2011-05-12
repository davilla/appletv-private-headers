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
- (id)init;	// 0x344cbd95
- (id)addRow;	// 0x344cd119
- (id)cellAtPos:(OADTMatrixPos)pos;	// 0x3458fdb5
- (void)dealloc;	// 0x344cf5c5
- (id)grid;	// 0x344cd099
- (id)masterCellOfPos:(OADTMatrixPos)pos;	// 0x34590d15
- (OADTMatrixPos)masterPosOfPos:(OADTMatrixPos)pos;	// 0x3458fd05
- (id)rowAtIndex:(unsigned)index;	// 0x344cd969
- (unsigned)rowCount;	// 0x344cd949
- (void)setParentTextListStyle:(id)style;	// 0x344cd899
- (id)tableProperties;	// 0x344cc021
@end

