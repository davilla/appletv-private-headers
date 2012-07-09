/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class ATVCarouselViewUIOpContext, NSTimer;
@protocol ATVCarouselViewDataSource, ATVCarouselViewUIDelegate;

__attribute__((visibility("hidden")))
@interface ATVCarouselView : BRControl {
	BOOL _autoAnimates;	// 77 = 0x4d
	NSRange __presentedItemsRange;	// 80 = 0x50
	id<ATVCarouselViewUIDelegate> _uiDelegate;	// 88 = 0x58
	BOOL _cyclesItems;	// 92 = 0x5c
	int __eventSkipCount;	// 96 = 0x60
	BOOL _subfocusChangeTriggersRelayout;	// 100 = 0x64
	int __currentIndex;	// 104 = 0x68
	NSRange __focusableRange;	// 108 = 0x6c
	XXStruct_qlg9jA _preferredWidth;	// 116 = 0x74
	ATVCarouselViewUIOpContext *__uiOpContext;	// 120 = 0x78
	NSTimer *__delayedAnimationTimer;	// 124 = 0x7c
	XXStruct_qlg9jA _preferredHeight;	// 128 = 0x80
	BOOL __goingForward;	// 132 = 0x84
	id<ATVCarouselViewDataSource> _dataSource;	// 136 = 0x88
	BOOL __isAutoAnimating;	// 140 = 0x8c
}
@property(assign, nonatomic) int _currentIndex;	// G=0x1208f9; S=0x120909; @synthesize=__currentIndex
@property(assign, nonatomic, setter=_setDelayedAnimationTimer:) NSTimer *_delayedAnimationTimer;	// G=0x120981; S=0x11f951; @synthesize=__delayedAnimationTimer
@property(assign, nonatomic) int _eventSkipCount;	// G=0x1208b9; S=0x1208c9; @synthesize=__eventSkipCount
@property(assign, nonatomic) NSRange _focusableRange;	// G=0x120919; S=0x120931; @synthesize=__focusableRange
@property(assign, nonatomic) BOOL _goingForward;	// G=0x1209bd; S=0x1209cd; @synthesize=__goingForward
@property(assign, nonatomic) BOOL _isAutoAnimating;	// G=0x1209ed; S=0x1209fd; @synthesize=__isAutoAnimating
@property(assign, nonatomic) NSRange _presentedItemsRange;	// G=0x12086d; S=0x120885; @synthesize=__presentedItemsRange
@property(retain, nonatomic, setter=_setUIOpContext:) ATVCarouselViewUIOpContext *_uiOpContext;	// G=0x120971; S=0x11f9a5; @synthesize=__uiOpContext
@property(assign, nonatomic) BOOL autoAnimates;	// G=0x12085d; S=0x11e15d; @synthesize=_autoAnimates
@property(assign, nonatomic) BOOL cyclesItems;	// G=0x1208a9; S=0x11e131; @synthesize=_cyclesItems
@property(assign, nonatomic) id<ATVCarouselViewDataSource> dataSource;	// G=0x1209dd; S=0x11e0a9; @synthesize=_dataSource
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0x120991; S=0x1209ad; @synthesize=_preferredHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredWidth;	// G=0x120945; S=0x120961; @synthesize=_preferredWidth
@property(assign, nonatomic) int selectedIndex;	// G=0x11e229; S=0x11e219; 
@property(assign, nonatomic) BOOL subfocusChangeTriggersRelayout;	// G=0x1208d9; S=0x1208e9; @synthesize=_subfocusChangeTriggersRelayout
@property(assign, nonatomic, setter=setUIDelegate:) id<ATVCarouselViewUIDelegate> uiDelegate;	// G=0x120899; S=0x11e0e9; @synthesize=_uiDelegate
- (id)init;	// 0x11dfa1
- (void)_bringCurrentIndexWithinFocusableRange;	// 0x120609
- (BOOL)_canGoBackward;	// 0x120449
- (BOOL)_canGoForward;	// 0x1203a9
// declared property getter: - (int)_currentIndex;	// 0x1208f9
// declared property getter: - (id)_delayedAnimationTimer;	// 0x120981
// declared property getter: - (int)_eventSkipCount;	// 0x1208b9
- (void)_focusChanged:(id)changed;	// 0x120751
// declared property getter: - (NSRange)_focusableRange;	// 0x120919
// declared property getter: - (BOOL)_goingForward;	// 0x1209bd
// declared property getter: - (BOOL)_isAutoAnimating;	// 0x1209ed
- (id)_makeUIOpContextWithType:(int)type completionBlock:(id)block;	// 0x11f9fd
- (int)_mapPresentedItemsIndex:(int)index;	// 0x12032d
// declared property getter: - (NSRange)_presentedItemsRange;	// 0x12086d
- (void)_processUIOpForControls:(id)controls startingAtPositionIndex:(unsigned)positionIndex context:(id)context uiOpCompleted:(BOOL *)completed;	// 0x11fc69
- (void)_scheduleRefreshWithType:(int)type;	// 0x11fb81
// declared property setter: - (void)_setDelayedAnimationTimer:(id)timer;	// 0x11f951
- (BOOL)_setSelectedIndex:(int)index;	// 0x1204b9
// declared property setter: - (void)_setUIOpContext:(id)context;	// 0x11f9a5
- (void)_startAnimation;	// 0x120189
- (void)_stopAnimation;	// 0x120289
- (void)_trickleAnimation;	// 0x11feb1
// declared property getter: - (id)_uiOpContext;	// 0x120971
// declared property getter: - (BOOL)autoAnimates;	// 0x12085d
- (BOOL)brEventAction:(id)action;	// 0x11eefd
- (void)controlWasActivated;	// 0x11e4dd
- (void)controlWasDeactivated;	// 0x11e535
- (void)controlWasFocused;	// 0x11e5d9
- (void)controlWasUnfocused;	// 0x11e619
// declared property getter: - (BOOL)cyclesItems;	// 0x1208a9
// declared property getter: - (id)dataSource;	// 0x1209dd
- (void)dealloc;	// 0x11e039
- (void)layoutSubcontrols;	// 0x11e705
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0x120991
// declared property getter: - (XXStruct_qlg9jA)preferredWidth;	// 0x120945
- (void)reload;	// 0x11e27d
// declared property getter: - (int)selectedIndex;	// 0x11e229
// declared property setter: - (void)setAutoAnimates:(BOOL)animates;	// 0x11e15d
// declared property setter: - (void)setCyclesItems:(BOOL)items;	// 0x11e131
// declared property setter: - (void)setDataSource:(id)source;	// 0x11e0a9
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0x1209ad
// declared property setter: - (void)setPreferredWidth:(XXStruct_qlg9jA)width;	// 0x120961
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x11e219
- (void)setSelectedIndexSimulatingEvent:(int)event;	// 0x11e1c9
// declared property setter: - (void)setSubfocusChangeTriggersRelayout:(BOOL)relayout;	// 0x1208e9
// declared property setter: - (void)setUIDelegate:(id)delegate;	// 0x11e0e9
// declared property setter: - (void)set_currentIndex:(int)index;	// 0x120909
// declared property setter: - (void)set_eventSkipCount:(int)count;	// 0x1208c9
// declared property setter: - (void)set_focusableRange:(NSRange)range;	// 0x120931
// declared property setter: - (void)set_goingForward:(BOOL)forward;	// 0x1209cd
// declared property setter: - (void)set_isAutoAnimating:(BOOL)animating;	// 0x1209fd
// declared property setter: - (void)set_presentedItemsRange:(NSRange)range;	// 0x120885
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x11e671
// declared property getter: - (BOOL)subfocusChangeTriggersRelayout;	// 0x1208d9
// declared property getter: - (id)uiDelegate;	// 0x120899
@end
