/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIActionSheetDelegate.h"
#import <NSObject.h> // Unknown library

@class UIView, UIBarButtonItem, NSArray, _UIPreviewItemProxy, UIActivityViewController, NSURL, UIPopoverController, UIViewController, NSString;
@protocol UIDocumentInteractionControllerDelegate;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
@private
	id<UIDocumentInteractionControllerDelegate> _delegate;	// 4 = 0x4
	id _previewItemProxy;	// 8 = 0x8
	NSArray *_icons;	// 12 = 0xc
	id _annotation;	// 16 = 0x10
	NSString *_uniqueIdentifier;	// 20 = 0x14
	UIViewController *_presentingViewController;	// 24 = 0x18
	id _previewController;	// 28 = 0x1c
	NSArray *_gestureRecognizers;	// 32 = 0x20
	CGRect _presentRect;	// 36 = 0x24
	UIView *_presentView;	// 52 = 0x34
	UIBarButtonItem *_presentItem;	// 56 = 0x38
	NSArray *_availableApplications;	// 60 = 0x3c
	UIPopoverController *_popoverController;	// 64 = 0x40
	UIActivityViewController *_activityViewController;	// 68 = 0x44
	BOOL _shouldUnzipDocument;	// 72 = 0x48
	NSURL *_unzippedDocumentURL;	// 76 = 0x4c
	id _applicationToOpen;	// 80 = 0x50
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
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
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
	} _documentInteractionControllerFlags;	// 84 = 0x54
}
@property(retain) NSURL *URL;	// G=0x30399b41; S=0x30399959; 
@property(copy, nonatomic) NSString *UTI;	// G=0x30399da9; S=0x30399c41; 
@property(retain, nonatomic) UIActivityViewController *activityViewController;	// G=0x3039d369; S=0x3039d379; @synthesize=_activityViewController
@property(retain, nonatomic) id annotation;	// G=0x3039d329; S=0x3039d339; @synthesize=_annotation
@property(assign, nonatomic) id<UIDocumentInteractionControllerDelegate> delegate;	// G=0x3039d319; S=0x303996bd; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x3039b531; 
@property(readonly, assign, nonatomic) NSArray *icons;	// G=0x3039a13d; 
@property(copy) NSString *name;	// G=0x3039a035; S=0x30399f0d; 
@property(retain, nonatomic) UIPopoverController *popoverController;	// G=0x3039d389; S=0x3039d399; @synthesize=_popoverController
@property(readonly, assign, nonatomic) id previewController;	// G=0x3039d265; 
@property(readonly, assign, nonatomic) _UIPreviewItemProxy *previewItemProxy;	// G=0x3039d2c9; 
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// G=0x3039a2a5; S=0x3039a279; @synthesize=_shouldUnzipDocument
@property(assign, nonatomic) BOOL shouldUnzipDocument;	// @dynamic
@property(retain, nonatomic) NSString *uniqueIdentifier;	// G=0x3039d349; S=0x3039d359; @synthesize=_uniqueIdentifier
@property(retain, nonatomic) NSString *uniqueIdentifier;	// @dynamic
+ (id)_UTIForFilename:(id)filename;	// 0x30399d69
+ (id)_applicationsForDocumentProxy:(id)documentProxy;	// 0x30398f05
+ (id)_unzippingQueue;	// 0x3039cc29
+ (id)allActionSelectorNames;	// 0x3039906d
+ (void)initialize;	// 0x30399315
+ (id)interactionControllerWithURL:(id)url;	// 0x30399409
- (id)initWithURL:(id)url;	// 0x30399445
// declared property getter: - (id)URL;	// 0x30399b41
// declared property getter: - (id)UTI;	// 0x30399da9
- (void)_activityControllerViewDidDismiss;	// 0x3039d1b5
- (id)_applicationToOpen;	// 0x3039cc79
- (id)_applications:(BOOL)applications;	// 0x3039b7bd
- (BOOL)_askDelegateToSaveToCameraRoll;	// 0x3039d169
- (BOOL)_canPreviewUnzippedDocument;	// 0x3039a2b5
- (BOOL)_canSaveToCameraRollForType;	// 0x3039d025
- (BOOL)_canUnzipDocument;	// 0x3039cec5
- (BOOL)_canUnzipDocumentAndPresentOpenIn;	// 0x3039a3d9
- (BOOL)_canUnzipDocumentAndPresentOptions;	// 0x3039a361
- (BOOL)_delegateCanPerformAction:(SEL)action;	// 0x3039d075
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id *)methods;	// 0x3039911d
- (BOOL)_documentNeedsHelpUnzippingForPreview;	// 0x3039cf11
- (id)_documentProxy;	// 0x30398e41
- (void)_finishedCopyingResource;	// 0x3039b991
- (void)_interfaceOrientationWillChange:(id)_interfaceOrientation;	// 0x3039cbe9
- (void)_invalidate;	// 0x3039cb81
- (BOOL)_isFilenameValidForUnzipping:(id)unzipping;	// 0x3039cf35
- (BOOL)_isValidURL:(id)url;	// 0x3039cff1
- (void)_openDocumentWithApplication:(id)application;	// 0x3039b83d
- (void)_openDocumentWithCurrentApplication;	// 0x3039b945
- (void)_presentOpenIn:(id)anIn;	// 0x3039b6c5
- (void)_presentOptionsMenu:(id)menu;	// 0x3039b735
- (void)_presentPreview:(id)preview;	// 0x3039b641
- (void)_setApplicationToOpen:(id)open;	// 0x3039ccb1
- (void)_setUnzippedDocumentURL:(id)url;	// 0x3039ccf5
- (BOOL)_setupForOpenInMenu;	// 0x3039be25
- (BOOL)_setupForOptionsMenu;	// 0x3039b9f9
- (BOOL)_setupPreviewController;	// 0x3039c1a1
- (void)_unzipFileAndSetupPayload:(id)payload;	// 0x3039c415
- (id)_unzippedDocumentURL;	// 0x3039cde1
// declared property getter: - (id)activityViewController;	// 0x3039d369
// declared property getter: - (id)annotation;	// 0x3039d329
- (unsigned)applicationCount;	// 0x30399291
- (void)dealloc;	// 0x303994fd
// declared property getter: - (id)delegate;	// 0x3039d319
- (void)dismissMenuAnimated:(BOOL)animated;	// 0x3039b4a5
- (void)dismissPreviewAnimated:(BOOL)animated;	// 0x3039b479
// declared property getter: - (id)gestureRecognizers;	// 0x3039b531
// declared property getter: - (id)icons;	// 0x3039a13d
// declared property getter: - (id)name;	// 0x3039a035
- (int)numberOfPreviewItemsInPreviewController:(id)previewController;	// 0x30398d7d
- (void)openDocumentWithDefaultApplication;	// 0x303992bd
- (void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;	// 0x3039b965
// declared property getter: - (id)popoverController;	// 0x3039d389
- (void)popoverControllerDidDismissPopover:(id)popoverController;	// 0x30398d91
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3039b1f5
- (BOOL)presentOpenInMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3039af01
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)barButtonItem animated:(BOOL)animated;	// 0x3039a855
- (BOOL)presentOptionsMenuFromRect:(CGRect)rect inView:(id)view animated:(BOOL)animated;	// 0x3039a431
- (BOOL)presentPreviewAnimated:(BOOL)animated;	// 0x3039ac39
- (id)presentingNavigationController;	// 0x3039abe5
// declared property getter: - (id)previewController;	// 0x3039d265
- (CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id *)sourceView;	// 0x30398a09
- (id)previewController:(id)controller previewItemAtIndex:(int)index;	// 0x30398d81
- (id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect *)rect;	// 0x30398ae9
- (void)previewControllerDidDismiss:(id)previewController;	// 0x30398a41
// declared property getter: - (id)previewItemProxy;	// 0x3039d2c9
// declared property setter: - (void)setActivityViewController:(id)controller;	// 0x3039d379
// declared property setter: - (void)setAnnotation:(id)annotation;	// 0x3039d339
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303996bd
// declared property setter: - (void)setName:(id)name;	// 0x30399f0d
// declared property setter: - (void)setPopoverController:(id)controller;	// 0x3039d399
- (void)setPreviewURLOverride:(id)override;	// 0x30399169
// declared property setter: - (void)setShouldUnzipDocument:(BOOL)unzipDocument;	// 0x3039a279
// declared property setter: - (void)setURL:(id)url;	// 0x30399959
// declared property setter: - (void)setUTI:(id)uti;	// 0x30399c41
// declared property setter: - (void)setUniqueIdentifier:(id)identifier;	// 0x3039d359
// declared property getter: - (BOOL)shouldUnzipDocument;	// 0x3039a2a5
// declared property getter: - (id)uniqueIdentifier;	// 0x3039d349
@end

