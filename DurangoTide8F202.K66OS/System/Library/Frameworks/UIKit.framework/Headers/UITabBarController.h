/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import "UIViewController.h"
#import "UITabBarDelegate.h"

@class NSMutableArray, UITabBar, UINavigationController, NSArray, UIView;
@protocol UITabBarControllerDelegate;

@interface UITabBarController : UIViewController <UITabBarDelegate, NSCoding> {
@private
	UITabBar *_tabBar;	// 132 = 0x84
	UIView *_containerView;	// 136 = 0x88
	UIView *_viewControllerTransitionView;	// 140 = 0x8c
	NSMutableArray *_viewControllers;	// 144 = 0x90
	id _tabBarItemsToViewControllers;	// 148 = 0x94
	UIViewController *_selectedViewController;	// 152 = 0x98
	UINavigationController *_moreNavigationController;	// 156 = 0x9c
	NSArray *_customizableViewControllers;	// 160 = 0xa0
	id<UITabBarControllerDelegate> _delegate;	// 164 = 0xa4
	UIViewController *_selectedViewControllerDuringWillAppear;	// 168 = 0xa8
	UIViewController *_transientViewController;	// 172 = 0xac
	unsigned _maxItems;	// 176 = 0xb0
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _tabBarControllerFlags;	// 180 = 0xb4
}
@property(copy, nonatomic) NSArray *customizableViewControllers;	// G=0x305fd4a9; S=0x306002f1; @synthesize=_customizableViewControllers
@property(assign, nonatomic) id<UITabBarControllerDelegate> delegate;	// G=0x30601939; S=0x3060040d; @synthesize=_delegate
@property(readonly, assign, nonatomic) UINavigationController *moreNavigationController;	// G=0x305fd20d; 
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x305fc0d5; S=0x3060173d; 
@property(assign, nonatomic) UIViewController *selectedViewController;	// G=0x305fc1c5; S=0x30686cdd; 
@property(assign) BOOL showsEditButtonOnLeft;	// G=0x30715715; S=0x305fbd1d; converted property
@property(readonly, assign, nonatomic) UITabBar *tabBar;	// G=0x305fe129; 
@property(retain) UIViewController *transientViewController;	// G=0x305fc085; S=0x306017ed; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x305fc171; S=0x305fbde9; 
+ (Class)_moreNavigationControllerClass;	// 0x307159b5
- (id)initWithCoder:(id)coder;	// 0x30715ced
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x305fb571
- (BOOL)_allowSelectionWithinMoreList;	// 0x305fc161
- (BOOL)_allowsAutorotation;	// 0x3071593d
- (BOOL)_allowsCustomizing;	// 0x305fd481
- (void)_configureTargetActionForTabBarItem:(id)tabBarItem;	// 0x305fd1b5
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)orientation;	// 0x306015f1
- (void)_ensureSelectedViewControllerIsDisplayed;	// 0x3060048d
- (id)_existingMoreNavigationController;	// 0x305fc239
- (CGRect)_frameForViewController:(id)viewController;	// 0x30600579
- (void)_getRotationContentSettings:(XXStruct_OrggeC *)settings;	// 0x3071588d
- (BOOL)_isBarHidden;	// 0x30715701
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3060158d
- (void)_layoutViewController:(id)controller;	// 0x30601511
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x30715ca1
- (void)_prepareTabBar;	// 0x305fb9b5
- (BOOL)_reallyWantsFullScreenLayout;	// 0x305fb8a1
- (void)_rebuildTabBarItemsAnimated:(BOOL)animated;	// 0x305fc25d
- (void)_rebuildTabBarItemsIfNeeded;	// 0x30601af9
- (id)_selectedViewControllerInTabBar;	// 0x305fc0b5
- (void)_setMaximumNumberOfItems:(unsigned)items;	// 0x30715729
- (void)_setSelectedTabBarItem:(id)item;	// 0x30601b95
- (void)_setSelectedViewController:(id)controller;	// 0x30601979
- (BOOL)_shouldPersistViewWhenCoding;	// 0x307156fd
- (BOOL)_shouldUseOnePartRotation;	// 0x307158b5
- (void)_tabBarItemClicked:(id)clicked;	// 0x30686b05
- (id)_transitionView;	// 0x305fbce1
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x306014c1
- (id)_viewControllerForTabBarItem:(id)tabBarItem;	// 0x30686c79
- (id)_viewControllersInTabBar;	// 0x306002a1
- (id)allViewControllers;	// 0x305fbdd9
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x3068bcbd
- (void)beginCustomizingTabBar:(id)bar;	// 0x30716005
- (void)concealTabBarSelection;	// 0x3068cf61
// declared property getter: - (id)customizableViewControllers;	// 0x305fd4a9
- (void)dealloc;	// 0x3060dbbd
// declared property getter: - (id)delegate;	// 0x30601939
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x307157a5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x3071573d
- (void)encodeWithCoder:(id)coder;	// 0x30715e81
- (void)hideBarWithTransition:(int)transition;	// 0x30687c9d
- (void)loadView;	// 0x305fb631
// declared property getter: - (id)moreNavigationController;	// 0x305fd20d
- (void)purgeMemoryForReason:(int)reason;	// 0x30715b1d
- (void)revealTabBarSelection;	// 0x3068d83d
- (id)rotatingFooterView;	// 0x307158d9
- (id)rotatingHeaderView;	// 0x30715919
// declared property getter: - (unsigned)selectedIndex;	// 0x305fc0d5
// declared property getter: - (id)selectedViewController;	// 0x305fc1c5
// declared property setter: - (void)setCustomizableViewControllers:(id)controllers;	// 0x306002f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3060040d
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x3060173d
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0x30686cdd
// converted property setter: - (void)setShowsEditButtonOnLeft:(BOOL)left;	// 0x305fbd1d
- (void)setTabBar:(id)bar;	// 0x30715c19
// converted property setter: - (void)setTransientViewController:(id)controller;	// 0x306017ed
- (void)setTransientViewController:(id)controller animated:(BOOL)animated;	// 0x30601805
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x305fbde9
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x305fbe01
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x306015d9
- (void)showBarWithTransition:(int)transition;	// 0x30602431
// converted property getter: - (BOOL)showsEditButtonOnLeft;	// 0x30715715
// declared property getter: - (id)tabBar;	// 0x305fe129
- (void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x307159d5
- (void)tabBar:(id)bar willBeginCustomizingItems:(id)items;	// 0x30715a49
- (void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x307161e9
// converted property getter: - (id)transientViewController;	// 0x305fc085
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x3060216d
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2 transition:(int)transition shouldSetSelected:(BOOL)selected;	// 0x30602199
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x30601341
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x30715aa9
// declared property getter: - (id)viewControllers;	// 0x305fc171
- (void)viewDidAppear:(BOOL)view;	// 0x306016ad
- (void)viewDidDisappear:(BOOL)view;	// 0x30715b81
- (void)viewWillAppear:(BOOL)view;	// 0x3060041d
- (void)viewWillDisappear:(BOOL)view;	// 0x30715bcd
- (void)viewWillLayoutSubviews;	// 0x306027ad
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x307157cd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3071580d
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x30715765
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3071584d
@end

