/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class UIPopoverController, NSString, UIBarButtonItem, UIView, NSArray;
@protocol UISplitViewControllerDelegate;

@interface UISplitViewController : UIViewController {
@private
	id _delegate;	// 156 = 0x9c
	UIBarButtonItem *_barButtonItem;	// 160 = 0xa0
	NSString *_buttonTitle;	// 164 = 0xa4
	UIPopoverController *_hiddenPopoverController;	// 168 = 0xa8
	UIView *_rotationSnapshotView;	// 172 = 0xac
	float _masterColumnWidth;	// 176 = 0xb0
	float _gutterWidth;	// 180 = 0xb4
	float _cornerRadius;	// 184 = 0xb8
	int _rotatingFromOrientation;	// 188 = 0xbc
	int _lastPresentedOrientation;	// 192 = 0xc0
	CGRect _rotatingFromMasterViewFrame;	// 196 = 0xc4
	CGRect _rotatingToMasterViewFrame;	// 212 = 0xd4
	NSArray *_cornerImageViews;	// 228 = 0xe4
	UIView *_masterBackgroundView;	// 232 = 0xe8
	struct {
		unsigned hidesMasterViewInPortrait : 1;
		unsigned delegateImplementsShouldHide : 1;
		unsigned hidden : 3;
		unsigned delegateHandlesTogglingMaster : 1;
		unsigned delegateProvidesBackgroundView : 1;
		unsigned delegateWantsUnSlideCallback : 1;
		unsigned masterOnSlide : 1;
		unsigned delegateWantsWillShowCallback : 1;
		unsigned delegateWantsWillHideCallback : 1;
	} _splitViewControllerFlags;	// 236 = 0xec
	unsigned _slideTransitionCount;	// 240 = 0xf0
}
@property(assign, nonatomic) id<UISplitViewControllerDelegate> delegate;	// G=0x3596c09d; S=0x359685b1; @synthesize=_delegate
@property(assign) float gutterWidth;	// G=0x3596a10d; S=0x3596a11d; converted property
@property(assign) BOOL hidesMasterViewInPortrait;	// G=0x35969d7d; S=0x35969ebd; converted property
@property(assign) float leftColumnWidth;	// G=0x35968f21; S=0x35968f31; converted property
@property(assign) float masterColumnWidth;	// G=0x3596a0c5; S=0x3596a0d5; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x35969729; S=0x35969739; 
+ (BOOL)_optsOutOfPopoverControllerHierarchyCheck;	// 0x35968db1
- (id)initWithCoder:(id)coder;	// 0x35967fa5
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x35967f61
- (void)__viewWillLayoutSubviews;	// 0x3596bd79
- (BOOL)_canSlideMaster;	// 0x35968f69
- (void)_commonInit;	// 0x35967e5d
- (CGRect)_detailViewFrame;	// 0x35968791
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x3596c095
- (BOOL)_isLandscape;	// 0x35968431
- (void)_loadNewSubviews:(id)subviews;	// 0x359680a5
- (CGRect)_masterViewFrame;	// 0x359686f5
- (BOOL)_masterViewShown;	// 0x35968535
- (void)_removeRoundedCorners;	// 0x35968ce9
- (void)_setupRoundedCorners;	// 0x35968879
- (BOOL)_shouldPersistViewWhenCoding;	// 0x35968335
- (void)_slideIn:(BOOL)anIn viewController:(id)controller animated:(BOOL)animated totalDuration:(double)duration completion:(id)completion;	// 0x35968fd1
- (void)_toggleVisibilityOfViewController:(id)viewController;	// 0x3596a415
- (void)_updateMasterViewControllerFrame;	// 0x3596b995
- (void)_viewControllerHiding:(id)hiding;	// 0x35968db5
- (void)dealloc;	// 0x35967fe9
// declared property getter: - (id)delegate;	// 0x3596c09d
- (id)detailViewController;	// 0x35969d0d
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3596b33d
// converted property getter: - (float)gutterWidth;	// 0x3596a10d
- (BOOL)hidesMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x3596a7a9
- (BOOL)hidesMasterViewInLandscape;	// 0x35969e1d
// converted property getter: - (BOOL)hidesMasterViewInPortrait;	// 0x35969d7d
- (BOOL)isRotating;	// 0x3596a719
// converted property getter: - (float)leftColumnWidth;	// 0x35968f21
- (void)loadSubviews;	// 0x359680a1
- (void)loadView;	// 0x35968339
// converted property getter: - (float)masterColumnWidth;	// 0x3596a0c5
- (id)masterViewController;	// 0x35969c9d
- (void)purgeMemoryForReason:(int)reason;	// 0x3596a57d
- (BOOL)revealsMasterViewDuringRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x3596a731
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x359685b1
// converted property setter: - (void)setGutterWidth:(float)width;	// 0x3596a11d
// converted property setter: - (void)setHidesMasterViewInPortrait:(BOOL)portrait;	// 0x35969ebd
// converted property setter: - (void)setLeftColumnWidth:(float)width;	// 0x35968f31
// converted property setter: - (void)setMasterColumnWidth:(float)width;	// 0x3596a0d5
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x35969739
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3596a65d
- (void)snapshotAllViews;	// 0x3596aed9
- (void)snapshotForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x3596b075
- (void)snapshotMasterView;	// 0x3596abf1
- (void)toggleMasterVisible:(id)visible;	// 0x3596a501
- (void)unloadViewForced:(BOOL)forced;	// 0x35968471
// declared property getter: - (id)viewControllers;	// 0x35969729
- (void)viewDidAppear:(BOOL)view;	// 0x3596a239
- (void)viewDidDisappear:(BOOL)view;	// 0x3596a381
- (void)viewWillAppear:(BOOL)view;	// 0x3596a155
- (void)viewWillDisappear:(BOOL)view;	// 0x3596a2ed
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3596b195
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3596a7fd
@end

