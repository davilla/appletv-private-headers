/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebDocumentOptionsSearching.h"
#import "WebKit-Structs.h"
#import <WAKView.h> // Unknown library
#import "WebDocumentView.h"
#import "WebDocumentSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentElement.h"
#import "WebMultipleTextMatches.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
	WebHTMLViewPrivate *_private;	// 40 = 0x28
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// G=0x316d89b9; S=0x316d8985; converted property
+ (void)initialize;	// 0x31672ca9
+ (id)supportedImageMIMETypes;	// 0x31692e81
+ (id)supportedMIMETypes;	// 0x316d3985
+ (id)supportedNonImageMIMETypes;	// 0x31684eed
+ (id)unsupportedTextMIMETypes;	// 0x31685439
- (id)initWithFrame:(CGRect)frame;	// 0x316781e5
- (id)_accessibilityParentForSubview:(id)subview;	// 0x316d6e75
- (float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;	// 0x316d4985
- (void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x316d6f4d
- (void)_autoscroll;	// 0x316d3c65
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;	// 0x316d4549
- (BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;	// 0x316d461d
- (BOOL)_beginScreenPaginationModeWithPageSize:(CGSize)pageSize shrinkToFit:(BOOL)fit;	// 0x316d47d9
- (BOOL)_canAlterCurrentSelection;	// 0x316d3ccd
- (BOOL)_canDecreaseSelectionListLevel;	// 0x316d405d
- (BOOL)_canEdit;	// 0x316d3c75
- (BOOL)_canEditRichly;	// 0x316d3ca1
- (BOOL)_canIncreaseSelectionListLevel;	// 0x316d4031
- (BOOL)_canSmartCopyOrDelete;	// 0x316d72d1
- (void)_changeWordCaseWithSelector:(SEL)selector;	// 0x316d70b9
- (void)_clearLastHitViewIfSelf;	// 0x31691d75
- (id)_compositingLayersHostingView;	// 0x316d4509
- (id)_dataSource;	// 0x316d35a5
- (void)_decreaseSelectionListLevel;	// 0x316d43c5
- (void)_destroyAllWebPlugins;	// 0x316d7755
- (id)_documentRange;	// 0x316d356d
- (id)_emptyStyle;	// 0x316d6f15
- (void)_endPrintMode;	// 0x316d4775
- (void)_endScreenPaginationMode;	// 0x316d4941
- (void)_executeSavedKeypressCommands;	// 0x316d735d
- (BOOL)_findString:(id)string options:(unsigned)options;	// 0x316d8bfd
- (id)_frame;	// 0x3167c49d
- (void)_frameOrBoundsChanged;	// 0x316d39d5
- (id)_frameView;	// 0x316d35c9
- (BOOL)_handleEditingKeyEvent:(KeyboardEvent *)event;	// 0x316d7475
- (BOOL)_hasHTMLDocument;	// 0x316d44ad
- (BOOL)_hasInsertionPoint;	// 0x316d3d6d
- (BOOL)_hasSelection;	// 0x316d3d0d
- (BOOL)_hasSelectionOrInsertionPoint;	// 0x316d3d3d
- (id)_highlighterForType:(id)type;	// 0x316d7331
- (id)_increaseSelectionListLevel;	// 0x316d4089
- (id)_increaseSelectionListLevelOrdered;	// 0x316d419d
- (id)_increaseSelectionListLevelUnordered;	// 0x316d42b1
- (id)_insertOrderedList;	// 0x316d3e09
- (id)_insertUnorderedList;	// 0x316d3f1d
- (BOOL)_insideAnotherHTMLView;	// 0x316d3b55
- (BOOL)_isEditable;	// 0x316d3d9d
- (BOOL)_isInPrintMode;	// 0x316d4529
- (BOOL)_isInScreenPaginationMode;	// 0x316d47b9
- (BOOL)_isSelectionEvent:(id)event;	// 0x316d6401
- (BOOL)_isTopHTMLView;	// 0x31682ca9
- (BOOL)_isUsingAcceleratedCompositing;	// 0x316d44e5
- (void)_layoutIfNeeded;	// 0x316d771d
- (BOOL)_needsLayout;	// 0x3167cc3d
- (id)_pluginController;	// 0x3167b8f5
- (void)_removeHighlighterOfType:(id)type;	// 0x316d4481
- (void)_restoreSubviews;	// 0x316d3b4d
- (id)_selectedRange;	// 0x316d3789
- (void)_selectionChanged;	// 0x31697271
- (CGRect)_selectionRect;	// 0x316d3c41
- (void)_setAsideSubviews;	// 0x316d3b49
- (void)_setHighlighter:(id)highlighter ofType:(id)type;	// 0x316d43f1
- (void)_setMouseDownEvent:(id)event;	// 0x316d3925
- (void)_setPrinting:(BOOL)printing minimumPageLogicalWidth:(float)width logicalHeight:(float)height originalPageWidth:(float)width4 originalPageHeight:(float)height5 maximumShrinkRatio:(float)ratio adjustViewSize:(BOOL)size paginateScreenContent:(BOOL)content;	// 0x316d6689
- (void)_setToolTip:(id)tip;	// 0x316d3b79
- (void)_setTransparentBackground:(BOOL)background;	// 0x316d3de9
- (BOOL)_shouldDeleteRange:(id)range;	// 0x316d38ed
- (BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;	// 0x316d360d
- (BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x316d3701
- (BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;	// 0x316d374d
- (void)_startAutoscrollTimer:(id)timer;	// 0x316d3b91
- (void)_stopAutoscrollTimer;	// 0x3167b875
- (id)_topHTMLView;	// 0x31682ccd
- (BOOL)_transparentBackground;	// 0x316d3dc9
- (void)_updateControlTints;	// 0x316d7261
- (void)_updateSelectionForInputManager;	// 0x31697285
- (BOOL)_wantsKeyDownForEvent:(id)event;	// 0x316d7241
- (id)_webView;	// 0x3167c4cd
- (BOOL)_web_isDrawingIntoLayer;	// 0x3169a171
- (void)_web_makePluginSubviewsPerformSelector:(SEL)selector withObject:(id)object;	// 0x316d60e1
- (void)_web_updateLayoutAndStyleIfNeededRecursive;	// 0x31682d35
- (void)_windowChangedKeyState;	// 0x316d7291
- (BOOL)acceptsFirstResponder;	// 0x316914c1
- (id)accessibilityFocusedUIElement;	// 0x316d6de5
- (id)accessibilityHitTest:(CGPoint)test;	// 0x316d6e29
- (id)accessibilityRootElement;	// 0x3169796d
- (void)addSubview:(id)subview;	// 0x3168cf15
- (void)alignCenter:(id)center;	// 0x316d58b5
- (void)alignJustified:(id)justified;	// 0x316d58c9
- (void)alignLeft:(id)left;	// 0x316d58dd
- (void)alignRight:(id)right;	// 0x316d58f1
- (void)attachRootLayer:(id)layer;	// 0x316d777d
- (BOOL)becomeFirstResponder;	// 0x316915b1
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;	// 0x316d4b11
- (void)capitalizeWord:(id)word;	// 0x316d71f9
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x316d6ebd
- (unsigned)characterIndexForPoint:(CGPoint)point;	// 0x316d77ed
- (void)clearFocus;	// 0x316d6265
- (void)clearText:(id)text;	// 0x316d5ff9
- (void)close;	// 0x31691ce5
- (void)closeIfNotCurrentView;	// 0x31694a99
- (int)conversationIdentifier;	// 0x316d7c3d
- (void)copy:(id)copy;	// 0x316d5905
- (Command)coreCommandByName:(const char *)name;	// 0x316d534d
- (Command)coreCommandBySelector:(SEL)selector;	// 0x316d4b79
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x3169b7c5
- (void)cut:(id)cut;	// 0x316d5919
- (void)dataSourceUpdated:(id)updated;	// 0x31688565
- (void)dealloc;	// 0x31691c1d
- (void)delete:(id)aDelete;	// 0x316d5941
- (void)deleteBackward:(id)backward;	// 0x316d5955
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x316d5969
- (void)deleteForward:(id)forward;	// 0x316d597d
- (void)deleteToBeginningOfLine:(id)line;	// 0x316d5991
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x316d59a5
- (void)deleteToEndOfLine:(id)line;	// 0x316d59b9
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x316d59cd
- (void)deleteToMark:(id)mark;	// 0x316d59e1
- (void)deleteWordBackward:(id)backward;	// 0x316d59f5
- (void)deleteWordForward:(id)forward;	// 0x316d5a09
- (void)deselectAll;	// 0x3169b575
- (void)detachRootLayer;	// 0x316d7781
- (void)doCommandBySelector:(SEL)selector;	// 0x316d7f75
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x316d7785
- (void)drawRect:(CGRect)rect;	// 0x31682e71
- (void)drawSingleRect:(CGRect)rect;	// 0x31682edd
- (id)elementAtPoint:(CGPoint)point;	// 0x316d8805
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x316d8829
- (void)executeCoreCommandByName:(const char *)name;	// 0x316d56c1
- (void)executeCoreCommandBySelector:(SEL)selector;	// 0x316d54b5
- (void)finalize;	// 0x316d4ad1
- (CGRect)firstRectForCharacterRange:(NSRange)characterRange;	// 0x316d78c9
- (BOOL)hasMarkedText;	// 0x316d7c41
- (id)hitTest:(CGPoint)test;	// 0x31695501
- (void)ignoreSpelling:(id)spelling;	// 0x316d5a1d
- (void)indent:(id)indent;	// 0x316d5a31
- (void)insertBacktab:(id)backtab;	// 0x316d5a45
- (void)insertLineBreak:(id)aBreak;	// 0x316d5a59
- (void)insertNewline:(id)newline;	// 0x316d5a6d
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x316d5a81
- (void)insertParagraphSeparator:(id)separator;	// 0x316d5a95
- (void)insertTab:(id)tab;	// 0x316d5aa9
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x316d5abd
- (void)insertText:(id)text;	// 0x3169ada5
- (BOOL)isOpaque;	// 0x316d636d
- (void)jumpToSelection:(id)selection;	// 0x316d6049
- (void)keyDown:(id)down;	// 0x316d6aed
- (void)keyUp:(id)up;	// 0x316d6c7d
- (void)layout;	// 0x3167cc11
- (void)layoutIfNeeded;	// 0x316d3b7d
- (void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height originalPageWidth:(float)width originalPageHeight:(float)height4 maximumShrinkRatio:(float)ratio adjustingViewSize:(BOOL)size;	// 0x316d611d
- (void)lowercaseWord:(id)word;	// 0x316d71b5
- (BOOL)maintainsInactiveSelection;	// 0x3169bb0d
- (void)makeBaseWritingDirectionNatural:(id)natural;	// 0x316d723d
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x316d5ad1
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x316d5ae5
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x316d5af9
- (NSRange)markedRange;	// 0x316d7a95
// converted property getter: - (BOOL)markedTextMatchesAreHighlighted;	// 0x316d89b9
- (void)markedTextUpdate:(id)update;	// 0x316d7f29
- (void)mouseDown:(id)down;	// 0x316d649d
- (void)mouseMoved:(id)moved;	// 0x316d39a5
- (void)mouseUp:(id)up;	// 0x316d6605
- (void)moveBackward:(id)backward;	// 0x316d5b0d
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x316d5b21
- (void)moveDown:(id)down;	// 0x316d5b35
- (void)moveDownAndModifySelection:(id)selection;	// 0x316d5b49
- (void)moveForward:(id)forward;	// 0x316d5b5d
- (void)moveForwardAndModifySelection:(id)selection;	// 0x316d5b71
- (void)moveLeft:(id)left;	// 0x316d5b85
- (void)moveLeftAndModifySelection:(id)selection;	// 0x316d5b99
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x316d5bad
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x316d5bc1
- (void)moveRight:(id)right;	// 0x316d5bd5
- (void)moveRightAndModifySelection:(id)selection;	// 0x316d5be9
- (void)moveToBeginningOfDocument:(id)document;	// 0x316d5bfd
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x316d5c11
- (void)moveToBeginningOfLine:(id)line;	// 0x316d5c25
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x316d5c39
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x316d5c4d
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x316d5c61
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x316d5c75
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x316d5c89
- (void)moveToEndOfDocument:(id)document;	// 0x316d5c9d
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x316d5cb1
- (void)moveToEndOfLine:(id)line;	// 0x316d5cc5
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x316d5cd9
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x316d5ced
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x316d5d01
- (void)moveToEndOfSentence:(id)sentence;	// 0x316d5d15
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x316d5d29
- (void)moveToLeftEndOfLine:(id)line;	// 0x316d5d3d
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x316d5d51
- (void)moveToRightEndOfLine:(id)line;	// 0x316d5d65
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x316d5d79
- (void)moveUp:(id)up;	// 0x316d5d8d
- (void)moveUpAndModifySelection:(id)selection;	// 0x316d5da1
- (void)moveWordBackward:(id)backward;	// 0x316d5db5
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x316d5dc9
- (void)moveWordForward:(id)forward;	// 0x316d5ddd
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x316d5df1
- (void)moveWordLeft:(id)left;	// 0x316d5e05
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x316d5e19
- (void)moveWordRight:(id)right;	// 0x316d5e2d
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x316d5e41
- (void)outdent:(id)outdent;	// 0x316d5e55
- (void)pageDown:(id)down;	// 0x316d5e69
- (void)pageDownAndModifySelection:(id)selection;	// 0x316d5e7d
- (void)pageUp:(id)up;	// 0x316d5e91
- (void)pageUpAndModifySelection:(id)selection;	// 0x316d5ea5
- (void)paste:(id)paste;	// 0x316d592d
- (void)pasteAsPlainText:(id)text;	// 0x316d5eb9
- (void)reapplyStyles;	// 0x316d60f1
- (id)rectsForTextMatches;	// 0x316d8a19
- (BOOL)resignFirstResponder;	// 0x31693159
- (void)scrollWheel:(id)wheel;	// 0x316d63d5
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x316d6239
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x316d87b1
- (void)selectAll;	// 0x316d8711
- (void)selectAll:(id)all;	// 0x316d5ecd
- (void)selectLine:(id)line;	// 0x316d5ee1
- (void)selectParagraph:(id)paragraph;	// 0x316d5ef5
- (void)selectSentence:(id)sentence;	// 0x316d5f09
- (void)selectToMark:(id)mark;	// 0x316d5f1d
- (void)selectWord:(id)word;	// 0x316d5f31
- (NSRange)selectedRange;	// 0x316d7a0d
- (id)selectedString;	// 0x316d8785
- (CGImageRef)selectionImageForcingBlackText:(BOOL)text;	// 0x316d8651
- (CGRect)selectionImageRect;	// 0x316d869d
- (CGRect)selectionRect;	// 0x316d83d9
- (id)selectionTextRects;	// 0x316d844d
- (id)selectionView;	// 0x316d864d
- (void)setDataSource:(id)source;	// 0x31678865
- (void)setMark:(id)mark;	// 0x316d5f45
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x316d7cf5
// converted property setter: - (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;	// 0x316d8985
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x316720a5
- (void)setNeedsLayout:(BOOL)layout;	// 0x3167cbc9
- (void)setNeedsToApplyStyles:(BOOL)applyStyles;	// 0x316d6395
- (void)setScale:(float)scale;	// 0x3167c42d
- (id)string;	// 0x316d8741
- (void)subscript:(id)subscript;	// 0x316d5f59
- (void)superscript:(id)superscript;	// 0x316d5f6d
- (BOOL)supportsTextEncoding;	// 0x316d87ad
- (void)swapWithMark:(id)mark;	// 0x316d5f81
- (void)toggleBold:(id)bold;	// 0x316d600d
- (void)toggleItalic:(id)italic;	// 0x316d6021
- (void)toggleUnderline:(id)underline;	// 0x316d6035
- (void)touch:(id)touch;	// 0x316956a5
- (void)transpose:(id)transpose;	// 0x316d5f95
- (void)underline:(id)underline;	// 0x316d5fa9
- (void)unmarkAllTextMatches;	// 0x316d89e5
- (void)unmarkText;	// 0x316d7c8d
- (void)unscript:(id)unscript;	// 0x316d5fbd
- (void)uppercaseWord:(id)word;	// 0x316d7171
- (void)viewDidMoveToHostWindow;	// 0x316d60e9
- (void)viewDidMoveToWindow;	// 0x3167b779
- (void)viewWillDraw;	// 0x31682c09
- (void)viewWillMoveToHostWindow:(id)view;	// 0x316d60e5
- (void)viewWillMoveToWindow:(id)view;	// 0x316d60a5
- (void)willRemoveSubview:(id)subview;	// 0x3168f109
- (void)yank:(id)yank;	// 0x316d5fd1
- (void)yankAndSelect:(id)select;	// 0x316d5fe5
@end
