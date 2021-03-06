/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import <NSObject.h> // Unknown library

@class NSURL, UIActionSheet, UIPopoverController, _UIPreviewItemProxy, NSString, UIBarButtonItem, UIViewController, UIView, NSArray;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
@private
	id<UIDocumentInteractionControllerDelegate> _delegate;	// 4 = 0x4
	id _previewItemProxy;	// 8 = 0x8
	NSArray *_icons;	// 12 = 0xc
	id _annotation;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
	UIPopoverController *_popoverController;	// 24 = 0x18
	UIViewController *_presentingViewController;	// 28 = 0x1c
	id _previewController;	// 32 = 0x20
	NSArray *_gestureRecognizers;	// 36 = 0x24
	CGRect _presentRect;	// 40 = 0x28
	UIView *_presentView;	// 56 = 0x38
	UIBarButtonItem *_presentItem;	// 60 = 0x3c
	NSArray *_availableApplications;	// 64 = 0x40
	UIViewController *_openInViewController;	// 68 = 0x44
	UIActionSheet *_optionsMenu;	// 72 = 0x48
	UIActionSheet *_openInMenu;	// 76 = 0x4c
	int _quickLookButtonIndex;	// 80 = 0x50
	int _defaultOpenButtonIndex;	// 84 = 0x54
	int _alternateOpenButtonIndex;	// 88 = 0x58
	int _copyButtonIndex;	// 92 = 0x5c
	int _printButtonIndex;	// 96 = 0x60
	CGSize _openInTableViewSize;	// 100 = 0x64
	BOOL _shouldUnzipDocument;	// 108 = 0x6c
	NSURL *_unzippedDocumentURL;	// 112 = 0x70
	id _applicationToOpen;	// 116 = 0x74
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
	} _documentInteractionControllerFlags;	// 120 = 0x78
}
@property(retain) NSURL *URL;	// G=0x3034c235; S=0x3034c05d; 
@property(copy, nonatomic) NSString *UTI;	// G=0x3034c5a5; S=0x3034c445; 
@property(retain, nonatomic) id annotation;	// G=0x3034df19; S=0x3034df29; @synthesize=_annotation
@property(assign, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;	// G=0x3034df09; S=0x3034bdad; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x3034dd75; 
@property(readonly, assign, nonatomic) NSArray *icons;	// G=0x3034c909; 
@property(copy) NSString *name;	// G=0x3034c811; S=0x3034c6f1; 
@property(readonly, assign, nonatomic) UIPopoverController *popoverController;	// G=0x30349ad1; 
@property(readonly, assign, nonatomic) id previewController;	// G=0x30349a51; 
@property(readonly, assign, nonatomic) _UIPreviewItemProxy *previewItemProxy;	// G=0x30349bb5; 
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// G=0x3034cae9; S=0x3034cab9; @synthesize=_shouldUnzipDocument
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x3034df4d; S=0x3034df5d; @synthesize=_uniqueIdentifier
+ (id)_UTIForFilename:(id)filename;	// 0x3034c565
+ (id)_applicationsForFilename:(id)filename UTI:(id)uti;	// 0x30349d81
+ (dispatch_queue_s *)_unzippingQueue;	// 0x3034adc9
+ (void)initialize;	// 0x3034b9cd
+ (id)interactionControllerWithURL:(id)url;	// 0x3034bab1
- (id)initWithURL:(id)url;	// 0x3034baed
// declared property getter: - (id)URL;	// 0x3034c235
// declared property getter: - (id)UTI;	// 0x3034c5a5
- (id)_applicationToOpen;	// 0x3034b5cd
- (id)_applications:(BOOL)applications;	// 0x30349f01
- (BOOL)_canPreviewUnzippedDocument;	// 0x3034caf9
- (BOOL)_canUnzipDocument;	// 0x3034b801
- (BOOL)_canUnzipDocumentAndPresentOptions;	// 0x3034cba5
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)methods;	// 0x3034aac1
- (BOOL)_documentNeedsHelpUnzippingForPreview;	// 0x3034b86d
- (void)_finishedCopyingResource;	// 0x3034a155
- (void)_interfaceOrientationWillChange:(id)_interfaceOrientation;	// 0x3034b58d
- (void)_invalidate;	// 0x3034b521
- (BOOL)_isFilenameValidForUnzipping:(id)unzipping;	// 0x3034b8e1
- (BOOL)_isValidURL:(id)url;	// 0x3034b999
- (void)_openDocumentWithApplication:(id)application;	// 0x3034a001
- (void)_openDocumentWithCurrentApplication;	// 0x3034a109
- (void)_presentOpenIn:(id)anIn;	// 0x30349c89
- (void)_presentOpenInForPhoneInView:(id)view;	// 0x3034d821
- (void)_presentOptionsMenu:(id)menu;	// 0x30349cf9
- (void)_presentPreview:(id)preview;	// 0x30349c05
- (void)_setApplicationToOpen:(id)open;	// 0x3034b605
- (void)_setUnzippedDocumentURL:(id)url;	// 0x3034b649
- (BOOL)_setupForOpenInMenu;	// 0x3034a7e1
- (BOOL)_setupForOptionsMenu;	// 0x3034a1bd
- (BOOL)_setupPreviewController;	// 0x3034ab09
- (void)_unzipFileAndSetupPayload:(id)payload;	// 0x3034ae19
- (id)_unzippedDocumentURL;	// 0x3034b72d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x303494d1
- (void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;	// 0x3034985d
- (void)actionSheetCancel:(id)cancel;	// 0x303497e1
// declared property getter: - (id)annotation;	// 0x3034df19
- (unsigned)applicationCount;	// 0x3034de85
- (void)dealloc;	// 0x3034bba5
// declared property getter: - (id)delegate;	// 0x3034df09
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x3034dd05
- (void)dismissPreviewAnimated:(BOOL)animated;	// 0x3034dcd9
// declared property getter: - (id)gestureRecognizers;	// 0x3034dd75
// declared property getter: - (id)icons;	// 0x3034c909
// declared property getter: - (id)name;	// 0x3034c811
- (int)numberOfPreviewItemsInPreviewController:(id)previewController;	// 0x303494bd
- (void)openDocumentWithDefaultApplication;	// 0x3034deb1
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;	// 0x3034a129
// declared property getter: - (id)popoverController;	// 0x30349ad1
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30349971
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3034db91
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3034da35
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3034d091
- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3034cc55
- (BOOL)presentPreviewAnimated:(BOOL)animated;	// 0x3034d465
- (id)presentingNavigationController;	// 0x3034d411
// declared property getter: - (id)previewController;	// 0x30349a51
- (CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id *)sourceView;	// 0x303490f5
- (id)previewController:(id)controller previewItemAtIndex:(int)index;	// 0x303494c1
- (id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect *)rect;	// 0x303491d5
- (void)previewControllerDidDismiss:(id)previewController;	// 0x30349131
// declared property getter: - (id)previewItemProxy;	// 0x30349bb5
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x3034df29
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3034bdad
// declared property setter: - (void)setName:(id)name;	// 0x3034c6f1
- (void)setPreviewURLOverride:(id)override;	// 0x3034c325
// declared property setter: - (void)setShouldUnzipDocument:(BOOL)unzipDocument;	// 0x3034cab9
// declared property setter: - (void)setURL:(id)url;	// 0x3034c05d
// declared property setter: - (void)setUTI:(id)uti;	// 0x3034c445
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x3034df5d
// declared property getter: - (BOOL)shouldUnzipDocument;	// 0x3034cae9
// declared property getter: - (id)uniqueIdentifier;	// 0x3034df4d
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;	// 0x3034d7e1
@end

