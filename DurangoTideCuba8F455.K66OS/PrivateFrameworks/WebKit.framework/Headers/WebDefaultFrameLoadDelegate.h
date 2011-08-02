/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultFrameLoadDelegate : NSObject {
}
+ (id)sharedFrameLoadDelegate;	// 0x304f1011
- (void)webView:(id)view didCancelClientRedirectForFrame:(id)frame;	// 0x30516561
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x30516555
- (void)webView:(id)view didClearInspectorWindowObject:(id)object forFrame:(id)frame;	// 0x305165a1
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x30516569
- (void)webView:(id)view didClearWindowObjectForFrame:(id)frame inScriptWorld:(id)scriptWorld;	// 0x3051657d
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x3051653d
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x3051654d
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x30516535
- (void)webView:(id)view didFinishDocumentLoadForFrame:(id)frame;	// 0x30516595
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30516549
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x30516591
- (void)webView:(id)view didFirstVisuallyNonEmptyLayoutInFrame:(id)frame;	// 0x3051659d
- (void)webView:(id)view didHandleOnloadEventsForFrame:(id)frame;	// 0x30516599
- (void)webView:(id)view didPopStateWithinPageForFrame:(id)frame;	// 0x3051658d
- (void)webView:(id)view didPushStateWithinPageForFrame:(id)frame;	// 0x30516585
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x30516531
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x30516541
- (void)webView:(id)view didReplaceStateWithinPageForFrame:(id)frame;	// 0x30516589
- (void)webView:(id)view didRunInsecureContent:(id)content;	// 0x30516579
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x3051652d
- (void)webView:(id)view willCloseFrame:(id)frame;	// 0x30516565
- (void)webView:(id)view willPerformClientRedirectToURL:(id)url delay:(double)delay fireDate:(id)date forFrame:(id)frame;	// 0x30516559
- (void)webView:(id)view windowScriptObjectAvailable:(id)available;	// 0x30516571
- (void)webViewDidDisplayInsecureContent:(id)webView;	// 0x30516575
@end

