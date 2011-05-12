/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, UITableView, UITableViewRowData, NSMutableIndexSet, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UITableViewUpdateSupport : NSObject {
@private
	int oldSection;	// 4 = 0x4
	int newSection;	// 8 = 0x8
	int oldGlobalRow;	// 12 = 0xc
	int newGlobalRow;	// 16 = 0x10
	UITableView *tableView;	// 20 = 0x14
	NSRange visibleRows;	// 24 = 0x18
	NSArray *updateItems;	// 32 = 0x20
	UITableViewRowData *oldRowData;	// 36 = 0x24
	UITableViewRowData *newRowData;	// 40 = 0x28
	NSRange oldRowRange;	// 44 = 0x2c
	NSRange newRowRange;	// 52 = 0x34
	NSMutableIndexSet *rows;	// 60 = 0x3c
	CGRect oldTableViewVisibleBounds;	// 64 = 0x40
	CGRect newTableViewVisibleBounds;	// 80 = 0x50
	CGRect tableViewVisibleBoundsUnion;	// 96 = 0x60
	float tableViewVisibleBoundsOffset;	// 112 = 0x70
	int oldSectionCount;	// 116 = 0x74
	int newSectionCount;	// 120 = 0x78
	int *oldSectionMap;	// 124 = 0x7c
	int *newSectionMap;	// 128 = 0x80
	int oldGlobalRowCount;	// 132 = 0x84
	int newGlobalRowCount;	// 136 = 0x88
	int *oldGlobalRowMap;	// 140 = 0x8c
	int *newGlobalRowMap;	// 144 = 0x90
	UIView **animatedCells;	// 148 = 0x94
	UIView **animatedHeaders;	// 152 = 0x98
	UIView **animatedFooters;	// 156 = 0x9c
	int globalReorderingRow;	// 160 = 0xa0
	id _context;	// 164 = 0xa4
	NSMutableArray *viewAnimations;	// 168 = 0xa8
	NSMutableArray *deletedSections;	// 172 = 0xac
	NSMutableArray *insertedSections;	// 176 = 0xb0
}
- (id)initWithTableView:(id)tableView updateItems:(id)items oldRowData:(id)data newRowData:(id)data4 oldRowRange:(NSRange)range newRowRange:(NSRange)range6 context:(id)context;	// 0x320a4a59
- (void)_addBottomShadowViewViewForViewAnimation:(id)viewAnimation;	// 0x32197371
- (void)_computeRowUpdates;	// 0x320a55cd
- (void)_computeSectionUpdates;	// 0x320a50e1
- (void)_computeVisibleBounds;	// 0x320a4c85
- (id)_imageViewForView:(id)view;	// 0x32197299
- (BOOL)_isReloadSectionUpdate;	// 0x3219634d
- (void)_setupAnimationForReorderingRow;	// 0x320a6055
- (void)_setupAnimationForTableFooter;	// 0x320a9f41
- (void)_setupAnimationForTableHeader;	// 0x320a9cf5
- (void)_setupAnimationStructures;	// 0x320a5a6d
- (void)_setupAnimationsForDeletedCells;	// 0x320aa149
- (void)_setupAnimationsForDeletedHeadersAndFooters;	// 0x320ab1d5
- (void)_setupAnimationsForExistingHeadersAndFooters;	// 0x320a897d
- (void)_setupAnimationsForExistingOffscreenCells;	// 0x320a85b9
- (void)_setupAnimationsForExistingVisibleCells;	// 0x320a5ba9
- (void)_setupAnimationsForInsertedHeadersAndFooters;	// 0x320a7e15
- (void)_setupAnimationsForNewlyInsertedCells;	// 0x320a61c9
- (void)_setupDeleteAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x321964f9
- (void)_setupDeleteAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x3219681d
- (void)_setupInsertAnimationForFooterInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32196b41
- (void)_setupInsertAnimationForHeaderInSection:(int)section withTargetRect:(CGRect)targetRect forUpdateItem:(id)updateItem;	// 0x32196eed
- (void)_validateAnimatedCells;	// 0x32196401
- (void)dealloc;	// 0x320abe81
@end

