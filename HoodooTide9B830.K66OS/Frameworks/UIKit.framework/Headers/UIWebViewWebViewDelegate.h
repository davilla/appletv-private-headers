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
- (id)initWithUIWebView:(id)uiwebView;	// 0x301c078d
- (void)_clearUIWebView;	// 0x301c2de1
- (id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;	// 0x3025f61d
- (id)webView:(id)view createWebViewWithRequest:(id)request;	// 0x3025f525
- (void)webView:(id)view decidePolicyForGeolocationRequestFromOrigin:(id)origin frame:(id)frame listener:(id)listener;	// 0x3025f751
- (void)webView:(id)view decidePolicyForMIMEType:(id)mimetype request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x3025f67d
- (void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;	// 0x301c1229
- (void)webView:(id)view decidePolicyForNewWindowAction:(id)newWindowAction request:(id)request newFrameName:(id)name decisionListener:(id)listener;	// 0x3025f55d
- (void)webView:(id)view didChangeLocationWithinPageForFrame:(id)frame;	// 0x3025f80d
- (void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;	// 0x301c1c59
- (void)webView:(id)view didCommitLoadForFrame:(id)frame;	// 0x301c17bd
- (void)webView:(id)view didFailLoadWithError:(id)error forFrame:(id)frame;	// 0x3025f69d
- (void)webView:(id)view didFailProvisionalLoadWithError:(id)error forFrame:(id)frame;	// 0x3025f65d
- (void)webView:(id)view didFinishLoadForFrame:(id)frame;	// 0x301c1929
- (void)webView:(id)view didFirstLayoutInFrame:(id)frame;	// 0x301c0ead
- (void)webView:(id)view didReceiveServerRedirectForProvisionalLoadForFrame:(id)frame;	// 0x3025f63d
- (void)webView:(id)view didReceiveTitle:(id)title forFrame:(id)frame;	// 0x3025f5fd
- (void)webView:(id)view didStartProvisionalLoadForFrame:(id)frame;	// 0x301c1495
- (void)webView:(id)view exceededApplicationCacheOriginQuotaForSecurityOrigin:(id)securityOrigin totalSpaceNeeded:(unsigned)needed;	// 0x3025f5bd
- (void)webView:(id)view frame:(id)frame exceededDatabaseQuotaForSecurityOrigin:(id)securityOrigin database:(id)database;	// 0x3025f59d
- (id)webView:(id)view identifierForInitialRequest:(id)initialRequest fromDataSource:(id)dataSource;	// 0x301c1619
- (void)webView:(id)view printFrameView:(id)view2;	// 0x3025f5dd
- (BOOL)webView:(id)view resource:(id)resource canAuthenticateAgainstProtectionSpace:(id)space forDataSource:(id)dataSource;	// 0x3025f7d1
- (void)webView:(id)view resource:(id)resource didCancelAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x3025f7b1
- (void)webView:(id)view resource:(id)resource didFailLoadingWithError:(id)error fromDataSource:(id)dataSource;	// 0x3025f771
- (void)webView:(id)view resource:(id)resource didFinishLoadingFromDataSource:(id)dataSource;	// 0x301c1ced
- (void)webView:(id)view resource:(id)resource didReceiveAuthenticationChallenge:(id)challenge fromDataSource:(id)dataSource;	// 0x3025f791
- (id)webView:(id)view resource:(id)resource willSendRequest:(id)request redirectResponse:(id)response fromDataSource:(id)dataSource;	// 0x301c16ed
- (void)webView:(id)view runJavaScriptAlertPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3025f6dd
- (BOOL)webView:(id)view runJavaScriptConfirmPanelWithMessage:(id)message initiatedByFrame:(id)frame;	// 0x3025f6fd
- (id)webView:(id)view runJavaScriptTextInputPanelWithPrompt:(id)prompt defaultText:(id)text initiatedByFrame:(id)frame;	// 0x3025f731
- (void)webView:(id)view unableToImplementPolicyWithError:(id)error frame:(id)frame;	// 0x3025f57d
- (void)webViewClose:(id)close;	// 0x3025f6bd
@end

