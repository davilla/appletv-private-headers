/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRContainerViewCell.h"

@class NSTimer, NSMutableArray, BRCursorControl, BRContainerViewDataCache;

__attribute__((visibility("hidden")))
@interface BRGridView : BRControl <BRContainerViewCell> {
	int _mode;	// 84 = 0x54
	BRControl *_requester;	// 88 = 0x58
	NSRange _range;	// 92 = 0x5c
	float _lastGapHeight;	// 100 = 0x64
	double _heightToRange;	// 104 = 0x68
	double _controlHeight;	// 112 = 0x70
	XXStruct_qlg9jA _columWidth;	// 120 = 0x78
	XXStruct_qlg9jA _horizontalGap;	// 124 = 0x7c
	XXStruct_qlg9jA _verticalGap;	// 128 = 0x80
	float _leftMargin;	// 132 = 0x84
	float _rightMargin;	// 136 = 0x88
	float _bottomMargin;	// 140 = 0x8c
	float _bottomMarginFactor;	// 144 = 0x90
	float _topMargin;	// 148 = 0x94
	float _topMarginFactor;	// 152 = 0x98
	int _navigationBehavior;	// 156 = 0x9c
	id _dataSource;	// 160 = 0xa0
	id _delegate;	// 164 = 0xa4
	BRCursorControl *_trackingCursor;	// 168 = 0xa8
	BOOL _needsReload;	// 172 = 0xac
	NSMutableArray *_editEventQueue;	// 176 = 0xb0
	long _loadIndex;	// 180 = 0xb4
	NSTimer *_forceDisplayTimer;	// 184 = 0xb8
	BOOL _followsLoadAndDisplayOnDemand;	// 188 = 0xbc
	id _loadCompletionBlock;	// 192 = 0xc0
	BOOL _toldToLoad;	// 196 = 0xc4
	NSMutableArray *_completedIndexes;	// 200 = 0xc8
	BRContainerViewDataCache *_dataCache;	// 204 = 0xcc
	XXStruct_qlg9jA _itemHeight;	// 208 = 0xd0
	long _defaultFocusIndex;	// 212 = 0xd4
}
@property(assign) float bottomMargin;	// G=0x2c2a5d; S=0x2c29d1; converted property
@property(assign) XXStruct_qlg9jA columnWidth;	// G=0x2c1ae5; S=0x2c1ad5; converted property
@property(retain) id cursor;	// G=0x2c38f1; S=0x2c38b5; converted property
@property(retain) id dataSource;	// G=0x2c19f5; S=0x2c19ad; converted property
@property(assign, nonatomic) long defaultFocusIndex;	// G=0x2c2eb1; S=0x2c2ec1; @synthesize=_defaultFocusIndex
@property(assign) id delegate;	// G=0x2c1a15; S=0x2c1a05; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x2c1b45; S=0x2c1b01; converted property
@property(assign, nonatomic) XXStruct_qlg9jA itemHeight;	// G=0x2c2e85; S=0x2c2ea1; @synthesize=_itemHeight
@property(assign) float leftMargin;	// G=0x2c1c49; S=0x2c1c0d; converted property
@property(assign, nonatomic) int navigationBehavior;	// G=0x2c2ed1; S=0x2c2ee1; @synthesize=_navigationBehavior
@property(assign) float rightMargin;	// G=0x2c1c95; S=0x2c1c59; converted property
@property(assign) long selection;	// G=0x2c1a35; S=0x2c1a25; converted property
@property(assign) float topMargin;	// G=0x2c2af9; S=0x2c2a6d; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x2c1bbd; S=0x2c1b61; converted property
- (id)init;	// 0x2c1629
- (id)initWithLayout:(id)layout;	// 0x2c1789
- (BOOL)_allDisplayComplete;	// 0x2c5bfd
- (void)_animationDidStartInDisplayMode:(id)_animation;	// 0x2c4c51
- (void)_animationDidStartInEditModeMode:(id)_animation;	// 0x2c4c55
- (void)_animationDidStopInDisplayMode:(id)_animation finished:(BOOL)finished;	// 0x2c4c59
- (void)_animationDidStopInEditMode:(id)_animation finished:(BOOL)finished;	// 0x2c4c5d
- (id)_completedIndexes;	// 0x2c5b3d
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x2c53c1
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x2c4ed9
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x2c4ff1
- (id)_controlsInRange:(NSRange)range;	// 0x2c5249
- (id)_createControlsInRange:(NSRange)range;	// 0x2c5169
- (void)_displayControlsForRowThatContainsIndex:(long)rowThatContainsIndex force:(bool)force;	// 0x2c57f1
- (void)_focusChanged:(id)changed;	// 0x2c6629
- (void)_forceDisplayTimerFired:(id)fired;	// 0x2c57b5
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x2c42c1
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x2c4411
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x2c44c9
- (BOOL)_handleEventInDisplayMode:(id)displayMode;	// 0x2c480d
- (BOOL)_handleEventInEditMode:(id)editMode;	// 0x2c4a99
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x2c4db5
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x2c4e01
- (double)_heightToRange;	// 0x2c40b5
- (long)_indexOfFocusedControl;	// 0x2c50f1
- (void)_layoutSubcontrols;	// 0x2c3a29
- (void)_loadControlWithIndex:(long)index start:(BOOL)start;	// 0x2c5429
- (BOOL)_okToLoadWithIndex:(long)index;	// 0x2c56f5
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x2c4195
- (void)_reloadIfNeeded;	// 0x2c66a5
- (void)_restorePersistentSavedSelection;	// 0x2c641d
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x2c4d51
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x2c3901
- (BOOL)_setMode:(int)mode;	// 0x2c4589
- (void)_setSelectedItemJiggling:(BOOL)jiggling;	// 0x2c5cd1
- (void)_stopForceDisplayTimer;	// 0x2c5781
- (BOOL)_swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x2c5eb1
- (id)_swapPositionAnimationFromIndex:(long)index toIndex:(long)index2;	// 0x2c5dd9
- (double)_totalHeight;	// 0x2c3fb1
- (void)_updatePersistentSavedSelection;	// 0x2c655d
- (id)accessibilityControls;	// 0x2c21ad
- (void)animationDidStart:(id)animation;	// 0x2c2ce9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x2c2d21
// converted property getter: - (float)bottomMargin;	// 0x2c2a5d
- (BOOL)brEventAction:(id)action;	// 0x2c2781
- (BOOL)canMoveItemAtIndex:(long)index;	// 0x2c33f9
- (void)cancelContainerViewLoad;	// 0x2c2e05
// converted property getter: - (XXStruct_qlg9jA)columnWidth;	// 0x2c1ae5
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x2c3569
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x2c37e1
- (CGRect)controlFrameAtIndex:(long)index;	// 0x2c36f5
- (void)controlWasActivated;	// 0x2c2261
- (void)controlWasDeactivated;	// 0x2c2305
- (void)controlWasUnfocused;	// 0x2c2425
- (unsigned)countOfCells;	// 0x2c21c9
// converted property getter: - (id)cursor;	// 0x2c38f1
- (long)dataCount;	// 0x2c1a55
// converted property getter: - (id)dataSource;	// 0x2c19f5
- (void)dealloc;	// 0x2c18e1
// declared property getter: - (long)defaultFocusIndex;	// 0x2c2eb1
// converted property getter: - (id)delegate;	// 0x2c1a15
- (void)didFocusItemAtIndex:(long)index;	// 0x2c3241
- (BOOL)didPlayItemAtIndex:(long)index;	// 0x2c33a1
- (BOOL)didSelectItemAtIndex:(long)index;	// 0x2c3349
- (void)didUnFocusItemAtIndex:(long)index;	// 0x2c32f1
- (void)focusControlAtIndex:(long)index;	// 0x2c35c9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x2c27c1
- (void)grid:(id)grid didFocusItemAtIndex:(long)index;	// 0x2c2e75
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x2c2e81
- (void)grid:(id)grid didUnFocusItemAtIndex:(long)index;	// 0x2c2e7d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x2c2e69
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x2c2e65
- (void)grid:(id)grid willDisplayItemAtIndex:(long)index;	// 0x2c2e6d
- (long)grid:(id)grid willFocusItemAtIndex:(long)index;	// 0x2c2e71
- (void)grid:(id)grid willUnFocusItemAtIndex:(long)index;	// 0x2c2e79
- (float)heightForItemAtIndex:(long)index;	// 0x2c310d
- (float)heightOfControlAtIndex:(long)index;	// 0x2c1e75
- (float)heightToMaximum:(float)maximum;	// 0x2c1d49
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x2c1b45
- (long)indexForItemID:(id)itemID;	// 0x2c30b1
- (unsigned)indexInCellsOfObject:(id)object;	// 0x2c21d9
- (id)initialFocus;	// 0x2c2539
- (id)itemAtIndex:(long)index;	// 0x2c2ff9
// declared property getter: - (XXStruct_qlg9jA)itemHeight;	// 0x2c2e85
- (id)itemIDAtIndex:(long)index;	// 0x2c3055
- (void)layoutSubcontrols;	// 0x2c2b49
// converted property getter: - (float)leftMargin;	// 0x2c1c49
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x2c2d59
- (BOOL)moveItemAtIndex:(long)index toIndex:(long)index2;	// 0x2c34ad
// declared property getter: - (int)navigationBehavior;	// 0x2c2ed1
- (long)numberOfColumns;	// 0x2c2fd9
- (long)numberOfColumnsInGrid:(id)grid;	// 0x2c2e61
- (long)numberOfItems;	// 0x2c2fb9
- (long)numberOfItemsInGrid:(id)grid;	// 0x2c2e5d
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x2c2221
- (void)populateDataCache:(id)cache;	// 0x2c2ef1
- (float)positionOfColumn:(long)column;	// 0x2c1e21
- (void)reload;	// 0x2c1ea9
- (void)reloadItemAtIndex:(long)index;	// 0x2c1ffd
- (void)reloadItemsAtIndexes:(id)indexes;	// 0x2c20c9
- (void)restorePersistentSavedSelection;	// 0x2c219d
// converted property getter: - (float)rightMargin;	// 0x2c1c95
- (long)rowCount;	// 0x2c1a65
- (void)scrollingCompleted;	// 0x2c2c71
- (void)selectItemAtIndex:(long)index;	// 0x2c2fa9
- (long)selectedIndex;	// 0x2c2f99
- (id)selectedObject;	// 0x2c1a45
// converted property getter: - (long)selection;	// 0x2c1a35
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x2c29d1
// converted property setter: - (void)setColumnWidth:(XXStruct_qlg9jA)width;	// 0x2c1ad5
// converted property setter: - (void)setCursor:(id)cursor;	// 0x2c38b5
// converted property setter: - (void)setDataSource:(id)source;	// 0x2c19ad
// declared property setter: - (void)setDefaultFocusIndex:(long)index;	// 0x2c2ec1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x2c1a05
- (void)setFollowsLoadAndDisplayOnDemand;	// 0x2c2e39
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x2c1b01
- (void)setIgnoreLoadAndDisplayOnDemand;	// 0x2c2e35
- (void)setIgnoreLoadAndDisplayOnDemandDisableAnimations:(BOOL)animations;	// 0x2c2e4d
// declared property setter: - (void)setItemHeight:(XXStruct_qlg9jA)height;	// 0x2c2ea1
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x2c1c0d
// declared property setter: - (void)setNavigationBehavior:(int)behavior;	// 0x2c2ee1
- (void)setNeedsReload;	// 0x2c2149
- (void)setReadyToDisplay;	// 0x2c2e31
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x2c1c59
// converted property setter: - (void)setSelection:(long)selection;	// 0x2c1a25
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x2c2a6d
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x2c1b61
- (void)setVerticalMargins:(float)margins;	// 0x2c1bd9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c2b59
- (BOOL)swapControlAtIndex:(long)index withControlAtIndex:(long)index2;	// 0x2c3529
- (long)targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x2c344d
// converted property getter: - (float)topMargin;	// 0x2c2af9
- (void)updatePersistentSavedSelection;	// 0x2c218d
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x2c1bbd
- (id)visibleControlAtIndex:(long)index;	// 0x2c1cf9
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x2c1ca5
- (NSRange)visibleRange;	// 0x2c1ce1
- (void)visibleScrollRectChanged;	// 0x2c2b09
- (void)willDisplayItemAtIndex:(long)index;	// 0x2c318d
- (long)willFocusItemAtIndex:(long)index;	// 0x2c31e5
- (void)willUnFocusItemAtIndex:(long)index;	// 0x2c3299
- (void)windowMaxBoundsChanged;	// 0x2c2469
@end

