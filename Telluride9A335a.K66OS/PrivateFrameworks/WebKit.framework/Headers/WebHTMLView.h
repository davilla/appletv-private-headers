/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import "WebDocumentView.h"
#import <WAKView.h> // Unknown library
#import "WebDocumentOptionsSearching.h"
#import "WebMultipleTextMatches.h"
#import "WebDocumentElement.h"
#import "WebDocumentIncrementalSearching.h"
#import "WebDocumentSelection.h"
#import "WebDocumentSearching.h"

@class WebHTMLViewPrivate;

@interface WebHTMLView : WAKView <WebDocumentSelection, WebDocumentIncrementalSearching, WebDocumentElement, WebMultipleTextMatches, WebDocumentOptionsSearching, WebDocumentView, WebDocumentSearching> {
@private
	WebHTMLViewPrivate *_private;	// 68 = 0x44
}
@property(assign) BOOL markedTextMatchesAreHighlighted;	// G=0x347d11c1; S=0x347d2e85; converted property
+ (void)initialize;	// 0x34771f01
+ (id)supportedImageMIMETypes;	// 0x347977b9
+ (id)supportedMIMETypes;	// 0x347ce621
+ (id)supportedNonImageMIMETypes;	// 0x34787d6d
+ (id)unsupportedTextMIMETypes;	// 0x34788409
- (id)initWithFrame:(CGRect)frame;	// 0x3477880d
- (id)_accessibilityParentForSubview:(id)subview;	// 0x347cea75
- (float)_adjustedBottomOfPageWithTop:(float)top bottom:(float)bottom limit:(float)limit;	// 0x347d1ff1
- (void)_applyParagraphStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x347ce979
- (void)_applyStyleToSelection:(id)selection withUndoAction:(int)undoAction;	// 0x347ce9b1
- (void)_autoscroll;	// 0x347ce489
- (BOOL)_beginPrintModeWithMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width;	// 0x347d106d
- (BOOL)_beginPrintModeWithPageWidth:(float)pageWidth height:(float)height shrinkToFit:(BOOL)fit;	// 0x347d1de5
- (BOOL)_beginScreenPaginationModeWithPageSize:(CGSize)pageSize shrinkToFit:(BOOL)fit;	// 0x347d1ee9
- (BOOL)_canAlterCurrentSelection;	// 0x347ce499
- (BOOL)_canDecreaseSelectionListLevel;	// 0x347d1a65
- (BOOL)_canEdit;	// 0x347d170d
- (BOOL)_canEditRichly;	// 0x347d1741
- (BOOL)_canIncreaseSelectionListLevel;	// 0x347d1a31
- (BOOL)_canSmartCopyOrDelete;	// 0x347d111d
- (void)_changeWordCaseWithSelector:(SEL)selector;	// 0x347ce8c5
- (void)_clearLastHitViewIfSelf;	// 0x347966f9
- (id)_compositingLayersHostingView;	// 0x347ce0a9
- (id)_dataSource;	// 0x347ce015
- (void)_decreaseSelectionListLevel;	// 0x347d1dbd
- (void)_destroyAllWebPlugins;	// 0x347d0dbd
- (id)_documentRange;	// 0x347ce12d
- (id)_emptyStyle;	// 0x347ce9e9
- (void)_endPrintMode;	// 0x347ce5a1
- (void)_endScreenPaginationMode;	// 0x347ce5e1
- (void)_executeSavedKeypressCommands;	// 0x347d2071
- (BOOL)_findString:(id)string options:(unsigned)options;	// 0x347d30e1
- (id)_frame;	// 0x3477c9d9
- (void)_frameOrBoundsChanged;	// 0x347d1581
- (id)_frameView;	// 0x347ce165
- (BOOL)_handleEditingKeyEvent:(KeyboardEvent *)event;	// 0x347d0add
- (BOOL)_hasHTMLDocument;	// 0x347d1035
- (BOOL)_hasInsertionPoint;	// 0x347d1009
- (BOOL)_hasSelection;	// 0x347d0fb1
- (BOOL)_hasSelectionOrInsertionPoint;	// 0x347d0fdd
- (id)_highlighterForType:(id)type;	// 0x347d0aad
- (id)_increaseSelectionListLevel;	// 0x347d1a99
- (id)_increaseSelectionListLevelOrdered;	// 0x347d1ba5
- (id)_increaseSelectionListLevelUnordered;	// 0x347d1cb1
- (id)_insertOrderedList;	// 0x347d1819
- (id)_insertUnorderedList;	// 0x347d1925
- (BOOL)_insideAnotherHTMLView;	// 0x347ce39d
- (BOOL)_isEditable;	// 0x347d1775
- (BOOL)_isInPrintMode;	// 0x347ce0c9
- (BOOL)_isInScreenPaginationMode;	// 0x347ce0e9
- (BOOL)_isSelectionEvent:(id)event;	// 0x347cf435
- (BOOL)_isTopHTMLView;	// 0x347857ed
- (BOOL)_isUsingAcceleratedCompositing;	// 0x347ce081
- (void)_layoutIfNeeded;	// 0x347d0d89
- (BOOL)_needsLayout;	// 0x3477d229
- (id)_pluginController;	// 0x3477bc0d
- (void)_removeHighlighterOfType:(id)type;	// 0x347ce571
- (void)_restoreSubviews;	// 0x347ce039
- (id)_selectedRange;	// 0x347d11ed
- (void)_selectionChanged;	// 0x3479c759
- (CGRect)_selectionRect;	// 0x347d1375
- (void)_setAsideSubviews;	// 0x347ce035
- (void)_setHighlighter:(id)highlighter ofType:(id)type;	// 0x347ce4dd
- (void)_setMouseDownEvent:(id)event;	// 0x347ce335
- (void)_setPrinting:(BOOL)printing minimumPageLogicalWidth:(float)width logicalHeight:(float)height maximumPageLogicalWidth:(float)width4 adjustViewSize:(BOOL)size paginateScreenContent:(BOOL)content;	// 0x347cee25
- (void)_setToolTip:(id)tip;	// 0x347ce03d
- (void)_setTransparentBackground:(BOOL)background;	// 0x347ce061
- (BOOL)_shouldDeleteRange:(id)range;	// 0x347d1309
- (BOOL)_shouldInsertFragment:(id)fragment replacingDOMRange:(id)range givenAction:(int)action;	// 0x347ce1a9
- (BOOL)_shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x347ce2a5
- (BOOL)_shouldReplaceSelectionWithText:(id)text givenAction:(int)action;	// 0x347ce2f1
- (void)_startAutoscrollTimer:(id)timer;	// 0x347ce3d1
- (void)_stopAutoscrollTimer;	// 0x3477bb8d
- (id)_topHTMLView;	// 0x34785811
- (BOOL)_transparentBackground;	// 0x347ce041
- (void)_updateControlTints;	// 0x347ce739
- (void)_updateSelectionForInputManager;	// 0x3479c791
- (BOOL)_wantsKeyDownForEvent:(id)event;	// 0x347ce765
- (id)_webView;	// 0x3477ca05
- (BOOL)_web_isDrawingIntoLayer;	// 0x3479fae1
- (void)_web_makePluginSubviewsPerformSelector:(SEL)selector withObject:(id)object;	// 0x347ce109
- (void)_web_updateLayoutAndStyleIfNeededRecursive;	// 0x34785875
- (void)_windowChangedKeyState;	// 0x347ce6f9
- (BOOL)acceptsFirstResponder;	// 0x34795abd
- (id)accessibilityFocusedUIElement;	// 0x347ceb09
- (id)accessibilityHitTest:(CGPoint)test;	// 0x347ceac1
- (id)accessibilityRootElement;	// 0x3479d131
- (void)addSubview:(id)subview;	// 0x34790c91
- (void)alignCenter:(id)center;	// 0x347cfeb9
- (void)alignJustified:(id)justified;	// 0x347cfea5
- (void)alignLeft:(id)left;	// 0x347cfe91
- (void)alignRight:(id)right;	// 0x347cfe7d
- (void)attachRootLayer:(id)layer;	// 0x347ce119
- (BOOL)becomeFirstResponder;	// 0x34795b75
- (BOOL)callDelegateDoCommandBySelectorIfNeeded:(SEL)needed;	// 0x347d09cd
- (void)capitalizeWord:(id)word;	// 0x347ce805
- (void)centerSelectionInVisibleArea:(id)visibleArea;	// 0x347cea21
- (unsigned)characterIndexForPoint:(CGPoint)point;	// 0x347d138d
- (void)clearFocus;	// 0x347cf555
- (void)clearText:(id)text;	// 0x347cf775
- (void)close;	// 0x34796665
- (void)closeIfNotCurrentView;	// 0x34799e05
- (int)conversationIdentifier;	// 0x347ce121
- (void)copy:(id)copy;	// 0x347cfe69
- (Command)coreCommandByName:(const char *)name;	// 0x347d01e5
- (Command)coreCommandBySelector:(SEL)selector;	// 0x347d0305
- (unsigned)countMatchesForText:(id)text inDOMRange:(id)domrange options:(unsigned)options limit:(unsigned)limit markMatches:(BOOL)matches;	// 0x347a18d1
- (void)cut:(id)cut;	// 0x347cfe55
- (void)dataSourceUpdated:(id)updated;	// 0x3478ba65
- (void)dealloc;	// 0x347965a1
- (void)delete:(id)aDelete;	// 0x347cfe2d
- (void)deleteBackward:(id)backward;	// 0x347cfe19
- (void)deleteBackwardByDecomposingPreviousCharacter:(id)character;	// 0x347cfe05
- (void)deleteForward:(id)forward;	// 0x347cfdf1
- (void)deleteToBeginningOfLine:(id)line;	// 0x347cfddd
- (void)deleteToBeginningOfParagraph:(id)paragraph;	// 0x347cfdc9
- (void)deleteToEndOfLine:(id)line;	// 0x347cfdb5
- (void)deleteToEndOfParagraph:(id)paragraph;	// 0x347cfda1
- (void)deleteToMark:(id)mark;	// 0x347cfd8d
- (void)deleteWordBackward:(id)backward;	// 0x347cfd79
- (void)deleteWordForward:(id)forward;	// 0x347cfd65
- (void)deselectAll;	// 0x347a15b1
- (void)detachRootLayer;	// 0x347ce11d
- (void)doCommandBySelector:(SEL)selector;	// 0x347d255d
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x347d0f45
- (void)drawRect:(CGRect)rect;	// 0x34785a15
- (void)drawSingleRect:(CGRect)rect;	// 0x34785a8d
- (id)elementAtPoint:(CGPoint)point;	// 0x347d0ef5
- (id)elementAtPoint:(CGPoint)point allowShadowContent:(BOOL)content;	// 0x347d2d29
- (void)executeCoreCommandByName:(const char *)name;	// 0x347cfecd
- (void)executeCoreCommandBySelector:(SEL)selector;	// 0x347d0045
- (void)finalize;	// 0x347d0a41
- (CGRect)firstRectForCharacterRange:(NSRange)characterRange;	// 0x347d145d
- (BOOL)hasMarkedText;	// 0x347d1179
- (id)hitTest:(CGPoint)test;	// 0x3479a8f9
- (void)ignoreSpelling:(id)spelling;	// 0x347cfd51
- (void)indent:(id)indent;	// 0x347cfd3d
- (void)insertBacktab:(id)backtab;	// 0x347cfd29
- (void)insertLineBreak:(id)aBreak;	// 0x347cfd15
- (void)insertNewline:(id)newline;	// 0x347cfd01
- (void)insertNewlineIgnoringFieldEditor:(id)editor;	// 0x347cfced
- (void)insertParagraphSeparator:(id)separator;	// 0x347cfcd9
- (void)insertTab:(id)tab;	// 0x347cfcc5
- (void)insertTabIgnoringFieldEditor:(id)editor;	// 0x347cfcb1
- (void)insertText:(id)text;	// 0x347a0769
- (BOOL)isOpaque;	// 0x347cf52d
- (void)jumpToSelection:(id)selection;	// 0x347cf6e5
- (void)keyDown:(id)down;	// 0x347ceca1
- (void)keyUp:(id)up;	// 0x347ceb49
- (void)layout;	// 0x3477d115
- (void)layoutIfNeeded;	// 0x347ce3c1
- (void)layoutToMinimumPageWidth:(float)minimumPageWidth height:(float)height maximumPageWidth:(float)width adjustingViewSize:(BOOL)size;	// 0x3477d139
- (void)lowercaseWord:(id)word;	// 0x347ce845
- (BOOL)maintainsInactiveSelection;	// 0x347a1b89
- (void)makeBaseWritingDirectionNatural:(id)natural;	// 0x347ce115
- (void)makeTextWritingDirectionLeftToRight:(id)right;	// 0x347cfc9d
- (void)makeTextWritingDirectionNatural:(id)natural;	// 0x347cfc89
- (void)makeTextWritingDirectionRightToLeft:(id)left;	// 0x347cfc75
- (NSRange)markedRange;	// 0x347d2175
// converted property getter: - (BOOL)markedTextMatchesAreHighlighted;	// 0x347d11c1
- (void)markedTextUpdate:(id)update;	// 0x347d0de5
- (void)mouseDown:(id)down;	// 0x347cf2d9
- (void)mouseMoved:(id)moved;	// 0x347d1349
- (void)mouseUp:(id)up;	// 0x347cf259
- (void)moveBackward:(id)backward;	// 0x347cfc61
- (void)moveBackwardAndModifySelection:(id)selection;	// 0x347cfc4d
- (void)moveDown:(id)down;	// 0x347cfc39
- (void)moveDownAndModifySelection:(id)selection;	// 0x347cfc25
- (void)moveForward:(id)forward;	// 0x347cfc11
- (void)moveForwardAndModifySelection:(id)selection;	// 0x347cfbfd
- (void)moveLeft:(id)left;	// 0x347cfbe9
- (void)moveLeftAndModifySelection:(id)selection;	// 0x347cfbd5
- (void)moveParagraphBackwardAndModifySelection:(id)selection;	// 0x347cfbc1
- (void)moveParagraphForwardAndModifySelection:(id)selection;	// 0x347cfbad
- (void)moveRight:(id)right;	// 0x347cfb99
- (void)moveRightAndModifySelection:(id)selection;	// 0x347cfb85
- (void)moveToBeginningOfDocument:(id)document;	// 0x347cfb71
- (void)moveToBeginningOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x347cfb5d
- (void)moveToBeginningOfLine:(id)line;	// 0x347cfb49
- (void)moveToBeginningOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347cfb35
- (void)moveToBeginningOfParagraph:(id)paragraph;	// 0x347cfb21
- (void)moveToBeginningOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x347cfb0d
- (void)moveToBeginningOfSentence:(id)sentence;	// 0x347cfaf9
- (void)moveToBeginningOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x347cfae5
- (void)moveToEndOfDocument:(id)document;	// 0x347cfad1
- (void)moveToEndOfDocumentAndModifySelection:(id)documentAndModifySelection;	// 0x347cfabd
- (void)moveToEndOfLine:(id)line;	// 0x347cfaa9
- (void)moveToEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347cfa95
- (void)moveToEndOfParagraph:(id)paragraph;	// 0x347cfa81
- (void)moveToEndOfParagraphAndModifySelection:(id)paragraphAndModifySelection;	// 0x347cfa6d
- (void)moveToEndOfSentence:(id)sentence;	// 0x347cfa59
- (void)moveToEndOfSentenceAndModifySelection:(id)sentenceAndModifySelection;	// 0x347cfa45
- (void)moveToLeftEndOfLine:(id)line;	// 0x347cfa31
- (void)moveToLeftEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347cfa1d
- (void)moveToRightEndOfLine:(id)line;	// 0x347cfa09
- (void)moveToRightEndOfLineAndModifySelection:(id)lineAndModifySelection;	// 0x347cf9f5
- (void)moveUp:(id)up;	// 0x347cf9e1
- (void)moveUpAndModifySelection:(id)selection;	// 0x347cf9cd
- (void)moveWordBackward:(id)backward;	// 0x347cf9b9
- (void)moveWordBackwardAndModifySelection:(id)selection;	// 0x347cf9a5
- (void)moveWordForward:(id)forward;	// 0x347cf991
- (void)moveWordForwardAndModifySelection:(id)selection;	// 0x347cf97d
- (void)moveWordLeft:(id)left;	// 0x347cf969
- (void)moveWordLeftAndModifySelection:(id)selection;	// 0x347cf955
- (void)moveWordRight:(id)right;	// 0x347cf941
- (void)moveWordRightAndModifySelection:(id)selection;	// 0x347cf92d
- (void)outdent:(id)outdent;	// 0x347cf919
- (void)pageDown:(id)down;	// 0x347cf905
- (void)pageDownAndModifySelection:(id)selection;	// 0x347cf8f1
- (void)pageUp:(id)up;	// 0x347cf8dd
- (void)pageUpAndModifySelection:(id)selection;	// 0x347cf8c9
- (void)paste:(id)paste;	// 0x347cfe41
- (void)pasteAsPlainText:(id)text;	// 0x347cf8b5
- (void)reapplyStyles;	// 0x347cf67d
- (id)rectsForTextMatches;	// 0x347d2eb9
- (BOOL)resignFirstResponder;	// 0x34797a21
- (void)scrollWheel:(id)wheel;	// 0x347cf4c9
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap;	// 0x347cf651
- (BOOL)searchFor:(id)aFor direction:(BOOL)direction caseSensitive:(BOOL)sensitive wrap:(BOOL)wrap startInSelection:(BOOL)selection;	// 0x347d0e99
- (void)selectAll;	// 0x347d2d01
- (void)selectAll:(id)all;	// 0x347cf8a1
- (void)selectLine:(id)line;	// 0x347cf88d
- (void)selectParagraph:(id)paragraph;	// 0x347cf879
- (void)selectSentence:(id)sentence;	// 0x347cf865
- (void)selectToMark:(id)mark;	// 0x347cf851
- (void)selectWord:(id)word;	// 0x347cf83d
- (NSRange)selectedRange;	// 0x347d17a9
- (id)selectedString;	// 0x347d0e71
- (CGImageRef)selectionImageForcingBlackText:(BOOL)text;	// 0x347d2cb5
- (CGRect)selectionImageRect;	// 0x347d2a15
- (CGRect)selectionRect;	// 0x347d29ad
- (id)selectionTextRects;	// 0x347d2a7d
- (id)selectionView;	// 0x347ce125
- (void)setDataSource:(id)source;	// 0x34778e11
- (void)setMark:(id)mark;	// 0x347cf829
- (void)setMarkedText:(id)text selectedRange:(NSRange)range;	// 0x347d2331
// converted property setter: - (void)setMarkedTextMatchesAreHighlighted:(BOOL)highlighted;	// 0x347d2e85
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x3477134d
- (void)setNeedsLayout:(BOOL)layout;	// 0x3477d0d1
- (void)setNeedsToApplyStyles:(BOOL)applyStyles;	// 0x347cf4f5
- (void)setScale:(float)scale;	// 0x3477c96d
- (id)string;	// 0x347d0e2d
- (void)subscript:(id)subscript;	// 0x347cf815
- (void)superscript:(id)superscript;	// 0x347cf801
- (BOOL)supportsTextEncoding;	// 0x347ce129
- (void)swapWithMark:(id)mark;	// 0x347cf7ed
- (void)toggleBaseWritingDirection:(id)direction;	// 0x347ce789
- (void)toggleBold:(id)bold;	// 0x347cf761
- (void)toggleItalic:(id)italic;	// 0x347cf74d
- (void)toggleUnderline:(id)underline;	// 0x347cf739
- (void)touch:(id)touch;	// 0x3479aa65
- (void)transpose:(id)transpose;	// 0x347cf7d9
- (void)underline:(id)underline;	// 0x347cf7c5
- (void)unmarkAllTextMatches;	// 0x347d2041
- (void)unmarkText;	// 0x347d22cd
- (void)unscript:(id)unscript;	// 0x347cf7b1
- (void)uppercaseWord:(id)word;	// 0x347ce885
- (void)viewDidMoveToHostWindow;	// 0x347ce111
- (void)viewDidMoveToWindow;	// 0x3477baa5
- (void)viewWillDraw;	// 0x34785751
- (void)viewWillMoveToHostWindow:(id)view;	// 0x347ce10d
- (void)viewWillMoveToWindow:(id)view;	// 0x347cf6a9
- (void)willRemoveSubview:(id)subview;	// 0x347931fd
- (void)yank:(id)yank;	// 0x347cf79d
- (void)yankAndSelect:(id)select;	// 0x347cf789
@end

