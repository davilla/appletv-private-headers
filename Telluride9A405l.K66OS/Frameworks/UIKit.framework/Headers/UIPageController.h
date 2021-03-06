/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIViewController.h"

@class NSMutableArray, UIPageControl, UIScrollView, UIView;
@protocol UIPageControllerDelegate;

@interface UIPageController : UIViewController {
	NSMutableArray *_viewControllers;	// 156 = 0x9c
	UIView *_wrapperViews[3];	// 160 = 0xa0
	int _notificationState[3];	// 172 = 0xac
	UIScrollView *_scrollView;	// 184 = 0xb8
	UIPageControl *_pageControl;	// 188 = 0xbc
	id<UIPageControllerDelegate> _delegate;	// 192 = 0xc0
	int _pageSpacing;	// 196 = 0xc4
	int _visibleIndex;	// 200 = 0xc8
	int _pageCount;	// 204 = 0xcc
	struct {
		unsigned _firstTouchForView : 1;
		unsigned _isTap : 1;
		unsigned _isDelayed : 1;
		unsigned _sentTouchesEnded : 1;
		unsigned _abandonForwardingRecord : 1;
	} _pageControllerFlags;	// 208 = 0xd0
}
@property(assign, nonatomic) id<UIPageControllerDelegate> delegate;	// G=0x32f7f4c1; S=0x32dfa5cd; @synthesize=_delegate
@property(assign, nonatomic) BOOL displaysPageControl;	// G=0x32f7f1a5; S=0x32f7f1ed; 
@property(assign, nonatomic) int pageCount;	// G=0x32f7f07d; S=0x32dfbad1; 
@property(assign, nonatomic) float pageSpacing;	// G=0x32f7efa9; S=0x32dfa529; 
@property(assign, nonatomic) int visibleIndex;	// G=0x32dfc5d9; S=0x32dfbb95; 
@property(readonly, assign, nonatomic) UIViewController *visibleViewController;	// G=0x32dfcf5d; 
@property(assign, nonatomic) BOOL wraps;	// G=0x32f7f08d; S=0x32f7f0a1; 
- (void)_adjustScrollViewContentInsets;	// 0x32dfae15
- (BOOL)_allowsAutorotation;	// 0x32f7f281
- (void)_createPageControl;	// 0x32dfb881
- (BOOL)_doesVisibleViewControllerSupportInterfaceOrientation:(int)orientation;	// 0x32dfc845
- (void)_getRotationContentSettings:(XXStruct_tXAZTC *)settings;	// 0x32f7f35d
- (BOOL)_hasNextViewController;	// 0x32dfb621
- (BOOL)_hasPreviousViewController;	// 0x32dfaf25
- (BOOL)_hasVisibleViewController;	// 0x32f7f03d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x32dfc7d9
- (BOOL)_isViewControllerBeingUnloaded:(id)unloaded atIndex:(int)index;	// 0x32dfb575
- (id)_loadNextViewController;	// 0x32dfb6f9
- (id)_loadPreviousViewController;	// 0x32dfaff9
- (id)_loadVisibleViewControllerAndNotify:(BOOL)notify;	// 0x32dfb1d1
- (BOOL)_needToLoadNext;	// 0x32f7f001
- (BOOL)_needToLoadPrevious;	// 0x32f7efc5
- (BOOL)_needToLoadVisible;	// 0x32dfc355
- (id)_nextViewController;	// 0x32dfb689
- (int)_nextViewControllerNotificationState;	// 0x32dfe311
- (void)_notifyNextViewController:(int)controller animated:(BOOL)animated;	// 0x32dfe335
- (void)_notifyPreviousViewController:(int)controller animated:(BOOL)animated;	// 0x32dfef49
- (void)_notifyViewController:(id)controller ofState:(int)state previousState:(int)state3 animated:(BOOL)animated;	// 0x32dfc70d
- (void)_notifyVisibleViewController:(int)controller animated:(BOOL)animated;	// 0x32dfc685
- (void)_pageChanged:(id)changed;	// 0x32f7f1b9
- (id)_pageControllerScrollView;	// 0x32dfa681
- (id)_previousViewController;	// 0x32dfaf89
- (int)_previousViewControllerNotificationState;	// 0x32dfe325
- (void)_replaceViewControllerAtIndex:(int)index withViewController:(id)viewController;	// 0x32dfb32d
- (id)_scrollView;	// 0x32dfa6d9
- (void)_scrollView:(id)view boundsDidChangeToSize:(CGSize)bounds;	// 0x32dfac05
- (void)_scrollViewDidEndPaging;	// 0x32dfee69
- (void)_scrollViewDidScroll:(id)_scrollView forceUpdate:(BOOL)update;	// 0x32dfc969
- (CGRect)_scrollViewFrame;	// 0x32dfaa3d
- (void)_scrollViewWillBeginPaging;	// 0x32dfe27d
- (void)_setNextViewController:(id)controller;	// 0x32dfb86d
- (void)_setNextViewControllerNotificationState:(int)state;	// 0x32dfc341
- (void)_setPreviousViewController:(id)controller;	// 0x32dfb60d
- (void)_setPreviousViewControllerNotificationState:(int)state;	// 0x32dfc31d
- (void)_setVisibleViewController:(id)controller;	// 0x32dfb319
- (void)_setVisibleViewControllerNotificationState:(int)state;	// 0x32dfc32d
- (BOOL)_shouldUseOnePartRotation;	// 0x32f7f335
- (id)_visibleViewController;	// 0x32dfb15d
- (int)_visibleViewControllerNotificationState;	// 0x32dfc6f9
- (void)dealloc;	// 0x32dfe089
// declared property getter: - (id)delegate;	// 0x32f7f4c1
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x32f7f431
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x32f7f495
// declared property getter: - (BOOL)displaysPageControl;	// 0x32f7f1a5
- (int)indexOfViewController:(id)viewController;	// 0x32dfc885
- (void)loadView;	// 0x32dfa6e9
// declared property getter: - (int)pageCount;	// 0x32f7f07d
// declared property getter: - (float)pageSpacing;	// 0x32f7efa9
- (void)reloadViewControllerAtIndex:(int)index;	// 0x32dfc24d
- (id)rotatingFooterView;	// 0x32f7f30d
- (id)rotatingHeaderView;	// 0x32f7f2e5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32dfa5cd
// declared property setter: - (void)setDisplaysPageControl:(BOOL)control;	// 0x32f7f1ed
// declared property setter: - (void)setPageCount:(int)count;	// 0x32dfbad1
// declared property setter: - (void)setPageSpacing:(float)spacing;	// 0x32dfa529
// declared property setter: - (void)setVisibleIndex:(int)index;	// 0x32dfbb95
- (void)setVisibleIndex:(int)index animated:(BOOL)animated;	// 0x32f7f05d
- (void)setVisibleIndex:(int)index preservingLoadedViewControllers:(BOOL)controllers animated:(BOOL)animated;	// 0x32dfbbb5
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x32f7f0a1
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x32dfc82d
- (void)viewDidAppear:(BOOL)view;	// 0x32dfce95
- (void)viewDidDisappear:(BOOL)view;	// 0x32dfd719
- (void)viewDidUnload;	// 0x32f7ee81
- (void)viewWillAppear:(BOOL)view;	// 0x32dfc63d
- (void)viewWillDisappear:(BOOL)view;	// 0x32dfd4ed
// declared property getter: - (int)visibleIndex;	// 0x32dfc5d9
// declared property getter: - (id)visibleViewController;	// 0x32dfcf5d
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32f7f3f9
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32f7f3c1
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32f7f45d
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x32f7f389
// declared property getter: - (BOOL)wraps;	// 0x32f7f08d
@end

