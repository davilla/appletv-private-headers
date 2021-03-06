/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateList.h"
#import "UIViewController.h"

@class UIKeyboardCandidateScrollView, UIKeyboardCandidatePadInlineFloatingBackgroundView, NSArray, UIButton, NSMutableDictionary, UIKeyboardCandidateScrollViewLayoutState;
@protocol UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateScrollViewController : UIViewController <UIKeyboardCandidateList> {
@private
	id<UIKeyboardCandidateScrollViewControllerDelegate> _delegate;	// 156 = 0x9c
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 160 = 0xa0
	NSArray *_candidates;	// 164 = 0xa4
	unsigned _selectedCandidateIndex;	// 168 = 0xa8
	NSArray *_sorts;	// 172 = 0xac
	unsigned _selectedSortIndex;	// 176 = 0xb0
	unsigned _numberOfColumns;	// 180 = 0xb4
	float _rowHeight;	// 184 = 0xb8
	int _visualStyle;	// 188 = 0xbc
	NSMutableDictionary *_sortsToCandidates;	// 192 = 0xc0
	NSArray *_allCells;	// 196 = 0xc4
	NSArray *_candidateCells;	// 200 = 0xc8
	NSArray *_groupHeaderCells;	// 204 = 0xcc
	float _groupBarWidth;	// 208 = 0xd0
	BOOL _showsExtensionCandidates;	// 212 = 0xd4
	BOOL _supportsNumberKeySelection;	// 213 = 0xd5
	UIKeyboardCandidateScrollViewLayoutState *_layoutState;	// 216 = 0xd8
	UIButton *_padInlineFloatingArrowButton;	// 220 = 0xdc
	UIKeyboardCandidatePadInlineFloatingBackgroundView *_padInlineFloatingBackgroundView;	// 224 = 0xe0
	float _previousWidth;	// 228 = 0xe4
}
@property(retain, nonatomic) NSArray *allCells;	// G=0x303c9859; S=0x303c9869; @synthesize=_allCells
@property(retain, nonatomic) NSArray *candidateCells;	// G=0x303c988d; S=0x303c989d; @synthesize=_candidateCells
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x303c9741; S=0x303c9751; @synthesize=_candidateListDelegate
@property(copy, nonatomic) NSArray *candidates;	// G=0x303c9761; S=0x303c92b9; @synthesize=_candidates
@property(assign, nonatomic) id<UIKeyboardCandidateScrollViewControllerDelegate> delegate;	// G=0x303c9721; S=0x303c9731; @synthesize=_delegate
@property(assign, nonatomic) float groupBarWidth;	// G=0x303c98f5; S=0x303c9501; @synthesize=_groupBarWidth
@property(retain, nonatomic) NSArray *groupHeaderCells;	// G=0x303c98c1; S=0x303c98d1; @synthesize=_groupHeaderCells
@property(readonly, assign, nonatomic) BOOL hasGroupBar;	// G=0x303c9539; 
@property(retain, nonatomic) UIKeyboardCandidateScrollViewLayoutState *layoutState;	// G=0x303c9945; S=0x303c9955; @synthesize=_layoutState
@property(assign, nonatomic) unsigned numberOfColumns;	// G=0x303c97c5; S=0x303c97d5; @synthesize=_numberOfColumns
@property(readonly, assign, nonatomic) UIButton *padInlineFloatingArrowButton;	// G=0x303c9565; @synthesize=_padInlineFloatingArrowButton
@property(readonly, assign, nonatomic) UIKeyboardCandidatePadInlineFloatingBackgroundView *padInlineFloatingBackgroundView;	// G=0x303c96ad; @synthesize=_padInlineFloatingBackgroundView
@property(assign, nonatomic) float previousWidth;	// G=0x303c9979; S=0x303c9989; @synthesize=_previousWidth
@property(assign, nonatomic) float rowHeight;	// G=0x303c97e5; S=0x303c97f5; @synthesize=_rowHeight
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollView *scrollView;	// G=0x303c92a9; 
@property(assign, nonatomic) unsigned selectedCandidateIndex;	// G=0x303c9771; S=0x303c93d5; @synthesize=_selectedCandidateIndex
@property(assign, nonatomic) unsigned selectedSortIndex;	// G=0x303c97b5; S=0x303c94d5; @synthesize=_selectedSortIndex
@property(assign, nonatomic) BOOL showsExtensionCandidates;	// G=0x303c9905; S=0x303c9915; @synthesize=_showsExtensionCandidates
@property(retain, nonatomic) NSArray *sorts;	// G=0x303c9781; S=0x303c9791; @synthesize=_sorts
@property(retain, nonatomic) NSMutableDictionary *sortsToCandidates;	// G=0x303c9825; S=0x303c9835; @synthesize=_sortsToCandidates
@property(assign, nonatomic) BOOL supportsNumberKeySelection;	// G=0x303c9925; S=0x303c9935; @synthesize=_supportsNumberKeySelection
@property(assign, nonatomic) int visualStyle;	// G=0x303c9805; S=0x303c9815; @synthesize=_visualStyle
- (id)init;	// 0x303c5505
// declared property getter: - (id)allCells;	// 0x303c9859
- (void)cancelIncrementalLayout;	// 0x303c8059
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x303c8f09
- (id)candidateAtIndex:(unsigned)index;	// 0x303c8ebd
- (void)candidateCellAction:(id)action;	// 0x303c8309
// declared property getter: - (id)candidateCells;	// 0x303c988d
// declared property getter: - (id)candidateListDelegate;	// 0x303c9741
// declared property getter: - (id)candidates;	// 0x303c9761
- (void)configureKeyboard:(id)keyboard;	// 0x303c8ffd
- (unsigned)count;	// 0x303c8f5d
- (id)currentCandidate;	// 0x303c8df1
- (unsigned)currentIndex;	// 0x303c8e79
- (void)dealloc;	// 0x303c5659
// declared property getter: - (id)delegate;	// 0x303c9721
// declared property getter: - (float)groupBarWidth;	// 0x303c98f5
// declared property getter: - (id)groupHeaderCells;	// 0x303c98c1
- (BOOL)handleNumberKey:(unsigned)key;	// 0x303c9121
// declared property getter: - (BOOL)hasGroupBar;	// 0x303c9539
- (void)initiateIncrementalLayout;	// 0x303c70e1
- (void)layout;	// 0x303c82f5
- (void)layoutAndScrollToTop:(BOOL)top withAnimation:(BOOL)animation;	// 0x303c80cd
- (void)layoutRowWithCells:(id)cells startingX:(float)x currentY:(float)y width:(float)width isFirstRow:(BOOL)row isLastRow:(BOOL)row6 isGrouped:(BOOL)grouped;	// 0x303c6161
- (void)layoutRowsWithLimit:(unsigned)limit;	// 0x303c67a5
// declared property getter: - (id)layoutState;	// 0x303c9945
- (void)loadView;	// 0x303c55c5
// declared property getter: - (unsigned)numberOfColumns;	// 0x303c97c5
// declared property getter: - (id)padInlineFloatingArrowButton;	// 0x303c9565
// declared property getter: - (id)padInlineFloatingBackgroundView;	// 0x303c96ad
- (void)padInlineFloatingExpand;	// 0x303c5f65
- (BOOL)padInlineFloatingIsExpanded;	// 0x303c5ef9
- (void)padInlineFloatingUpdateHighlightedRow;	// 0x303c5c05
- (void)padInlineFloatingViewUpdateBackgroundView;	// 0x303c5acd
// declared property getter: - (float)previousWidth;	// 0x303c9979
// declared property getter: - (float)rowHeight;	// 0x303c97e5
- (void)scrollToBottomWithAnimation:(BOOL)animation;	// 0x303c5a01
- (void)scrollToTopWithAnimation:(BOOL)animation;	// 0x303c59d5
// declared property getter: - (id)scrollView;	// 0x303c92a9
- (void)selectCandidate:(id)candidate;	// 0x303c5a2d
// declared property getter: - (unsigned)selectedCandidateIndex;	// 0x303c9771
// declared property getter: - (unsigned)selectedSortIndex;	// 0x303c97b5
// declared property setter: - (void)setAllCells:(id)cells;	// 0x303c9869
// declared property setter: - (void)setCandidateCells:(id)cells;	// 0x303c989d
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x303c9751
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x303c92b9
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x303c8f85
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303c9731
// declared property setter: - (void)setGroupBarWidth:(float)width;	// 0x303c9501
// declared property setter: - (void)setGroupHeaderCells:(id)cells;	// 0x303c98d1
// declared property setter: - (void)setLayoutState:(id)state;	// 0x303c9955
// declared property setter: - (void)setNumberOfColumns:(unsigned)columns;	// 0x303c97d5
// declared property setter: - (void)setPreviousWidth:(float)width;	// 0x303c9989
// declared property setter: - (void)setRowHeight:(float)height;	// 0x303c97f5
// declared property setter: - (void)setSelectedCandidateIndex:(unsigned)index;	// 0x303c93d5
// declared property setter: - (void)setSelectedSortIndex:(unsigned)index;	// 0x303c94d5
// declared property setter: - (void)setShowsExtensionCandidates:(BOOL)candidates;	// 0x303c9915
// declared property setter: - (void)setSorts:(id)sorts;	// 0x303c9791
// declared property setter: - (void)setSortsToCandidates:(id)candidates;	// 0x303c9835
// declared property setter: - (void)setSupportsNumberKeySelection:(BOOL)selection;	// 0x303c9935
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x303c8f95
// declared property setter: - (void)setVisualStyle:(int)style;	// 0x303c9815
- (void)showCandidateAtIndex:(unsigned)index;	// 0x303c8401
- (void)showMoreCandidatesCellAction;	// 0x303c83cd
- (void)showNextCandidate;	// 0x303c8549
- (void)showNextPage;	// 0x303c8dc9
- (void)showPageAtIndex:(unsigned)index;	// 0x303c8941
- (void)showPreviousCandidate;	// 0x303c8745
- (void)showPreviousPage;	// 0x303c8ddd
// declared property getter: - (BOOL)showsExtensionCandidates;	// 0x303c9905
// declared property getter: - (id)sorts;	// 0x303c9781
// declared property getter: - (id)sortsToCandidates;	// 0x303c9825
- (void)stepIncrementalLayout;	// 0x303c6fc1
- (void)stepOneLine:(BOOL)line;	// 0x303c8945
// declared property getter: - (BOOL)supportsNumberKeySelection;	// 0x303c9925
- (void)viewDidLoad;	// 0x303c57a1
- (void)viewDidUnload;	// 0x303c58e9
- (void)viewWillUnload;	// 0x303c5865
// declared property getter: - (int)visualStyle;	// 0x303c9805
@end

