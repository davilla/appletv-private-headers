/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebView;

__attribute__((visibility("hidden")))
@interface UIWebViewWebViewDelegate : NSObject {
@private
	UIWebView *uiWebView;	// 4 = 0x4
}
- (id)initWithUIWebView:(id)uiwebView;	// 0x30213fa1
- (void)_clearUIWebView;	// 0x302163c5
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x302c3a25
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x302c390d
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x302c3b59
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x302c3a85
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x30214855
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x302c3945
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x302c3c09
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x302152a5
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x30214dc5
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x302c3aa5
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x302c3a65
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x30214f39
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x302145b9
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x302c3a45
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x302c39e5
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x30214ab9
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x302c39a5
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x302c3985
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x30214c39
- (void)webView:(id)view printFrameView:(id)view2;	// 0x302c39c5
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x302c3bd9
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x302c3bb9
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x302c3b79
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x30215335
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x302c3b99
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x30214d09
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x302c3ae5
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x302c3b05
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x302c3b39
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x302c3965
- (void)webViewClose:(id)close;	// 0x302c3ac5
- (void)webViewSupportedOrientationsUpdated:(id)updated;	// 0x302c3a05
@end
