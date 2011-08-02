/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class DOMRange, UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextSelection : NSObject {
@private
	UIView<UITextSelectingContainer> *_view;	// 4 = 0x4
	int _affinity;	// 8 = 0x8
	int _granularity;	// 12 = 0xc
	DOMRange *_selectedRange;	// 16 = 0x10
	DOMRange *_base;	// 20 = 0x14
	DOMRange *_initialExtent;	// 24 = 0x18
}
@property(assign, nonatomic) int affinity;	// G=0x30153b3d; S=0x3014e8f5; @synthesize=_affinity
@property(retain, nonatomic) DOMRange *base;	// G=0x30345631; S=0x30346279; @synthesize=_base
@property(assign, nonatomic) int granularity;	// G=0x301af685; S=0x301b4d99; @synthesize=_granularity
@property(retain, nonatomic) DOMRange *initialExtent;	// G=0x30345621; S=0x303462a1; @synthesize=_initialExtent
@property(retain, nonatomic) DOMRange *selectedRange;	// G=0x3014e9a5; S=0x3014e8cd; @synthesize=_selectedRange
@property(readonly, assign, nonatomic) int state;	// G=0x3014fbe1; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x3014e8bd; @synthesize=_view
- (id)initWithView:(id)view;	// 0x3014e7f9
// declared property getter: - (int)affinity;	// 0x30153b3d
- (void)aggressivelyExpandSelectionToWordContainingCaretSelection;	// 0x30345e1d
- (void)alterSelection:(CGPoint)selection granularity:(int)granularity;	// 0x30345d1d
// declared property getter: - (id)base;	// 0x30345631
- (CGRect)caretRect;	// 0x3014e905
- (void)clearRangedSelectionInitialExtent;	// 0x30345b69
- (void)clearSelection;	// 0x301af4b1
- (CGRect)closestCaretRectForPoint:(CGPoint)point inSelection:(BOOL)selection;	// 0x30346149
- (void)collapseSelection;	// 0x30345ffd
- (void)commit;	// 0x301af4c9
- (void)dealloc;	// 0x303460e9
// declared property getter: - (int)granularity;	// 0x301af685
- (BOOL)hasEditableSelection;	// 0x30345c51
// declared property getter: - (id)initialExtent;	// 0x30345621
- (void)moveCaretToBoundaryOfWhitespaceOrLine;	// 0x301b4e39
- (unsigned)offsetInMarkedText;	// 0x30346051
- (BOOL)pointAtEndOfLine:(CGPoint)line;	// 0x30345c85
- (BOOL)pointAtStartOfLine:(CGPoint)line;	// 0x30345cd1
// declared property getter: - (id)selectedRange;	// 0x3014e9a5
- (id)selectedText;	// 0x3034609d
- (void)selectionChanged;	// 0x3014e845
- (id)selectionRects;	// 0x301bbbe5
// declared property setter: - (void)setAffinity:(int)affinity;	// 0x3014e8f5
// declared property setter: - (void)setBase:(id)base;	// 0x30346279
// declared property setter: - (void)setGranularity:(int)granularity;	// 0x301b4d99
// declared property setter: - (void)setInitialExtent:(id)extent;	// 0x303462a1
- (void)setRangedSelectionBaseToCurrentSelection;	// 0x30345c29
- (void)setRangedSelectionBaseToCurrentSelectionEnd;	// 0x30345b81
- (void)setRangedSelectionBaseToCurrentSelectionStart;	// 0x30345bd5
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start;	// 0x30345a95
- (BOOL)setRangedSelectionExtentPoint:(CGPoint)point baseIsStart:(BOOL)start allowFlipping:(BOOL)flipping;	// 0x303462c9
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;	// 0x30345ac1
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;	// 0x30345b15
- (void)setRangedSelectionWithExtentPoint:(CGPoint)extentPoint;	// 0x303458e5
// declared property setter: - (void)setSelectedRange:(id)range;	// 0x3014e8cd
- (void)setSelectionWithFirstPoint:(CGPoint)firstPoint secondPoint:(CGPoint)point;	// 0x303459ed
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x301b4c1d
- (id)simpleSmartExtendDownstream:(BOOL)downstream start:(id)start end:(id)end initialExtent:(id)extent;	// 0x30345749
- (void)smartExtendRangedSelection:(int)selection downstream:(BOOL)downstream;	// 0x30345641
// declared property getter: - (int)state;	// 0x3014fbe1
// declared property getter: - (id)view;	// 0x3014e8bd
- (id)wordContainingCaretSelection;	// 0x301be24d
@end

