/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIView.h"
#import "UIKit-Structs.h"
#import "UIKeyboardInput.h"

@class UITextRange, NSDictionary, UITextPosition, UITextInputTraits, UITextSelectionView, UITextInteractionAssistant, UIColor, UIImage;
@protocol UITextInputDelegate, UITextSelectingContent;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
	UITextInputTraits *m_traits;	// 48 = 0x30
}
@property(assign, nonatomic) BOOL acceptsEmoji;	// G=0x352dcb9d; S=0x352dcb99; @dynamic
@property(assign, nonatomic) BOOL acceptsFloatingKeyboard;
@property(assign, nonatomic) BOOL acceptsSplitKeyboard;
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x352dcbdd; S=0x352dcbe1; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x352dcc1d; 
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x352dcbcd; 
@property(assign, nonatomic) BOOL contentsIsSingleValue;	// @dynamic
@property(assign, nonatomic) BOOL displaySecureTextUsingPlainText;
@property(readonly, assign, nonatomic, getter=isEditable) BOOL editable;	// @dynamic
@property(readonly, assign, nonatomic, getter=isEditing) BOOL editing;	// @dynamic
@property(assign, nonatomic) int emptyContentReturnKeyType;
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x352dcc21; 
@property(assign, nonatomic) BOOL forceEnableDictation;
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x352dccc9; S=0x352dcccd; 
@property(retain, nonatomic) UIColor *insertionPointColor;	// @dynamic
@property(assign, nonatomic) unsigned insertionPointWidth;	// @dynamic
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x352dcbc9; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign, nonatomic) BOOL learnsCorrections;
@property(retain) id markedText;	// G=0x352dca61; S=0x352dca59; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x352dcc79; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x352dcc7d; S=0x352dcc81; 
@property(assign, nonatomic) BOOL returnKeyGoesToNextResponder;
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign, nonatomic, getter=isRichText) BOOL richText;
@property(assign, getter=isSecure) BOOL secure;	// G=0x352dcb91; S=0x352dcb95; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(copy) UITextRange *selectedTextRange;	// G=0x352dcc15; S=0x352dcc19; 
@property(assign, nonatomic) int selectionAffinity;
@property(retain, nonatomic) UIColor *selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage;
@property(assign, nonatomic) int selectionGranularity;
@property(retain, nonatomic) UIColor *selectionHighlightColor;
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x352dcba1; 
@property(assign, nonatomic) int shortcutConversionType;	// @dynamic
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(assign, nonatomic) BOOL suppressReturnKeyStyling;
@property(retain) id text;	// G=0x352dcb49; S=0x352dcb45; converted property
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x352dccd5; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(assign, nonatomic) int textLoupeVisibility;	// @dynamic
@property(assign, nonatomic) int textSelectionBehavior;	// @dynamic
@property(assign, nonatomic) id textSuggestionDelegate;	// @dynamic
@property(assign, nonatomic) CFCharacterSetRef textTrimmingSet;	// @dynamic
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x352dccc5; 
- (NSRange)_markedTextNSRange;	// 0x352dcb19
// declared property getter: - (BOOL)acceptsEmoji;	// 0x352dcb9d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x352dcc99
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x352dcbdd
- (void)beginSelectionChange;	// 0x352dcbd1
// declared property getter: - (id)beginningOfDocument;	// 0x352dcc1d
- (CGRect)caretRect;	// 0x352dcb51
- (CGRect)caretRectForPosition:(id)position;	// 0x352dcc55
- (unsigned short)characterAfterCaretSelection;	// 0x352dca6d
- (unsigned short)characterBeforeCaretSelection;	// 0x352dca69
- (unsigned short)characterInRelationToCaretSelection:(int)caretSelection;	// 0x352dca65
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x352dcc8d
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x352dcc95
- (id)closestPositionToPoint:(CGPoint)point;	// 0x352dcc85
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x352dcc89
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x352dcca5
- (void)confirmMarkedText:(id)text;	// 0x352dca5d
// declared property getter: - (id)content;	// 0x352dcbcd
- (CGRect)convertCaretRect:(CGRect)rect;	// 0x352dcb75
- (void)dealloc;	// 0x352dc8a1
- (id)delegate;	// 0x352dca3d
- (void)deleteBackward;	// 0x352dca41
- (void)detachInteractionAssistant;	// 0x352dcbe9
- (void)detachSelectionView;	// 0x352dcbe5
// declared property getter: - (id)endOfDocument;	// 0x352dcc21
- (void)endSelectionChange;	// 0x352dcbd5
- (void)expandSelectionToStartOfWordContainingCaretSelection;	// 0x352dcaed
- (void)extendCurrentSelection:(int)selection;	// 0x352dcb35
- (CGRect)firstRectForRange:(id)range;	// 0x352dcc31
- (id)fontForCaretSelection;	// 0x352dca71
- (void)forwardInvocation:(id)invocation;	// 0x352dc93d
- (BOOL)hasContent;	// 0x352dcaf9
- (BOOL)hasSelection;	// 0x352dcafd
- (BOOL)hasText;	// 0x352dcc11
// declared property getter: - (id)inputDelegate;	// 0x352dccc9
- (void)insertText:(id)text;	// 0x352dca45
// declared property getter: - (id)interactionAssistant;	// 0x352dcbc9
- (BOOL)isPosition:(id)position atBoundary:(int)boundary inDirection:(int)direction;	// 0x352dccb5
- (BOOL)isPosition:(id)position withinTextUnit:(int)unit inDirection:(int)direction;	// 0x352dccbd
// converted property getter: - (BOOL)isSecure;	// 0x352dcb91
- (BOOL)isShowingPlaceholder;	// 0x352dcb89
// converted property getter: - (id)markedText;	// 0x352dca61
// declared property getter: - (id)markedTextRange;	// 0x352dcc79
// declared property getter: - (id)markedTextStyle;	// 0x352dcc7d
- (id)methodSignatureForSelector:(SEL)selector;	// 0x352dc9c5
- (void)moveBackward:(unsigned)backward;	// 0x352dcb39
- (void)moveForward:(unsigned)forward;	// 0x352dcb3d
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x352dcae1
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x352dcca9
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x352dccb1
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x352dccad
- (id)positionFromPosition:(id)position toBoundary:(int)boundary inDirection:(int)direction;	// 0x352dccb9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x352dcc91
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)position;	// 0x352dcadd
- (id)rangeByExtendingCurrentSelection:(int)selection;	// 0x352dcb31
- (id)rangeByMovingCurrentSelection:(int)selection;	// 0x352dcb2d
- (id)rangeEnclosingPosition:(id)position withGranularity:(int)granularity inDirection:(int)direction;	// 0x352dccc1
- (CGRect)rectContainingCaretSelection;	// 0x352dcab9
- (CGRect)rectForNSRange:(NSRange)nsrange;	// 0x352dca91
- (id)rectsForNSRange:(NSRange)nsrange;	// 0x352dcab5
- (id)rectsForRange:(id)range;	// 0x352dccd1
- (void)replaceCurrentWordWithText:(id)text;	// 0x352dca4d
- (void)replaceRange:(id)range withText:(id)text;	// 0x352dcc2d
- (void)replaceRangeWithText:(NSRange)text replacementText:(id)text2;	// 0x352dca49
- (void)replaceRangeWithTextWithoutClosingTyping:(id)textWithoutClosingTyping replacementText:(id)text;	// 0x352dca51
- (void)selectAll;	// 0x352dcb41
- (id)selectedDOMRange;	// 0x352dcb25
// declared property getter: - (id)selectedTextRange;	// 0x352dcc15
- (BOOL)selectionAtDocumentStart;	// 0x352dcb05
- (BOOL)selectionAtWordStart;	// 0x352dcb09
- (CGRect)selectionClipRect;	// 0x352dcba5
- (NSRange)selectionRange;	// 0x352dcb0d
- (int)selectionState;	// 0x352dcb01
// declared property getter: - (id)selectionView;	// 0x352dcba1
// declared property setter: - (void)setAcceptsEmoji:(BOOL)emoji;	// 0x352dcb99
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x352dcc9d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x352dcbe1
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x352dcccd
// converted property setter: - (void)setMarkedText:(id)text;	// 0x352dca59
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x352dca55
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x352dcc81
// converted property setter: - (void)setSecure:(BOOL)secure;	// 0x352dcb95
- (void)setSelectedDOMRange:(id)range affinityDownstream:(BOOL)downstream;	// 0x352dcb29
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x352dcc19
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x352dcb4d
// converted property setter: - (void)setText:(id)text;	// 0x352dcb45
- (void)setupPlaceholderTextIfNeeded;	// 0x352dcb8d
- (void)takeTraitsFrom:(id)from;	// 0x352dca11
// converted property getter: - (id)text;	// 0x352dcb49
- (id)textColorForCaretSelection;	// 0x352dca75
// declared property getter: - (id)textDocument;	// 0x352dccd5
- (id)textInRange:(id)range;	// 0x352dcc25
- (id)textInputTraits;	// 0x352dc8ed
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x352dcc29
// declared property getter: - (id)tokenizer;	// 0x352dccc5
- (void)unmarkText;	// 0x352dcca1
- (void)updateSelection;	// 0x352dcbd9
- (CGRect)visibleBounds;	// 0x352dcbed
- (id)wordContainingCaretSelection;	// 0x352dcae9
- (int)wordOffsetInRange:(id)range;	// 0x352dcaf1
- (id)wordRangeContainingCaretSelection;	// 0x352dcae5
@end

