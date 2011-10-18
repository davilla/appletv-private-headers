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
@property(readonly, assign, nonatomic) float heightForAutohidingTableHeaderView;	// G=0x339a3f75; 
@property(readonly, assign, nonatomic) float heightForTableHeaderViewHiding;	// G=0x339cd84d; 
@property(assign, nonatomic) float minimumRowHeight;	// G=0x339cd4c9; S=0x339cd4d9; @synthesize=_minimumRowHeight
@property(retain) NSIndexPath *reorderedIndexPath;	// G=0x33a3724d; S=0x33a553b9; converted property
@property(assign, nonatomic) float tableBottomPadding;	// G=0x33bd85cd; S=0x33b25195; @synthesize=_tableBottomPadding
@property(assign, nonatomic) float tableSidePadding;	// G=0x339e8445; S=0x33bd84bd; 
@property(assign, nonatomic) float tableTopPadding;	// G=0x33bd85bd; S=0x33a4c1e5; @synthesize=_tableTopPadding
- (id)initWithTableView:(id)tableView;	// 0x339cadc9
- (void)_ensureSectionOffsetIsValidForSection:(int)section;	// 0x339cd525
- (int)_sectionForPoint:(CGPoint)point beginningWithSection:(int)section numberOfSections:(int)sections;	// 0x339e680d
- (int)_sectionRowForGlobalRow:(int)globalRow inSection:(int *)section;	// 0x339db2fd
- (void)_updateNumSections;	// 0x339cb045
- (void)_updateSectionRowDataArrayForNumSections:(int)numSections;	// 0x339cb0d5
- (void)addReorderGapFromIndexPath:(id)indexPath;	// 0x33abda75
- (id)copyWithZone:(NSZone *)zone;	// 0x33a32fd5
- (void)dealloc;	// 0x33a3e101
- (void)ensureAllSectionsAreValid;	// 0x33a332e9
- (CGRect)floatingRectForFooterInSection:(int)section visibleRect:(CGRect)rect;	// 0x33a48f35
- (CGRect)floatingRectForHeaderInSection:(int)section visibleRect:(CGRect)rect;	// 0x33a19069
- (int)footerAlignmentForSection:(int)section;	// 0x33b25311
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x339a902d
- (NSRange)globalRowsInRect:(CGRect)rect;	// 0x339db02d
- (BOOL)hasFooterForSection:(int)section;	// 0x33a490c1
- (BOOL)hasHeaderForSection:(int)section;	// 0x33a191f5
- (int)headerAlignmentForSection:(int)section;	// 0x33a308a9
// declared property getter: - (float)heightForAutohidingTableHeaderView;	// 0x339a3f75
- (float)heightForFooterInSection:(int)section;	// 0x33aab4c5
- (float)heightForHeaderInSection:(int)section;	// 0x33aab43d
- (float)heightForRow:(int)row inSection:(int)section;	// 0x33ac09c1
- (float)heightForSection:(int)section;	// 0x33aab3b5
- (float)heightForTable;	// 0x339cb875
- (float)heightForTableFooterView;	// 0x339cd739
- (float)heightForTableHeaderView;	// 0x339a3fc5
// declared property getter: - (float)heightForTableHeaderViewHiding;	// 0x339cd84d
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x339db72d
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x33aa3fb9
- (void)invalidateAllSections;	// 0x339caf9d
- (void)invalidateSection:(int)section;	// 0x33bd8449
- (float)maxFooterTitleWidthForSection:(int)section;	// 0x33b2527d
- (float)maxHeaderTitleWidthForSection:(int)section;	// 0x33a30805
// declared property getter: - (float)minimumRowHeight;	// 0x339cd4c9
- (void)moveRowAtIndexPathFrom:(id)from toIndexPath:(id)indexPath;	// 0x33ac0835
- (int)numberOfRows;	// 0x339cd3b5
- (int)numberOfRowsBeforeSection:(int)rowsBeforeSection;	// 0x33aa8a29
- (int)numberOfRowsInSection:(int)section;	// 0x339a90c1
- (int)numberOfSections;	// 0x33a33ca1
- (CGRect)rectForFooterInSection:(int)section;	// 0x339cb921
- (CGRect)rectForGlobalRow:(int)globalRow;	// 0x339db271
- (CGRect)rectForHeaderInSection:(int)section;	// 0x339e6925
- (CGRect)rectForRow:(int)row inSection:(int)section;	// 0x339db3e9
- (CGRect)rectForSection:(int)section;	// 0x339e6609
- (CGRect)rectForTable;	// 0x33a35c25
- (CGRect)rectForTableFooterView;	// 0x33a3b981
- (CGRect)rectForTableHeaderView;	// 0x339cb499
- (void)removeReorderGapFromIndexPath:(id)indexPath;	// 0x33abfdc1
// converted property getter: - (id)reorderedIndexPath;	// 0x33a3724d
- (int)sectionForPoint:(CGPoint)point;	// 0x339e67dd
- (int)sectionLocationForReorderedRow:(int)reorderedRow inSection:(int)section;	// 0x33abfeb5
- (int)sectionLocationForRow:(int)row inSection:(int)section;	// 0x339e3f15
- (NSRange)sectionsInRect:(CGRect)rect;	// 0x339e63e1
- (void)setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x33a30455
// declared property setter: - (void)setMinimumRowHeight:(float)height;	// 0x339cd4d9
// converted property setter: - (void)setReorderedIndexPath:(id)path;	// 0x33a553b9
// declared property setter: - (void)setTableBottomPadding:(float)padding;	// 0x33b25195
// declared property setter: - (void)setTableSidePadding:(float)padding;	// 0x33bd84bd
// declared property setter: - (void)setTableTopPadding:(float)padding;	// 0x33a4c1e5
// declared property getter: - (float)tableBottomPadding;	// 0x33bd85cd
- (void)tableFooterHeightDidChangeToHeight:(float)tableFooterHeight;	// 0x33aa89e1
- (void)tableHeaderHeightDidChangeToHeight:(float)tableHeaderHeight;	// 0x339cb309
// declared property getter: - (float)tableSidePadding;	// 0x339e8445
// declared property getter: - (float)tableTopPadding;	// 0x33bd85bd
- (void)tableViewWidthDidChangeToWidth:(float)tableViewWidth;	// 0x33a4e451
- (id)targetIndexPathForPoint:(CGPoint)point;	// 0x33abf07d
@end

