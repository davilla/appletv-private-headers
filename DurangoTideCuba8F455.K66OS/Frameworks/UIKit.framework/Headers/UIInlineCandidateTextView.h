/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray, NSArray, InlineCandidateCell;

__attribute__((visibility("hidden")))
@interface UIInlineCandidateTextView : UIView {
@private
	int m_type;	// 44 = 0x2c
	int m_edgeType;	// 48 = 0x30
	BOOL m_animating;	// 52 = 0x34
	NSMutableArray *_candidateCellArray;	// 56 = 0x38
	NSArray *_candidates;	// 60 = 0x3c
	id _target;	// 64 = 0x40
	SEL _action;	// 68 = 0x44
	unsigned _selectedItem;	// 72 = 0x48
	InlineCandidateCell *_currentlyPushedItem;	// 76 = 0x4c
	BOOL _showingArrow;	// 80 = 0x50
	BOOL _arrowHighlighted;	// 81 = 0x51
	BOOL _phraseEditable;	// 82 = 0x52
}
@property(assign) int edgeType;	// G=0x3028f605; S=0x3028fbd9; converted property
@property(assign) unsigned selectedItem;	// G=0x3028f661; S=0x3028f7c1; converted property
- (id)initWithFrame:(CGRect)frame candidates:(id)candidates type:(int)type maxScreenWidth:(float)width;	// 0x3028f96d
- (BOOL)_arrowHighlighted;	// 0x3028f651
- (CGRect)_calculateRectForExpandedHitRegion;	// 0x3029020d
- (void)_cellSelected:(id)selected;	// 0x3028f8b5
- (float)_layoutCandidates:(id)candidates maxCount:(int)count height:(float)height maxScreenWidth:(float)width;	// 0x3029081d
- (void)_mouseUp:(GSEventRef)up wasCancelled:(BOOL)cancelled;	// 0x3028fec9
- (void)dealloc;	// 0x3028f911
- (void)drawRect:(CGRect)rect;	// 0x30290541
// converted property getter: - (int)edgeType;	// 0x3028f605
- (id)findCell:(CGPoint)cell;	// 0x3028fdd1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3028f729
- (void)mouseDown:(GSEventRef)down;	// 0x3029014d
- (void)mouseDragged:(GSEventRef)dragged;	// 0x30290001
- (void)mouseUp:(GSEventRef)up;	// 0x3028f755
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x3028f671
- (unsigned)numberOfShownItems;	// 0x3028f895
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3029041d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30290325
- (void)redrawArrow;	// 0x3028f76d
// converted property getter: - (unsigned)selectedItem;	// 0x3028f661
- (void)setAnimating:(BOOL)animating;	// 0x3028f625
// converted property setter: - (void)setEdgeType:(int)type;	// 0x3028fbd9
// converted property setter: - (void)setSelectedItem:(unsigned)item;	// 0x3028f7c1
- (void)setTarget:(id)target action:(SEL)action;	// 0x3028f635
- (void)showHighlightedArrow;	// 0x3028f845
- (int)textEffectsVisibilityLevel;	// 0x3028f615
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3028f6fd
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3028f675
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3028f6a5
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3028f6d1
@end

