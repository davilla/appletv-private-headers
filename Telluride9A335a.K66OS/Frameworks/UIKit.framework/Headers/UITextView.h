/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInput.h"
#import "UIKit-Structs.h"
#import "UITextSelectingContainer.h"
#import "UIScrollView.h"

@class DOMHTMLElement, UIWebDocumentView, UIDelayedAction, UITextRange, NSDictionary, UITextPosition, WebFrame, UITextSelectionView, UITextInteractionAssistant, UIFont, UIColor, NSString;
@protocol UITextInputDelegate, UITextViewDelegate, UITextInputTokenizer, UITextSelectingContent;

@interface UITextView : UIScrollView <UITextSelectingContainer, UITextInput> {
@private
	WebFrame *m_frame;	// 404 = 0x194
	DOMHTMLElement *m_body;	// 408 = 0x198
	int m_marginTop;	// 412 = 0x19c
	UIDelayedAction *m_selectionTimer;	// 416 = 0x1a0
	UIDelayedAction *m_longPressAction;	// 420 = 0x1a4
	BOOL m_editable;	// 424 = 0x1a8
	BOOL m_editing;	// 425 = 0x1a9
	BOOL m_becomesEditableWithGestures;	// 426 = 0x1aa
	BOOL m_reentrancyGuard;	// 427 = 0x1ab
	BOOL m_readyForScroll;	// 428 = 0x1ac
	BOOL m_hasExplicitTextAlignment;	// 429 = 0x1ad
	BOOL m_hasExplicitLineHeight;	// 430 = 0x1ae
	UITextInteractionAssistant *m_interactionAssistant;	// 432 = 0x1b0
	UITextSelectionView *m_selectionView;	// 436 = 0x1b4
	UIWebDocumentView *m_webView;	// 440 = 0x1b8
	UIFont *m_font;	// 444 = 0x1bc
	UIColor *m_textColor;	// 448 = 0x1c0
	int m_textAlignment;	// 452 = 0x1c4
	UIView *m_inputView;	// 456 = 0x1c8
	UIView *m_inputAccessoryView;	// 460 = 0x1cc
	float m_lineHeight;	// 464 = 0x1d0
	BOOL m_skipScrollContainingView;	// 468 = 0x1d4
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x33b17e59; S=0x33b17e69; converted property
@property(readonly, assign, nonatomic) UITextPosition *beginningOfDocument;	// G=0x33b7a4c1; 
@property(assign) float bottomBufferHeight;	// G=0x33b7a05d; S=0x33b79f6d; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x33b13181; 
@property(assign, nonatomic) unsigned dataDetectorTypes;	// G=0x33b13c81; S=0x33b130b5; 
@property(assign, nonatomic) id<UITextViewDelegate> delegate;	// @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x33b13171; S=0x33b17c59; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x33b13611; S=0x33b18fc1; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(readonly, assign, nonatomic) UITextPosition *endOfDocument;	// G=0x33b197cd; 
@property(retain, nonatomic) UIFont *font;	// G=0x33b798f9; S=0x33b13191; 
@property(retain) UIView *inputAccessoryView;	// G=0x33b188c9; S=0x33b145cd; 
@property(assign, nonatomic) id<UITextInputDelegate> inputDelegate;	// G=0x33b7a5a9; S=0x33b7a5d1; 
@property(retain) UIView *inputView;	// G=0x33b188b5; S=0x33b145a9; @synthesize=m_inputView
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x33b18d8d; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) float lineHeight;	// G=0x33b79aa5; S=0x33b79ab5; converted property
@property(assign) int marginTop;	// G=0x33b79a95; S=0x33b184a5; converted property
@property(readonly, assign, nonatomic) UITextRange *markedTextRange;	// G=0x33b7a3e5; 
@property(copy, nonatomic) NSDictionary *markedTextStyle;	// G=0x33b7a40d; S=0x33b7a435; 
@property(assign) CGPoint offset;	// G=0x33b7a12d; S=0x33b7a11d; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x33b7a16d; S=0x33b7a15d; converted property
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x33b190dd; S=0x33b799cd; 
@property(copy) UITextRange *selectedTextRange;	// G=0x33b18949; S=0x33b7a3b9; 
@property(assign, nonatomic) int selectionAffinity;	// G=0x33b7a82d; S=0x33b7a855; 
@property(assign, nonatomic) int selectionGranularity;	// G=0x33b7a8c9; S=0x33b197f5; 
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x33b1304d; 
@property(assign) BOOL showScrollerIndicators;	// G=0x33b7a0cd; S=0x33b7a099; converted property
@property(assign, nonatomic) int spellCheckingType;	// @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x33b137ed; S=0x33b13a49; 
@property(assign, nonatomic) int textAlignment;	// G=0x33b7998d; S=0x33b7999d; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x33b79931; S=0x33b136bd; 
@property(readonly, assign, nonatomic) UIResponder<UITextSelection> *textDocument;	// G=0x33b18945; 
@property(readonly, assign, nonatomic) UIView *textInputView;
@property(readonly, assign, nonatomic) id<UITextInputTokenizer> tokenizer;	// G=0x33b197a5; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x33b1820d; converted property
+ (id)bestInterpretationForDictationResult:(id)dictationResult;	// 0x33b79011
+ (id)bestInterpretationForMarsVoltas:(id)marsVoltas;	// 0x33b7905d
- (id)initWithCoder:(id)coder;	// 0x33b785e1
- (id)initWithFrame:(CGRect)frame;	// 0x33b12389
- (id)initWithFrame:(CGRect)frame font:(id)font;	// 0x33b17be5
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x33b78591
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x33b78db9
- (id)_automationValue;	// 0x33b19979
- (void)_bold:(id)bold;	// 0x33b79311
- (void)_dealloc;	// 0x33b14449
- (void)_define:(id)define;	// 0x33b792f1
- (id)_findWebViewWordBoundaryFromPosition:(id)position;	// 0x33b7a881
- (void)_italicize:(id)italicize;	// 0x33b79331
- (id)_keyboardResponder;	// 0x33b18935
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33b789b5
- (Class)_printFormatterClass;	// 0x33ce27d1
- (void)_promptForReplace:(id)replace;	// 0x33b792b9
- (BOOL)_requiresKeyboardWhenFirstResponder;	// 0x33b18909
- (void)_showTextStyleOptions:(id)options;	// 0x33b79371
- (void)_underline:(id)underline;	// 0x33b79351
- (id)automaticallySelectedOverlay;	// 0x33b1c46d
- (int)baseWritingDirectionForPosition:(id)position inDirection:(int)direction;	// 0x33b7a65d
- (BOOL)becomeFirstResponder;	// 0x33b184d1
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x33b17e59
- (void)beginSelectionChange;	// 0x33b196e5
// declared property getter: - (id)beginningOfDocument;	// 0x33b7a4c1
// converted property getter: - (float)bottomBufferHeight;	// 0x33b7a05d
- (BOOL)canBecomeFirstResponder;	// 0x33b18849
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x33b19841
- (BOOL)canResignFirstResponder;	// 0x33b198cd
- (void)cancelDataDetectorsWithWebLock;	// 0x33b14561
- (void)cancelInteractionWithLink;	// 0x33b79d19
- (CGRect)caretRectForPosition:(id)position;	// 0x33b1919d
- (id)characterRangeAtPoint:(CGPoint)point;	// 0x33b7a7bd
- (id)characterRangeByExtendingPosition:(id)position inDirection:(int)direction;	// 0x33b7a62d
- (id)closestPositionToPoint:(CGPoint)point;	// 0x33b19705
- (id)closestPositionToPoint:(CGPoint)point withinRange:(id)range;	// 0x33b7a749
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x33b12645
- (int)comparePosition:(id)position toPosition:(id)position2;	// 0x33b7a549
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x33b78df9
// declared property getter: - (id)content;	// 0x33b13181
- (id)contentAsHTMLString;	// 0x33b20aa9
- (void)copy:(id)copy;	// 0x33b79239
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x33b79079
- (void)cut:(id)cut;	// 0x33b79219
// declared property getter: - (unsigned)dataDetectorTypes;	// 0x33b13c81
- (void)dealloc;	// 0x33b14301
- (void)delayedUpdateForKeyboardDidShow;	// 0x33b19145
- (void)deleteBackward;	// 0x33b7a251
- (void)detachInteractionAssistant;	// 0x33b142e1
- (void)detachSelectionView;	// 0x33b142c1
- (void)didMoveToSuperview;	// 0x33b13739
- (void)displayScrollerIndicators;	// 0x33b7a10d
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x33b793cd
- (void)encodeWithCoder:(id)coder;	// 0x33b78a09
// declared property getter: - (id)endOfDocument;	// 0x33b197cd
- (void)endSelectionChange;	// 0x33b19821
- (void)ensureSelection;	// 0x33b1904d
- (CGRect)firstRectForRange:(id)range;	// 0x33b7a6bd
// declared property getter: - (id)font;	// 0x33b798f9
- (void)forwardInvocation:(id)invocation;	// 0x33b18e71
- (BOOL)hasText;	// 0x33b79969
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33b196a9
// declared property getter: - (id)inputAccessoryView;	// 0x33b188c9
// declared property getter: - (id)inputDelegate;	// 0x33b7a5a9
// declared property getter: - (id)inputView;	// 0x33b188b5
- (void)insertDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x33b7a2a5
- (id)insertDictationResultPlaceholder:(CGSize)placeholder;	// 0x33b7a2d5
- (void)insertText:(id)text;	// 0x33b7a279
// declared property getter: - (id)interactionAssistant;	// 0x33b18d8d
- (BOOL)isAccessibilityElementByDefault;	// 0x33c06649
// declared property getter: - (BOOL)isEditable;	// 0x33b13171
// declared property getter: - (BOOL)isEditing;	// 0x33b13611
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33c0664d
- (BOOL)isFirstResponder;	// 0x33b187f1
- (BOOL)isInteractingWithLink;	// 0x33b79d59
- (void)keyboardDidShow:(id)keyboard;	// 0x33b19115
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x33b1bc71
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x33b1fafd
- (BOOL)keyboardInputChanged:(id)changed;	// 0x33b1bee9
- (void)keyboardInputChangedSelection:(id)selection;	// 0x33b18f41
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x33b79da5
// converted property getter: - (float)lineHeight;	// 0x33b79aa5
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x33b791d9
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x33b791b9
// converted property getter: - (int)marginTop;	// 0x33b79a95
// declared property getter: - (id)markedTextRange;	// 0x33b7a3e5
// declared property getter: - (id)markedTextStyle;	// 0x33b7a40d
- (id)metadataDictionariesForDictationResults;	// 0x33b7a335
- (id)methodSignatureForSelector:(SEL)selector;	// 0x33b18e25
- (BOOL)mightHaveLinks;	// 0x33b17e39
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x33b7909d
// converted property getter: - (CGPoint)offset;	// 0x33b7a12d
- (int)offsetFromPosition:(id)position toPosition:(id)position2;	// 0x33b7a579
- (void)paste:(id)paste;	// 0x33b79259
- (void)performBecomeEditableTasks;	// 0x33b18fd1
- (id)positionFromPosition:(id)position inDirection:(int)direction offset:(int)offset;	// 0x33b7a519
- (id)positionFromPosition:(id)position offset:(int)offset;	// 0x33b7a4e9
- (id)positionWithinRange:(id)range farthestInDirection:(int)direction;	// 0x33b7a5fd
- (void)recalculateStyle;	// 0x33b13239
- (CGRect)rectForSelection:(NSRange)selection;	// 0x33b79835
- (id)rectsForRange:(id)range;	// 0x33b7a8f1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x33b12f5d
- (void)removeDictationResultPlaceholder:(id)placeholder willInsertText:(BOOL)text;	// 0x33b7a305
- (void)removeFromSuperview;	// 0x33b14251
- (void)replace:(id)replace;	// 0x33b791f9
- (void)replaceRange:(id)range withText:(id)text;	// 0x33b7a389
- (void)resetDataDetectorsResultsWithWebLock;	// 0x33b18ef9
- (BOOL)resignFirstResponder;	// 0x33b14065
- (BOOL)respondsToSelector:(SEL)selector;	// 0x33b123d9
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x33b79b3d
- (void)scrollRectToVisibleInContainingScrollView;	// 0x33b19329
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x33b1924d
- (void)scrollToMakeCaretVisible:(BOOL)makeCaretVisible;	// 0x33b7a241
// converted property getter: - (BOOL)scrollingEnabled;	// 0x33b7a16d
- (void)select:(id)select;	// 0x33b79279
- (void)selectAll;	// 0x33b79191
- (void)selectAll:(id)all;	// 0x33b79299
// declared property getter: - (NSRange)selectedRange;	// 0x33b190dd
- (id)selectedText;	// 0x33b79155
// declared property getter: - (id)selectedTextRange;	// 0x33b18949
// declared property getter: - (int)selectionAffinity;	// 0x33b7a82d
- (CGRect)selectionClipRect;	// 0x33b19229
// declared property getter: - (int)selectionGranularity;	// 0x33b7a8c9
// declared property getter: - (id)selectionView;	// 0x33b1304d
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x33b7a185
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x33b7a14d
- (void)setBaseWritingDirection:(int)direction forRange:(id)range;	// 0x33b7a68d
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x33b17e69
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x33b79f6d
- (void)setContentToHTMLString:(id)htmlstring;	// 0x33b18375
// declared property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x33b130b5
- (void)setDictationResult:(id)result withCorrectionIdentifier:(id)correctionIdentifier;	// 0x33b78ed5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x33b17c59
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x33b18fc1
// declared property setter: - (void)setFont:(id)font;	// 0x33b13191
- (void)setFrame:(CGRect)frame;	// 0x33b1245d
// declared property setter: - (void)setInputAccessoryView:(id)view;	// 0x33b145cd
// declared property setter: - (void)setInputDelegate:(id)delegate;	// 0x33b7a5d1
// declared property setter: - (void)setInputView:(id)view;	// 0x33b145a9
// converted property setter: - (void)setLineHeight:(float)height;	// 0x33b79ab5
// converted property setter: - (void)setMarginTop:(int)top;	// 0x33b184a5
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x33b7a461
// declared property setter: - (void)setMarkedTextStyle:(id)style;	// 0x33b7a435
- (void)setMarsVoltas:(id)voltas withCorrectionIdentifier:(id)correctionIdentifier;	// 0x33b7904d
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x33b7a11d
- (void)setRichText:(BOOL)text;	// 0x33b798cd
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x33b7a195
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x33b7a15d
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x33b799cd
// declared property setter: - (void)setSelectedTextRange:(id)range;	// 0x33b7a3b9
// declared property setter: - (void)setSelectionAffinity:(int)affinity;	// 0x33b7a855
// declared property setter: - (void)setSelectionGranularity:(int)granularity;	// 0x33b197f5
- (void)setSelectionToEnd;	// 0x33b79701
- (void)setSelectionToStart;	// 0x33b79601
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x33b7a099
// declared property setter: - (void)setText:(id)text;	// 0x33b13a49
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x33b7999d
// declared property setter: - (void)setTextColor:(id)color;	// 0x33b136bd
- (BOOL)shouldScrollEnclosingScrollView;	// 0x33b13621
- (BOOL)shouldStartDataDetectors;	// 0x33b13ca1
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x33b7a0cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33b79429
- (void)startDataDetectorsWithWebLock;	// 0x33b17ec5
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33b79cb9
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33b79d39
- (id)styleString;	// 0x33b12c11
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x33b19621
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x33b79c99
// declared property getter: - (id)text;	// 0x33b137ed
// declared property getter: - (int)textAlignment;	// 0x33b7998d
// declared property getter: - (id)textColor;	// 0x33b79931
// declared property getter: - (id)textDocument;	// 0x33b18945
- (id)textInRange:(id)range;	// 0x33b7a35d
- (id)textInputTraits;	// 0x33b1243d
- (id)textRangeFromPosition:(id)position toPosition:(id)position2;	// 0x33b19775
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x33b12dc5
// declared property getter: - (id)tokenizer;	// 0x33b197a5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33b790fd
- (id)undoManager;	// 0x33b79391
- (id)undoManagerForWebView:(id)webView;	// 0x33b1bec9
- (void)unmarkText;	// 0x33b7a499
- (void)updateContentEditableAttribute:(BOOL)attribute;	// 0x33b12fcd
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33b79cd9
- (void)updateSelection;	// 0x33b7912d
- (void)updateWebViewObjects;	// 0x33b12e45
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x33b79cf9
- (CGRect)visibleRect;	// 0x33b19511
- (CGRect)visibleTextRect;	// 0x33b19431
// converted property getter: - (id)webView;	// 0x33b1820d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x33b79e7d
- (void)webViewDidChange:(id)webView;	// 0x33b132a5
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x33b79d7d
@end

