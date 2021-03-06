/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScroller.h"

@class UIFloatArray, NSMutableArray, _UITableReorderingSupport, _UITableDeleteAnimationSupport, UITableCountView;

@interface UITable : UIScroller {
	id _dataSource;	// 348 = 0x15c
	NSMutableArray *_tableColumns;	// 352 = 0x160
	SEL _doubleAction;	// 356 = 0x164
	UIFloatArray *_rowHeights;	// 360 = 0x168
	NSRange _visibleRows;	// 364 = 0x16c
	NSRange _visibleCols;	// 372 = 0x174
	NSMutableArray *_visibleCells;	// 380 = 0x17c
	_UITableDeleteAnimationSupport *_deleteAnimationSupport;	// 384 = 0x180
	unsigned _selectedRow;	// 388 = 0x184
	unsigned _lastHighlightedRow;	// 392 = 0x188
	int _rowCount;	// 396 = 0x18c
	int _tableReloadingSuspendedCount;	// 400 = 0x190
	float _padding;	// 404 = 0x194
	UIView *_accessoryView;	// 408 = 0x198
	UITableCountView *_countLabel;	// 412 = 0x19c
	NSMutableArray *_reusableTableCells;	// 416 = 0x1a0
	int _reusableCapacity;	// 420 = 0x1a4
	NSMutableArray *_extraSeparators;	// 424 = 0x1a8
	int _swipeToDeleteRow;	// 428 = 0x1ac
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;	// 432 = 0x1b0
	_UITableReorderingSupport *_reorderingSupport;	// 440 = 0x1b8
}
@property(retain) UIView *accessoryView;	// G=0x3555b501; S=0x3555b411; converted property
@property(retain) id dataSource;	// G=0x3555685d; S=0x35556685; converted property
@property(assign) int deleteConfirmationRow;	// G=0x355588a9; S=0x355589a9; converted property
@property(assign) SEL doubleAction;	// G=0x35558261; S=0x35558251; converted property
@property(assign) float rowHeight;	// G=0x35556c39; S=0x35556b8d; converted property
@property(assign) int separatorStyle;	// G=0x3555aa19; S=0x3555a9e1; converted property
@property(readonly, retain) NSMutableArray *tableColumns;	// G=0x35556989; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x35559aa5; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x355560b5
- (void)_addSubview:(id)subview atTop:(BOOL)top;	// 0x3555b995
- (void)_adjustCountLabel;	// 0x35562e35
- (void)_adjustExtraSeparators;	// 0x35562a69
- (void)_adjustReusableTableCells;	// 0x35562ec9
- (void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;	// 0x35560149
- (void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;	// 0x3555fff9
- (void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3555fc51
- (void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3555fe19
- (void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;	// 0x3555eaa5
- (void)_autoscroll:(id)autoscroll;	// 0x3555c069
- (void)_beginReorderingForCell:(id)cell;	// 0x3555bb59
- (BOOL)_checkCanSelectRow:(int)row view:(id)view;	// 0x3555adc1
- (unsigned)_countStringRowCount;	// 0x35562db1
- (void)_delaySendSelectionDidChange;	// 0x3555a191
- (void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;	// 0x3555e8d1
- (void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;	// 0x3555e809
- (void)_didDeleteRowForTableCell:(id)tableCell;	// 0x35562775
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x35562779
- (void)_disableInteraction;	// 0x35558d6d
- (void)_enableAndRestoreTableStateAfterAnimation;	// 0x355626d9
- (void)_enableInteraction;	// 0x35558d8d
- (void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;	// 0x3555866d
- (void)_endCellReorderAnimation;	// 0x3555cd31
- (void)_endReorderingForCell:(id)cell;	// 0x3555d249
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x35560e39
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x3555cc71
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x35562709
- (void)_getRowCount:(int *)count andHeight:(float *)height beforeVisibleCellsForRows:(id)rows;	// 0x3555fb59
- (float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;	// 0x35560299
- (CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;	// 0x355597e1
- (void)_reloadRowHeights;	// 0x3555b8b5
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x35558d59
- (int)_removeFromVisibleRows:(id)visibleRows;	// 0x3555fa29
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x3555c331
- (void)_restoreTableStateAfterAnimation;	// 0x3555f8f5
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x3555924d
- (void)_resumeReloads;	// 0x3555e715
- (int)_rowForTableCell:(id)tableCell;	// 0x3555e779
- (void)_saveTableStateBeforeAnimationForRow:(int)row;	// 0x3555f849
- (void)_scheduleAdjustExtraSeparators;	// 0x35562a31
- (id)_scriptingInfo;	// 0x35563021
- (void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;	// 0x3555a315
- (void)_sendSelectionDidChange;	// 0x3555a0f5
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update;	// 0x3555d5c1
- (void)_setRowCount:(int)count;	// 0x35562ddd
- (BOOL)_shouldDeleteRowForTableCell:(id)tableCell;	// 0x3555e935
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x35562a2d
- (void)_stopAutoscrollTimer;	// 0x3555bafd
- (void)_suspendReloads;	// 0x3555e701
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x3555d239
- (void)_updateContentSize;	// 0x3555b709
- (void)_updateOriginOfCells:(NSRange)cells;	// 0x35556da5
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x3555e6d1
- (void)_updateVisibleCellsNow;	// 0x3555d975
- (BOOL)_userCanDeleteRows;	// 0x3555863d
- (void)_userSelectRow:(int)row;	// 0x3555a085
- (void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;	// 0x35561e91
// converted property getter: - (id)accessoryView;	// 0x3555b501
- (void)addTableColumn:(id)column;	// 0x35556a39
- (UIEdgeInsets)adornmentMargins;	// 0x3555aad1
- (void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;	// 0x35558465
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x35558589
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x35558565
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;	// 0x35558519
- (float)animationDuration;	// 0x355572a9
- (BOOL)canDeleteRow:(int)row;	// 0x355585a1
- (BOOL)canHandleSwipes;	// 0x3555d619
- (BOOL)canInsertAtRow:(int)row;	// 0x355585e5
- (BOOL)canSelectRow:(int)row;	// 0x3555ad65
- (BOOL)cancelMouseTracking;	// 0x3555a225
- (BOOL)cancelTouchTracking;	// 0x3555a291
- (id)cellAtRow:(int)row column:(int)column;	// 0x35558fed
- (void)clearAllData;	// 0x35556d75
- (int)columnAtPoint:(CGPoint)point;	// 0x35559a3d
- (int)columnWithIdentifier:(id)identifier;	// 0x35556abd
- (NSRange)columnsInRect:(CGRect)rect;	// 0x35559935
- (void)completeRowDeletionAnimation;	// 0x3555859d
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x3555ae39
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x35559251
// converted property getter: - (id)dataSource;	// 0x3555685d
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x35559171
- (int)dataSourceGetRowCount;	// 0x355569b9
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x355569d9
- (void)dealloc;	// 0x35556251
// converted property getter: - (int)deleteConfirmationRow;	// 0x355588a9
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x35560359
- (void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;	// 0x35560349
// converted property getter: - (SEL)doubleAction;	// 0x35558261
- (void)drawExtraSeparator:(CGRect)separator;	// 0x3555b511
- (void)enableRowDeletion:(BOOL)deletion;	// 0x35558629
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x35558b6d
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x3555b895
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x3555b81d
- (CGRect)frameOfCellAtColumn:(int)column row:(int)row;	// 0x35558ef5
- (CGRect)frameOfCellAtRow:(int)row column:(int)column;	// 0x35558ec5
- (BOOL)getRow:(int *)row column:(int *)column ofTableCell:(id)tableCell;	// 0x35559b6d
- (BOOL)highlightNextRowByDelta:(int)delta;	// 0x3555a869
- (BOOL)highlightRow:(int)row;	// 0x3555a81d
- (void)highlightView:(id)view state:(BOOL)state;	// 0x3555b1ed
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3555abe1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3555ad29
- (void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;	// 0x35560ecd
- (BOOL)isRowDeletionEnabled;	// 0x35558dad
- (int)lastHighlightedRow;	// 0x3555a80d
- (void)layoutSubviews;	// 0x3555ba31
- (void)mouseDown:(GSEventRef)down;	// 0x355627e1
- (void)mouseDragged:(GSEventRef)dragged;	// 0x35562825
- (void)noteNumberOfRowsChanged;	// 0x35558115
- (int)numberOfColumns;	// 0x35556999
- (int)numberOfRows;	// 0x355569ed
- (UIEdgeInsets)pressedAdornmentMargins;	// 0x3555ab59
- (CGRect)rectOfColumn:(int)column;	// 0x355597bd
- (CGRect)rectOfRow:(int)row;	// 0x355598b5
- (CGRect)rectOfViewAtColumn:(int)column row:(int)row;	// 0x35558f25
- (void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;	// 0x35557091
- (void)reloadData;	// 0x35557ebd
- (void)reloadDataForInsertionOfRows:(NSRange)rows;	// 0x3555706d
- (void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;	// 0x355572b5
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x35558add
- (void)removeFromSuperview;	// 0x3555a1c1
- (void)removeTableColumn:(id)column;	// 0x35556a9d
- (int)rowAtPoint:(CGPoint)point;	// 0x35559a45
// converted property getter: - (float)rowHeight;	// 0x35556c39
- (NSRange)rowsInRect:(CGRect)rect;	// 0x35559941
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x3555b58d
- (void)scrollRowToVisible:(int)visible;	// 0x35556c8d
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x3555a2fd
- (BOOL)selectHighlightedRow;	// 0x3555a935
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection;	// 0x3555a0c1
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x3555a7a9
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;	// 0x3555a765
- (int)selectedRow;	// 0x3555a7fd
// converted property getter: - (int)separatorStyle;	// 0x3555aa19
// converted property setter: - (void)setAccessoryView:(id)view;	// 0x3555b411
- (void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;	// 0x35558dc1
- (void)setAllowsReordering:(BOOL)reordering;	// 0x3555905d
- (void)setCountString:(id)string;	// 0x355582e1
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x35558271
// converted property setter: - (void)setDataSource:(id)source;	// 0x35556685
- (void)setDelegate:(id)delegate;	// 0x3555686d
// converted property setter: - (void)setDeleteConfirmationRow:(int)row;	// 0x355589a9
// converted property setter: - (void)setDoubleAction:(SEL)action;	// 0x35558251
- (void)setFrame:(CGRect)frame;	// 0x35559e05
- (void)setNeedsDisplayInRowRange:(NSRange)rowRange;	// 0x35558181
- (void)setOffset:(CGPoint)offset;	// 0x35559c71
- (void)setPadding:(float)padding;	// 0x3555aa2d
- (void)setResusesTableCells:(BOOL)cells;	// 0x3555b545
- (void)setReusesTableCells:(BOOL)cells;	// 0x3555b555
// converted property setter: - (void)setRowHeight:(float)height;	// 0x35556b8d
- (void)setScrollsToSelection:(BOOL)selection;	// 0x3555a9c9
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x3555a9e1
- (BOOL)shouldDelaySendingSelectionChanged;	// 0x3555a7e5
- (BOOL)shouldIndentRow:(int)row;	// 0x355591f5
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x3555d61d
- (id)tableColumnWithIdentifier:(id)identifier;	// 0x35556b45
// converted property getter: - (id)tableColumns;	// 0x35556989
- (void)updateDisclosures;	// 0x35558dd9
- (BOOL)validateDataSource;	// 0x35556605
- (id)viewAtColumn:(int)column row:(int)row;	// 0x35558fd5
- (id)visibleCellForRow:(int)row column:(int)column;	// 0x35559ad5
// converted property getter: - (id)visibleCells;	// 0x35559aa5
- (id)visibleCellsWithoutUpdatingLayout;	// 0x35559a95
- (NSRange)visibleRowsInRect:(CGRect)rect;	// 0x35559c35
@end

