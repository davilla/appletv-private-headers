/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIResponder.h"

@class NSArray, UITabBarItem, NSBundle, UIView, NSHashTable, UINavigationItem, UIDropShadowView, UISplitViewController, UIPopoverController, UINavigationController, UIBarButtonItem, UITransitionView, UITabBarController, UISearchDisplayController, NSString, UIDimmingView;

@interface UIViewController : UIResponder <NSCoding> {
@private
	UIView *_view;	// 4 = 0x4
	UITabBarItem *_tabBarItem;	// 8 = 0x8
	UINavigationItem *_navigationItem;	// 12 = 0xc
	NSArray *_toolbarItems;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	NSString *_nibName;	// 24 = 0x18
	NSBundle *_nibBundle;	// 28 = 0x1c
	UIViewController *_parentViewController;	// 32 = 0x20
	NSHashTable *_childViewControllers;	// 36 = 0x24
	UIViewController *_childModalViewController;	// 40 = 0x28
	UIViewController *_parentModalViewController;	// 44 = 0x2c
	UIView *_modalTransitionView;	// 48 = 0x30
	UIResponder *_modalPreservedFirstResponder;	// 52 = 0x34
	UIResponder *_defaultFirstResponder;	// 56 = 0x38
	UIDimmingView *_dimmingView;	// 60 = 0x3c
	UIDropShadowView *_dropShadowView;	// 64 = 0x40
	UIView *_presentationSuperview;	// 68 = 0x44
	UIView *_sheetView;	// 72 = 0x48
	id _currentAction;	// 76 = 0x4c
	UIView *_savedHeaderSuperview;	// 80 = 0x50
	UIView *_savedFooterSuperview;	// 84 = 0x54
	UIBarButtonItem *_editButtonItem;	// 88 = 0x58
	UISearchDisplayController *_searchDisplayController;	// 92 = 0x5c
	UIPopoverController *_popoverController;	// 96 = 0x60
	int _modalTransitionStyle;	// 100 = 0x64
	int _modalPresentationStyle;	// 104 = 0x68
	int _lastKnownInterfaceOrientation;	// 108 = 0x6c
	CGSize _contentSizeForViewInPopover;	// 112 = 0x70
	CGSize _formSheetSize;	// 120 = 0x78
	struct {
		unsigned appearState : 2;
		unsigned isEditing : 1;
		unsigned isPerformingModalTransition : 1;
		unsigned hidesBottomBarWhenPushed : 1;
		unsigned autoresizesArchivedViewToFullSize : 1;
		unsigned viewLoadedFromControllerNib : 1;
		unsigned isRootViewController : 1;
		unsigned isSheet : 1;
		unsigned isSuspended : 1;
		unsigned wasApplicationFrameAtSuspend : 1;
		unsigned wantsFullScreenLayout : 1;
		unsigned shouldUseFullScreenLayout : 1;
		unsigned allowsAutorotation : 1;
		unsigned searchControllerRetained : 1;
		unsigned oldModalInPopover : 1;
		unsigned isModalInPopover : 1;
		unsigned restoreDeepestFirstResponder : 1;
		unsigned isInWillRotateCallback : 1;
		unsigned disallowMixedOrientationPresentations : 1;
		unsigned modalPresentationsAreCurrentContext : 1;
	} _viewControllerFlags;	// 128 = 0x80
}
@property(readonly, assign, nonatomic) BOOL _isDimmingBackground;	// G=0x301f9b39; 
@property(readonly, assign, nonatomic) BOOL _isModalSheet;	// G=0x30121ac9; 
@property(readonly, assign, nonatomic) BOOL _isPresentedModally;	// G=0x301f9a95; 
@property(readonly, assign, nonatomic) BOOL _useSheetRotation;	// G=0x3012484d; 
@property(assign) BOOL autoresizesArchivedViewToFullSize;	// G=0x301f9545; S=0x301f9559; converted property
@property(retain, nonatomic) UIViewController *childModalViewController;	// G=0x300ba315; S=0x30121aa1; @synthesize=_childModalViewController
@property(retain, nonatomic) NSHashTable *childViewControllers;	// G=0x300b0b75; S=0x300b0b85; @synthesize=_childViewControllers
@property(assign, nonatomic) CGSize contentSizeForViewInPopover;	// G=0x301b3c21; S=0x301b3c51; @synthesize=_contentSizeForViewInPopover
@property(readonly, retain) id currentAction;	// G=0x3019bd41; converted property
@property(retain) UIResponder *defaultFirstResponder;	// G=0x300cf611; S=0x301fa365; converted property
@property(retain, nonatomic) UIDropShadowView *dropShadowView;	// G=0x300ba325; S=0x301fa4a5; @synthesize=_dropShadowView
@property(readonly, retain) UIBarButtonItem *editButtonItem;	// G=0x30109a29; converted property
@property(assign, getter=isEditing) BOOL editing;	// G=0x30101cf9; S=0x301ccb61; converted property
@property(assign) CGSize formSheetSize;	// G=0x301f9519; S=0x300ace05; converted property
@property(assign, nonatomic) BOOL hidesBottomBarWhenPushed;	// G=0x300b0f31; S=0x30170c81; 
@property(assign, nonatomic, getter=isInWillRotateCallback) BOOL inWillRotateCallback;	// G=0x300ba0d5; S=0x30124501; 
@property(assign, nonatomic) int interfaceOrientation;	// G=0x30111909; S=0x300b9d59; 
@property(assign) BOOL isSheet;	// G=0x300af341; S=0x301f9591; converted property
@property(assign, nonatomic) BOOL modalInPopover;	// G=0x301fa3d1; S=0x30120c51; 
@property(assign, nonatomic) int modalPresentationStyle;	// G=0x3011c22d; S=0x3012198d; @synthesize=_modalPresentationStyle
@property(assign) BOOL modalPresentationsAreCurrentContext;	// G=0x301219cd; S=0x301f95e9; converted property
@property(assign, nonatomic) int modalTransitionStyle;	// G=0x30120d2d; S=0x301f9681; @synthesize=_modalTransitionStyle
@property(retain, nonatomic) UITransitionView *modalTransitionView;	// G=0x300ea4b1; S=0x3019b869; 
@property(readonly, assign, nonatomic) UIViewController *modalViewController;	// G=0x300cec79; 
@property(readonly, retain, nonatomic) UINavigationController *navigationController;	// G=0x300f17e1; 
@property(readonly, retain, nonatomic) UINavigationItem *navigationItem;	// G=0x300aced9; 
@property(retain, nonatomic) NSBundle *nibBundle;	// G=0x301fa21d; S=0x301fa47d; @synthesize=_nibBundle
@property(copy, nonatomic) NSString *nibName;	// G=0x30110d09; S=0x301fa451; @synthesize=_nibName
@property(assign, nonatomic) UIViewController *parentViewController;	// G=0x300af179; S=0x300b0bad; 
@property(readonly, assign, nonatomic) UIView *savedHeaderSuperview;	// G=0x301f9691; @synthesize=_savedHeaderSuperview
@property(assign, nonatomic) BOOL searchBarHidNavBar;	// G=0x301f97a1; S=0x301f9779; 
@property(retain, nonatomic) UISearchDisplayController *searchDisplayController;	// G=0x301f97e9; S=0x301f97d1; @dynamic
@property(readonly, retain, nonatomic) UISplitViewController *splitViewController;	// G=0x300ef03d; 
@property(readonly, retain, nonatomic) UITabBarController *tabBarController;	// G=0x300e66e5; 
@property(retain, nonatomic) UITabBarItem *tabBarItem;	// G=0x300e5635; S=0x301f971d; 
@property(copy, nonatomic) NSString *title;	// G=0x300e4da9; S=0x300b0a4d; @synthesize=_title
@property(retain) NSArray *toolbarItems;	// G=0x301122a1; S=0x3011221d; converted property
@property(retain, nonatomic) UIView *view;	// G=0x300adea1; S=0x300b07d1; 
@property(assign, nonatomic) BOOL wantsFullScreenLayout;	// G=0x300ae1cd; S=0x300e40fd; 
+ (BOOL)_doesOverrideLegacyShouldAutorotateMethod;	// 0x300b9dd5
+ (void)_forceLegacyModalViewControllers:(BOOL)controllers;	// 0x300f8729
+ (BOOL)_isViewSizeFullScreen:(id)screen inWindow:(id)window;	// 0x300b86f1
+ (int)_keyboardDirectionForTransition:(int)transition isOrderingIn:(BOOL)anIn;	// 0x300cf4bd
+ (BOOL)_shouldUseLegacyModalViewControllers;	// 0x300ba185
+ (double)customTransitionDuration;	// 0x301390f1
+ (CGSize)defaultFormSheetSize;	// 0x300acdf1
+ (BOOL)doesOverrideViewControllerMethod:(SEL)method;	// 0x300b9df5
+ (double)durationForTransition:(int)transition;	// 0x300cf559
+ (id)existingNibNameMatchingClassName:(id)name bundle:(id)bundle;	// 0x301fa269
+ (void)removeViewControllerForView:(id)view;	// 0x301fa169
+ (void)setCustomTransitionDuration:(double)duration;	// 0x301f9615
+ (void)setViewController:(id)controller forView:(id)view;	// 0x300b0985
+ (id)viewControllerForView:(id)view;	// 0x300b8171
- (id)init;	// 0x300ada01
- (id)initWithCoder:(id)coder;	// 0x301fae91
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x300acb99
- (void)_addDismissButton;	// 0x301fb7c1
- (BOOL)_allowsAutorotation;	// 0x300bac39
- (BOOL)_ancestorViewControllerIsInPopover;	// 0x301fa00d
- (id)_ancestorViewControllerOfClass:(Class)aClass allowModalParent:(BOOL)parent;	// 0x300e6789
- (int)_appearState;	// 0x300ce20d
- (id)_backgroundColorForModalFormSheet;	// 0x301f99c5
- (void)_beginDisablingInterfaceAutorotation;	// 0x301f9995
- (CGRect)_boundsForOrientation:(int)orientation;	// 0x30124931
- (BOOL)_canReloadView;	// 0x301b36c1
- (CGPoint)_centerForOrientation:(int)orientation;	// 0x30124875
- (void)_clearDismissButton;	// 0x3014cee9
- (void)_clearLastKnownInterfaceOrientation;	// 0x3014cf21
- (BOOL)_containsFirstResponder;	// 0x300cf119
- (CGRect)_defaultInitialViewFrame;	// 0x300ae15d
- (void)_didFinishDismissTransition;	// 0x3014cf31
- (void)_didFinishPresentTransition;	// 0x3012b599
- (void)_didReceiveMemoryWarning:(id)warning;	// 0x301fa155
- (BOOL)_disallowMixedOrientationPresentations;	// 0x30122f51
- (void)_dismissModalOverlayAnimationDidStop:(id)_dismissModalOverlayAnimation finished:(id)finished context:(id)context;	// 0x301f9ea5
- (void)_dismissModalOverlayViewControllerAnimated:(BOOL)animated;	// 0x301f9d31
- (void)_dismissModalViewControllerWithTransition:(int)transition from:(id)from;	// 0x3014c6ad
- (BOOL)_displaysFullScreen;	// 0x302724d5
- (void)_doCommonSetup;	// 0x300acc1d
- (void)_editingAnimationFinished;	// 0x301f96f1
- (void)_endDisablingInterfaceAutorotation;	// 0x301f9965
- (void)_endModalPresentationInPopover;	// 0x301fa3e9
- (id)_existingNavigationItem;	// 0x300b0ae5
- (id)_existingTabBarItem;	// 0x300b0af5
- (id)_existingView;	// 0x300acec9
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds;	// 0x301faa75
- (CGRect)_frameForContainerViewInSheetForBounds:(CGRect)bounds displyingTopView:(BOOL)view andBottomView:(BOOL)view3;	// 0x301faab9
- (void)_getRotationContentSettings:(XXStruct_OrggeC *)settings;	// 0x30124239
- (void)_handleDismiss;	// 0x301f9a25
- (BOOL)_hasAppeared;	// 0x301f9575
- (int)_imagePickerStatusBarMode;	// 0x302724d9
- (BOOL)_isAppearingOrAppeared;	// 0x300eb3d9
// declared property getter: - (BOOL)_isDimmingBackground;	// 0x301f9b39
- (BOOL)_isInterfaceAutorotationDisabled;	// 0x301f9931
// declared property getter: - (BOOL)_isModalSheet;	// 0x30121ac9
// declared property getter: - (BOOL)_isPresentedModally;	// 0x301f9a95
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x300b9e7d
- (BOOL)_isViewInWindowWithoutParentViewController;	// 0x300e3d09
- (void)_keyboardWillHide:(id)_keyboard;	// 0x301fbde1
- (void)_keyboardWillShow:(id)_keyboard;	// 0x301fc029
- (int)_lastKnownInterfaceOrientation;	// 0x300b9d49
- (void)_legacyDismissModalViewController:(id)controller withTransition:(int)transition;	// 0x301a3451
- (void)_legacyModalDismissTransitionDidComplete;	// 0x301a373d
- (void)_legacyModalPresentTransitionDidComplete;	// 0x3019bcc5
- (void)_legacyPresentModalViewController:(id)controller withTransition:(int)transition;	// 0x3019b49d
- (void)_loadViewFromNibNamed:(id)nibNamed bundle:(id)bundle;	// 0x301fb5c5
- (id)_modalParentViewController;	// 0x3014c66d
- (id)_moreListTitle;	// 0x301f96a5
- (id)_nonModalAncestorViewController;	// 0x3012199d
- (id)_nonModalParentViewController;	// 0x300af149
- (void)_notifyPopOverThatView:(id)view isTransitioning:(BOOL)transitioning;	// 0x301390fd
- (void)_overlayPresentAnimationDidStop:(id)_overlayPresentAnimation finished:(id)finished context:(id)context;	// 0x301fa0a1
- (id)_popoverController;	// 0x300b9fd5
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x301faddd
- (int)_preferredInterfaceOrientationGivenCurrentOrientation:(int)orientation;	// 0x30122e0d
- (BOOL)_reallyWantsFullScreenLayout;	// 0x300ca239
- (void)_resetViewController;	// 0x301f9a49
- (void)_resignRootViewController;	// 0x300f72fd
- (id)_rootAncestorViewController;	// 0x30122f69
- (void)_setAllowsAutorotation:(BOOL)autorotation;	// 0x300acdd5
- (void)_setDisallowMixedOrientationPresentations:(BOOL)presentations;	// 0x301f95c5
- (void)_setExistingNavigationItem:(id)item;	// 0x300e4d3d
- (void)_setExistingTabBarItem:(id)item;	// 0x301fa1c9
- (void)_setImagePickerMediaTypes:(id)types;	// 0x302724e1
- (void)_setInterfaceOrientationOnModalRecursively:(int)recursively;	// 0x301fb51d
- (void)_setPopoverController:(id)controller;	// 0x301f95ad
- (void)_setSearchDisplayController:(id)controller retain:(BOOL)retain;	// 0x300ef505
- (void)_setSearchDisplayControllerUnretained:(id)unretained;	// 0x300ef4ed
- (void)_setUseTelephonyUI:(BOOL)ui;	// 0x302724dd
- (void)_sheetDismissAnimationDidStop;	// 0x301f9b8d
- (void)_sheetPresentAnimationDidStop;	// 0x301fa035
- (BOOL)_shouldAutoPinInputViewsForModalFormSheet;	// 0x301f960d
- (BOOL)_shouldChildViewControllerUseFullScreenLayout:(id)layout;	// 0x300eb3f9
- (BOOL)_shouldIgnoreTouchesForModalFormSheet;	// 0x301f9611
- (BOOL)_shouldPersistViewWhenCoding;	// 0x301f9531
- (BOOL)_shouldUseFullScreenLayout;	// 0x300af0b1
- (BOOL)_shouldUseFullScreenLayoutInWindow:(id)window parentViewController:(id)controller;	// 0x300af189
- (BOOL)_shouldUseOnePartRotation;	// 0x300baaa1
- (void)_startModalPresentationInPopover;	// 0x301fa41d
- (void)_startPresentCustomTransitionWithDuration:(double)duration;	// 0x301f95c1
- (float)_statusBarHeightForCurrentInterfaceOrientation;	// 0x300af229
- (void)_toggleEditing:(id)editing;	// 0x301f96bd
- (int)_transitionForModalTransitionStyle:(int)modalTransitionStyle appearing:(BOOL)appearing;	// 0x30120d3d
- (BOOL)_tryBecomeRootViewControllerInWindow:(id)window;	// 0x300b9f69
- (void)_updateInterfaceOrientationAnimated:(BOOL)animated;	// 0x301f98d1
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x300cecb1
- (void)_updateToolbarItemsFromViewController:(id)viewController animated:(BOOL)animated;	// 0x301b300d
// declared property getter: - (BOOL)_useSheetRotation;	// 0x3012484d
- (void)_viewWillStartPresentCustomTransition;	// 0x301f95bd
- (id)_visibleView;	// 0x300ba101
- (void)accessibilityLargeTextDidChange;	// 0x301f9679
- (void)addChildViewController:(id)controller;	// 0x300b0b05
- (void)applicationDidResume;	// 0x301faae9
- (void)applicationWantsViewsToDisappear;	// 0x300e3cad
- (void)applicationWillSuspend;	// 0x300e2a59
- (void)attentionClassDumpUser:(id)user yesItsUsAgain:(id)again althoughSwizzlingAndOverridingPrivateMethodsIsFun:(id)fun itWasntMuchFunWhenYourAppStoppedWorking:(id)working pleaseRefrainFromDoingSoInTheFutureOkayThanksBye:(id)theFutureOkayThanksBye;	// 0x301f96b9
- (void)autoresizeArchivedView;	// 0x301fabb9
// converted property getter: - (BOOL)autoresizesArchivedViewToFullSize;	// 0x301f9545
- (void)awakeFromNib;	// 0x301fa3a5
- (BOOL)canHandleSnapbackIdentifier:(id)identifier animated:(BOOL)animated;	// 0x301f96b5
// declared property getter: - (id)childModalViewController;	// 0x300ba315
// declared property getter: - (id)childViewControllers;	// 0x300b0b75
- (id)contentScrollView;	// 0x300bc5d9
// declared property getter: - (CGSize)contentSizeForViewInPopover;	// 0x301b3c21
- (CGSize)contentSizeForViewInPopoverView;	// 0x301b3c39
// converted property getter: - (id)currentAction;	// 0x3019bd41
- (void)dealloc;	// 0x300f6f61
// converted property getter: - (id)defaultFirstResponder;	// 0x300cf611
- (id)defaultPNGName;	// 0x301f967d
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x301f966d
- (void)didReceiveMemoryWarning;	// 0x301fa13d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30127259
- (void)dimmingViewWasTapped:(id)tapped;	// 0x301f9ff9
- (BOOL)disablesAutomaticKeyboardDismissal;	// 0x301f99e5
- (void)dismissModalOverlayViewController;	// 0x301fa711
- (void)dismissModalViewControllerAnimated:(BOOL)animated;	// 0x3014c311
- (void)dismissModalViewControllerWithTransition:(int)transition;	// 0x3014c38d
// declared property getter: - (id)dropShadowView;	// 0x300ba325
- (double)durationForTransition:(int)transition;	// 0x300e9d79
// converted property getter: - (id)editButtonItem;	// 0x30109a29
- (void)encodeWithCoder:(id)coder;	// 0x301fb279
- (id)existingView;	// 0x301f9535
- (void)forceUnloadView;	// 0x301a3965
// converted property getter: - (CGSize)formSheetSize;	// 0x301f9519
- (void)getRotationContentSettings:(XXStruct_OrggeC *)settings forWindow:(id)window;	// 0x301241e9
// declared property getter: - (BOOL)hidesBottomBarWhenPushed;	// 0x300b0f31
// declared property getter: - (int)interfaceOrientation;	// 0x30111909
// converted property getter: - (BOOL)isEditing;	// 0x30101cf9
// declared property getter: - (BOOL)isInWillRotateCallback;	// 0x300ba0d5
- (BOOL)isModalInPopover;	// 0x3016e755
- (BOOL)isPerformingModalTransition;	// 0x300b8211
// converted property getter: - (BOOL)isSheet;	// 0x300af341
- (BOOL)isViewLoaded;	// 0x300b833d
- (void)loadView;	// 0x301c8f55
// declared property getter: - (BOOL)modalInPopover;	// 0x301fa3d1
// declared property getter: - (int)modalPresentationStyle;	// 0x3011c22d
// converted property getter: - (BOOL)modalPresentationsAreCurrentContext;	// 0x301219cd
// declared property getter: - (int)modalTransitionStyle;	// 0x30120d2d
// declared property getter: - (id)modalTransitionView;	// 0x300ea4b1
// declared property getter: - (id)modalViewController;	// 0x300cec79
- (id)moreListImage;	// 0x301f96a9
- (id)moreListSelectedImage;	// 0x301f96ad
- (id)moreListTableCell;	// 0x301f96b1
// declared property getter: - (id)navigationController;	// 0x300f17e1
// declared property getter: - (id)navigationItem;	// 0x300aced9
- (id)nextResponder;	// 0x300cf0f5
// declared property getter: - (id)nibBundle;	// 0x301fa21d
// declared property getter: - (id)nibName;	// 0x30110d09
// declared property getter: - (id)parentViewController;	// 0x300af179
- (void)presentModalViewController:(id)controller animated:(BOOL)animated;	// 0x30120c9d
- (void)presentModalViewController:(id)controller withTransition:(int)transition;	// 0x30120dad
- (id)presentedViewController;	// 0x301fa0f1
- (void)purgeMemoryForReason:(int)reason;	// 0x301fa105
- (void)removeChildViewController:(id)controller;	// 0x300f7975
- (id)rotatingContentViewForWindow:(id)window;	// 0x300ba0ed
- (id)rotatingFooterView;	// 0x301241e5
- (id)rotatingFooterViewForWindow:(id)window;	// 0x30124179
- (id)rotatingHeaderView;	// 0x301f9841
- (id)rotatingHeaderViewForWindow:(id)window;	// 0x3012410d
// declared property getter: - (id)savedHeaderSuperview;	// 0x301f9691
// declared property getter: - (BOOL)searchBarHidNavBar;	// 0x301f97a1
// declared property getter: - (id)searchDisplayController;	// 0x301f97e9
// converted property setter: - (void)setAutoresizesArchivedViewToFullSize:(BOOL)fullSize;	// 0x301f9559
// declared property setter: - (void)setChildModalViewController:(id)controller;	// 0x30121aa1
// declared property setter: - (void)setChildViewControllers:(id)controllers;	// 0x300b0b85
// declared property setter: - (void)setContentSizeForViewInPopover:(CGSize)popover;	// 0x301b3c51
// converted property setter: - (void)setDefaultFirstResponder:(id)responder;	// 0x301fa365
// declared property setter: - (void)setDropShadowView:(id)view;	// 0x301fa4a5
// converted property setter: - (void)setEditing:(BOOL)editing;	// 0x301ccb61
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x301cca65
// converted property setter: - (void)setFormSheetSize:(CGSize)size;	// 0x300ace05
// declared property setter: - (void)setHidesBottomBarWhenPushed:(BOOL)pushed;	// 0x30170c81
// declared property setter: - (void)setInWillRotateCallback:(BOOL)rotateCallback;	// 0x30124501
// declared property setter: - (void)setInterfaceOrientation:(int)orientation;	// 0x300b9d59
// converted property setter: - (void)setIsSheet:(BOOL)sheet;	// 0x301f9591
// declared property setter: - (void)setModalInPopover:(BOOL)popover;	// 0x30120c51
// declared property setter: - (void)setModalPresentationStyle:(int)style;	// 0x3012198d
// converted property setter: - (void)setModalPresentationsAreCurrentContext:(BOOL)context;	// 0x301f95e9
// declared property setter: - (void)setModalTransitionStyle:(int)style;	// 0x301f9681
// declared property setter: - (void)setModalTransitionView:(id)view;	// 0x3019b869
// declared property setter: - (void)setNibBundle:(id)bundle;	// 0x301fa47d
// declared property setter: - (void)setNibName:(id)name;	// 0x301fa451
// declared property setter: - (void)setParentViewController:(id)controller;	// 0x300b0bad
// declared property setter: - (void)setSearchBarHidNavBar:(BOOL)bar;	// 0x301f9779
// declared property setter: - (void)setSearchDisplayController:(id)controller;	// 0x301f97d1
// declared property setter: - (void)setTabBarItem:(id)item;	// 0x301f971d
// declared property setter: - (void)setTitle:(id)title;	// 0x300b0a4d
// converted property setter: - (void)setToolbarItems:(id)items;	// 0x3011221d
- (void)setToolbarItems:(id)items animated:(BOOL)animated;	// 0x30112235
// declared property setter: - (void)setView:(id)view;	// 0x300b07d1
// declared property setter: - (void)setWantsFullScreenLayout:(BOOL)layout;	// 0x300e40fd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x301f9865
- (BOOL)shouldWindowUseOnePartInterfaceRotationAnimation:(id)animation;	// 0x300baa39
// declared property getter: - (id)splitViewController;	// 0x300ef03d
// declared property getter: - (id)tabBarController;	// 0x300e66e5
// declared property getter: - (id)tabBarItem;	// 0x300e5635
// declared property getter: - (id)title;	// 0x300e4da9
// converted property getter: - (id)toolbarItems;	// 0x301122a1
- (CGAffineTransform)tranformForScreenOriginRotation:(float)screenOriginRotation;	// 0x301fb98d
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x300ea409
- (void)unloadView;	// 0x301fa205
- (void)unloadViewForced:(BOOL)forced;	// 0x301a397d
- (void)unloadViewIfReloadable;	// 0x301b36a9
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x301f96a1
- (void)updateTitleForViewController:(id)viewController;	// 0x301b2f91
- (void)userDidCancelPopoverView:(id)user;	// 0x301f9e8d
// declared property getter: - (id)view;	// 0x300adea1
- (id)viewControllerForRotation;	// 0x300ba1ad
- (void)viewDidAppear:(BOOL)view;	// 0x300b9f51
- (void)viewDidDisappear:(BOOL)view;	// 0x300e3e5d
- (void)viewDidLoad;	// 0x300b0a49
- (void)viewDidMoveToWindow:(id)view shouldAppearOrDisappear:(BOOL)disappear;	// 0x300b8445
- (void)viewDidUnload;	// 0x301a3a8d
- (void)viewWillAppear:(BOOL)view;	// 0x300b8395
- (void)viewWillDisappear:(BOOL)view;	// 0x300e3de9
- (void)viewWillMoveToWindow:(id)view;	// 0x300b8199
- (void)viewWillUnload;	// 0x301a3a89
// declared property getter: - (BOOL)wantsFullScreenLayout;	// 0x300ae1cd
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301f9665
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30126b89
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301f9671
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30124565
- (void)window:(id)window didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x301f9819
- (void)window:(id)window didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x30126fad
- (void)window:(id)window resizeFromOrientation:(int)orientation;	// 0x301fbb49
- (BOOL)window:(id)window shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x300bab8d
- (void)window:(id)window willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fa5bd
- (void)window:(id)window willAnimateFromContentFrame:(CGRect)contentFrame toContentFrame:(CGRect)contentFrame3;	// 0x301fb6d9
- (void)window:(id)window willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30124611
- (void)window:(id)window willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fa4cd
- (void)window:(id)window willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3012425d
@end

