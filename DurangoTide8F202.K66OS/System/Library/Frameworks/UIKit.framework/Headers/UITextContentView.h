/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextInputTraits.h"
#import "UITextSelectingContainer.h"

@class DOMHTMLElement, WebFrame, UITextInteractionAssistant, UITextSelectionView, UIColor, UIFont, UIWebDocumentView, NSString, UIDelayedAction;
@protocol UITextContentViewDelegate, UITextSelectingContent;

@interface UITextContentView : UIView <UITextSelectingContainer, UITextInputTraits> {
@private
	id m_delegate;	// 44 = 0x2c
	WebFrame *m_frame;	// 48 = 0x30
	DOMHTMLElement *m_body;	// 52 = 0x34
	int m_marginTop;	// 56 = 0x38
	UIDelayedAction *m_scrollToVisibleTimer;	// 60 = 0x3c
	UIEdgeInsets m_selectionInset;	// 64 = 0x40
	float m_bottomBufferHeight;	// 80 = 0x50
	BOOL m_editable;	// 84 = 0x54
	BOOL m_editing;	// 85 = 0x55
	BOOL m_becomesEditableWithGestures;	// 86 = 0x56
	BOOL m_becomingFirstResponder;	// 87 = 0x57
	BOOL m_reentrancyGuard;	// 88 = 0x58
	BOOL m_scrollsSelectionOnWebDocumentChanges;	// 89 = 0x59
	BOOL m_hasExplicitTextAlignment;	// 90 = 0x5a
	UITextInteractionAssistant *m_interactionAssistant;	// 92 = 0x5c
	UITextSelectionView *m_selectionView;	// 96 = 0x60
	UIWebDocumentView *m_webView;	// 100 = 0x64
	UIFont *m_font;	// 104 = 0x68
	UIColor *m_textColor;	// 108 = 0x6c
	int m_textAlignment;	// 112 = 0x70
}
@property(assign, nonatomic) int autocapitalizationType;	// @dynamic
@property(assign, nonatomic) int autocorrectionType;	// @dynamic
@property(assign) BOOL becomesEditableWithGestures;	// G=0x307e7241; S=0x3062057d; converted property
@property(assign) float bottomBufferHeight;	// G=0x307e7261; S=0x306cb6c5; converted property
@property(assign) BOOL caretBlinks;	// G=0x307e722d; S=0x307e7229; converted property
@property(readonly, assign, nonatomic) UIView<UITextSelectingContent> *content;	// G=0x3061fef9; 
@property(assign) unsigned dataDetectorTypes;	// G=0x307e74cd; S=0x3061fe21; converted property
@property(assign, nonatomic) id<UITextContentViewDelegate> delegate;	// G=0x30620439; S=0x306206c5; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3061fee9; S=0x307e804d; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x306d6159; S=0x306cb785; @synthesize=m_editing
@property(assign, nonatomic) BOOL enablesReturnKeyAutomatically;	// @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x307e7611; S=0x3061ffc9; 
@property(readonly, assign, nonatomic) UITextInteractionAssistant *interactionAssistant;	// G=0x306cb889; 
@property(assign, nonatomic) int keyboardAppearance;	// @dynamic
@property(assign, nonatomic) int keyboardType;	// @dynamic
@property(assign) int marginTop;	// G=0x307e7251; S=0x307e7521; converted property
@property(assign) CGPoint offset;	// G=0x307e728d; S=0x307e7289; converted property
@property(assign, nonatomic) int returnKeyType;	// @dynamic
@property(assign) BOOL scrollingEnabled;	// G=0x307e72a9; S=0x307e72a5; converted property
@property(assign, nonatomic) BOOL scrollsSelectionOnWebDocumentChanges;	// G=0x30620741; S=0x3061fcf1; @synthesize=m_scrollsSelectionOnWebDocumentChanges
@property(assign, nonatomic, getter=isSecureTextEntry) BOOL secureTextEntry;	// @dynamic
@property(assign, nonatomic) NSRange selectedRange;	// G=0x307e87f5; S=0x307e823d; 
@property(assign, nonatomic) UIEdgeInsets selectionInset;	// G=0x306b28b5; S=0x306b1f29; @synthesize=m_selectionInset
@property(readonly, assign, nonatomic) UITextSelectionView *selectionView;	// G=0x306b1f55; 
@property(assign) BOOL selectionVisible;	// G=0x307e7225; S=0x307e7221; converted property
@property(assign) BOOL showScrollerIndicators;	// G=0x307e7281; S=0x307e727d; converted property
@property(copy, nonatomic) NSString *text;	// G=0x3061ef8d; S=0x307e82e9; 
@property(assign, nonatomic) int textAlignment;	// G=0x307e7231; S=0x307e7549; 
@property(retain, nonatomic) UIColor *textColor;	// G=0x306d4f41; S=0x307e759d; 
@property(readonly, retain) UIWebDocumentView *webView;	// G=0x3062058d; converted property
- (id)initWithCoder:(id)coder;	// 0x307e7e99
- (id)initWithFrame:(CGRect)frame;	// 0x3061ed45
- (id)initWithFrame:(CGRect)frame webView:(id)view;	// 0x306b1ec5
- (id)_automationValue;	// 0x307e72e9
- (void)_didScroll;	// 0x306da799
- (void)_hideSelectionCommands;	// 0x307e79f1
- (id)_keyboardResponder;	// 0x306cb65d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x307e7e4d
- (void)_scrollViewDidEndDecelerating;	// 0x306daad1
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x306daacd
- (void)_scrollViewWillBeginDragging;	// 0x306daac9
- (void)_setLtoRTextDirection:(id)direction;	// 0x307e79b1
- (void)_setRtoLTextDirection:(id)direction;	// 0x307e79d1
- (id)automaticallySelectedOverlay;	// 0x306cf5c1
- (BOOL)becomeFirstResponder;	// 0x306cb3cd
// converted property getter: - (BOOL)becomesEditableWithGestures;	// 0x307e7241
- (void)beginSelectionChange;	// 0x306cbaed
// converted property getter: - (float)bottomBufferHeight;	// 0x307e7261
- (BOOL)canBecomeFirstResponder;	// 0x306cb5fd
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x306d7b31
- (BOOL)canResignFirstResponder;	// 0x306dab0d
- (void)cancelAutoscroll;	// 0x307e7bc5
- (void)cancelDataDetectorsWithWebLock;	// 0x307e8bf9
- (void)cancelInteractionWithLink;	// 0x307e7411
// converted property getter: - (BOOL)caretBlinks;	// 0x307e722d
- (CGRect)caretRectForVisiblePosition:(id)visiblePosition;	// 0x307e8a31
- (unsigned short)characterBeforeCaretSelection;	// 0x307e7a89
- (void)clearScrollToVisibleTimer;	// 0x307e7669
- (CGRect)closestCaretRectInMarkedTextRangeForPoint:(CGPoint)point;	// 0x307e89cd
- (void)commonInitWithWebDocumentView:(id)webDocumentView isDecoding:(BOOL)decoding;	// 0x3061f259
- (CGPoint)constrainedPoint:(CGPoint)point;	// 0x307e8a89
// declared property getter: - (id)content;	// 0x3061fef9
- (id)contentAsHTMLString;	// 0x30620751
- (void)copy:(id)copy;	// 0x307e7971
- (void)cut:(id)cut;	// 0x307e7991
// converted property getter: - (unsigned)dataDetectorTypes;	// 0x307e74cd
- (void)dealloc;	// 0x307e8c35
// declared property getter: - (id)delegate;	// 0x30620439
- (void)detachInteractionAssistant;	// 0x307e7c4d
- (void)detachSelectionView;	// 0x307e7c6d
- (void)didMoveToSuperview;	// 0x306206d5
- (void)displayScrollerIndicators;	// 0x307e7285
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x307e7841
- (void)encodeWithCoder:(id)coder;	// 0x307e7cf5
- (void)endSelectionChange;	// 0x306cbeb9
- (void)ensureSelection;	// 0x306cb7fd
// declared property getter: - (id)font;	// 0x307e7611
- (id)fontForCaretSelection;	// 0x307e7a69
- (void)forwardInvocation:(id)invocation;	// 0x3062060d
- (BOOL)hasMarkedText;	// 0x307e7b29
- (BOOL)hasSelection;	// 0x307e7c05
- (BOOL)hasText;	// 0x307e7579
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x306ca815
- (void)insertText:(id)text;	// 0x307e7b6d
// declared property getter: - (id)interactionAssistant;	// 0x306cb889
// declared property getter: - (BOOL)isEditable;	// 0x3061fee9
// declared property getter: - (BOOL)isEditing;	// 0x306d6159
- (BOOL)isFirstResponder;	// 0x306b2151
- (BOOL)isInteractingWithLink;	// 0x307e73cd
- (BOOL)isSMSTextView;	// 0x306b2015
- (void)keyboardDidShow:(id)keyboard;	// 0x306b2d61
- (BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;	// 0x306cc371
- (BOOL)keyboardInput:(id)input shouldReplaceTextInRange:(NSRange)range replacementText:(id)text;	// 0x306d2169
- (BOOL)keyboardInputChanged:(id)changed;	// 0x306cc69d
- (void)keyboardInputChangedSelection:(id)selection;	// 0x306cb671
- (BOOL)keyboardInputShouldDelete:(id)keyboardInput;	// 0x307e86bd
// converted property getter: - (int)marginTop;	// 0x307e7251
- (id)markedText;	// 0x307e7b09
- (id)methodSignatureForSelector:(SEL)selector;	// 0x306205c9
- (BOOL)mightHaveLinks;	// 0x307e74b1
// converted property getter: - (CGPoint)offset;	// 0x307e728d
- (unsigned)offsetInMarkedTextForSelection:(id)selection;	// 0x307e7b4d
- (void)paste:(id)paste;	// 0x307e7951
- (void)performBecomeEditableTasks;	// 0x306cb795
- (void)performScrollSelectionToVisible:(BOOL)visible;	// 0x306b2059
- (void)promptForReplace:(id)replace;	// 0x307e78b1
- (void)recalculateStyle;	// 0x30620075
- (CGRect)rectContainingCaretSelection;	// 0x307e8985
- (CGRect)rectForScrollToVisible;	// 0x307e8821
- (CGRect)rectForSelection:(NSRange)selection;	// 0x307e88b1
- (void)registerForEditingDelegateNotification:(id)editingDelegateNotification selector:(SEL)selector;	// 0x3061fdb5
- (void)removeFromSuperview;	// 0x307e7c8d
- (void)replace:(id)replace;	// 0x307e78e1
- (void)resetDataDetectorsResultsWithWebLock;	// 0x307e8b55
- (BOOL)resignFirstResponder;	// 0x306ba25d
- (void)scrollRangeToVisible:(NSRange)visible;	// 0x307e873d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x306cc51d
- (void)scrollSelectionToVisible:(BOOL)visible;	// 0x306b1fd1
- (void)scrollToVisibleTimerAction;	// 0x307e7641
- (id)scrollView;	// 0x30620531
// converted property getter: - (BOOL)scrollingEnabled;	// 0x307e72a9
// declared property getter: - (BOOL)scrollsSelectionOnWebDocumentChanges;	// 0x30620741
- (void)select:(id)select;	// 0x307e7931
- (void)selectAll;	// 0x307e788d
- (void)selectAll:(id)all;	// 0x307e7911
// declared property getter: - (NSRange)selectedRange;	// 0x307e87f5
- (id)selectedText;	// 0x307e7b8d
- (void)selectionChanged;	// 0x306cb761
- (CGRect)selectionClipRect;	// 0x306cb899
// declared property getter: - (UIEdgeInsets)selectionInset;	// 0x306b28b5
- (NSRange)selectionRange;	// 0x307e89a9
- (id)selectionRectsForRange:(id)range;	// 0x307e8e01
// declared property getter: - (id)selectionView;	// 0x306b1f55
// converted property getter: - (BOOL)selectionVisible;	// 0x307e7225
- (void)setAllowsFourWayRubberBanding:(BOOL)banding;	// 0x307e72ad
- (void)setAllowsRubberBanding:(BOOL)banding;	// 0x307e72a1
// converted property setter: - (void)setBecomesEditableWithGestures:(BOOL)gestures;	// 0x3062057d
// converted property setter: - (void)setBottomBufferHeight:(float)height;	// 0x306cb6c5
// converted property setter: - (void)setCaretBlinks:(BOOL)blinks;	// 0x307e7229
- (void)setContentToHTMLString:(id)htmlstring;	// 0x307e84e9
// converted property setter: - (void)setDataDetectorTypes:(unsigned)types;	// 0x3061fe21
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x306206c5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x307e804d
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x306cb785
- (void)setEmbeddedEditingMode:(BOOL)mode;	// 0x3061fc99
// declared property setter: - (void)setFont:(id)font;	// 0x3061ffc9
- (void)setFrame:(CGRect)frame;	// 0x3061eda9
// converted property setter: - (void)setMarginTop:(int)top;	// 0x307e7521
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x307e7289
- (void)setScrollerIndicatorSubrect:(CGRect)subrect;	// 0x307e72b1
// converted property setter: - (void)setScrollingEnabled:(BOOL)enabled;	// 0x307e72a5
// declared property setter: - (void)setScrollsSelectionOnWebDocumentChanges:(BOOL)changes;	// 0x3061fcf1
// declared property setter: - (void)setSelectedRange:(NSRange)range;	// 0x307e823d
// declared property setter: - (void)setSelectionInset:(UIEdgeInsets)inset;	// 0x306b1f29
- (void)setSelectionToEnd;	// 0x307e7781
- (void)setSelectionToStart;	// 0x307e85f9
// converted property setter: - (void)setSelectionVisible:(BOOL)visible;	// 0x307e7221
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x307e893d
// converted property setter: - (void)setShowScrollerIndicators:(BOOL)indicators;	// 0x307e727d
// declared property setter: - (void)setText:(id)text;	// 0x307e82e9
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x307e7549
// declared property setter: - (void)setTextColor:(id)color;	// 0x307e759d
- (BOOL)shouldStartDataDetectors;	// 0x307e74ed
// converted property getter: - (BOOL)showScrollerIndicators;	// 0x307e7281
- (void)startAutoscroll:(CGPoint)autoscroll;	// 0x307e7be5
- (void)startDataDetectorsWithWebLock;	// 0x307e8b91
- (void)startInteractionWithLinkAtPoint:(CGPoint)point;	// 0x307e7471
- (void)startLongInteractionWithLinkAtPoint:(CGPoint)point;	// 0x307e73f1
- (id)styleString;	// 0x3061f6a5
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x306d82a1
- (void)tapLinkAtPoint:(CGPoint)point;	// 0x307e7491
// declared property getter: - (id)text;	// 0x3061ef8d
// declared property getter: - (int)textAlignment;	// 0x307e7231
// declared property getter: - (id)textColor;	// 0x306d4f41
- (id)textInputTraits;	// 0x30620695
- (CGSize)tileSizeForSize:(CGSize)size;	// 0x3061fa81
- (void)touchScrollToVisibleTimer;	// 0x307e76a5
- (void)touchScrollToVisibleTimerWithDelay:(double)delay;	// 0x307e76c5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x307e72bd
- (id)undoManager;	// 0x307e7a11
- (id)undoManagerForWebView:(id)webView;	// 0x307e7a49
- (void)updateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x307e7451
- (void)updateSelection;	// 0x307e7c29
- (void)updateWebViewObjects;	// 0x3061fb65
- (void)validateInteractionWithLinkAtPoint:(CGPoint)point;	// 0x307e7431
- (CGRect)visibleRect;	// 0x307e905d
- (CGRect)visibleTextRect;	// 0x307e8fb9
// converted property getter: - (id)webView;	// 0x3062058d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x307e72fd
- (void)webViewDidChange:(id)webView;	// 0x306200e1
- (BOOL)willInteractWithLinkAtPoint:(CGPoint)point;	// 0x307e73a9
- (id)wordContainingCaretSelection;	// 0x307e7ae9
- (id)wordInRange:(id)range;	// 0x307e7aa9
- (id)wordRangeContainingCaretSelection;	// 0x307e7ac9
@end

