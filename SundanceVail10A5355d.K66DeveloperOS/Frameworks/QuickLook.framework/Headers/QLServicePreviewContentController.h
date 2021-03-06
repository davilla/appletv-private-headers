/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <UIViewController.h> // Unknown library
#import "XPCProxyTarget.h"
#import "QLPreviewContentDataSource.h"
#import "QLPreviewContentDelegate.h"
#import "QuickLook-Structs.h"
#import "QLRemotePreviewContentControllerProtocol.h"

@class NSMutableDictionary, QLPreviewContentController, QLRemotePrintPageHelper, XPCProxy;
@protocol QLRemotePreviewContentProxyProtocol;

@interface QLServicePreviewContentController : UIViewController <XPCProxyTarget, QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate> {
	NSMutableDictionary *_previewItemCache;	// 192 = 0xc0
	QLPreviewContentController *_previewContentController;	// 196 = 0xc4
	XPCProxy<QLRemotePreviewContentProxyProtocol> *_previewContentProxy;	// 200 = 0xc8
	int _numberOfPreviewItems;	// 204 = 0xcc
	int _previewMode;	// 208 = 0xd0
	BOOL _remoteInstantiationFinished;	// 212 = 0xd4
	BOOL _blockRemoteImages;	// 213 = 0xd5
	QLRemotePrintPageHelper *_printPageHelper;	// 216 = 0xd8
}
@property(assign) int currentPreviewItemIndex;	// G=0x341f50e9; S=0x341f4f41; converted property
@property(assign) id<QLPreviewContentDataSource> dataSource;	// G=0x341f4ef9; S=0x341f4ef5; 
@property(assign) id<QLPreviewContentDelegate> delegate;	// G=0x341f4f01; S=0x341f4efd; 
@property(readonly, assign) int numberOfPreviewItems;	// G=0x341f50d9; converted property
@property(assign) int previewMode;	// G=0x341f4f31; S=0x341f4f05; 
@property(readonly, retain) QLRemotePrintPageHelper *printPageHelper;	// G=0x341f57f9; converted property
- (id)init;	// 0x341f4a3d
- (void)_getNumberOfPagesForSize:(id)size withHandler:(id)handler;	// 0x341f5849
- (void)_getPDFPageAtIndex:(int)index size:(id)size handler:(id)handler;	// 0x341f592d
- (void)_getPDFPreviewDataWithHandler:(id)handler;	// 0x341f57d1
- (void)_prepareForDrawingPages:(id)drawingPages;	// 0x341f58d9
- (void)_setContentFrame:(id)frame;	// 0x341f56ed
- (void)_setNumberOfPreviewItems:(int)previewItems;	// 0x341f4fcd
- (void)_setPreviewItems:(id)items;	// 0x341f4fdd
- (void)beginScrubbing;	// 0x341f5a35
- (id)clientProcessAlertViewForPreviewContentController:(id)previewContentController;	// 0x341f60c5
- (void)configureWithParameters:(id)parameters;	// 0x341f513d
- (void)contentWasTappedInPreviewContentController:(id)previewContentController;	// 0x341f6035
// converted property getter: - (int)currentPreviewItemIndex;	// 0x341f50e9
// declared property getter: - (id)dataSource;	// 0x341f4ef9
- (void)dealloc;	// 0x341f4aad
// declared property getter: - (id)delegate;	// 0x341f4f01
- (void)endScrubbing;	// 0x341f5a75
- (void)enterBackground;	// 0x341f5771
- (void)forceResignFirstResponder;	// 0x341f5791
// converted property getter: - (int)numberOfPreviewItems;	// 0x341f50d9
- (int)numberOfPreviewItemsInPreviewContentController:(id)previewContentController;	// 0x341f5ab5
- (void)overlayWasTappedInPreviewContentController:(id)previewContentController;	// 0x341f6015
- (id)pdfPreviewData;	// 0x341f57b1
- (void)previewContentController:(id)controller didFailWithError:(id)error;	// 0x341f5fc1
- (void)previewContentController:(id)controller didLoadItem:(id)item atIndex:(int)index withError:(id)error;	// 0x341f5f09
- (void)previewContentController:(id)controller didMoveToItem:(id)item atIndex:(int)index;	// 0x341f5ebd
- (void)previewContentController:(id)controller didUnloadItem:(id)item;	// 0x341f5f75
- (id)previewContentController:(id)controller previewItemAtIndex:(int)index;	// 0x341f5ac5
- (void)previewContentController:(id)controller receivedTapOnURL:(id)url;	// 0x341f6055
- (void)previewContentController:(id)controller setAVState:(id)state forPreviewItem:(id)previewItem;	// 0x341f6075
- (void)previewContentController:(id)controller willHideOverlayWithDuration:(double)duration;	// 0x341f5fed
- (void)previewContentController:(id)controller willMoveToItemAtIndex:(int)index;	// 0x341f5e9d
- (void)previewContentController:(id)controller willShowOverlayWithDuration:(double)duration;	// 0x341f5fc5
// declared property getter: - (int)previewMode;	// 0x341f4f31
// converted property getter: - (id)printPageHelper;	// 0x341f57f9
- (id)printPageRenderer;	// 0x341f57f5
- (id)proxy:(id)proxy detailedSignatureForSelector:(SEL)selector;	// 0x341f4b29
- (void)refreshCurrentPreviewItem;	// 0x341f5635
- (void)reloadData;	// 0x341f5581
- (void)scrubToValue:(double)value;	// 0x341f5a55
- (void)setBlockRemoteImages:(BOOL)images;	// 0x341f50f1
- (void)setContentFrame:(CGRect)frame;	// 0x341f56bd
// converted property setter: - (void)setCurrentPreviewItemIndex:(int)index;	// 0x341f4f41
// declared property setter: - (void)setDataSource:(id)source;	// 0x341f4ef5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x341f4efd
- (void)setLoadintTextForMissingFiles:(id)missingFiles;	// 0x341f511d
- (void)setOverlayHidden:(BOOL)hidden duration:(double)duration;	// 0x341f573d
// declared property setter: - (void)setPreviewMode:(int)mode;	// 0x341f4f05
- (void)togglePlayState;	// 0x341f5a95
- (void)willAppearInRemoteViewController:(id)remoteViewController;	// 0x341f4e15
@end

