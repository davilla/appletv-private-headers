/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollView.h"

@class NSArray, UISwipeGestureRecognizer, NSIndexPath, NSMutableDictionary, UIColor, NSMutableArray, UITableViewCell;
@protocol UITableViewDelegate, UITableViewDataSource;

@interface UITableView : UIScrollView <UIGestureRecognizerDelegate, NSCoding> {
@private
	int _style;	// 388 = 0x184
	id<UITableViewDataSource> _dataSource;	// 392 = 0x188
	id _rowData;	// 396 = 0x18c
	float _rowHeight;	// 400 = 0x190
	float _sectionHeaderHeight;	// 404 = 0x194
	float _sectionFooterHeight;	// 408 = 0x198
	CGRect _visibleBounds;	// 412 = 0x19c
	NSRange _visibleRows;	// 428 = 0x1ac
	NSMutableArray *_visibleCells;	// 436 = 0x1b4
	NSIndexPath *_firstResponderIndexPath;	// 440 = 0x1b8
	UIView *_firstResponderView;	// 444 = 0x1bc
	unsigned _firstResponderViewType;	// 448 = 0x1c0
	NSMutableDictionary *_reusableTableCells;	// 452 = 0x1c4
	UITableViewCell *_topSeparatorCell;	// 456 = 0x1c8
	id _topSeparator;	// 460 = 0x1cc
	NSMutableArray *_extraSeparators;	// 464 = 0x1d0
	CFDictionaryRef _visibleHeaderViews;	// 468 = 0x1d4
	CFDictionaryRef _visibleFooterViews;	// 472 = 0x1d8
	NSMutableArray *_reusableHeaderViews;	// 476 = 0x1dc
	NSMutableArray *_reusableFooterViews;	// 480 = 0x1e0
	NSMutableArray *_reusableTransparentHeaderViews;	// 484 = 0x1e4
	NSMutableArray *_reusableTransparentFooterViews;	// 488 = 0x1e8
	NSMutableArray *_highlightedIndexPaths;	// 492 = 0x1ec
	NSMutableArray *_selectedIndexPaths;	// 496 = 0x1f0
	int _swipeToDeleteSection;	// 500 = 0x1f4
	int _swipeToDeleteRow;	// 504 = 0x1f8
	NSIndexPath *_pendingSelectionIndexPath;	// 508 = 0x1fc
	NSArray *_pendingDeselectionIndexPaths;	// 512 = 0x200
	UIView *_touchedContentView;	// 516 = 0x204
	UIView *_newContentView;	// 520 = 0x208
	id _deleteAnimationSupport;	// 524 = 0x20c
	id _reorderingSupport;	// 528 = 0x210
	UIView *_backgroundView;	// 532 = 0x214
	UIView *_index;	// 536 = 0x218
	UIView *_tableHeaderBackgroundView;	// 540 = 0x21c
	UIView *_tableHeaderView;	// 544 = 0x220
	UIView *_tableFooterView;	// 548 = 0x224
	id _countLabel;	// 552 = 0x228
	int _tableReloadingSuspendedCount;	// 556 = 0x22c
	int _tableDisplaySuspendedCount;	// 560 = 0x230
	int _sectionIndexMinimumDisplayRowCount;	// 564 = 0x234
	int _itemCountFooterMinimumDisplayRowCount;	// 568 = 0x238
	NSMutableArray *_insertItems;	// 572 = 0x23c
	NSMutableArray *_deleteItems;	// 576 = 0x240
	NSMutableArray *_reloadItems;	// 580 = 0x244
	UIColor *_separatorColor;	// 584 = 0x248
	UIColor *_separatorTopShadowColor;	// 588 = 0x24c
	UIColor *_separatorBottomShadowColor;	// 592 = 0x250
	UIColor *_checkmarkColor;	// 596 = 0x254
	UIColor *_sectionBorderColor;	// 600 = 0x258
	UIColor *_indexColor;	// 604 = 0x25c
	UIColor *_indexBackgroundColor;	// 608 = 0x260
	NSArray *_defaultSectionIndexTitles;	// 612 = 0x264
	UISwipeGestureRecognizer *_swipeGestureRecognizer;	// 616 = 0x268
	int _updateCount;	// 620 = 0x26c
	id _reserved;	// 624 = 0x270
	struct {
		unsigned dataSourceNumberOfRowsInSection : 1;
		unsigned dataSourceCellForRow : 1;
		unsigned dataSourceNumberOfSectionsInTableView : 1;
		unsigned dataSourceTitleForHeaderInSection : 1;
		unsigned dataSourceTitleForFooterInSection : 1;
		unsigned dataSourceCommitEditingStyle : 1;
		unsigned dataSourceSectionIndexTitlesForTableView : 1;
		unsigned dataSourceSectionForSectionIndexTitle : 1;
		unsigned dataSourceCanEditRow : 1;
		unsigned dataSourceCanMoveRow : 1;
		unsigned dataSourceCanUpdateRow : 1;
		unsigned dataSourceShouldShowMenu : 1;
		unsigned dataSourceCanPerformAction : 1;
		unsigned dataSourcePerformAction : 1;
		unsigned dataSourceIndexPathForSectionIndexTitle : 1;
		unsigned delegateEditingStyleForRowAtIndexPath : 1;
		unsigned delegateTitleForDeleteConfirmationButtonForRowAtIndexPath : 1;
		unsigned delegateShouldIndentWhileEditing : 1;
		unsigned dataSourceMoveRow : 1;
		unsigned delegateCellForRow : 1;
		unsigned delegateWillDisplayCell : 1;
		unsigned delegateHeightForRow : 1;
		unsigned delegateHeightForSectionHeader : 1;
		unsigned delegateTitleWidthForSectionHeader : 1;
		unsigned delegateHeightForSectionFooter : 1;
		unsigned delegateTitleWidthForSectionFooter : 1;
		unsigned delegateViewForHeaderInSection : 1;
		unsigned delegateViewForFooterInSection : 1;
		unsigned delegateDisplayedItemCountForRowCount : 1;
		unsigned delegateDisplayStringForRowCount : 1;
		unsigned delegateAccessoryTypeForRow : 1;
		unsigned delegateAccessoryButtonTappedForRow : 1;
		unsigned delegateWillSelectRow : 1;
		unsigned delegateWillDeselectRow : 1;
		unsigned delegateDidSelectRow : 1;
		unsigned delegateDidDeselectRow : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidEndEditing : 1;
		unsigned delegateWillMoveToRow : 1;
		unsigned delegateIndentationLevelForRow : 1;
		unsigned delegateWantsHeaderForSection : 1;
		unsigned delegateHeightForRowsInSection : 1;
		unsigned delegateMargin : 1;
		unsigned delegateHeaderTitleAlignment : 1;
		unsigned delegateFooterTitleAlignment : 1;
		unsigned delegateFrameForSectionIndexGivenProposedFrame : 1;
		unsigned delegateDidFinishReload : 1;
		unsigned delegateHeightForHeader : 1;
		unsigned delegateHeightForFooter : 1;
		unsigned delegateViewForHeader : 1;
		unsigned delegateViewForFooter : 1;
		unsigned style : 1;
		unsigned separatorStyle : 3;
		unsigned wasEditing : 1;
		unsigned isEditing : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned updating : 1;
		unsigned displaySkippedDuringSuspension : 1;
		unsigned needsReload : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned scheduledUpdateVisibleCellsFrames : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned displayTopSeparator : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned overlapsSectionHeaderViews : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned ignoreTouchSelect : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned allowsSelection : 1;
		unsigned allowsSelectionDuringEditing : 1;
		unsigned showsSelectionImmediatelyOnTouchBegin : 1;
		unsigned indexHidden : 1;
		unsigned indexHiddenForSearch : 1;
		unsigned defaultShowsHorizontalScrollIndicator : 1;
		unsigned defaultShowsVerticalScrollIndicator : 1;
		unsigned sectionIndexTitlesLoaded : 1;
		unsigned tableHeaderViewShouldAutoHide : 1;
		unsigned tableHeaderViewIsHidden : 1;
		unsigned tableHeaderViewWasHidden : 1;
		unsigned hideScrollIndicators : 1;
		unsigned sendReloadFinished : 1;
		unsigned keepFirstResponderWhenInteractionDisabled : 1;
		unsigned keepFirstResponderVisibleOnBoundsChange : 1;
		unsigned dontDrawTopShadowInGroupedSections : 1;
	} _tableFlags;	// 628 = 0x274
	unsigned _selectedSection;	// 640 = 0x280
	unsigned _selectedRow;	// 644 = 0x284
	unsigned _lastSelectedSection;	// 648 = 0x288
	unsigned _lastSelectedRow;	// 652 = 0x28c
}
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x320e5531; S=0x31fc3261; 
@property(assign, nonatomic) BOOL allowsSelectionDuringEditing;	// G=0x320e5549; S=0x31fe8d61; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x320c435d; S=0x3200bd09; 
@property(assign, nonatomic) id<UITableViewDataSource> dataSource;	// G=0x31fc5031; S=0x31fc4241; 
@property(assign, nonatomic) id<UITableViewDelegate> delegate;	// G=0x31fc4121; S=0x31fc3a65; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x31fffd69; S=0x320e677d; 
@property(assign, nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;	// G=0x320e56a9; S=0x320b07f9; 
@property(retain) id multiselectCheckmarkColor;	// G=0x320af67d; S=0x320e8ee1; converted property
@property(assign) BOOL overlapsSectionHeaderViews;	// G=0x31fc6045; S=0x320e6df1; converted property
@property(assign, nonatomic) float rowHeight;	// G=0x31fc515d; S=0x31fc3361; 
@property(retain, nonatomic) id scrollTestParameters;	// G=0x320e55b1; S=0x320e9e89; @synthesize=_reserved
@property(retain) UIColor *sectionBorderColor;	// G=0x31fd7fb5; S=0x320e8ded; converted property
@property(assign, nonatomic) float sectionFooterHeight;	// G=0x3200e60d; S=0x31fc3401; 
@property(assign, nonatomic) float sectionHeaderHeight;	// G=0x31febbfd; S=0x31fc33c9; 
@property(assign, nonatomic) int sectionIndexMinimumDisplayRowCount;	// G=0x320e55a1; S=0x31fec809; @synthesize=_sectionIndexMinimumDisplayRowCount
@property(retain) UIColor *separatorBottomShadowColor;	// G=0x31fd7ed5; S=0x320b0a01; converted property
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x31fd78ad; S=0x31fc3841; 
@property(assign, nonatomic) int separatorStyle;	// G=0x31fdb685; S=0x31fc3285; 
@property(retain) UIColor *separatorTopShadowColor;	// G=0x31fd796d; S=0x320b0859; converted property
@property(assign) BOOL showsSelectionImmediatelyOnTouchBegin;	// G=0x320e5585; S=0x320e5561; converted property
@property(readonly, assign, nonatomic) int style;	// G=0x31fc5f25; 
@property(retain, nonatomic) UIView *tableFooterView;	// G=0x31fc4ef1; S=0x32021ab9; 
@property(retain) id tableHeaderBackgroundColor;	// G=0x320e7cd5; S=0x31feb78d; converted property
@property(retain, nonatomic) UIView *tableHeaderView;	// G=0x31fc4ec1; S=0x31feb8b1; 
@property(assign) BOOL tableHeaderViewShouldAutoHide;	// G=0x31fee9d1; S=0x31fee9e9; converted property
@property(assign) BOOL usesVariableMargins;	// G=0x3200e5d5; S=0x320e5599; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x32067cf1; converted property
+ (void)_beginIgnoringResponderChanges;	// 0x320e565d
+ (void)_endIgnoringResponderChanges;	// 0x320e566d
- (id)initWithCoder:(id)coder;	// 0x320e7179
- (id)initWithFrame:(CGRect)frame;	// 0x31fc0241
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x31fc0285
- (void)_accessoryButtonAction:(id)action;	// 0x320e83fd
- (int)_accessoryTypeForCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x320e797d
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x31fcda21
- (void)_adjustCountLabel;	// 0x31fc6cc5
- (void)_adjustExtraSeparators;	// 0x31fcd2dd
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x32058599
- (void)_adjustReusableTableCells;	// 0x31fc516d
- (void)_adjustTableHeaderAndFooterViews;	// 0x31fc6c11
- (float)_animationDuration;	// 0x320e5529
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x320a20a1
- (void)_autoscroll:(id)autoscroll;	// 0x320e90f9
- (void)_backgroundColorAnimationDidStop;	// 0x31fc36e9
- (float)_backgroundInset;	// 0x31fdb409
- (void)_beginReorderAnimationForCell:(id)cell;	// 0x320e5dc5
- (void)_beginReorderingForCell:(id)cell;	// 0x320e6189
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x320e69c1
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x320147f5
- (BOOL)_canEditRowAtIndexPath:(id)indexPath;	// 0x31fd885d
- (BOOL)_canMoveRowAtIndexPath:(id)indexPath;	// 0x320add75
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x320e5731
- (BOOL)_canSelectRowContainingHitView:(id)view;	// 0x32029c75
- (void)_cancelCellReorder:(BOOL)reorder;	// 0x31fde011
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x32096ced
- (id)_cellAfterIndexPath:(id)path;	// 0x320e5b21
- (CGSize)_contentSize;	// 0x320c46bd
- (unsigned)_countStringRowCount;	// 0x31fc6345
- (id)_createPreparedCellForGlobalRow:(int)globalRow;	// 0x31fd5749
- (id)_createPreparedCellForGlobalRow:(int)globalRow withIndexPath:(id)indexPath;	// 0x31fd57e9
- (id)_createPreparedCellForRowAtIndexPath:(id)indexPath;	// 0x320e5abd
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;	// 0x320e55c1
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;	// 0x31fc501d
- (BOOL)_dataSourceImplementsTitleForFooterInSection;	// 0x320e561d
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;	// 0x3200e1ed
- (id)_defaultBackgroundView;	// 0x320e7685
- (BOOL)_delegateImplementsAlignmentForFooterInSection;	// 0x320e5605
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;	// 0x31febc0d
- (BOOL)_delegateImplementsHeightForFooterInSection;	// 0x320e55d9
- (BOOL)_delegateImplementsHeightForHeaderInSection;	// 0x31febc39
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;	// 0x31fc6071
- (BOOL)_delegateImplementsHeightForRowsInSection;	// 0x31fc6059
- (BOOL)_delegateImplementsMarginForTableView;	// 0x3200e5bd
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;	// 0x320e55ed
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;	// 0x31febc25
- (BOOL)_delegateImplementsViewForFooterInSection;	// 0x320e5631
- (BOOL)_delegateImplementsViewForHeaderInSection;	// 0x3200e1d5
- (BOOL)_delegateWantsCustomFooterForSection:(int)section;	// 0x320e6531
- (BOOL)_delegateWantsCustomHeaderForSection:(int)section;	// 0x320e668d
- (BOOL)_delegateWantsFooterForSection:(int)section;	// 0x31fc5f3d
- (BOOL)_delegateWantsFooterTitleForSection:(int)section;	// 0x320e65e5
- (BOOL)_delegateWantsHeaderForSection:(int)section;	// 0x31fc5ded
- (BOOL)_delegateWantsHeaderTitleForSection:(int)section;	// 0x320e6639
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated;	// 0x320e6519
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x32024a85
- (void)_deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x31fee849
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x320e58d5
- (void)_drawExtraSeparator:(CGRect)separator;	// 0x31fd2aa5
- (BOOL)_drawsTopShadowInGroupedSections;	// 0x31fd7a49
- (int)_editingStyleForRowAtIndexPath:(id)indexPath;	// 0x31fc882d
- (void)_endCellAnimationsWithContext:(id)context;	// 0x320a21e5
- (void)_endCellReorderAnimation:(BOOL)animation;	// 0x320e5e79
- (void)_endReorderAnimations;	// 0x320e5da5
- (void)_endReorderingForCell:(id)cell wasCancelled:(BOOL)cancelled animated:(BOOL)animated;	// 0x320ea0a5
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)_endSwipeToDeleteRow;	// 0x320e593d
- (void)_ensureRowDataIsLoaded;	// 0x31fd75f9
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x320e8fe5
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x320e5875
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x32018295
- (int)_globalReorderingRow;	// 0x320e5ae9
- (BOOL)_hasSwipeToDeleteRow;	// 0x320c488d
- (float)_heightForSeparator;	// 0x31fdb62d
- (id)_indexPathForSwipeRowAtPoint:(CGPoint)point;	// 0x320e9eb1
- (CGRect)_indexRect;	// 0x31ff18f5
- (BOOL)_isCellReorderable:(id)reorderable;	// 0x320e5a91
- (BOOL)_isEditingRowAtIndexPath:(id)indexPath;	// 0x320a5fcd
- (BOOL)_isEditingWithNoSwipedCell;	// 0x320a9efd
- (BOOL)_isLastRowForIndexPath:(id)indexPath;	// 0x320e59e9
- (BOOL)_isRowMultiSelect:(id)select;	// 0x31fc86f9
- (BOOL)_isShowingIndex;	// 0x31fdbf9d
- (BOOL)_isTableHeaderViewHidden;	// 0x320ad721
// declared property getter: - (BOOL)_keepsFirstResponderVisibleOnBoundsChange;	// 0x320e56a9
- (void)_languageChanged;	// 0x320e7941
- (id)_newSectionViewWithFrame:(CGRect)frame forSection:(int)section isHeader:(BOOL)header;	// 0x31fef0f5
- (void)_numberOfRowsDidChange;	// 0x31fc71e1
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x320e56c1
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta;	// 0x320e8825
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x320e7cf5
- (id)_popReusableHeaderView:(BOOL)view opaque:(BOOL)opaque;	// 0x31fef03d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x320e9805
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x31fc1a49
- (void)_reloadDataIfNeeded;	// 0x31fc86b9
- (void)_removeWasCanceledForCell:(id)cell;	// 0x320e5925
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x320e59d1
- (void)_reorderPositionChangedForCell:(id)cell withScrollFactorPercentage:(float)scrollFactorPercentage;	// 0x320ea6b9
- (id)_reorderingCell;	// 0x320a61a5
- (id)_reorderingIndexPath;	// 0x31fde0a9
- (id)_reorderingSupport;	// 0x31fd56fd
- (void)_resumeReloads;	// 0x31fc71e5
- (void)_reuseFooterView:(id)view forSection:(int)section;	// 0x320e9455
- (void)_reuseHeaderView:(id)view forSection:(int)section;	// 0x3201d9c9
- (void)_reuseTableViewCell:(id)cell;	// 0x31fde0cd
- (id)_rowData;	// 0x320e5699
- (void)_scheduleAdjustExtraSeparators;	// 0x31fc3399
- (id)_scriptingInfo;	// 0x320e7dc1
- (void)_scroll;	// 0x320e8499
- (void)_scrollFirstResponderCellToVisible:(BOOL)visible;	// 0x32067c09
- (void)_scrollToTopHidingTableHeader:(BOOL)topHidingTableHeader;	// 0x31fed361
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)topHidingTableHeaderIfNecessary;	// 0x31fed349
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3201b30d
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x320733f5
- (id)_sectionFooterViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x32023ae5
- (int)_sectionForFooterView:(id)footerView;	// 0x320e9981
- (int)_sectionForHeaderView:(id)headerView;	// 0x320e99f5
- (id)_sectionHeaderView:(BOOL)view withFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x31feecad
- (id)_sectionHeaderViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x31feec61
- (void)_sectionIndexChanged:(id)changed;	// 0x3206cf71
- (id)_sectionIndexColor;	// 0x320e7655
- (id)_sectionIndexTrackingBackgroundColor;	// 0x320e75bd
- (void)_selectAllSelectedRows;	// 0x320e8cd5
- (void)_selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x31fc8285
- (void)_sendDidEndEditingForIndexPath:(id)_send;	// 0x320e78c5
- (void)_sendWillBeginEditingForIndexPath:(id)_send;	// 0x320e7901
- (void)_setBackgroundColor:(id)color animated:(BOOL)animated;	// 0x31fc34c1
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)groupedSections;	// 0x320b0ba9
- (void)_setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x31fed319
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x320728f9
// declared property setter: - (void)_setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)change;	// 0x320b07f9
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withFrames:(BOOL)frames;	// 0x31fc1c15
- (void)_setRowCount:(int)count;	// 0x31fc456d
- (void)_setSectionIndexColor:(id)color;	// 0x320e75ed
- (void)_setSectionIndexTrackingBackgroundColor:(id)color;	// 0x320e7555
- (void)_setTopSeparatorCell:(id)cell;	// 0x320e5bbd
- (void)_setupCell:(id)cell forEditing:(BOOL)editing atIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x31fd8709
- (void)_setupCell:(id)cell forEditing:(BOOL)editing canEdit:(BOOL)edit editingStyle:(int)style shouldIndentWhileEditing:(BOOL)editing5 showsReorderControl:(BOOL)control accessoryType:(int)type animated:(BOOL)animated;	// 0x31fd88a1
- (void)_setupCellAnimations;	// 0x320a2055
- (void)_setupTableViewCommon;	// 0x31fc3041
- (float)_shadowHeightOffset;	// 0x320e7e7d
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float *)offset;	// 0x31fcd60d
- (BOOL)_shouldDisplayTopSeparator;	// 0x32010695
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)indexPath;	// 0x3202a1a9
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)indexPath;	// 0x320adce5
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x320e567d
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x320e57a9
- (void)_smoothScroll:(double)scroll;	// 0x3201bab1
- (float)_spacingForExtraSeparators;	// 0x31fcd8bd
- (void)_stopAutoscrollTimer;	// 0x320e64c5
- (void)_suspendReloads;	// 0x31fc4ba5
- (id)_swipeGestureRecognizer;	// 0x3201830d
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x320e6171
- (id)_tableFooterView:(BOOL)view;	// 0x320c4af9
- (void)_tableHeaderHeightDidChangeToHeight:(float)_tableHeaderHeight;	// 0x320c43bd
- (id)_tableHeaderView:(BOOL)view;	// 0x320c4a01
- (id)_tableViewCellForContentView:(id)contentView;	// 0x320e79d1
- (void)_tableViewDeferredTouchesBegan:(id)began;	// 0x320e8b09
- (id)_targetIndexPathAtPoint:(CGPoint)point;	// 0x320e5c39
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;	// 0x320e93f9
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;	// 0x320aba7d
- (void)_updateBackgroundView;	// 0x31fcf6b1
- (void)_updateBackgroundViewFrame;	// 0x3200c139
- (void)_updateContentSize;	// 0x31fc6385
- (void)_updateIndex;	// 0x31fc6ff5
- (void)_updateIndexFrame;	// 0x31fc6d75
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)notification;	// 0x31fc6d8d
- (void)_updateIndexTitles:(id)titles;	// 0x31fecb29
- (void)_updateRowData;	// 0x31fc4cc9
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x320a1f51
- (void)_updateSections:(id)sections updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x320e6c39
- (void)_updateShowScrollIndicatorsFlag;	// 0x31fc68f5
- (void)_updateTableHeaderViewForAutoHide;	// 0x3201b419
- (void)_updateTableHeadersAndFootersNow:(BOOL)now;	// 0x31fce9f1
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x3202a1c1
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x31fcdd25
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)now;	// 0x31fceb71
- (void)_updateWithItems:(id)items withOldRowData:(id)oldRowData oldRowRange:(NSRange)range newRowRange:(NSRange)range4 context:(id)context;	// 0x320a39f5
- (void)_userSelectRowAtPendingSelectionIndexPath:(id)pendingSelectionIndexPath;	// 0x3202c069
- (BOOL)_usesNewHeaderFooterBehavior;	// 0x31fc4bb9
- (void)_validateCells;	// 0x320e96f9
- (void)_validateSectionHeadersAndFooters;	// 0x320e9591
- (CGRect)_visibleBounds;	// 0x31fcdc19
- (id)_visibleCellForGlobalRow:(int)globalRow;	// 0x320a5f99
- (id)_visibleFooterViewForSection:(int)section;	// 0x320a9cdd
- (NSRange)_visibleGlobalRows;	// 0x320a4c6d
- (NSRange)_visibleGlobalRowsInRect:(CGRect)rect;	// 0x31fce6e5
- (id)_visibleHeaderViewForSection:(int)section;	// 0x320a9cc5
- (BOOL)_wantsSwipes;	// 0x320ea011
- (BOOL)_wasEditing;	// 0x320e5649
- (BOOL)_wasEditingRowAtIndexPath:(id)indexPath;	// 0x320ad345
- (void)adjustIndexPaths:(id)paths forMoveOfIndexPath:(id)indexPath toIndexPath:(id)indexPath3;	// 0x320e891d
- (BOOL)allowsFooterViewsToFloat;	// 0x32029041
- (BOOL)allowsHeaderViewsToFloat;	// 0x3201d7d1
// declared property getter: - (BOOL)allowsSelection;	// 0x320e5531
// declared property getter: - (BOOL)allowsSelectionDuringEditing;	// 0x320e5549
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x320e5811
// declared property getter: - (id)backgroundView;	// 0x320c435d
- (void)beginUpdates;	// 0x320ad251
- (BOOL)canHandleSwipes;	// 0x31fcbc11
- (id)cellForRowAtIndexPath:(id)indexPath;	// 0x31fc8775
// declared property getter: - (id)dataSource;	// 0x31fc5031
- (void)dealloc;	// 0x320e9a69
// declared property getter: - (id)delegate;	// 0x31fc4121
- (id)deleteConfirmationIndexPath;	// 0x320acb59
- (void)deleteRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x320ad285
- (void)deleteSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x320e6bf9
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x31fd6109
- (void)deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x31fee825
- (void)didMoveToWindow;	// 0x31fcbc29
- (void)encodeWithCoder:(id)coder;	// 0x320e6e3d
- (void)endUpdates;	// 0x320ad2c5
- (void)endUpdatesWithContext:(id)context;	// 0x320ad2dd
- (void)flashScrollIndicators;	// 0x31fc88a1
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x31feea75
- (void)handleSwipe:(id)swipe;	// 0x320e823d
- (float)heightForAutohidingTableHeaderView;	// 0x31fc14fd
- (float)heightForTableHeaderViewHiding;	// 0x31fc6825
- (void)highlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x32029f5d
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x320e7ef1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32014351
- (CGRect)indexFrame;	// 0x31fec391
- (id)indexPathForCell:(id)cell;	// 0x320e6da5
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x31fd5775
- (id)indexPathForRowAtPoint:(CGPoint)point;	// 0x32029d5d
- (id)indexPathForSelectedRow;	// 0x31fec819
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x32029db9
- (id)indexPathsForSelectedRows;	// 0x320e6b8d
- (id)indexPathsForVisibleRows;	// 0x3201db21
- (void)insertRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x320ad2a5
- (void)insertSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x320e6c19
// declared property getter: - (BOOL)isEditing;	// 0x31fffd69
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c405
- (BOOL)isIndexHidden;	// 0x320731b5
- (void)layoutSubviews;	// 0x31fcd1f1
- (unsigned)maximumNumberOfSectionIndexTitlesWithoutTruncation;	// 0x320e8321
- (void)mouseDown:(GSEventRef)down;	// 0x320e692d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x320e6899
- (void)mouseUp:(GSEventRef)up;	// 0x320e6805
// converted property getter: - (id)multiselectCheckmarkColor;	// 0x320af67d
- (void)noteNumberOfRowsChanged;	// 0x31fc4c21
- (int)numberOfRowsInSection:(int)section;	// 0x3206b7a5
- (int)numberOfSections;	// 0x3201d66d
// converted property getter: - (BOOL)overlapsSectionHeaderViews;	// 0x31fc6045
- (CGRect)rectForFooterInSection:(int)section;	// 0x320e8385
- (CGRect)rectForHeaderInSection:(int)section;	// 0x320acbb9
- (CGRect)rectForRowAtIndexPath:(id)indexPath;	// 0x31fd7585
- (CGRect)rectForSection:(int)section;	// 0x320e83c1
- (void)reloadData;	// 0x31fc45b1
- (void)reloadRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x320a1f31
- (void)reloadSectionIndexTitles;	// 0x320e6e29
- (void)reloadSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x320e6bd9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x31fc7f25
// declared property getter: - (float)rowHeight;	// 0x31fc515d
// declared property getter: - (id)scrollTestParameters;	// 0x320e55b1
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x320e6d65
- (void)scrollToRowAtIndexPath:(id)indexPath atScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x3206b7d9
// converted property getter: - (id)sectionBorderColor;	// 0x31fd7fb5
// declared property getter: - (float)sectionFooterHeight;	// 0x3200e60d
// declared property getter: - (float)sectionHeaderHeight;	// 0x31febbfd
// declared property getter: - (int)sectionIndexMinimumDisplayRowCount;	// 0x320e55a1
- (void)selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x31fc8259
// converted property getter: - (id)separatorBottomShadowColor;	// 0x31fd7ed5
// declared property getter: - (id)separatorColor;	// 0x31fd78ad
// declared property getter: - (int)separatorStyle;	// 0x31fdb685
// converted property getter: - (id)separatorTopShadowColor;	// 0x31fd796d
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x31fc3261
// declared property setter: - (void)setAllowsSelectionDuringEditing:(BOOL)editing;	// 0x31fe8d61
- (void)setBackgroundColor:(id)color;	// 0x31fc34a9
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3200bd09
- (void)setBounds:(CGRect)bounds;	// 0x31fed3d9
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x320024ed
- (void)setContentOffset:(CGPoint)offset;	// 0x31fc13b1
- (void)setCountString:(id)string;	// 0x31fecf31
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x31fecec5
// declared property setter: - (void)setDataSource:(id)source;	// 0x31fc4241
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31fc3a65
- (void)setDeleteConfirmationIndexPath:(id)path animated:(BOOL)animated;	// 0x320e76e1
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x320e677d
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x3200c189
- (void)setFrame:(CGRect)frame;	// 0x31fc0795
- (void)setIndexHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x320b0d51
- (void)setIndexHiddenForSearch:(BOOL)search;	// 0x320731c9
// converted property setter: - (void)setMultiselectCheckmarkColor:(id)color;	// 0x320e8ee1
// converted property setter: - (void)setOverlapsSectionHeaderViews:(BOOL)views;	// 0x320e6df1
// declared property setter: - (void)setRowHeight:(float)height;	// 0x31fc3361
// declared property setter: - (void)setScrollTestParameters:(id)parameters;	// 0x320e9e89
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x320e8ded
// declared property setter: - (void)setSectionFooterHeight:(float)height;	// 0x31fc3401
// declared property setter: - (void)setSectionHeaderHeight:(float)height;	// 0x31fc33c9
// declared property setter: - (void)setSectionIndexMinimumDisplayRowCount:(int)count;	// 0x31fec809
// converted property setter: - (void)setSeparatorBottomShadowColor:(id)color;	// 0x320b0a01
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x31fc3841
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x31fc3285
// converted property setter: - (void)setSeparatorTopShadowColor:(id)color;	// 0x320b0859
- (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x32097e0d
// converted property setter: - (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)begin;	// 0x320e5561
- (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x3201d3bd
// declared property setter: - (void)setTableFooterView:(id)view;	// 0x32021ab9
// converted property setter: - (void)setTableHeaderBackgroundColor:(id)color;	// 0x31feb78d
// declared property setter: - (void)setTableHeaderView:(id)view;	// 0x31feb8b1
// converted property setter: - (void)setTableHeaderViewShouldAutoHide:(BOOL)autoHide;	// 0x31fee9e9
- (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x31fc1d6d
// converted property setter: - (void)setUsesVariableMargins:(BOOL)margins;	// 0x320e5599
// converted property getter: - (BOOL)showsSelectionImmediatelyOnTouchBegin;	// 0x320e5585
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x320e9dd9
// declared property getter: - (int)style;	// 0x31fc5f25
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x320e559d
- (int)swipeCell:(int)cell atPoint:(CGPoint)point;	// 0x320e6a0d
// declared property getter: - (id)tableFooterView;	// 0x31fc4ef1
// converted property getter: - (id)tableHeaderBackgroundColor;	// 0x320e7cd5
// declared property getter: - (id)tableHeaderView;	// 0x31fc4ec1
// converted property getter: - (BOOL)tableHeaderViewShouldAutoHide;	// 0x31fee9d1
- (id)titleForDeleteConfirmationButton:(id)deleteConfirmationButton;	// 0x320e5a65
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x320297fd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32073979
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3202b54d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x320e7f7d
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x320e6795
- (void)unhighlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x3202c11d
// converted property getter: - (BOOL)usesVariableMargins;	// 0x3200e5d5
// converted property getter: - (id)visibleCells;	// 0x32067cf1
@end

