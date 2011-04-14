/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, UILongPressGestureRecognizer, UITextChecker, UIFieldEditor, UITapGestureRecognizer, NSMutableSet, UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UITextInteractionAssistant : NSObject {
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
@property(assign, nonatomic) CGPoint autoscrollUntransformedExtentPoint;	// G=0x307d7e8d; S=0x307d7ea5; @synthesize=_autoscrollUntransformedExtentPoint
@property(assign, nonatomic) BOOL autoscrolled;	// G=0x307d7e6d; S=0x307d7e7d; @synthesize=_autoscrolled
@property(readonly, assign, nonatomic) UIFieldEditor *fieldEditor;	// G=0x306cb9f1; 
@property(assign, nonatomic) BOOL inGesture;	// G=0x306039b5; S=0x307d7ebd; @synthesize=_inGesture
@property(retain, nonatomic) UILongPressGestureRecognizer *loupeGesture;	// G=0x30603b69; S=0x30603b79; @synthesize=_loupeGesture
@property(readonly, assign, nonatomic) UIView *scrollView;	// G=0x307d8691; 
@property(retain, nonatomic) UITapGestureRecognizer *singleTapGesture;	// G=0x30665f6d; S=0x30603ba1; @synthesize=_singleTapGesture
@property(readonly, assign, nonatomic) UIView<UITextSelectingContainer> *view;	// G=0x30603df1; @synthesize=_view
- (id)initWithView:(id)view;	// 0x30603545
- (id)addHighlightLinkRecognizer;	// 0x307d8461
- (id)addLoupeGestureRecognizer:(BOOL)recognizer;	// 0x30604735
- (id)addOneFingerDoubleTapRecognizer;	// 0x3060414d
- (id)addOneFingerDoubleTapRecognizer:(SEL)recognizer;	// 0x3060416d
- (id)addOneFingerTapRecognizer;	// 0x30604615
- (id)addOneFingerTapRecognizer:(SEL)recognizer;	// 0x30604635
- (id)addOneFingerTripleTapRecognizer;	// 0x30603e5d
- (id)addPhraseBoundaryGestureRecognizer;	// 0x307d82c1
- (id)addSelectionTapRecognizer;	// 0x307d856d
- (id)addSelectionTapRecognizer:(SEL)recognizer;	// 0x307d858d
- (id)addTapAndAHalfRecognizer;	// 0x3060432d
- (id)addTapAndHoldOnLinkRecognizer;	// 0x307d8355
- (id)addTwoFingerRangedSelectRecognizer;	// 0x306044b1
- (id)addTwoFingerSingleTapRecognizer;	// 0x30604261
- (void)attach;	// 0x307d86cd
// declared property getter: - (CGPoint)autoscrollUntransformedExtentPoint;	// 0x307d7e8d
- (void)autoscrollWillNotStart;	// 0x307d8091
// declared property getter: - (BOOL)autoscrolled;	// 0x307d7e6d
- (void)cancelAutoscroll;	// 0x307d80f1
- (void)cancelInteractionWithLink;	// 0x30666b85
- (void)clearGestureRecognizers;	// 0x306039c5
- (void)clearGestureRecognizers:(BOOL)recognizers;	// 0x306039dd
- (void)clearSelection;	// 0x306c63f9
- (void)confirmMarkedText:(id)text;	// 0x307d8295
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x307d8ce1
- (BOOL)containerIsAtom;	// 0x30603d41
- (BOOL)containerIsPlainStyleAtom;	// 0x306d5381
- (BOOL)containerIsTextField;	// 0x30673009
- (void)dealloc;	// 0x306bac89
- (void)detach;	// 0x307d86e1
- (void)detach:(BOOL)detach;	// 0x306bad05
- (float)distanceBetweenPoint:(CGPoint)point andRange:(id)range;	// 0x307d9ae1
- (void)doubleTapInUneditable:(id)uneditable;	// 0x307d95dd
// declared property getter: - (id)fieldEditor;	// 0x306cb9f1
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x30664ed9
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x306daa7d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x30665d9d
// declared property getter: - (BOOL)inGesture;	// 0x306039b5
- (BOOL)isChineseInputEnabled;	// 0x307d9bf1
- (BOOL)isInteractingWithLink;	// 0x306c62e5
- (void)longDelayRecognizer:(id)recognizer;	// 0x307d88f1
- (BOOL)longPressGestureCanTransitionToRecognizedState:(id)recognizedState;	// 0x307d86f9
// declared property getter: - (id)loupeGesture;	// 0x30603b69
- (void)loupeGesture:(id)gesture;	// 0x307d9701
- (void)notifyKeyboardSelectionChanged;	// 0x306c66d1
- (void)oneFingerDoubleTap:(id)tap;	// 0x307d9275
- (void)oneFingerTap:(id)tap;	// 0x30666319
- (void)oneFingerTapInUneditable:(id)uneditable;	// 0x307d93d1
- (void)oneFingerTapSelectsAll:(id)all;	// 0x307d8201
- (void)oneFingerTripleTap:(id)tap;	// 0x307d9109
- (CGPoint)pointFromContainerToContent:(CGPoint)content;	// 0x306cbbbd
- (CGPoint)pointFromContentToContainer:(CGPoint)container;	// 0x307d8d1d
- (id)rangeForTextReplacement:(id)textReplacement;	// 0x306cbda9
- (CGRect)rectFromContainerToContent:(CGRect)content;	// 0x307d8d7d
- (CGRect)rectFromContentToContainer:(CGRect)container;	// 0x307d8de1
- (void)resignedFirstResponder;	// 0x306c6a8d
- (void)scheduleReplacementsForRange:(id)range withOptions:(unsigned)options;	// 0x306cbed9
- (void)scheduleReplacementsWithOptions:(unsigned)options;	// 0x307d8039
// declared property getter: - (id)scrollView;	// 0x307d8691
- (void)selectAll;	// 0x307d816d
- (void)selectWord;	// 0x307db02d
- (void)selectWordWithoutShowingCommands;	// 0x307daec1
// declared property setter: - (void)setAutoscrollUntransformedExtentPoint:(CGPoint)point;	// 0x307d7ea5
// declared property setter: - (void)setAutoscrolled:(BOOL)autoscrolled;	// 0x307d7e7d
- (void)setFirstResponderIfNecessary;	// 0x30666c1d
- (void)setGestureRecognizers;	// 0x306035f5
// declared property setter: - (void)setInGesture:(BOOL)gesture;	// 0x307d7ebd
// declared property setter: - (void)setLoupeGesture:(id)gesture;	// 0x30603b79
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x306cbb0d
// declared property setter: - (void)setSingleTapGesture:(id)gesture;	// 0x30603ba1
- (BOOL)shouldHandleFormGestureAtLocation:(CGPoint)location;	// 0x30665e65
- (BOOL)shouldHandleOneFingerTapInUneditable:(id)uneditable;	// 0x306c625d
- (BOOL)shouldIgnoreLinkGestures;	// 0x306c6341
// declared property getter: - (id)singleTapGesture;	// 0x30665f6d
- (void)smallDelayRecognizer:(id)recognizer;	// 0x307d89a5
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x307d8bf9
- (BOOL)swallowsDoubleTapWithScale:(float)scale atPoint:(CGPoint)point;	// 0x307d7ecd
- (void)tapAndAHalf:(id)half;	// 0x307da471
- (BOOL)tapOnLinkWithGesture:(id)gesture;	// 0x307d8789
- (void)turnOffDrawsAsAtomIfPlainStyleAtom;	// 0x306d52a1
- (void)twoFingerRangedSelectGesture:(id)gesture;	// 0x307d8e45
- (void)twoFingerSingleTap:(id)tap;	// 0x307d8fdd
- (void)updateAutoscroll:(id)autoscroll;	// 0x307da881
- (BOOL)useGesturesForEditableContent;	// 0x30603c6d
// declared property getter: - (id)view;	// 0x30603df1
- (BOOL)viewCouldBecomeEditable:(id)editable;	// 0x30603bcd
@end
