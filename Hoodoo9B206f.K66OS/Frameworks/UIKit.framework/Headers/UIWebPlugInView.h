/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <WAKView.h> // Unknown library

@class UIView, CALayer, UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebPlugInView : WAKView {
@private
	UIWebDocumentView *_webView;	// 68 = 0x44
	CALayer *_hostingLayer;	// 72 = 0x48
	UIView *_uiView;	// 76 = 0x4c
	CFRunLoopObserverRef _mainRunLoopDrawObserver;	// 80 = 0x50
	BOOL _isFullScreen;	// 84 = 0x54
	BOOL _parentedInLayer;	// 85 = 0x55
	BOOL _isQuickTimePlugIn;	// 86 = 0x56
	BOOL _isMapViewPlugIn;	// 87 = 0x57
}
@property(assign, nonatomic) BOOL isMapViewPlugIn;	// G=0x3550d135; S=0x354546e9; @synthesize=_isMapViewPlugIn
@property(assign, nonatomic) BOOL isQuickTimePlugIn;	// G=0x3550d125; S=0x354546d9; @synthesize=_isQuickTimePlugIn
@property(assign, nonatomic, getter=isParentedInLayer) BOOL parentedInLayer;	// G=0x35454f49; S=0x354554b5; @synthesize=_parentedInLayer
- (id)initWithWebView:(id)webView plugInView:(id)view;	// 0x35454585
- (void)_attachPluginLayerOnMainThread;	// 0x35455411
- (void)_connectPluginLayers;	// 0x35454c31
- (void)_detachPluginLayerOnMainThread;	// 0x35455b81
- (void)_disconnectPluginLayers;	// 0x35455b91
- (void)_reshapeOnMainThread;	// 0x35454881
- (void)_viewDidMoveToWindowOnMainThread;	// 0x35454b5d
- (void)attachPluginLayer;	// 0x3545538d
- (void)dealloc;	// 0x35455d61
- (void)detachPluginLayer;	// 0x35455afd
- (void)drawRect:(CGRect)rect;	// 0x354554ed
- (void)forwardInvocation:(id)invocation;	// 0x354568c5
- (void)invalidateGState;	// 0x3545478d
// declared property getter: - (BOOL)isMapViewPlugIn;	// 0x3550d135
- (BOOL)isParented;	// 0x35455475
// declared property getter: - (BOOL)isParentedInLayer;	// 0x35454f49
// declared property getter: - (BOOL)isQuickTimePlugIn;	// 0x3550d125
- (void)layout;	// 0x3550cf95
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3545482d
- (void)mouseDown:(id)down;	// 0x3550d021
- (void)mouseUp:(id)up;	// 0x3550d05d
- (id)objectForWebScript;	// 0x3550cfd9
- (id)plugInView;	// 0x35454e1d
- (id)pluginLayer;	// 0x35454f15
- (void)reshape;	// 0x354547cd
- (BOOL)respondsToSelector:(SEL)selector;	// 0x35454e2d
- (void)setFrame:(CGRect)frame;	// 0x354546f9
- (void)setFrameSize:(CGSize)size;	// 0x3550cef1
// declared property setter: - (void)setIsMapViewPlugIn:(BOOL)anIn;	// 0x354546e9
// declared property setter: - (void)setIsQuickTimePlugIn:(BOOL)anIn;	// 0x354546d9
// declared property setter: - (void)setParentedInLayer:(BOOL)layer;	// 0x354554b5
- (void)setWebView:(id)view;	// 0x3550d099
- (void)viewDidMoveToWindow;	// 0x35454aa5
- (void)webPlugInDestroy;	// 0x35455d1d
- (void)webPlugInInitialize;	// 0x35454e8d
- (void)webPlugInStart;	// 0x35454ed1
- (void)webPlugInStop;	// 0x35455cd9
- (BOOL)willProvidePluginLayer;	// 0x35454f59
@end
