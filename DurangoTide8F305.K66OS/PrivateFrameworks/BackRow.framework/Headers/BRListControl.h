/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class ListAnimationDelegate, BRSelectionLozengeLayer, NSArray, NSTimer, BRGridControl, BRScrollControl;

@interface BRListControl : BRControl {
@private
	NSArray *_providers;	// 44 = 0x2c
	BRSelectionLozengeLayer *_topWidget;	// 48 = 0x30
	BRSelectionLozengeLayer *_bottomWidget;	// 52 = 0x34
	BRScrollControl *_scroller;	// 56 = 0x38
	BRGridControl *_list;	// 60 = 0x3c
	ListAnimationDelegate *_animationDelegate;	// 64 = 0x40
	NSTimer *_pokeTimer;	// 68 = 0x44
	NSTimer *_delayTimer;	// 72 = 0x48
	NSTimer *_repeatTimer;	// 76 = 0x4c
	double _repeatStart;	// 80 = 0x50
	double _repeatAccumulator;	// 88 = 0x58
	long _scrollSelection;	// 96 = 0x60
	long _savedSelection;	// 100 = 0x64
	int _style;	// 104 = 0x68
	BOOL _handlingProviderChange;	// 108 = 0x6c
	BOOL _showsDividers;	// 109 = 0x6d
	BOOL _firstDividerVisible;	// 110 = 0x6e
	BOOL _showBackingLayer;	// 111 = 0x6f
	BOOL _selectionEntered;	// 112 = 0x70
	BOOL _widgetHidden;	// 113 = 0x71
	BOOL _needsUpdate;	// 114 = 0x72
	BOOL _turboEngaged;	// 115 = 0x73
	BOOL _movingDown;	// 116 = 0x74
}
@property(retain) id datasource;	// G=0x329439c9; S=0x3291b8dd; converted property
@property(assign) BOOL displaysSelectionWidget;	// G=0x32a029e1; S=0x32a03749; converted property
@property(assign) BOOL firstDividerVisible;	// G=0x32a029d1; S=0x32a03839; converted property
@property(assign) BOOL lastItemCentered;	// G=0x32a039cd; S=0x32941e09; converted property
@property(retain) NSArray *providers;	// G=0x32a02981; S=0x32a03a79; converted property
@property(readonly, assign) BRScrollControl *scrollControl;	// G=0x32a029b1; @synthesize=_scroller
@property(assign) long selection;	// G=0x3291c329; S=0x3291eccd; converted property
@property(assign) int selectionLozengeStyle;	// G=0x32a02991; S=0x3291af71; converted property
@property(assign) BOOL showsDividers;	// G=0x32a029c1; S=0x32a03861; converted property
@property(assign) BOOL showsWidgetBackingLayer;	// G=0x32a029a1; S=0x3293e5d1; converted property
- (id)init;	// 0x3291aa09
- (long)_backwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x3292d8d1
- (double)_calculateRepeatRate;	// 0x329305cd
- (long)_dataIndexFromScrollIndex:(long)scrollIndex;	// 0x32a02b5d
- (void)_ensureSelectionFocusable;	// 0x32a02f35
- (void)_enterCurrentSelection;	// 0x32921e29
- (id)_findDividerProviderForProvider:(id)provider;	// 0x32a02c2d
- (long)_forwardIndexForRowCount:(long)rowCount hitBoundary:(BOOL *)boundary;	// 0x3291eda1
- (void)_gridDataUpdated:(id)updated;	// 0x32a033a1
- (void)_gridDataWillBeUpdated:(id)_gridData;	// 0x32a034fd
- (void)_hideFirstDividerInDividedProviders:(id)dividedProviders;	// 0x32a02e55
- (void)_leaveCurrentSelection;	// 0x3291ba19
- (id)_legacyProvider;	// 0x32a02cc1
- (void)_listScrollingCompleted:(id)completed;	// 0x32932985
- (void)_listScrollingInitiated:(id)initiated;	// 0x329328c9
- (float)_maxWidgetBottomGlowHeight;	// 0x32921ced
- (float)_maxWidgetEdgeGlowWidth;	// 0x32921dad
- (float)_maxWidgetTopGlowHeight;	// 0x32921d4d
- (void)_performScrollInitiationActivities;	// 0x3292d969
- (void)_performScrollTerminationActivities;	// 0x3292dcd1
- (void)_pokeTimerFired:(id)fired;	// 0x32a02a3d
- (void)_postSelectionFinalizedNotification;	// 0x32a029f9
- (void)_refillList;	// 0x3291b9c5
- (void)_repeatDownTimerFired:(id)fired;	// 0x329304ed
- (void)_repeatUpTimerFired:(id)fired;	// 0x32932ad5
- (void)_restoreCurrentSelectionIndex;	// 0x3291ba51
- (void)_restorePersistentSavedSelection;	// 0x32a03085
- (void)_saveCurrentSelectionIndex;	// 0x3291b995
- (BOOL)_scrollDown:(id)down;	// 0x329302e9
- (long)_scrollIndexForDataIndex:(long)dataIndex;	// 0x32a02a79
- (BOOL)_scrollUp:(id)up;	// 0x3292d7fd
- (void)_setNewScrollIndex:(long)index;	// 0x32a02ed5
- (void)_slowToStopRepeatTimerMovingDown:(BOOL)stopRepeatTimerMovingDown;	// 0x3292dacd
- (void)_startDownwardAutoScroll:(id)scroll;	// 0x329303bd
- (void)_startRepeatTimerMovingDown:(BOOL)down;	// 0x3292d9bd
- (void)_startUpwardAutoScroll:(id)scroll;	// 0x329329a5
- (void)_stopRepeatTimer;	// 0x329222c9
- (void)_updateGrid;	// 0x32a03269
- (void)_updatePersistentSavedSelection;	// 0x32a02fa1
- (void)_updateProviders;	// 0x32a02d1d
- (void)_updateScrollPosition;	// 0x32a03cd9
- (void)_updateWidgetFrame;	// 0x3291c039
- (void)_updateWidgetFrameForWidget:(id)widget withItemFrame:(CGRect)itemFrame;	// 0x3291c191
- (id)accessibilityLabel;	// 0x32a037e1
- (void)addDividerAtIndex:(long)index withLabel:(id)label;	// 0x32a036dd
- (BOOL)brEventAction:(id)action;	// 0x32925c35
- (void)clearSavedSelection;	// 0x32a038f1
- (void)controlWasActivated;	// 0x32a0396d
- (void)controlWasDeactivated;	// 0x32a03921
- (void)controlWasFocused;	// 0x32922335
- (void)controlWasUnfocused;	// 0x329262b1
- (long)dataCount;	// 0x32a03a3d
// converted property getter: - (id)datasource;	// 0x329439c9
- (void)dealloc;	// 0x3292b185
// converted property getter: - (BOOL)displaysSelectionWidget;	// 0x32a029e1
// converted property getter: - (BOOL)firstDividerVisible;	// 0x32a029d1
// converted property getter: - (BOOL)lastItemCentered;	// 0x32a039cd
- (void)layoutSubcontrols;	// 0x32a03ac1
- (float)listHeightToMaximum:(float)maximum;	// 0x3293e7ad
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x32a039f9
// converted property getter: - (id)providers;	// 0x32a02981
- (void)reload;	// 0x32a03539
- (void)removeDividerAtIndex:(long)index;	// 0x32a0367d
- (void)removeDividers;	// 0x32a03621
// declared property getter: - (id)scrollControl;	// 0x32a029b1
- (id)selectedObject;	// 0x32932bb5
// converted property getter: - (long)selection;	// 0x3291c329
// converted property getter: - (int)selectionLozengeStyle;	// 0x32a02991
- (void)setBottomMargin:(float)margin;	// 0x32a038bd
// converted property setter: - (void)setDatasource:(id)datasource;	// 0x3291b8dd
// converted property setter: - (void)setDisplaysSelectionWidget:(BOOL)widget;	// 0x32a03749
// converted property setter: - (void)setFirstDividerVisible:(BOOL)visible;	// 0x32a03839
// converted property setter: - (void)setLastItemCentered:(BOOL)centered;	// 0x32941e09
- (void)setName:(id)name forProvider:(id)provider;	// 0x32a03811
- (void)setProvider:(id)provider;	// 0x3291b961
// converted property setter: - (void)setProviders:(id)providers;	// 0x32a03a79
// converted property setter: - (void)setSelection:(long)selection;	// 0x3291eccd
// converted property setter: - (void)setSelectionLozengeStyle:(int)style;	// 0x3291af71
// converted property setter: - (void)setShowsDividers:(BOOL)dividers;	// 0x32a03861
// converted property setter: - (void)setShowsWidgetBackingLayer:(BOOL)layer;	// 0x3293e5d1
- (void)setTopMargin:(float)margin;	// 0x32a0389d
// converted property getter: - (BOOL)showsDividers;	// 0x32a029c1
// converted property getter: - (BOOL)showsWidgetBackingLayer;	// 0x32a029a1
- (void)updateSavedSelection;	// 0x32a038dd
- (id)visibleRowsAndRange:(NSRange *)range;	// 0x32932c11
@end

