/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIToolbar.h"

@class NSArray, UIButton, UISegmentedControl, UIKeyboardCandidateArrowButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateSortSelectionBar : UIToolbar {
@private
	NSArray *_sorts;	// 96 = 0x60
	int _keyboardBehavior;	// 100 = 0x64
	UISegmentedControl *_segmentedControl;	// 104 = 0x68
	UIKeyboardCandidateArrowButton *_arrowButton;	// 108 = 0x6c
	UIButton *_collapseButton;	// 112 = 0x70
	BOOL _reducedWidth;	// 116 = 0x74
	BOOL _layoutOnFrameChange;	// 117 = 0x75
}
@property(retain, nonatomic) UIKeyboardCandidateArrowButton *arrowButton;	// G=0x303cfe11; S=0x303cfe21; @synthesize=_arrowButton
@property(retain, nonatomic) UIButton *collapseButton;	// G=0x303cfe45; S=0x303cfe55; @synthesize=_collapseButton
@property(assign, nonatomic) int keyboardBehavior;	// G=0x303cfdbd; S=0x303cfdcd; @synthesize=_keyboardBehavior
@property(assign, nonatomic) BOOL layoutOnFrameChange;	// G=0x303cfe99; S=0x303cfea9; @synthesize=_layoutOnFrameChange
@property(readonly, assign, nonatomic) unsigned numberOfSegments;	// G=0x303cfbf5; 
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x303cfe79; S=0x303cfe89; @synthesize=_reducedWidth
@property(retain, nonatomic) UISegmentedControl *segmentedControl;	// G=0x303cfddd; S=0x303cfded; @synthesize=_segmentedControl
@property(assign, nonatomic) int selectedSegmentIndex;	// G=0x303cfc1d; S=0x303cfc45; 
@property(retain, nonatomic) NSArray *sorts;	// G=0x303cfdad; S=0x303cfa79; @synthesize=_sorts
- (id)initWithFrame:(CGRect)frame keyboardBehavior:(int)behavior;	// 0x303cefa1
- (id)actionsForTarget:(id)target forControlEvent:(unsigned)controlEvent;	// 0x303cfd21
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x303cfc71
- (unsigned)allControlEvents;	// 0x303cfcf9
- (id)allTargets;	// 0x303cfcd1
// declared property getter: - (id)arrowButton;	// 0x303cfe11
// declared property getter: - (id)collapseButton;	// 0x303cfe45
- (void)dealloc;	// 0x303cf02d
// declared property getter: - (int)keyboardBehavior;	// 0x303cfdbd
- (void)layout;	// 0x303cf0b5
// declared property getter: - (BOOL)layoutOnFrameChange;	// 0x303cfe99
// declared property getter: - (unsigned)numberOfSegments;	// 0x303cfbf5
// declared property getter: - (BOOL)reducedWidth;	// 0x303cfe79
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned)controlEvents;	// 0x303cfca1
// declared property getter: - (id)segmentedControl;	// 0x303cfddd
- (void)selectNextSegment;	// 0x303cf97d
- (void)selectPreviousSegment;	// 0x303cf8e9
// declared property getter: - (int)selectedSegmentIndex;	// 0x303cfc1d
- (void)sendAction:(SEL)action to:(id)to forEvent:(id)event;	// 0x303cfd51
- (void)sendActionsForControlEvents:(unsigned)controlEvents;	// 0x303cfd81
// declared property setter: - (void)setArrowButton:(id)button;	// 0x303cfe21
// declared property setter: - (void)setCollapseButton:(id)button;	// 0x303cfe55
- (void)setFrame:(CGRect)frame;	// 0x303cfa19
// declared property setter: - (void)setKeyboardBehavior:(int)behavior;	// 0x303cfdcd
// declared property setter: - (void)setLayoutOnFrameChange:(BOOL)change;	// 0x303cfea9
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x303cfe89
// declared property setter: - (void)setSegmentedControl:(id)control;	// 0x303cfded
// declared property setter: - (void)setSelectedSegmentIndex:(int)index;	// 0x303cfc45
// declared property setter: - (void)setSorts:(id)sorts;	// 0x303cfa79
// declared property getter: - (id)sorts;	// 0x303cfdad
@end

