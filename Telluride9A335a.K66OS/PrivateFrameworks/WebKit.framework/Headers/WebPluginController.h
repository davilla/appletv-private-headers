/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebPluginManualLoader.h"
#import "WebPluginContainerCheckController.h"

@class NSMutableSet, WAKView, NSMutableArray, WebDataSource;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {
@private
	WAKView *_documentView;	// 4 = 0x4
	WebDataSource *_dataSource;	// 8 = 0x8
	NSMutableArray *_views;	// 12 = 0xc
	BOOL _started;	// 16 = 0x10
	NSMutableSet *_checksInProgress;	// 20 = 0x14
	NSMutableArray *_viewsNotInDocument;	// 24 = 0x18
}
+ (void)addPlugInView:(id)view;	// 0x3479241d
+ (BOOL)isPlugInView:(id)view;	// 0x34790d41
+ (id)plugInViewWithArguments:(id)arguments fromPluginPackage:(id)pluginPackage;	// 0x34792199
+ (void)pluginViewHidden:(id)hidden;	// 0x347daef1
- (id)initWithDocumentView:(id)documentView;	// 0x34778931
- (id)URLPolicyCheckReferrer;	// 0x347db169
- (void)_cancelOutstandingChecks;	// 0x34796989
- (void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)loadRequest;	// 0x347db5b1
- (id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)loadRequest inFrame:(id)frame resultObject:(id)object selector:(SEL)selector;	// 0x347db4e5
- (void)_webPluginContainerPostMediaPlayerNotification:(int)notification forElement:(id)element;	// 0x34792ff9
- (void)_webPluginContainerSetMediaPlayerProxy:(id)proxy forElement:(id)element;	// 0x347923c1
- (void)addPlugin:(id)plugin;	// 0x34792581
- (void)dealloc;	// 0x34796ab1
- (void)destroyAllPlugins;	// 0x347966fd
- (void)destroyOnePlugin:(id)plugin;	// 0x34794255
- (void)destroyPlugin:(id)plugin;	// 0x34794025
- (BOOL)plugInsAreRunning;	// 0x347db759
- (void)pluginView:(id)view receivedData:(id)data;	// 0x347daf81
- (void)pluginView:(id)view receivedError:(id)error;	// 0x347daf45
- (void)pluginView:(id)view receivedResponse:(id)response;	// 0x347dafbd
- (void)pluginViewCreated:(id)created;	// 0x34792475
- (void)pluginViewFinishedLoading:(id)loading;	// 0x347daf0d
- (BOOL)processingUserGesture;	// 0x347db559
- (void)restorePluginsFromCache;	// 0x347db5f1
- (void)setDataSource:(id)source;	// 0x34778ea1
- (void)showStatus:(id)status;	// 0x347db1c1
- (void)startAllPlugins;	// 0x3477bc2d
- (void)stopAllPlugins;	// 0x34796881
- (void)stopOnePlugin:(id)plugin;	// 0x347940f9
- (void)stopOnePluginForPageCache:(id)pageCache;	// 0x347957ad
- (void)stopPluginsForPageCache;	// 0x347956b1
- (id)superlayerForPluginView:(id)pluginView;	// 0x347db719
- (id)webFrame;	// 0x34792379
- (void)webPlugInContainerDidHideFullScreenForView:(id)webPlugInContainer;	// 0x347db231
- (void)webPlugInContainerLoadRequest:(id)containerLoadRequest inFrame:(id)frame;	// 0x347db2d1
- (void)webPlugInContainerShowStatus:(id)containerShowStatus;	// 0x347db1d1
- (void)webPlugInContainerWillShowFullScreenForView:(id)webPlugInContainer;	// 0x347db281
- (id)webView;	// 0x347928c1
@end

