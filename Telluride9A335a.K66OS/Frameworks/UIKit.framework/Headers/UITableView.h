/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollView.h"

@class UISwipeGestureRecognizer, NSMutableArray, NSIndexPath, NSMutableDictionary, NSArray, NSTimer, UIColor, UIGestureRecognizer, UITableViewCell, UILongPressGestureRecognizer;
@protocol UITableViewDataSource, UITableViewDelegate;

@interface UITableView : UIScrollView <UIGestureRecognizerDelegate, NSCoding> {
@private
	int _style;	// 404 = 0x194
	id<UITableViewDataSource> _dataSource;	// 408 = 0x198
	id _rowData;	// 412 = 0x19c
	float _rowHeight;	// 416 = 0x1a0
	float _sectionHeaderHeight;	// 420 = 0x1a4
	float _sectionFooterHeight;	// 424 = 0x1a8
	CGRect _visibleBounds;	// 428 = 0x1ac
	NSRange _visibleRows;	// 444 = 0x1bc
	NSMutableArray *_visibleCells;	// 452 = 0x1c4
	NSIndexPath *_firstResponderIndexPath;	// 456 = 0x1c8
	UIView *_firstResponderView;	// 460 = 0x1cc
	unsigned _firstResponderViewType;	// 464 = 0x1d0
	NSMutableDictionary *_reusableTableCells;	// 468 = 0x1d4
	NSMutableDictionary *_nibMap;	// 472 = 0x1d8
	NSMutableDictionary *_nibExternalObjectsTables;	// 476 = 0x1dc
	UITableViewCell *_topSeparatorCell;	// 480 = 0x1e0
	id _topSeparator;	// 484 = 0x1e4
	NSMutableArray *_extraSeparators;	// 488 = 0x1e8
	CFDictionaryRef _visibleHeaderViews;	// 492 = 0x1ec
	CFDictionaryRef _visibleFooterViews;	// 496 = 0x1f0
	NSMutableArray *_reusableHeaderViews;	// 500 = 0x1f4
	NSMutableArray *_reusableFooterViews;	// 504 = 0x1f8
	NSMutableArray *_reusableTransparentHeaderViews;	// 508 = 0x1fc
	NSMutableArray *_reusableTransparentFooterViews;	// 512 = 0x200
	NSMutableArray *_highlightedIndexPaths;	// 516 = 0x204
	NSMutableArray *_selectedIndexPaths;	// 520 = 0x208
	int _swipeToDeleteSection;	// 524 = 0x20c
	int _swipeToDeleteRow;	// 528 = 0x210
	NSIndexPath *_pendingSelectionIndexPath;	// 532 = 0x214
	NSArray *_pendingDeselectionIndexPaths;	// 536 = 0x218
	UIView *_touchedContentView;	// 540 = 0x21c
	UIView *_newContentView;	// 544 = 0x220
	id _deleteAnimationSupport;	// 548 = 0x224
	id _reorderingSupport;	// 552 = 0x228
	UIView *_backgroundView;	// 556 = 0x22c
	UIView *_index;	// 560 = 0x230
	UIView *_tableHeaderBackgroundView;	// 564 = 0x234
	UIView *_tableHeaderView;	// 568 = 0x238
	UIView *_tableFooterView;	// 572 = 0x23c
	id _countLabel;	// 576 = 0x240
	int _tableReloadingSuspendedCount;	// 580 = 0x244
	int _tableDisplaySuspendedCount;	// 584 = 0x248
	int _sectionIndexMinimumDisplayRowCount;	// 588 = 0x24c
	int _itemCountFooterMinimumDisplayRowCount;	// 592 = 0x250
	NSMutableArray *_insertItems;	// 596 = 0x254
	NSMutableArray *_deleteItems;	// 600 = 0x258
	NSMutableArray *_reloadItems;	// 604 = 0x25c
	NSMutableArray *_moveItems;	// 608 = 0x260
	UIColor *_separatorColor;	// 612 = 0x264
	UIColor *_separatorTopShadowColor;	// 616 = 0x268
	UIColor *_separatorBottomShadowColor;	// 620 = 0x26c
	UIColor *_checkmarkColor;	// 624 = 0x270
	UIColor *_sectionBorderColor;	// 628 = 0x274
	UIColor *_indexColor;	// 632 = 0x278
	UIColor *_indexBackgroundColor;	// 636 = 0x27c
	NSArray *_defaultSectionIndexTitles;	// 640 = 0x280
	UISwipeGestureRecognizer *_swipeGestureRecognizer;	// 644 = 0x284
	UIGestureRecognizer *_gobblerGestureRecognizer;	// 648 = 0x288
	int _updateCount;	// 652 = 0x28c
	NSIndexPath *_displayingCellContentStringIndexPath;	// 656 = 0x290
	UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 660 = 0x294
	NSTimer *_longPressAutoscrollTimer;	// 664 = 0x298
	int _longPressAutoscrollDirection;	// 668 = 0x29c
	UIEdgeInsets _sectionContentInset;	// 672 = 0x2a0
	id _reserved;	// 688 = 0x2b0
	struct {
		unsigned dataSourceNumberOfRowsInSection : 1;
		unsigned dataSourceCellForRow : 1;
		unsigned dataSourceNumberOfSectionsInTableView : 1;
		unsigned dataSourceTitleForHeaderInSection : 1;
		unsigned dataSourceTitleForFooterInSection : 1;
		unsigned dataSourceDetailTextForHeaderInSection : 1;
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
		unsigned delegateCalloutTargetRectForCell;
		unsigned delegateShouldShowMenu : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateWillBeginReordering : 1;
		unsigned delegateDidEndReordering : 1;
		unsigned delegateDidCancelReordering : 1;
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
		unsigned allowsMultipleSelection : 1;
		unsigned allowsMultipleSelectionDuringEditing : 1;
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
		unsigned forceStaticHeadersAndFooters;
		unsigned displaysCellContentStringsOnTapAndHold : 1;
		unsigned displayingCellContentStringCallout : 1;
		unsigned longPressAutoscrollingActive : 1;
		unsigned adjustsRowHeightsForSectionLocation : 1;
		unsigned customSectionContentInsetSet : 1;
	} _tableFlags;	// 692 = 0x2b4
	unsigned _selectedSection;	// 720 = 0x2d0
	unsigned _selectedRow;	// 724 = 0x2d4
	unsigned _lastSelectedSection;	// 728 = 0x2d8
	unsigned _lastSelectedRow;	// 732 = 0x2dc
}
@property(assign, nonatomic, getter=_adjustsRowHeightsForSectionLocation, setter=_setAdjustsRowHeightsForSectionLocation:) BOOL adjustsRowHeightsForSectionLocation;	// G=0x339cd4e9; S=0x33b4d23d; 
@property(assign, nonatomic) BOOL allowsMultipleSelection;	// G=0x339e86c1; S=0x33b0ae49; 
@property(assign, nonatomic) BOOL allowsMultipleSelectionDuringEditing;	// G=0x33aa95c5; S=0x339c4399; 
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x33a2e749; S=0x339c30f5; 
@property(assign, nonatomic) BOOL allowsSelectionDuringEditing;	// G=0x33b16f29; S=0x339c4349; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x33aa7141; S=0x33a4cee9; 
@property(assign, nonatomic) id<UITableViewDataSource> dataSource;	// G=0x339cb0c5; S=0x339c44c1; 
@property(assign, nonatomic) id<UITableViewDelegate> delegate;	// G=0x339c4ded; S=0x339c47e1; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x339fb3a1; S=0x33b4cf15; 
@property(assign, nonatomic, getter=_keepsFirstResponderVisibleOnBoundsChange, setter=_setKeepsFirstResponderVisibleOnBoundsChange:) BOOL keepsFirstResponderVisibleOnBoundsChange;	// G=0x33b4dbd9; S=0x33b05069; 
@property(retain) id multiselectCheckmarkColor;	// G=0x33b4aba9; S=0x33b4aad9; converted property
@property(assign) BOOL overlapsSectionHeaderViews;	// G=0x339cd485; S=0x33b4c491; converted property
@property(assign, nonatomic) float rowHeight;	// G=0x339cb281; S=0x339c3251; 
@property(retain, nonatomic) id scrollTestParameters;	// G=0x33b27979; S=0x33ab7b51; @synthesize=_reserved
@property(retain) UIColor *sectionBorderColor;	// G=0x339e3e55; S=0x33b4abe1; converted property
@property(assign, nonatomic, getter=_sectionContentInset, setter=_setSectionContentInset:) UIEdgeInsets sectionContentInset;	// G=0x339cd501; S=0x33b4d265; @synthesize=_sectionContentInset
@property(assign, nonatomic) float sectionFooterHeight;	// G=0x33a4e441; S=0x339c3305; 
@property(assign, nonatomic) float sectionHeaderHeight;	// G=0x33a303c9; S=0x339c32c9; 
@property(assign, nonatomic) int sectionIndexMinimumDisplayRowCount;	// G=0x33b4d2a9; S=0x33a30425; @synthesize=_sectionIndexMinimumDisplayRowCount
@property(retain) UIColor *separatorBottomShadowColor;	// G=0x339e3d1d; S=0x33a10e7d; converted property
@property(retain, nonatomic) UIColor *separatorColor;	// G=0x339e3691; S=0x339c412d; 
@property(assign, nonatomic) int separatorStyle;	// G=0x339e86a9; S=0x339c3141; 
@property(retain) UIColor *separatorTopShadowColor;	// G=0x339e3765; S=0x33a10cb9; converted property
@property(assign) BOOL showsSelectionImmediatelyOnTouchBegin;	// G=0x33b4c97d; S=0x33b4c85d; converted property
@property(readonly, assign, nonatomic) int style;	// G=0x339cb481; 
@property(retain, nonatomic) UIView *tableFooterView;	// G=0x339caf65; S=0x33afefbd; 
@property(retain) id tableHeaderBackgroundColor;	// G=0x33b4aab9; S=0x339eb2f5; converted property
@property(retain, nonatomic) UIView *tableHeaderView;	// G=0x339ca9c9; S=0x339ca46d; 
@property(assign) BOOL tableHeaderViewShouldAutoHide;	// G=0x33a30475; S=0x33a3048d; converted property
@property(assign) BOOL usesVariableMargins;	// G=0x33b17539; S=0x33b4ca25; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x33aa84fd; converted property
+ (void)_beginIgnoringResponderChanges;	// 0x33b4d8c5
+ (void)_endIgnoringResponderChanges;	// 0x33b4d8d5
- (id)initWithCoder:(id)coder;	// 0x33b4b9ed
- (id)initWithFrame:(CGRect)frame;	// 0x339efdbd
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x339c0c81
- (void)_accessoryButtonAction:(id)action;	// 0x33ac2961
- (int)_accessoryTypeForCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x33b4ad09
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x339ca689
- (void)_adjustCountLabel;	// 0x339cdca9
- (void)_adjustExtraSeparators;	// 0x339da2b1
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x33abbab5
- (void)_adjustReusableTableCells;	// 0x339cb291
- (void)_adjustTableHeaderAndFooterViews;	// 0x339cdbe1
// declared property getter: - (BOOL)_adjustsRowHeightsForSectionLocation;	// 0x339cd4e9
- (float)_animationDuration;	// 0x33b4aaad
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x33a31499
- (void)_autoscrollForLongPress:(id)longPress;	// 0x33b4e83d
- (void)_autoscrollForReordering:(id)reordering;	// 0x33abf595
- (void)_backgroundColorAnimationDidStop;	// 0x339c3e69
- (float)_backgroundInset;	// 0x339e8425
- (void)_beginDisplayingCellContentStringCallout;	// 0x33b4dbf1
- (void)_beginReorderAnimationForCell:(id)cell;	// 0x33b4d4c5
- (void)_beginReorderingForCell:(id)cell;	// 0x33abd5f5
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x33b4cc51
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x33a9cc81
- (CGRect)_calloutTargetRectForCell:(id)cell;	// 0x33b4db25
- (BOOL)_canEditRowAtIndexPath:(id)indexPath;	// 0x339e493d
- (BOOL)_canMoveRowAtIndexPath:(id)indexPath;	// 0x33aa8e95
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x33b4d9b5
- (BOOL)_canSelectRowContainingHitView:(id)view;	// 0x33aa3e41
- (void)_cancelCellReorder:(BOOL)reorder;	// 0x33a555f9
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x33abe121
- (id)_cellAfterIndexPath:(id)path;	// 0x33b4d5ad
- (CGSize)_contentSize;	// 0x33aa7219
- (float)_contentWidthForCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x33b4d065
- (unsigned)_countStringRowCount;	// 0x339cd6f5
- (id)_createPreparedCellForGlobalRow:(int)globalRow;	// 0x339db6d5
- (id)_createPreparedCellForGlobalRow:(int)globalRow withIndexPath:(id)indexPath;	// 0x339db7a9
- (id)_createPreparedCellForRowAtIndexPath:(id)indexPath;	// 0x33b15bf5
- (BOOL)_dataSourceImplementsCanUpdateRowAtIndexPath;	// 0x33b4d2b9
- (BOOL)_dataSourceImplementsDetailTextForHeaderInSection;	// 0x33b16f71
- (BOOL)_dataSourceImplementsNumberOfSectionsInTableView;	// 0x339cb0b1
- (BOOL)_dataSourceImplementsTitleForFooterInSection;	// 0x33b251b9
- (BOOL)_dataSourceImplementsTitleForHeaderInSection;	// 0x33b16f5d
- (id)_defaultBackgroundView;	// 0x33b4b589
- (BOOL)_delegateImplementsAlignmentForFooterInSection;	// 0x33b24e59
- (BOOL)_delegateImplementsAlignmentForHeaderInSection;	// 0x33a18149
- (BOOL)_delegateImplementsHeightForFooterInSection;	// 0x33b24e85
- (BOOL)_delegateImplementsHeightForHeaderInSection;	// 0x33a18179
- (BOOL)_delegateImplementsHeightForRowAtIndexPath;	// 0x339cd4b5
- (BOOL)_delegateImplementsHeightForRowsInSection;	// 0x339cd49d
- (BOOL)_delegateImplementsMarginForTableView;	// 0x33a53b01
- (BOOL)_delegateImplementsTitleWidthForFooterInSection;	// 0x33b24e71
- (BOOL)_delegateImplementsTitleWidthForHeaderInSection;	// 0x33a18161
- (BOOL)_delegateImplementsViewForFooterInSection;	// 0x33b251a5
- (BOOL)_delegateImplementsViewForHeaderInSection;	// 0x33b17b95
- (BOOL)_delegateWantsCustomFooterForSection:(int)section;	// 0x33b4d2cd
- (BOOL)_delegateWantsFooterForSection:(int)section;	// 0x339cca6d
- (BOOL)_delegateWantsFooterTitleForSection:(int)section;	// 0x339ccc19
- (BOOL)_delegateWantsHeaderForSection:(int)section;	// 0x339cc831
- (BOOL)_delegateWantsHeaderTitleForSection:(int)section;	// 0x339cca11
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated;	// 0x33b4d38d
- (void)_deselectAllNonMultiSelectRowsAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x33a5a089
- (void)_deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x339d4199
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x33b178b9
- (BOOL)_displayingCellContentStringCallout;	// 0x33b4e12d
- (BOOL)_displaysCellContentStringsOnTapAndHold;	// 0x33b4aa95
- (void)_drawExtraSeparator:(CGRect)separator;	// 0x33a48341
- (BOOL)_drawsTopShadowInGroupedSections;	// 0x339e385d
- (int)_editingStyleForRowAtIndexPath:(id)indexPath;	// 0x33aa8da1
- (void)_endCellAnimationsWithContext:(id)context;	// 0x33a31671
- (void)_endCellReorderAnimation:(BOOL)animation;	// 0x33ac0d15
- (void)_endDisplayingCellContentStringCallout;	// 0x339a3371
- (void)_endReorderAnimations;	// 0x33b4d591
- (void)_endReorderingForCell:(id)cell wasCancelled:(BOOL)cancelled animated:(BOOL)animated;	// 0x33abffe9
- (void)_endSwipeToDeleteRowDidDelete:(BOOL)_endSwipeToDeleteRow;	// 0x33ac2775
- (void)_ensureRowDataIsLoaded;	// 0x339cacd1
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x33b4d3a1
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x33b4d859
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x33a9ee19
- (int)_globalReorderingRow;	// 0x33b4d651
- (BOOL)_hasSwipeToDeleteRow;	// 0x33aa81c5
- (BOOL)_headerAndFooterViewsFloat;	// 0x33a19045
- (float)_heightForSeparator;	// 0x339e8649
- (id)_indexPathForSwipeRowAtPoint:(CGPoint)point;	// 0x33b02eed
- (CGRect)_indexRect;	// 0x33a1a821
- (void)_installTableViewGestureRecognizers;	// 0x339c2acd
- (BOOL)_isCellReorderable:(id)reorderable;	// 0x33b4d6fd
- (BOOL)_isEditingRowAtIndexPath:(id)indexPath;	// 0x33a372b5
- (BOOL)_isEditingWithNoSwipedCell;	// 0x33aabdb5
- (BOOL)_isLastRowForIndexPath:(id)indexPath;	// 0x33b4d72d
- (BOOL)_isRowMultiSelect:(id)select;	// 0x33a2e691
- (BOOL)_isShowingIndex;	// 0x339e86d9
- (BOOL)_isTableHeaderViewHidden;	// 0x33b02879
// declared property getter: - (BOOL)_keepsFirstResponderVisibleOnBoundsChange;	// 0x33b4dbd9
- (void)_languageChanged;	// 0x33b4b075
- (id)_newSectionViewWithFrame:(CGRect)frame forSection:(int)section isHeader:(BOOL)header;	// 0x33a305ed
- (void)_numberOfRowsDidChange;	// 0x339ce291
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x33b4da6d
- (void)_performCellContentStringCalloutCleanupHidingMenu:(BOOL)menu;	// 0x339a3385
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta;	// 0x33b277c5
- (void)_performScrollTest:(id)test iterations:(int)iterations delta:(int)delta length:(int)length;	// 0x33b4a9b9
- (id)_popReusableHeaderView:(BOOL)view opaque:(BOOL)opaque;	// 0x33a3051d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b4b861
- (void)_rectChangedWithNewSize:(CGSize)newSize oldSize:(CGSize)size;	// 0x339c14e1
- (CGRect)_rectForTableFooterView;	// 0x33b4c5f5
- (CGRect)_rectForTableHeaderView;	// 0x33b4c5c1
- (void)_reloadDataIfNeeded;	// 0x339da26d
- (void)_removeTableViewGestureRecognizers;	// 0x339c29d1
- (void)_removeWasCanceledForCell:(id)cell;	// 0x33b4d845
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x33abe4e1
- (void)_reorderPositionChangedForCell:(id)cell withScrollFactorPercentage:(float)scrollFactorPercentage;	// 0x33abe4f5
- (id)_reorderingCell;	// 0x33a3749d
- (id)_reorderingIndexPath;	// 0x33a55729
- (id)_reorderingSupport;	// 0x339db685
- (void)_resumeReloads;	// 0x339ce295
- (void)_reuseFooterView:(id)view forSection:(int)section;	// 0x33b4ad65
- (void)_reuseHeaderView:(id)view forSection:(int)section;	// 0x33aa2431
- (void)_reuseTableViewCell:(id)cell;	// 0x33a5574d
- (id)_rowData;	// 0x33b4d901
- (void)_scheduleAdjustExtraSeparators;	// 0x339c328d
- (id)_scriptingInfo;	// 0x33ac3d7d
- (void)_scroll;	// 0x33b27999
- (void)_scrollFirstResponderCellToVisible:(BOOL)visible;	// 0x33abbe4d
- (BOOL)_scrollToTop;	// 0x33b4b53d
- (void)_scrollToTopHidingTableHeader:(BOOL)topHidingTableHeader;	// 0x339d7e39
- (void)_scrollToTopHidingTableHeaderIfNecessary:(BOOL)topHidingTableHeaderIfNecessary;	// 0x33a30465
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x33aa0bd5
- (void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(CGPoint *)offset;	// 0x33aa095d
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x33ab970d
// declared property getter: - (UIEdgeInsets)_sectionContentInset;	// 0x339cd501
- (id)_sectionFooterViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x33a53a51
- (int)_sectionForFooterView:(id)footerView;	// 0x33b4b66d
- (int)_sectionForHeaderView:(id)headerView;	// 0x33b4b5f1
- (id)_sectionHeaderView:(BOOL)view withFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x33a192d1
- (id)_sectionHeaderViewWithFrame:(CGRect)frame forSection:(int)section opaque:(BOOL)opaque reuseViewIfPossible:(BOOL)possible;	// 0x33a19291
- (void)_sectionIndexChanged:(id)changed;	// 0x33aa27ed
- (id)_sectionIndexColor;	// 0x33b4b6e9
- (id)_sectionIndexTrackingBackgroundColor;	// 0x33b4b78d
- (void)_selectAllSelectedRows;	// 0x33b4c885
- (void)_selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x33a2e1b5
- (void)_sendDidEndEditingForIndexPath:(id)_send;	// 0x33b20dad
- (void)_sendWillBeginEditingForIndexPath:(id)_send;	// 0x33b20d69
// declared property setter: - (void)_setAdjustsRowHeightsForSectionLocation:(BOOL)sectionLocation;	// 0x33b4d23d
- (void)_setBackgroundColor:(id)color animated:(BOOL)animated;	// 0x339c3529
- (void)_setDisplaysCellContentStringsOnTapAndHold:(BOOL)hold;	// 0x33a303d9
- (void)_setDrawsTopShadowInGroupedSections:(BOOL)groupedSections;	// 0x33a11041
- (void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x33b4cff5
- (void)_setHeaderAndFooterViewsFloat:(BOOL)aFloat;	// 0x33b4b831
- (void)_setHeightForTableHeaderViewHiding:(float)tableHeaderViewHiding;	// 0x33a30435
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x33ab88e1
// declared property setter: - (void)_setKeepsFirstResponderVisibleOnBoundsChange:(BOOL)change;	// 0x33b05069
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withFrames:(BOOL)frames;	// 0x339c16d1
- (void)_setRowCount:(int)count;	// 0x339c479d
// declared property setter: - (void)_setSectionContentInset:(UIEdgeInsets)inset;	// 0x33b4d265
- (void)_setSectionIndexColor:(id)color;	// 0x33b4b721
- (void)_setSectionIndexTrackingBackgroundColor:(id)color;	// 0x33b4b7c5
- (void)_setTopSeparatorCell:(id)cell;	// 0x33abfd21
- (void)_setupCell:(id)cell forEditing:(BOOL)editing atIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x339e47e5
- (void)_setupCell:(id)cell forEditing:(BOOL)editing canEdit:(BOOL)edit editingStyle:(int)style shouldIndentWhileEditing:(BOOL)editing5 showsReorderControl:(BOOL)control accessoryType:(int)type animated:(BOOL)animated;	// 0x339e4985
- (void)_setupCellAnimations;	// 0x33a31319
- (void)_setupTableViewCommon;	// 0x339c2dc9
- (float)_shadowHeightOffset;	// 0x33b4d7b1
- (BOOL)_shouldDisplayExtraSeparatorsAtOffset:(float *)offset;	// 0x33a4bc3d
- (BOOL)_shouldDisplayTopSeparator;	// 0x33a2ec21
- (BOOL)_shouldHighlightInsteadOfSelectRowAtIndexPath:(id)indexPath;	// 0x33aa48fd
- (BOOL)_shouldIndentWhileEditingForRowAtIndexPath:(id)indexPath;	// 0x33aa8df9
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x33b4d8e5
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x33b4d911
- (BOOL)_shouldUnionVisibleBounds;	// 0x339c1799
- (float)_spacingForExtraSeparators;	// 0x33a4bd5d
- (void)_stopAutoscrollTimer;	// 0x33ab7af1
- (void)_stopLongPressAutoscrollTimer;	// 0x33b4e6a5
- (void)_suspendReloads;	// 0x339cd29d
- (id)_swipeGestureRecognizer;	// 0x339c2a39
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x33ac0d01
- (void)_tableFooterHeightDidChangeToHeight:(float)_tableFooterHeight;	// 0x33aa8979
- (id)_tableFooterView:(BOOL)view;	// 0x33aacdb1
- (void)_tableHeaderHeightDidChangeToHeight:(float)_tableHeaderHeight;	// 0x33b4d695
- (id)_tableHeaderView:(BOOL)view;	// 0x33aa83d1
- (id)_tableViewCellForContentView:(id)contentView;	// 0x33ae325d
- (void)_tableViewDeferredTouchesBegan:(id)began;	// 0x33b4ca2d
- (id)_targetIndexPathAtPoint:(CGPoint)point;	// 0x33abf01d
- (id)_titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;	// 0x33ac153d
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(id)finished context:(id)context;	// 0x33a3d9e9
- (void)_updateBackgroundView;	// 0x339a4455
- (void)_updateBackgroundViewFrame;	// 0x33a4cfd1
- (void)_updateCellContentStringCallout:(id)callout;	// 0x33b4dc61
- (void)_updateContentSize;	// 0x339cb5dd
- (void)_updateIndex;	// 0x339ce071
- (void)_updateIndexFrame;	// 0x339cdd5d
- (void)_updateIndexFrameSuppressingChangeNotification:(BOOL)notification;	// 0x339cdd71
- (void)_updateIndexTitles:(id)titles;	// 0x33a18cf5
- (void)_updateRowData;	// 0x339cacfd
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x33a31391
- (void)_updateSections:(id)sections updateAction:(int)action withRowAnimation:(int)rowAnimation;	// 0x33aa8795
- (void)_updateShowScrollIndicatorsFlag;	// 0x339cd901
- (void)_updateTableHeaderViewForAutoHideWithVelocity:(float)velocity targetOffset:(CGPoint *)offset;	// 0x33aa0975
- (void)_updateTableHeadersAndFootersNow:(BOOL)now;	// 0x339e5841
- (void)_updateTableViewGestureRecognizersForEditing;	// 0x33aa8931
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x33a5bf99
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x339da675
- (void)_updateVisibleHeadersAndFootersNow:(BOOL)now;	// 0x339e5a19
- (void)_updateWithItems:(id)items updateSupport:(id)support;	// 0x33a34545
- (void)_userSelectRowAtPendingSelectionIndexPath:(id)pendingSelectionIndexPath;	// 0x33aa6c49
- (BOOL)_usesNewHeaderFooterBehavior;	// 0x339a40b9
- (void)_validateCells;	// 0x33b4b0b9
- (void)_validateSectionHeadersAndFooters;	// 0x33b4b1c1
- (CGRect)_visibleBounds;	// 0x339da5c1
- (CGRect)_visibleBoundsIncludingRowsOnly;	// 0x33b4e709
- (id)_visibleCellForGlobalRow:(int)globalRow;	// 0x33a37285
- (id)_visibleCells;	// 0x33aa850d
- (id)_visibleFooterViewForSection:(int)section;	// 0x33a3b48d
- (NSRange)_visibleGlobalRows;	// 0x33a3351d
- (NSRange)_visibleGlobalRowsInRect:(CGRect)rect;	// 0x339daf8d
- (id)_visibleHeaderViewForSection:(int)section;	// 0x33a3b479
- (BOOL)_wantsSwipes;	// 0x33b02d55
- (BOOL)_wasEditing;	// 0x33aaa3f9
- (BOOL)_wasEditingRowAtIndexPath:(id)indexPath;	// 0x33aad8e9
- (void)adjustIndexPaths:(id)paths forMoveOfIndexPath:(id)indexPath toIndexPath:(id)indexPath3;	// 0x33ac0ac5
- (BOOL)allowsFooterViewsToFloat;	// 0x33a3b4a1
- (BOOL)allowsHeaderViewsToFloat;	// 0x33a1902d
// declared property getter: - (BOOL)allowsMultipleSelection;	// 0x339e86c1
// declared property getter: - (BOOL)allowsMultipleSelectionDuringEditing;	// 0x33aa95c5
// declared property getter: - (BOOL)allowsSelection;	// 0x33a2e749
// declared property getter: - (BOOL)allowsSelectionDuringEditing;	// 0x33b16f29
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x33ac2705
// declared property getter: - (id)backgroundView;	// 0x33aa7141
- (void)beginUpdates;	// 0x33a312e5
- (BOOL)canHandleSwipes;	// 0x339a32b5
- (BOOL)cancelTouchTracking;	// 0x33abde5d
- (id)cellForRowAtIndexPath:(id)indexPath;	// 0x33a3dde1
// declared property getter: - (id)dataSource;	// 0x339cb0c5
- (void)dealloc;	// 0x33ab7071
// declared property getter: - (id)delegate;	// 0x339c4ded
- (id)deleteConfirmationIndexPath;	// 0x33addaf5
- (void)deleteRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x33aa8911
- (void)deleteSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x33aa88d1
- (id)dequeueReusableCellWithIdentifier:(id)identifier;	// 0x339dc15d
- (void)deselectRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x339d4175
- (void)didMoveToWindow;	// 0x339a3309
- (void)encodeWithCoder:(id)coder;	// 0x33b4c019
- (void)endUpdates;	// 0x33a31625
- (void)endUpdatesWithContext:(id)context;	// 0x33a31639
- (void)flashScrollIndicators;	// 0x339eb3c1
- (int)globalRowForRowAtIndexPath:(id)indexPath;	// 0x339a900d
- (void)handleSwipe:(id)swipe;	// 0x33b20ad5
- (float)heightForAutohidingTableHeaderView;	// 0x339a3f55
- (float)heightForTableHeaderViewHiding;	// 0x339cd82d
- (void)highlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x33aa4665
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x33b4ce71
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33a9cbdd
- (CGRect)indexFrame;	// 0x339cab29
- (id)indexPathForCell:(id)cell;	// 0x33aac7c1
- (id)indexPathForRowAtGlobalRow:(int)globalRow;	// 0x339db70d
- (id)indexPathForRowAtPoint:(CGPoint)point;	// 0x33aa3f2d
- (id)indexPathForSelectedRow;	// 0x339a8edd
- (id)indexPathsForRowsInRect:(CGRect)rect;	// 0x33aa3f7d
- (id)indexPathsForSelectedRows;	// 0x33b4c809
- (id)indexPathsForVisibleRows;	// 0x33aff179
- (void)insertRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x33aa88f1
- (void)insertSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x33aa8775
// declared property getter: - (BOOL)isEditing;	// 0x339fb3a1
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c06639
- (BOOL)isIndexHidden;	// 0x33ab9291
- (void)layoutSubviews;	// 0x339da165
- (void)longPress:(id)press;	// 0x33b4e251
- (BOOL)longPressGestureWithinAutoscrollZone;	// 0x33b4e145
- (unsigned)maximumNumberOfSectionIndexTitlesWithoutTruncation;	// 0x33b4c995
- (void)mouseDown:(GSEventRef)down;	// 0x33b4cca9
- (void)mouseDragged:(GSEventRef)dragged;	// 0x33b4cd41
- (void)mouseUp:(GSEventRef)up;	// 0x33b4cdd9
- (void)moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;	// 0x33b4c749
- (void)moveSection:(int)section toSection:(int)section2;	// 0x33b4c64d
// converted property getter: - (id)multiselectCheckmarkColor;	// 0x33b4aba9
- (void)noteNumberOfRowsChanged;	// 0x339cd2fd
- (int)numberOfRowsInSection:(int)section;	// 0x33a46f0d
- (int)numberOfSections;	// 0x33a4c525
// converted property getter: - (BOOL)overlapsSectionHeaderViews;	// 0x339cd485
- (CGRect)rectForFooterInSection:(int)section;	// 0x33b4c571
- (CGRect)rectForHeaderInSection:(int)section;	// 0x33b4c521
- (CGRect)rectForRowAtIndexPath:(id)indexPath;	// 0x339dfc8d
- (CGRect)rectForSection:(int)section;	// 0x33b4c4d1
- (void)registerNib:(id)nib forCellReuseIdentifier:(id)cellReuseIdentifier;	// 0x33b4cf29
- (void)reloadData;	// 0x339ccc75
- (void)reloadRowsAtIndexPaths:(id)indexPaths withRowAnimation:(int)rowAnimation;	// 0x33a3136d
- (void)reloadSectionIndexTitles;	// 0x33b4c469
- (void)reloadSections:(id)sections withRowAnimation:(int)rowAnimation;	// 0x33b4c629
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x339d7d5d
// declared property getter: - (float)rowHeight;	// 0x339cb281
// declared property getter: - (id)scrollTestParameters;	// 0x33b27979
- (void)scrollToNearestSelectedRowAtScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x33b1b02d
- (void)scrollToRowAtIndexPath:(id)indexPath atScrollPosition:(int)scrollPosition animated:(BOOL)animated;	// 0x33a48385
// converted property getter: - (id)sectionBorderColor;	// 0x339e3e55
// declared property getter: - (float)sectionFooterHeight;	// 0x33a4e441
// declared property getter: - (float)sectionHeaderHeight;	// 0x33a303c9
// declared property getter: - (int)sectionIndexMinimumDisplayRowCount;	// 0x33b4d2a9
- (void)selectRowAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position;	// 0x33a2e191
// converted property getter: - (id)separatorBottomShadowColor;	// 0x339e3d1d
// declared property getter: - (id)separatorColor;	// 0x339e3691
// declared property getter: - (int)separatorStyle;	// 0x339e86a9
// converted property getter: - (id)separatorTopShadowColor;	// 0x339e3765
// declared property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x33b0ae49
// declared property setter: - (void)setAllowsMultipleSelectionDuringEditing:(BOOL)editing;	// 0x339c4399
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x339c30f5
// declared property setter: - (void)setAllowsSelectionDuringEditing:(BOOL)editing;	// 0x339c4349
- (void)setBackgroundColor:(id)color;	// 0x339c3515
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x33a4cee9
- (void)setBounds:(CGRect)bounds;	// 0x339d4335
- (void)setContentInset:(UIEdgeInsets)inset;	// 0x339f0f3d
- (void)setContentOffset:(CGPoint)offset;	// 0x339a3db5
- (void)setCountString:(id)string;	// 0x33a181b1
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x33a17d49
// declared property setter: - (void)setDataSource:(id)source;	// 0x339c44c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x339c47e1
- (void)setDeleteConfirmationIndexPath:(id)path animated:(BOOL)animated;	// 0x33b4b339
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x33b4cf15
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x33a4db31
- (void)setFrame:(CGRect)frame;	// 0x339c119d
- (void)setIndexHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x33a17db9
- (void)setIndexHiddenForSearch:(BOOL)search;	// 0x33ab92a9
// converted property setter: - (void)setMultiselectCheckmarkColor:(id)color;	// 0x33b4aad9
// converted property setter: - (void)setOverlapsSectionHeaderViews:(BOOL)views;	// 0x33b4c491
// declared property setter: - (void)setRowHeight:(float)height;	// 0x339c3251
// declared property setter: - (void)setScrollTestParameters:(id)parameters;	// 0x33ab7b51
// converted property setter: - (void)setSectionBorderColor:(id)color;	// 0x33b4abe1
// declared property setter: - (void)setSectionFooterHeight:(float)height;	// 0x339c3305
// declared property setter: - (void)setSectionHeaderHeight:(float)height;	// 0x339c32c9
// declared property setter: - (void)setSectionIndexMinimumDisplayRowCount:(int)count;	// 0x33a30425
// converted property setter: - (void)setSeparatorBottomShadowColor:(id)color;	// 0x33a10e7d
// declared property setter: - (void)setSeparatorColor:(id)color;	// 0x339c412d
// declared property setter: - (void)setSeparatorStyle:(int)style;	// 0x339c3141
// converted property setter: - (void)setSeparatorTopShadowColor:(id)color;	// 0x33a10cb9
- (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x33abe4a9
// converted property setter: - (void)setShowsSelectionImmediatelyOnTouchBegin:(BOOL)begin;	// 0x33b4c85d
- (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x33a4be6d
// declared property setter: - (void)setTableFooterView:(id)view;	// 0x33afefbd
// converted property setter: - (void)setTableHeaderBackgroundColor:(id)color;	// 0x339eb2f5
// declared property setter: - (void)setTableHeaderView:(id)view;	// 0x339ca46d
// converted property setter: - (void)setTableHeaderViewShouldAutoHide:(BOOL)autoHide;	// 0x33a3048d
- (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x339c188d
// converted property setter: - (void)setUsesVariableMargins:(BOOL)margins;	// 0x33b4ca25
// converted property getter: - (BOOL)showsSelectionImmediatelyOnTouchBegin;	// 0x33b4c97d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33b14615
// declared property getter: - (int)style;	// 0x339cb481
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x33b4ca29
- (int)swipeCell:(int)cell atPoint:(CGPoint)point;	// 0x33b20bd5
// declared property getter: - (id)tableFooterView;	// 0x339caf65
// converted property getter: - (id)tableHeaderBackgroundColor;	// 0x33b4aab9
// declared property getter: - (id)tableHeaderView;	// 0x339ca9c9
// converted property getter: - (BOOL)tableHeaderViewShouldAutoHide;	// 0x33a30475
- (id)titleForDeleteConfirmationButton:(id)deleteConfirmationButton;	// 0x33ac150d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33aa3865
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33adab25
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33aa5d7d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33b02a5d
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x33ae315d
- (void)unhighlightRowAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x33aa6d05
// converted property getter: - (BOOL)usesVariableMargins;	// 0x33b17539
// converted property getter: - (id)visibleCells;	// 0x33aa84fd
@end

