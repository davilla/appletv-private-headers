/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardCandidateListDelegate.h"
#import "UIKeyboardCandidateList.h"
#import "UIKeyboardCandidateScrollViewControllerDelegate.h"
#import "UIView.h"

@class UIKeyboardCandidateSortSelectionBar, UIKeyboardCandidateInlinePadBottomShadowView, NSString, UIKeyboardCandidateScrollViewController, NSArray;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlineFloatingView : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateScrollViewControllerDelegate> {
@private
	NSArray *_candidates;	// 48 = 0x30
	NSString *_inlineText;	// 52 = 0x34
	CGRect _inlineRect;	// 56 = 0x38
	float _maxX;	// 72 = 0x48
	BOOL _expanded;	// 76 = 0x4c
	UIKeyboardCandidateScrollViewController *_scrollViewController;	// 80 = 0x50
	id<UIKeyboardCandidateListDelegate> _candidateListDelegate;	// 84 = 0x54
	UIKeyboardCandidateInlinePadBottomShadowView *_shadowView;	// 88 = 0x58
	UIKeyboardCandidateSortSelectionBar *_sortSelectionBar;	// 92 = 0x5c
	int _position;	// 96 = 0x60
	BOOL _reducedWidth;	// 100 = 0x64
	CGRect _previousCollapsedFrame;	// 104 = 0x68
}
@property(assign, nonatomic) id<UIKeyboardCandidateListDelegate> candidateListDelegate;	// G=0x32ee78bd; S=0x32ee78cd; @synthesize=_candidateListDelegate
@property(retain, nonatomic) NSArray *candidates;	// G=0x32ee77d5; S=0x32ee77e5; @synthesize=_candidates
@property(readonly, assign, nonatomic) CGSize collapsedSize;	// G=0x32ee58cd; 
@property(assign, nonatomic) BOOL expanded;	// G=0x32ee789d; S=0x32ee78ad; @synthesize=_expanded
@property(readonly, assign, nonatomic) CGSize expandedSize;	// G=0x32ee5905; 
@property(assign, nonatomic) CGRect inlineRect;	// G=0x32ee783d; S=0x32ee7861; @synthesize=_inlineRect
@property(copy, nonatomic) NSString *inlineText;	// G=0x32ee7809; S=0x32ee7819; @synthesize=_inlineText
@property(assign, nonatomic) float maxX;	// G=0x32ee787d; S=0x32ee788d; @synthesize=_maxX
@property(assign, nonatomic) int position;	// G=0x32ee7911; S=0x32ee7921; @synthesize=_position
@property(assign, nonatomic) CGRect previousCollapsedFrame;	// G=0x32ee7951; S=0x32ee7975; @synthesize=_previousCollapsedFrame
@property(assign, nonatomic) BOOL reducedWidth;	// G=0x32ee7931; S=0x32ee7941; @synthesize=_reducedWidth
@property(readonly, assign, nonatomic) UIKeyboardCandidateScrollViewController *scrollViewController;	// G=0x32ee7661; @synthesize=_scrollViewController
@property(retain, nonatomic) UIKeyboardCandidateInlinePadBottomShadowView *shadowView;	// G=0x32ee78dd; S=0x32ee78ed; @synthesize=_shadowView
@property(readonly, assign, nonatomic) UIKeyboardCandidateSortSelectionBar *sortSelectionBar;	// G=0x32ee76dd; @synthesize=_sortSelectionBar
- (id)initWithFrame:(CGRect)frame;	// 0x32ee5585
- (void)adjustFrameForInlineText:(id)inlineText inlineRect:(CGRect)rect maxX:(float)x;	// 0x32ee6711
- (CGRect)adjustedFrameFromDesiredFrame:(CGRect)desiredFrame textHeight:(float)height;	// 0x32ee6339
- (CGRect)adjustedInlineRectFromInlineText:(id)inlineText inlineRect:(CGRect)rect;	// 0x32ee5f19
- (void)candidateAcceptedAtIndex:(unsigned)index;	// 0x32ee72d1
- (id)candidateAtIndex:(unsigned)index;	// 0x32ee72a5
- (void)candidateListAcceptCandidate:(id)candidate;	// 0x32ee7419
// declared property getter: - (id)candidateListDelegate;	// 0x32ee78bd
- (void)candidateListSelectionDidChange:(id)candidateListSelection;	// 0x32ee7465
- (void)candidateListShouldBeDismissed:(id)candidateList;	// 0x32ee74b1
// declared property getter: - (id)candidates;	// 0x32ee77d5
- (void)collapse;	// 0x32ee5da1
// declared property getter: - (CGSize)collapsedSize;	// 0x32ee58cd
- (void)configureKeyboard:(id)keyboard;	// 0x32ee7325
- (unsigned)count;	// 0x32ee72fd
- (id)currentCandidate;	// 0x32ee7255
- (unsigned)currentIndex;	// 0x32ee727d
- (void)dealloc;	// 0x32ee57a5
- (void)expand;	// 0x32ee593d
// declared property getter: - (BOOL)expanded;	// 0x32ee789d
// declared property getter: - (CGSize)expandedSize;	// 0x32ee5905
- (BOOL)handleNumberKey:(unsigned)key;	// 0x32ee7351
- (BOOL)handleTabKeyWithShift:(BOOL)shift;	// 0x32ee737d
// declared property getter: - (CGRect)inlineRect;	// 0x32ee783d
// declared property getter: - (id)inlineText;	// 0x32ee7809
- (BOOL)isAcceptableFrame:(CGRect)frame afterScrollBy:(float)by;	// 0x32ee6231
- (void)layout;	// 0x32ee6d71
- (void)layoutShadow;	// 0x32ee6bed
// declared property getter: - (float)maxX;	// 0x32ee787d
- (void)padInlineFloatingViewExpand:(id)expand;	// 0x32ee7515
- (BOOL)padInlineFloatingViewIsExpanded:(id)expanded;	// 0x32ee74fd
// declared property getter: - (int)position;	// 0x32ee7911
// declared property getter: - (CGRect)previousCollapsedFrame;	// 0x32ee7951
// declared property getter: - (BOOL)reducedWidth;	// 0x32ee7931
// declared property getter: - (id)scrollViewController;	// 0x32ee7661
// declared property setter: - (void)setCandidateListDelegate:(id)delegate;	// 0x32ee78cd
// declared property setter: - (void)setCandidates:(id)candidates;	// 0x32ee77e5
- (void)setCandidates:(id)candidates inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32ee6ba9
- (void)setCandidates:(id)candidates type:(int)type inlineText:(id)text inlineRect:(CGRect)rect maxX:(float)x layout:(BOOL)layout;	// 0x32ee6a91
// declared property setter: - (void)setExpanded:(BOOL)expanded;	// 0x32ee78ad
- (void)setFrame:(CGRect)frame;	// 0x32ee5885
// declared property setter: - (void)setInlineRect:(CGRect)rect;	// 0x32ee7861
// declared property setter: - (void)setInlineText:(id)text;	// 0x32ee7819
// declared property setter: - (void)setMaxX:(float)x;	// 0x32ee788d
// declared property setter: - (void)setPosition:(int)position;	// 0x32ee7921
// declared property setter: - (void)setPreviousCollapsedFrame:(CGRect)frame;	// 0x32ee7975
// declared property setter: - (void)setReducedWidth:(BOOL)width;	// 0x32ee7941
// declared property setter: - (void)setShadowView:(id)view;	// 0x32ee78ed
- (void)setUIKeyboardCandidateListDelegate:(id)delegate;	// 0x32ee7125
// declared property getter: - (id)shadowView;	// 0x32ee78dd
- (void)showCandidateAtIndex:(unsigned)index;	// 0x32ee715d
- (void)showNextCandidate;	// 0x32ee7189
- (void)showNextPage;	// 0x32ee7205
- (void)showPageAtIndex:(unsigned)index;	// 0x32ee71d9
- (void)showPreviousCandidate;	// 0x32ee71b1
- (void)showPreviousPage;	// 0x32ee722d
// declared property getter: - (id)sortSelectionBar;	// 0x32ee76dd
- (void)sortSelectionBarAction;	// 0x32ee7525
@end
