/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITable.h"

@class UISectionList, NSMutableArray;

@interface UISectionTable : UITable {
	UISectionList *_sectionList;	// 440 = 0x1b8
	NSRange _visibleHeaders;	// 444 = 0x1bc
	NSMutableArray *_visibleHeaderViews;	// 452 = 0x1c4
	float _rightMargin;	// 456 = 0x1c8
	NSMutableArray *_reusableHeaderCells;	// 460 = 0x1cc
	NSMutableArray *_reusableTransparentHeaderCells;	// 464 = 0x1d0
	int _reusableHeaderCapacity;	// 468 = 0x1d4
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _sectionTableFlags;	// 472 = 0x1d8
}
- (id)initWithFrame:(CGRect)frame sectionList:(id)list;	// 0x301f5a69
- (id)initWithSize:(CGSize)size sectionList:(id)list;	// 0x301f5a19
- (id)_createHeaderCellForHeaderAtIndex:(int)index width:(float)width opaque:(BOOL)opaque adjustOrigin:(BOOL)origin;	// 0x301f617d
- (void)_reloadRowHeights;	// 0x301f55fd
- (void)_removeHeaderCellsForRange:(NSRange)range;	// 0x301f5b09
- (void)_replaceCellWithOpaqueOneGapIndex:(int)opaqueOneGapIndex viewIndex:(int)index width:(float)width;	// 0x301f5dc1
- (void)_replaceCellWithTransparentOneGapIndex:(int)transparentOneGapIndex viewIndex:(int)index width:(float)width;	// 0x301f5d1d
- (BOOL)_shouldHideHeaders;	// 0x301f57d9
- (void)_updateShowScrollIndicatorsFlag;	// 0x301f5765
- (void)_updateVisibleCellsNow;	// 0x301f6661
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x301f580d
- (void)dealloc;	// 0x301f59ad
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x301f5881
- (BOOL)floatArray:(id)array loadGapIndexes:(int *)indexes gapHeight:(float *)height count:(int)count;	// 0x301f58cd
- (id)indexTitles;	// 0x301f565d
- (void)reloadData;	// 0x301f6075
- (void)scrollRowToVisible:(int)visible;	// 0x301f5f01
- (void)scrollToSection:(int)section;	// 0x301f6555
- (void)scrollToSectionWithTitle:(id)title;	// 0x301f570d
- (BOOL)sectionHeaderCellWasClicked:(id)clicked;	// 0x301f6409
- (void)setAllowsScrollIndicators:(BOOL)indicators;	// 0x301f56c5
- (void)setDelegate:(id)delegate;	// 0x301f5941
- (void)setFrame:(CGRect)frame;	// 0x301f5e61
- (void)setRightMargin:(float)margin;	// 0x301f55d1
- (void)setSectionListStyle:(int)style;	// 0x301f55e1
- (void)setShouldHideHeaderInShortLists:(BOOL)hideHeaderInShortLists;	// 0x301f567d
- (BOOL)showsSectionHeaders;	// 0x301f5745
@end

