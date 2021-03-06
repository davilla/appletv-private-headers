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
	UISectionRowData **_sectionRowData;	// 16 = 0x10
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
	float _reorderedRowHeight;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x300c9bc1; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x300c9845; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x300c9089; S=0x300c9099; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x301a8f69; S=0x300e0e05; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x30269621; S=0x30269631; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x300de429; S=0x30269601; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x30269641; S=0x3011161d; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x300c7d89
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x300c90a9
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x300d84cd
- (void)_updateNumSections;	// 0x300c7fb1
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x300c8041
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x30269b31
- (id)copyWithZone:(NSZone *)zone;	// 0x301a667d
- (void)dealloc;	// 0x301af0a5
- (void)ensureAllSectionsAreValid;	// 0x301a6941
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x3026a4bd
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x301207ed
- (int)footerAlignmentForSection:(int)section;	// 0x302696e9
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x300f1a95
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x300d1765
- (BOOL)hasFooterForSection:(int)section;	// 0x3026997d
- (BOOL)hasHeaderForSection:(int)section;	// 0x30120919
- (int)headerAlignmentForSection:(int)section;	// 0x300f2c1d
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x300c9bc1
- (float)heightForFooterInSection:(int)section;	// 0x3016f5d1
- (float)heightForHeaderInSection:(int)section;	// 0x3016f125
- (float)heightForRow:(int)row inSection:(int)section;	// 0x3026980d
- (float)heightForSection:(int)section;	// 0x30269901
- (float)heightForTable;	// 0x300c95cd
- (float)heightForTableFooterView;	// 0x300c9765
- (float)heightForTableHeaderView;	// 0x300c9285
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x300c9845
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x300d8795
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x3026a269
- (void)invalidateAllSections;	// 0x300c7f21
- (void)invalidateSection:(int)section;	// 0x30269d79
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x30269651
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x300f2801
// declared property getter: - (float)minimumRowHeight;	// 0x300c9089
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x30269bf1
- (int)numberOfRows;	// 0x300c81dd
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x30269a09
- (int)numberOfRowsInSection:(int)section;	// 0x300f1b19
- (int)numberOfSections;	// 0x300d0711
- (CGRect)rectForFooterInSection:(int)section;	// 0x300c9679
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x300d846d
- (CGRect)rectForHeaderInSection:(int)section;	// 0x300dc695
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x300d859d
- (CGRect)rectForSection:(int)section;	// 0x300d25ad
- (CGRect)rectForTable;	// 0x301a7f79
- (CGRect)rectForTableFooterView;	// 0x300d0721
- (CGRect)rectForTableHeaderView;	// 0x300d18e1
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x30269a69
// converted property getter: - (id)reorderedIndexPath;	// 0x301a8f69
- (int)sectionForPoint:(CGPoint)point;	// 0x300f1bcd
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x30269781
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x300db061
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x300d23c5
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x300f0339
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x300c9099
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x300e0e05
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x30269631
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x30269601
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x3011161d
// declared property getter: - (float)tableBottomPadding;	// 0x30269621
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x30124c51
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x300eeaad
// declared property getter: - (float)tableSidePadding;	// 0x300de429
// declared property getter: - (float)tableTopPadding;	// 0x30269641
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x30139989
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x3026a5e9
@end

