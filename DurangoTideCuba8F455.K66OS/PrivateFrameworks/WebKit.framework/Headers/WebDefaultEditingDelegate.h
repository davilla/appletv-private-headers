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
+ (id)sharedEditingDelegate;	// 0x30505489
- (id)documentFragmentForPasteboardItemAtIndex:(int)index;	// 0x30516499
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x30516495
- (id)undoManagerForWebView:(id)webView;	// 0x305164b1
- (BOOL)webView:(id)view doCommandBySelector:(SEL)selector;	// 0x30516491
- (BOOL)webView:(id)view shouldApplyStyle:(id)style toElementsInDOMRange:(id)domrange;	// 0x30516479
- (BOOL)webView:(id)view shouldBeginEditingInDOMRange:(id)domrange;	// 0x305054d1
- (BOOL)webView:(id)view shouldChangeSelectedDOMRange:(id)range toDOMRange:(id)domrange affinity:(int)affinity stillSelecting:(BOOL)selecting;	// 0x30516471
- (BOOL)webView:(id)view shouldChangeTypingStyle:(id)style toStyle:(id)style3;	// 0x30516489
- (BOOL)webView:(id)view shouldDeleteDOMRange:(id)range;	// 0x3051646d
- (BOOL)webView:(id)view shouldEndEditingInDOMRange:(id)domrange;	// 0x30516459
- (BOOL)webView:(id)view shouldInsertNode:(id)node replacingDOMRange:(id)range givenAction:(int)action;	// 0x3051645d
- (BOOL)webView:(id)view shouldInsertText:(id)text replacingDOMRange:(id)range givenAction:(int)action;	// 0x30516465
- (BOOL)webView:(id)view shouldMoveRangeAfterDelete:(id)aDelete replacingRange:(id)range;	// 0x30516481
- (BOOL)webView:(id)view shouldShowDeleteInterfaceForElement:(id)element;	// 0x30516455
- (void)webViewDidBeginEditing:(id)webView;	// 0x3051649d
- (void)webViewDidChange:(id)webView;	// 0x305164a1
- (void)webViewDidChangeSelection:(id)webView;	// 0x305164ad
- (void)webViewDidChangeTypingStyle:(id)webView;	// 0x305164a9
- (void)webViewDidEndEditing:(id)webView;	// 0x305164a5
@end

