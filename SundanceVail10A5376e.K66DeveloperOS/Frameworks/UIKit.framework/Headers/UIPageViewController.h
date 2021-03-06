/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "_UIQueuingScrollViewDelegate.h"
#import "_UIQueuingScrollViewDataSource.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIViewController.h"

@class NSMutableDictionary, _UIQueuingScrollView, NSArray, NSDictionary, UITapGestureRecognizer, NSMutableArray, _UIPageCurl, UIPanGestureRecognizer, _UIPageViewControllerContentView;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController : UIViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource> {
	id<UIPageViewControllerDelegate> _delegate;	// 196 = 0xc4
	id<UIPageViewControllerDataSource> _dataSource;	// 200 = 0xc8
	int _transitionStyle;	// 204 = 0xcc
	int _navigationOrientation;	// 208 = 0xd0
	int _spineLocation;	// 212 = 0xd4
	BOOL _doubleSided;	// 216 = 0xd8
	BOOL _pageControlRequiresValidation;	// 217 = 0xd9
	NSArray *_viewControllers;	// 220 = 0xdc
	_UIPageCurl *_pageCurl;	// 224 = 0xe0
	UIPanGestureRecognizer *_panGestureRecognizer;	// 228 = 0xe4
	UITapGestureRecognizer *_tapGestureRecognizer;	// 232 = 0xe8
	BOOL _stashingViewControllersForRotation;	// 236 = 0xec
	NSArray *_viewControllersStashedForRotation;	// 240 = 0xf0
	BOOL _interfaceRotating;	// 244 = 0xf4
	NSMutableArray *_rotationSnapshotViews;	// 248 = 0xf8
	int _spineLocationPriorToInterfaceRotation;	// 252 = 0xfc
	UIEdgeInsets _tapRegionInsets;	// 256 = 0x100
	CGSize _tapRegionBreadths;	// 272 = 0x110
	UIEdgeInsets _effectiveTapRegionInsets;	// 280 = 0x118
	CGSize _effectiveTapRegionBreadths;	// 296 = 0x128
	CGRect *_tapRegions;	// 304 = 0x130
	float _pageSpacing;	// 308 = 0x134
	NSMutableDictionary *_cachedViewControllersForCurl;	// 312 = 0x138
	NSMutableArray *_cachedViewControllersForScroll;	// 316 = 0x13c
	NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;	// 320 = 0x140
	int _lastKnownNavigationDirection;	// 324 = 0x144
	int _disableAutorotationCount;	// 328 = 0x148
	struct {
		unsigned delegateWantsTransitionWillBegin : 1;
		unsigned delegateWantsTransitionCompleted : 1;
		unsigned delegateCustomizesSpineLocationForInterfaceOrientation : 1;
		unsigned dataSourceSuppliesBeforeViewController : 1;
		unsigned dataSourceSuppliesAfterViewController : 1;
		unsigned dataSourceSuppliesPageCount : 1;
		unsigned dataSourceSuppliesPageNumber : 1;
	} _delegateFlags;	// 332 = 0x14c
}
@property(readonly, assign, nonatomic) _UIPageViewControllerContentView *_contentView;	// G=0x305bb6c1; 
@property(readonly, assign, nonatomic, getter=_isInterfaceRotating) BOOL _interfaceRotating;	// G=0x305c27a9; @synthesize
@property(readonly, assign, nonatomic) int _navigationOrientation;	// G=0x305bad71; 
@property(readonly, assign, nonatomic, getter=_isPageControlVisible) BOOL _pageControlVisible;	// G=0x305bb721; 
@property(assign, nonatomic, setter=_setPageSpacing:) float _pageSpacing;	// G=0x305bb7dd; S=0x305bb7ed; 
@property(readonly, assign, nonatomic) _UIQueuingScrollView *_scrollView;	// G=0x305bb6f9; 
@property(readonly, assign, nonatomic) int _transitionStyle;	// G=0x305bad51; 
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers;	// G=0x305c2769; S=0x305c2779; @synthesize
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation;	// G=0x305c2789; S=0x305c2799; @synthesize
@property(assign, nonatomic) id<UIPageViewControllerDataSource> dataSource;	// G=0x305baba9; S=0x305babb9; 
@property(assign, nonatomic) id<UIPageViewControllerDelegate> delegate;	// G=0x305baac1; S=0x305baad1; 
@property(assign, nonatomic, getter=isDoubleSided) BOOL doubleSided;	// G=0x305badf1; S=0x305bae01; 
@property(readonly, assign, nonatomic) NSArray *gestureRecognizers;	// G=0x305bae8d; 
@property(readonly, assign, nonatomic) int navigationOrientation;	// G=0x305bad81; 
@property(readonly, assign, nonatomic) int spineLocation;	// G=0x305bade1; 
@property(readonly, assign, nonatomic) int transitionStyle;	// G=0x305bad61; 
@property(readonly, assign, nonatomic) NSArray *viewControllers;	// G=0x305baed9; 
+ (id)_incomingViewControllerKeys;	// 0x305be939
+ (BOOL)_isNavigationOrientation:(int)orientation supportedForTransitionStyle:(int)transitionStyle;	// 0x305ba115
+ (BOOL)_isSpineLocation:(int)location supportedForTransitionStyle:(int)transitionStyle;	// 0x305ba129
+ (BOOL)_isSupportedTransitionStyle:(int)style;	// 0x305ba101
+ (id)_outgoingViewControllerKeys;	// 0x305be8d9
+ (id)stringForSpineLocation:(int)spineLocation;	// 0x305bc389
- (id)initWithCoder:(id)coder;	// 0x305ba645
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x305ba455
- (id)initWithTransitionStyle:(int)transitionStyle navigationOrientation:(int)orientation options:(id)options;	// 0x305ba14d
- (void)_beginDisablingInterfaceAutorotation;	// 0x305be999
- (void)_cacheViewControllerForScroll:(id)scroll;	// 0x305bfe61
- (BOOL)_canHandleGestures;	// 0x305be421
- (void)_child:(id)child beginAppearanceTransition:(BOOL)transition animated:(BOOL)animated;	// 0x305bbb21
- (void)_child:(id)child beginAppearanceTransitionIfPossible:(BOOL)possible animated:(BOOL)animated;	// 0x305bbbed
- (BOOL)_child:(id)child canBeginAppearanceTransition:(BOOL)transition;	// 0x305bbb71
- (void)_child:(id)child didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x305bbdc9
- (void)_child:(id)child endAppearanceTransitionIfPossible:(BOOL)possible;	// 0x305bbcbd
- (void)_child:(id)child willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x305bbd85
- (void)_child:(id)child willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x305bbd41
- (BOOL)_childCanEndAppearanceTransition:(id)transition;	// 0x305bbc65
- (void)_childEndAppearanceTransition:(id)transition;	// 0x305bbc31
- (CGSize)_contentSizeForSize:(CGSize)size;	// 0x305bb78d
// declared property getter: - (id)_contentView;	// 0x305bb6c1
- (void)_contentViewFrameOrBoundsDidChange;	// 0x305be025
- (CGRect)_disabledScrollingRegion;	// 0x305bb601
- (CGSize)_effectiveTapRegionBreadths;	// 0x305bb371
- (UIEdgeInsets)_effectiveTapRegionInsets;	// 0x305bb029
- (void)_endDisablingInterfaceAutorotation;	// 0x305be9fd
- (void)_flushViewController:(id)controller animated:(BOOL)animated;	// 0x305c2281
- (BOOL)_gestureRecognizerShouldBegin:(id)_gestureRecognizer;	// 0x305c0ab5
- (void)_handlePanGesture:(id)gesture;	// 0x305c0d45
- (void)_handleTapGesture:(id)gesture;	// 0x305c1421
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(int)direction;	// 0x305c025d
- (void)_invalidateEffectiveTapRegions;	// 0x305bafb5
- (void)_invalidatePageCurl;	// 0x305bc5a1
- (void)_invalidateViewControllersStashedForCurlFromDataSource;	// 0x305be8b9
- (BOOL)_isCurrentViewControllerStateValid;	// 0x305be1e5
// declared property getter: - (BOOL)_isInterfaceRotating;	// 0x305c27a9
// declared property getter: - (BOOL)_isPageControlVisible;	// 0x305bb721
- (int)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)panGestureRecognizer suggestedVelocity:(float *)velocity;	// 0x305c0bb9
// declared property getter: - (int)_navigationOrientation;	// 0x305bad71
- (id)_pageControl;	// 0x305bb765
- (void)_pageControlValueChanged:(id)changed;	// 0x305c2535
// declared property getter: - (float)_pageSpacing;	// 0x305bb7dd
- (void)_populateIncomingViewControllersInMap:(id)map withViewControllers:(id)viewControllers forCurlInDirection:(int)direction;	// 0x305be7bd
- (void)_populateOutgoingViewControllersInMap:(id)map;	// 0x305be6ed
- (id)_queuingScrollView:(id)view viewBefore:(BOOL)before view:(id)view3;	// 0x305c2179
- (int)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(int)interfaceOrientationAndUpdateStashedViewControllers;	// 0x305bc5e1
// declared property getter: - (id)_scrollView;	// 0x305bb6f9
- (void)_sendChildViewWill:(BOOL)_sendChildView appear:(BOOL)appear animated:(BOOL)animated;	// 0x305bbe01
- (void)_setDisabledScrollingRegion:(CGRect)region;	// 0x305bb669
// declared property setter: - (void)_setPageSpacing:(float)spacing;	// 0x305bb7ed
- (void)_setSpineLocation:(int)location;	// 0x305bad91
- (void)_setTapRegionBreadths:(CGSize)breadths;	// 0x305bb5a9
- (void)_setTapRegionInsets:(UIEdgeInsets)insets;	// 0x305bb2e1
// declared property setter: - (void)_setViewControllers:(id)controllers;	// 0x305c2779
- (void)_setViewControllers:(id)controllers withCurlOfType:(int)type fromLocation:(CGPoint)location direction:(int)direction animated:(BOOL)animated notifyDelegate:(BOOL)delegate completion:(id)completion;	// 0x305bea79
- (void)_setViewControllers:(id)controllers withScrollInDirection:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x305bfecd
// declared property setter: - (void)_setViewControllersStashedForRotation:(id)rotation;	// 0x305c2799
- (BOOL)_shouldBeginNavigationInDirection:(int *)direction inResponseToPanGestureRecognizer:(id)panGestureRecognizer;	// 0x305c0995
- (BOOL)_shouldCompleteManualCurlWithSuggestedVelocity:(float *)suggestedVelocity;	// 0x305c0cd5
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToTapGestureRecognizer:(id)tapGestureRecognizer;	// 0x305c07fd
- (BOOL)_shouldNavigateInDirection:(int *)direction inResponseToVelocity:(float *)velocity ofGestureRecognizedByPanGestureRecognizer:(id)gestureRecognizedByPanGestureRecognizer;	// 0x305c08c1
- (BOOL)_shouldPersistViewWhenCoding;	// 0x305ba479
- (BOOL)_shouldSynthesizeSupportedOrientations;	// 0x305bc29d
- (CGSize)_tapRegionBreadths;	// 0x305bb589
- (UIEdgeInsets)_tapRegionInsets;	// 0x305bb2bd
- (CGRect *)_tapRegions;	// 0x305c04a9
// declared property getter: - (int)_transitionStyle;	// 0x305bad51
- (void)_updatePageControlViaDataSourceIfNecessary;	// 0x305c14c9
- (NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(int)spineLocation;	// 0x305bc3fd
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)viewControllers validRange:(NSRange)range;	// 0x305bc411
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)viewControllers animated:(BOOL)animated;	// 0x305be249
- (id)_viewControllerAfterViewController:(id)controller;	// 0x305be4c9
- (id)_viewControllerBefore:(BOOL)before viewController:(id)controller;	// 0x305be455
- (id)_viewControllerBeforeViewController:(id)controller;	// 0x305be4b5
// declared property getter: - (id)_viewControllers;	// 0x305c2769
- (id)_viewControllersForCurlWithViewControllers:(id)viewControllers direction:(int)direction;	// 0x305be4dd
- (id)_viewControllersForPendingSpineLocation:(int)pendingSpineLocation;	// 0x305bc475
// declared property getter: - (id)_viewControllersStashedForRotation;	// 0x305c2789
// declared property getter: - (id)dataSource;	// 0x305baba9
- (void)dealloc;	// 0x305ba911
// declared property getter: - (id)delegate;	// 0x305baac1
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x305bdd95
- (void)encodeWithCoder:(id)coder;	// 0x305ba47d
// declared property getter: - (id)gestureRecognizers;	// 0x305bae8d
// declared property getter: - (BOOL)isDoubleSided;	// 0x305badf1
- (void)loadView;	// 0x305bb89d
// declared property getter: - (int)navigationOrientation;	// 0x305bad81
- (void)queuingScrollView:(id)view didBailoutOfScrollAndRevealedView:(id)scrollAndRevealedView;	// 0x305c2041
- (void)queuingScrollView:(id)view didCommitManualScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 direction:(int)direction animated:(BOOL)animated canComplete:(BOOL)complete;	// 0x305c194d
- (void)queuingScrollView:(id)view didEndManualScroll:(BOOL)scroll toRevealView:(id)revealView direction:(int)direction animated:(BOOL)animated didFinish:(BOOL)finish didComplete:(BOOL)complete;	// 0x305c1d31
- (void)queuingScrollView:(id)view didFlushView:(id)view2 animated:(BOOL)animated;	// 0x305c24d9
- (id)queuingScrollView:(id)view viewAfterView:(id)view2;	// 0x305c2261
- (id)queuingScrollView:(id)view viewBeforeView:(id)view2;	// 0x305c2241
- (void)queuingScrollView:(id)view willManuallyScroll:(BOOL)scroll toRevealView:(id)revealView concealView:(id)view4 animated:(BOOL)animated;	// 0x305c15cd
- (BOOL)queuingScrollViewShouldLayoutSubviews:(id)queuingScrollView;	// 0x305c251d
// declared property setter: - (void)setDataSource:(id)source;	// 0x305babb9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x305baad1
// declared property setter: - (void)setDoubleSided:(BOOL)sided;	// 0x305bae01
- (void)setViewControllers:(id)controllers direction:(int)direction animated:(BOOL)animated completion:(id)completion;	// 0x305c012d
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;	// 0x305bbb19
- (BOOL)shouldAutomaticallyForwardRotationMethods;	// 0x305bbb1d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x305bc12d
// declared property getter: - (int)spineLocation;	// 0x305bade1
// declared property getter: - (int)transitionStyle;	// 0x305bad61
// declared property getter: - (id)viewControllers;	// 0x305baed9
- (void)viewDidAppear:(BOOL)view;	// 0x305bc055
- (void)viewDidDisappear:(BOOL)view;	// 0x305bc0e5
- (void)viewWillAppear:(BOOL)view;	// 0x305bbf41
- (void)viewWillDisappear:(BOOL)view;	// 0x305bc09d
- (void)viewWillUnload;	// 0x305bbaf1
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x305bd141
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x305bc941
@end

