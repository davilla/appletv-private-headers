/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITextChecker, NSMutableArray, UIFieldEditor, UITapGestureRecognizer, UIView, UILongPressGestureRecognizer, NSMutableSet;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : NSObject <UIGestureRecognizerDelegate> {
@private
	UIView<UITextSelectingContainer> *_view;	// 4 = 0x4
	NSMutableArray *_recognizers;	// 8 = 0x8
	NSMutableSet *_linkGestures;	// 12 = 0xc
	UILongPressGestureRecognizer *_loupeGesture;	// 16 = 0x10
	UITapGestureRecognizer *_singleTapGesture;	// 20 = 0x14
	int _autoscrollRamp;	// 24 = 0x18
	float _autoscrollFactor;	// 28 = 0x1c
	CGPoint _autoscrollBasePoint;	// 32 = 0x20
	CGPoint _autoscrollUntransformedExtentPoint;	// 40 = 0x28
	CGPoint _loupeGestureEndPoint;	// 48 = 0x30
	UITextChecker *_textChecker;	// 56 = 0x38
	BOOL _inGesture;	// 60 = 0x3c
	BOOL _autoscrolled;	// 61 = 0x3d
	BOOL _isTryingToHighlightLink;	// 62 = 0x3e
}
@property(assign, nonatomic) CGPoint autoscrollUntransformedExtentPoint;	// G=0x33c3e389; S=0x33c3e3a5; @synthesize=_autoscrollUntransformedExtentPoint
@property(assign, nonatomic) BOOL autoscrolled;	// G=0x33c3e3b9; S=0x33c3e3c9; @synthesize=_autoscrolled
@property(readonly, assign, nonatomic) UIFieldEditor *fieldEditor;	// G=0x33a98e09; 
@property(assign, nonatomic) BOOL inGesture;	// G=0x339c6619; S=0x33c3e379; @synthesize=_inGesture
@property(retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;	// G=0x339c67c5; S=0x339c67d5; @synthesize=_loupeGesture
@property(readonly, assign, nonatomic) UIView *scrollView;	// G=0x33c3a875; 
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture;	// G=0x33a7c171; S=0x339c67f9; @synthesize=_singleTapGesture
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x339c6a71; @synthesize=_view
- (id)initWithView:(id)view;	// 0x339c6151
- (id)addHighlightLinkRecognizer;	// 0x33b17f4d
- (id)addLoupeGestureRecognizer:(BOOL)recognizer;	// 0x339c7715
- (id)addOneFingerDoubleTapRecognizer;	// 0x339c6f49
- (id)addOneFingerDoubleTapRecognizer:(SEL)recognizer;	// 0x339c6f65
- (id)addOneFingerTapRecognizer;	// 0x339c75d9
- (id)addOneFingerTapRecognizer:(SEL)recognizer;	// 0x339c75f5
- (id)addOneFingerTripleTapRecognizer;	// 0x339c6ae5
- (id)addPhraseBoundaryGestureRecognizer;	// 0x33c3a9f9
- (id)addSelectionTapRecognizer;	// 0x33c3a9dd
- (id)addSelectionTapRecognizer:(SEL)recognizer;	// 0x33c3a8b9
- (id)addTapAndAHalfRecognizer;	// 0x339c7161
- (id)addTapAndHoldOnLinkRecognizer;	// 0x33b18079
- (id)addTwoFingerRangedSelectRecognizer;	// 0x339c7311
- (id)addTwoFingerSingleTapRecognizer;	// 0x339c7079
- (void)attach;	// 0x33b137dd
// declared property getter: - (CGPoint)autoscrollUntransformedExtentPoint;	// 0x33c3e389
- (void)autoscrollWillNotStart;	// 0x33c3c595
// declared property getter: - (BOOL)autoscrolled;	// 0x33c3e3b9
- (void)cancelAutoscroll;	// 0x33c3c509
- (void)cancelInteractionWithLink;	// 0x33a7dc49
- (void)clearGestureRecognizers;	// 0x339c6629
- (void)clearGestureRecognizers:(BOOL)recognizers;	// 0x339c663d
- (void)clearSelection;	// 0x33c3bf79
- (void)confirmMarkedText:(id)text;	// 0x33c3afc9
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x33c3c389
- (BOOL)containerIsAtom;	// 0x339c69b5
- (BOOL)containerIsPlainStyleAtom;	// 0x33a7dee9
- (BOOL)containerIsTextField;	// 0x33a98d4d
- (void)dealloc;	// 0x33aad0f1
- (void)detach;	// 0x33adc555
- (void)detach:(BOOL)detach;	// 0x33aad179
- (float)distanceBetweenPoint:(CGPoint)point andRange:(id)range;	// 0x33a7ed75
- (void)doubleTapInUneditable:(id)uneditable;	// 0x33c3b449
// declared property getter: - (id)fieldEditor;	// 0x33a98e09
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x33a7880d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x33a7ccf9
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33a7bf09
// declared property getter: - (BOOL)inGesture;	// 0x339c6619
- (BOOL)isChineseInputEnabled;	// 0x33c3d425
- (BOOL)isInteractingWithLink;	// 0x33c3d1a5
- (void)longDelayRecognizer:(id)recognizer;	// 0x33c3cfdd
// declared property getter: - (id)loupeGesture;	// 0x339c67c5
- (void)loupeGesture:(id)gesture;	// 0x33c3aaa1
- (void)notifyKeyboardSelectionChanged;	// 0x33af9221
- (void)oneFingerDoubleTap:(id)tap;	// 0x33c3b8d5
- (void)oneFingerTap:(id)tap;	// 0x33a7cff9
- (void)oneFingerTapInUneditable:(id)uneditable;	// 0x33c3b631
- (void)oneFingerTapSelectsAll:(id)all;	// 0x33af8db1
- (void)oneFingerTripleTap:(id)tap;	// 0x33c3ba39
- (id)rangeForTextReplacement:(id)textReplacement;	// 0x33a7e589
- (void)resignedFirstResponder;	// 0x33c3c3c5
- (void)scheduleDictationReplacementsForAlternatives:(id)alternatives range:(id)range;	// 0x33c3d4f9
- (void)scheduleReplacementsForRange:(id)range withOptions:(unsigned)options;	// 0x33a99079
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x33c3d3c1
// declared property getter: - (id)scrollView;	// 0x33c3a875
- (void)selectAll;	// 0x33c3bec1
- (void)selectWord;	// 0x33c3bbb1
- (void)selectWordWithoutShowingCommands;	// 0x33c3bd4d
// declared property setter: - (void)setAutoscrollUntransformedExtentPoint:(CGPoint)point;	// 0x33c3e3a5
// declared property setter: - (void)setAutoscrolled:(BOOL)autoscrolled;	// 0x33c3e3c9
- (void)setFirstResponderIfNecessary;	// 0x33a7dcc9
- (void)setGestureRecognizers;	// 0x339c6209
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x33c3e379
// declared property setter: - (void)setLoupeGesture:(id)gesture;	// 0x339c67d5
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x33a7e1f9
// declared property setter: - (void)setSingleTapGesture:(id)gesture;	// 0x339c67f9
- (BOOL)shouldHandleFormGestureAtLocation:(CGPoint)location;	// 0x33a7c0d1
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)uneditable;	// 0x33c3b581
- (BOOL)shouldIgnoreLinkGestures;	// 0x33c3d0bd
// declared property getter: - (id)singleTapGesture;	// 0x33a7c171
- (void)smallDelayRecognizer:(id)recognizer;	// 0x33c3cd31
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x33c3c3fd
- (BOOL)swallowsDoubleTapWithScale:(float)scale atPoint:(CGPoint)point;	// 0x33c3e251
- (void)tapAndAHalf:(id)half;	// 0x33c3affd
- (BOOL)tapOnLinkWithGesture:(id)gesture;	// 0x33c3d209
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;	// 0x33a7ddfd
- (void)twoFingerRangedSelectGesture:(id)gesture;	// 0x33c3c17d
- (void)twoFingerSingleTap:(id)tap;	// 0x33c3c049
- (void)updateAutoscroll:(id)autoscroll;	// 0x33c3c601
- (BOOL)useGesturesForEditableContent;	// 0x339c68d9
// declared property getter: - (id)view;	// 0x339c6a71
- (BOOL)viewCouldBecomeEditable:(id)editable;	// 0x339c6821
@end

