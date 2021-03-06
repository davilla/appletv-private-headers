/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIKitDelegate : NSObject {
}
+ (id)sharedUIKitDelegate;	// 0x3399fcd1
- (void)_webthread_webView:(id)view attachRootLayer:(id)layer;	// 0x339d0e91
- (void)addInputString:(id)string fromVariantKey:(BOOL)variantKey;	// 0x339d0e89
- (id)checkSpellingOfString:(id)string;	// 0x339d0eb1
- (CGPoint)contentsPointForWebView:(id)webView;	// 0x339d0df9
- (void)deleteFromInput;	// 0x339d0e8d
- (CGRect)documentVisibleRectForWebView:(id)webView;	// 0x339d0e11
- (int)getPasteboardChangeCount;	// 0x339d0ecd
- (int)getPasteboardItemsCount;	// 0x339d0ebd
- (BOOL)hasRichlyEditableSelection;	// 0x339d0ec5
- (BOOL)isUnperturbedDictationResultMarker:(id)marker;	// 0x339d0ed1
- (BOOL)performsTwoStepPaste:(id)paste;	// 0x339d0ec9
- (id)readDataFromPasteboard:(id)pasteboard withIndex:(int)index;	// 0x339d0eb9
- (void)revealedSelectionByScrollingWebFrame:(id)frame;	// 0x339d0ea1
- (id)supportedPasteboardTypesForCurrentSelection;	// 0x339d0ec1
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x339d0e6d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x339d0e31
- (void)webView:(id)view didCreateOrUpdateScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer scrollSize:(id)size forNode:(id)node;	// 0x339d0e99
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x339d0e69
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x339d0e65
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x339d0e35
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x339bf0fd
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x339d0e71
- (void)webView:(id)view didHideFullScreenForPlugInView:(id)view2;	// 0x339d0e81
- (void)webView:(id)view didObserveDeferredContentChange:(int)change forFrame:(id)frame;	// 0x339d0e49
- (void)webView:(id)view didReceiveDocTypeForFrame:(id)frame;	// 0x339d0e75
- (void)webView:(id)view didReceiveMessage:(id)message;	// 0x339d0e85
- (void)webView:(id)view didReceiveViewportArguments:(id)arguments forFrame:(id)frame;	// 0x339d0e41
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x339d0e2d
- (void)webView:(id)view elementDidBlurNode:(id)element;	// 0x339c4d69
- (void)webView:(id)view elementDidFocusNode:(id)element;	// 0x339bf5e1
- (void)webView:(id)view formStateDidBlurNode:(id)formState;	// 0x339c4d65
- (void)webView:(id)view formStateDidFocusNode:(id)formState;	// 0x339bf5dd
- (void)webView:(id)view needsScrollNotifications:(id)notifications forFrame:(id)frame;	// 0x339d0e45
- (id)webView:(id)view plugInViewWithArguments:(id)arguments fromPlugInPackage:(id)package;	// 0x339d0e79
- (void)webView:(id)view restoreStateFromHistoryItem:(id)historyItem forFrame:(id)frame force:(BOOL)force;	// 0x339d0e3d
- (void)webView:(id)view saveStateToHistoryItem:(id)historyItem forFrame:(id)frame;	// 0x339d0e39
- (BOOL)webView:(id)view shouldScrollToPoint:(CGPoint)point forFrame:(id)frame;	// 0x339d0e51
- (void)webView:(id)view willAddPlugInView:(id)view2;	// 0x339d0ed5
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x339d0e61
- (void)webView:(id)view willRemoveScrollingLayer:(id)layer withContentsLayer:(id)contentsLayer forNode:(id)node;	// 0x339d0e9d
- (void)webView:(id)view willShowFullScreenForPlugInView:(id)view2;	// 0x339d0e7d
- (void)webViewDidCommitCompositingLayerChanges:(id)webView;	// 0x339d0e95
- (void)webViewDidDrawTiles:(id)webView;	// 0x339d0ed9
- (void)webViewDidEndOverflowScroll:(id)webView;	// 0x339d0ead
- (void)webViewDidLayout:(id)webView;	// 0x339d0ea5
- (void)webViewDidNotSimulateClick:(id)webView;	// 0x339d0e5d
- (void)webViewDidPreventDefaultForEvent:(id)webView;	// 0x339d0e4d
- (void)webViewDidSimulateClick:(id)webView;	// 0x339d0e55
- (void)webViewDidStartOverflowScroll:(id)webView;	// 0x339d0ea9
- (void)webViewWillSimulateClick:(id)webView;	// 0x339d0e59
- (void)writeDataToPasteboard:(id)pasteboard;	// 0x339d0eb5
@end

