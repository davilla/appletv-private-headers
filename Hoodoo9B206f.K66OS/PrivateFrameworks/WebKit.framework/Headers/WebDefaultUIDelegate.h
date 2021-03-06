/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebDefaultUIDelegate : NSObject {
}
+ (id)sharedUIDelegate;	// 0x30d17395
- (id)webView:(id)view createWebViewWithRequest:(id)request userGesture:(BOOL)gesture;	// 0x30d3ec21
- (id)webView:(id)view createWebViewWithRequest:(id)request windowFeatures:(id)features;	// 0x30d3ec81
- (void)webView:(id)view didDrawRect:(CGRect)rect;	// 0x30d3ec6d
- (void)webView:(id)view didScrollDocumentInFrameView:(id)frameView;	// 0x30d3ec71
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x30d3ec75
- (id)webView:(id)view generateReplacementFile:(id)file;	// 0x30d3ec7d
- (void)webView:(id)view makeFirstResponder:(id)responder;	// 0x30d3ed55
- (void)webView:(id)view mouseDidMoveOverElement:(id)mouse modifierFlags:(unsigned)flags;	// 0x30d2863d
- (void)webView:(id)view printFrameView:(id)view2;	// 0x30d3ec69
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x30d3ec59
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x30d3ec5d
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x30d3ec61
- (void)webView:(id)view runOpenPanelForFileButtonWithResultListener:(id)resultListener;	// 0x30d3ec65
- (void)webView:(id)view setFrame:(CGRect)frame;	// 0x30d3ec55
- (void)webView:(id)view setResizable:(BOOL)resizable;	// 0x30d3ec51
- (void)webView:(id)view setStatusBarVisible:(BOOL)visible;	// 0x30d3ec49
- (void)webView:(id)view setStatusText:(id)text;	// 0x30d3ec35
- (void)webView:(id)view setToolbarsVisible:(BOOL)visible;	// 0x30d3ec41
- (BOOL)webView:(id)view shouldReplaceUploadFile:(id)file usingGeneratedFilename:(id *)filename;	// 0x30d3ec79
- (BOOL)webViewAreToolbarsVisible:(id)visible;	// 0x30d3ec3d
- (void)webViewClose:(id)close;	// 0x30d3ec29
- (id)webViewFirstResponder:(id)responder;	// 0x30d3ed9d
- (void)webViewFocus:(id)focus;	// 0x30d3ec2d
- (CGRect)webViewFrame:(id)frame;	// 0x30d3ed09
- (BOOL)webViewIsResizable:(id)resizable;	// 0x30d3ec4d
- (BOOL)webViewIsStatusBarVisible:(id)visible;	// 0x30d3ec45
- (void)webViewShow:(id)show;	// 0x30d3ec25
- (id)webViewStatusText:(id)text;	// 0x30d3ec39
- (void)webViewUnfocus:(id)unfocus;	// 0x30d3ec31
@end

