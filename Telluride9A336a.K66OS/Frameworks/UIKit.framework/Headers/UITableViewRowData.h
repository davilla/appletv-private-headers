/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class UITableView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface UITableViewRowData : NSObject <NSCopying> {
@private
	UITableView *_tableView;	// 4 = 0x4
	int _numSections;	// 8 = 0x8
	int _sectionRowDataCapacity;	// 12 = 0xc
	id *_sectionRowData;	// 16 = 0x10
	float _minimumRowHeight;	// 20 = 0x14
	float _tableViewWidth;	// 24 = 0x18
	BOOL _tableHeaderHeightValid;	// 28 = 0x1c
	float _tableHeaderHeight;	// 32 = 0x20
	BOOL _tableFooterHeightValid;	// 36 = 0x24
	float _tableFooterHeight;	// 40 = 0x28
	float _heightForTableHeaderViewHiding;	// 44 = 0x2c
	float _tableTopPadding;	// 48 = 0x30
	float _tableBottomPadding;	// 52 = 0x34
	BOOL _tableSidePaddingValid;	// 56 = 0x38
	float _tableSidePadding;	// 60 = 0x3c
	NSIndexPath *_reorderedIndexPath;	// 64 = 0x40
	NSIndexPath *_gapIndexPath;	// 68 = 0x44
	float _reorderedRowHeight;	// 72 = 0x48
}
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x350ddf75; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x3510784d; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x351074c9; S=0x351074d9; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x3517124d; S=0x3518f3b9; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x353125cd; S=0x3525f195; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x35122445; S=0x353124bd; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x353125bd; S=0x351861e5; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x35104dc9
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x35107525
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x3512080d
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x351152fd
- (void)_updateNumSections;	// 0x35105045
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x351050d5
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x351f7a75
- (id)copyWithZone:(NSZone *)zone;	// 0x3516cfd5
- (void)dealloc;	// 0x35178101
- (void)ensureAllSectionsAreValid;	// 0x3516d2e9
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x35182f35
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x35153069
- (int)footerAlignmentForSection:(int)section;	// 0x3525f311
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x350e302d
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x3511502d
- (BOOL)hasFooterForSection:(int)section;	// 0x351830c1
- (BOOL)hasHeaderForSection:(int)section;	// 0x351531f5
- (int)headerAlignmentForSection:(int)section;	// 0x3516a8a9
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x350ddf75
- (float)heightForFooterInSection:(int)section;	// 0x351e54c5
- (float)heightForHeaderInSection:(int)section;	// 0x351e543d
- (float)heightForRow:(int)row inSection:(int)section;	// 0x351fa9c1
- (float)heightForSection:(int)section;	// 0x351e53b5
- (float)heightForTable;	// 0x35105875
- (float)heightForTableFooterView;	// 0x35107739
- (float)heightForTableHeaderView;	// 0x350ddfc5
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x3510784d
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x3511572d
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x351ddfb9
- (void)invalidateAllSections;	// 0x35104f9d
- (void)invalidateSection:(int)section;	// 0x35312449
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x3525f27d
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x3516a805
// declared property getter: - (float)minimumRowHeight;	// 0x351074c9
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x351fa835
- (int)numberOfRows;	// 0x351073b5
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x351e2a29
- (int)numberOfRowsInSection:(int)section;	// 0x350e30c1
- (int)numberOfSections;	// 0x3516dca1
- (CGRect)rectForFooterInSection:(int)section;	// 0x35105921
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x35115271
- (CGRect)rectForHeaderInSection:(int)section;	// 0x35120925
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x351153e9
- (CGRect)rectForSection:(int)section;	// 0x35120609
- (CGRect)rectForTable;	// 0x3516fc25
- (CGRect)rectForTableFooterView;	// 0x35175981
- (CGRect)rectForTableHeaderView;	// 0x35105499
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x351f9dc1
// converted property getter: - (id)reorderedIndexPath;	// 0x3517124d
- (int)sectionForPoint:(CGPoint)point;	// 0x351207dd
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x351f9eb5
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x3511df15
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x351203e1
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x3516a455
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x351074d9
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x3518f3b9
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x3525f195
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x353124bd
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x351861e5
// declared property getter: - (float)tableBottomPadding;	// 0x353125cd
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x351e29e1
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x35105309
// declared property getter: - (float)tableSidePadding;	// 0x35122445
// declared property getter: - (float)tableTopPadding;	// 0x353125bd
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x35188451
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x351f907d
@end

