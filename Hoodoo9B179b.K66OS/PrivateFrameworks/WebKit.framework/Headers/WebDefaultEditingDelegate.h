/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject {
}
+ (id)sharedEditingDelegate;	// 0x345354ed
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x345468ed
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x345468e9
- (id)undoManagerForWebView:(id)webView;	// 0x3453acbd
- (BOOL)webView:(id)view doCommandBySelector:(SEL)selector;	// 0x345468e5
- (BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;	// 0x345468d9
- (BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;	// 0x34535535
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x345468d5
- (BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;	// 0x345468e1
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x345468d1
- (BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;	// 0x345468c5
- (BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;	// 0x345468c9
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x345468cd
- (BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;	// 0x345468dd
- (BOOL)webView:(id)view shouldShowDeleteInterfaceForElement:(id)element;	// 0x345468c1
- (void)webViewDidBeginEditing:(id)webView;	// 0x345468f1
- (void)webViewDidChange:(id)webView;	// 0x345468f5
- (void)webViewDidChangeSelection:(id)webView;	// 0x34546901
- (void)webViewDidChangeTypingStyle:(id)webView;	// 0x345468fd
- (void)webViewDidEndEditing:(id)webView;	// 0x345468f9
@end

