/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "UIKit-Structs.h"

@class UIWebView;

__attribute__((visibility("hidden")))
@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
@private
	id<UIScrollViewDelegate> _delegate;	// 4 = 0x4
	UIWebView *_webView;	// 8 = 0x8
}
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x352f567d; S=0x3525e779; @synthesize=_delegate
@property(assign, nonatomic) UIWebView *webView;	// G=0x352f568d; S=0x3525b91d; @synthesize=_webView
// declared property getter: - (id)delegate;	// 0x352f567d
- (void)forwardInvocation:(id)invocation;	// 0x3525c475
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3525c411
- (BOOL)respondsToSelector:(SEL)selector;	// 0x3525b92d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3525e779
// declared property setter: - (void)setWebView:(id)view;	// 0x3525b91d
// declared property getter: - (id)webView;	// 0x352f568d
@end

