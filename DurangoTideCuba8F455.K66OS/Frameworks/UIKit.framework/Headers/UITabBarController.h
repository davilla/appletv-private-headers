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
@property(copy, nonatomic) NSArray *customizableViewControllers;	// G=0x300e64a9; S=0x300e92f1; @synthesize=_customizableViewControllers
@property(assign, nonatomic) id<UITabBarControllerDelegate> delegate;	// G=0x300ea939; S=0x300e940d; @synthesize=_delegate
@property(readonly, assign, nonatomic) UINavigationController *moreNavigationController;	// G=0x300e620d; 
@property(assign, nonatomic) unsigned selectedIndex;	// G=0x300e50d5; S=0x300ea73d; 
@property(assign, nonatomic) UIViewController *selectedViewController;	// G=0x300e51c5; S=0x3016fcdd; 
@property(assign) BOOL showsEditButtonOnLeft;	// G=0x301fe715; S=0x300e4d1d; converted property
@property(readonly, assign, nonatomic) UITabBar *tabBar;	// G=0x300e7129; 
@property(retain) UIViewController *transientViewController;	// G=0x300e5085; S=0x300ea7ed; converted property
@property(copy, nonatomic) NSArray *viewControllers;	// G=0x300e5171; S=0x300e4de9; 
+ (Class)_moreNavigationControllerClass;	// 0x301fe9b5
- (id)initWithCoder:(id)coder;	// 0x301feced
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x300e4571
- (BOOL)_allowSelectionWithinMoreList;	// 0x300e5161
- (BOOL)_allowsAutorotation;	// 0x301fe93d
- (BOOL)_allowsCustomizing;	// 0x300e6481
- (void)_configureTargetActionForTabBarItem:(id)tabBarItem;	// 0x300e61b5
- (BOOL)_doAllViewControllersSupportInterfaceOrientation:(int)orientation;	// 0x300ea5f1
- (void)_ensureSelectedViewControllerIsDisplayed;	// 0x300e948d
- (id)_existingMoreNavigationController;	// 0x300e5239
- (CGRect)_frameForViewController:(id)viewController;	// 0x300e9579
- (void)_getRotationContentSettings:(XXStruct_OrggeC *)settings;	// 0x301fe88d
- (BOOL)_isBarHidden;	// 0x301fe701
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x300ea58d
- (void)_layoutViewController:(id)controller;	// 0x300ea511
- (void)_populateArchivedChildViewControllers:(id)controllers;	// 0x301feca1
- (void)_prepareTabBar;	// 0x300e49b5
- (BOOL)_reallyWantsFullScreenLayout;	// 0x300e48a1
- (void)_rebuildTabBarItemsAnimated:(BOOL)animated;	// 0x300e525d
- (void)_rebuildTabBarItemsIfNeeded;	// 0x300eaaf9
- (id)_selectedViewControllerInTabBar;	// 0x300e50b5
- (void)_setMaximumNumberOfItems:(unsigned)items;	// 0x301fe729
- (void)_setSelectedTabBarItem:(id)item;	// 0x300eab95
- (void)_setSelectedViewController:(id)controller;	// 0x300ea979
- (BOOL)_shouldPersistViewWhenCoding;	// 0x301fe6fd
- (BOOL)_shouldUseOnePartRotation;	// 0x301fe8b5
- (void)_tabBarItemClicked:(id)clicked;	// 0x3016fb05
- (id)_transitionView;	// 0x300e4ce1
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// 0x300ea4c1
- (id)_viewControllerForTabBarItem:(id)tabBarItem;	// 0x3016fc79
- (id)_viewControllersInTabBar;	// 0x300e92a1
- (id)allViewControllers;	// 0x300e4dd9
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x30174cbd
- (void)beginCustomizingTabBar:(id)bar;	// 0x301ff005
- (void)concealTabBarSelection;	// 0x30175f61
// declared property getter: - (id)customizableViewControllers;	// 0x300e64a9
- (void)dealloc;	// 0x300f6bbd
// declared property getter: - (id)delegate;	// 0x300ea939
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x301fe7a5
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x301fe73d
- (void)encodeWithCoder:(id)coder;	// 0x301fee81
- (void)hideBarWithTransition:(int)transition;	// 0x30170c9d
- (void)loadView;	// 0x300e4631
// declared property getter: - (id)moreNavigationController;	// 0x300e620d
- (void)purgeMemoryForReason:(int)reason;	// 0x301feb1d
- (void)revealTabBarSelection;	// 0x3017683d
- (id)rotatingFooterView;	// 0x301fe8d9
- (id)rotatingHeaderView;	// 0x301fe919
// declared property getter: - (unsigned)selectedIndex;	// 0x300e50d5
// declared property getter: - (id)selectedViewController;	// 0x300e51c5
// declared property setter: - (void)setCustomizableViewControllers:(id)controllers;	// 0x300e92f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300e940d
// declared property setter: - (void)setSelectedIndex:(unsigned)index;	// 0x300ea73d
// declared property setter: - (void)setSelectedViewController:(id)controller;	// 0x3016fcdd
// converted property setter: - (void)setShowsEditButtonOnLeft:(BOOL)left;	// 0x300e4d1d
- (void)setTabBar:(id)bar;	// 0x301fec19
// converted property setter: - (void)setTransientViewController:(id)controller;	// 0x300ea7ed
- (void)setTransientViewController:(id)controller animated:(BOOL)animated;	// 0x300ea805
// declared property setter: - (void)setViewControllers:(id)controllers;	// 0x300e4de9
- (void)setViewControllers:(id)controllers animated:(BOOL)animated;	// 0x300e4e01
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x300ea5d9
- (void)showBarWithTransition:(int)transition;	// 0x300eb431
// converted property getter: - (BOOL)showsEditButtonOnLeft;	// 0x301fe715
// declared property getter: - (id)tabBar;	// 0x300e7129
- (void)tabBar:(id)bar didEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x301fe9d5
- (void)tabBar:(id)bar willBeginCustomizingItems:(id)items;	// 0x301fea49
- (void)tabBar:(id)bar willEndCustomizingItems:(id)items changed:(BOOL)changed;	// 0x301ff1e9
// converted property getter: - (id)transientViewController;	// 0x300e5085
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2;	// 0x300eb16d
- (void)transitionFromViewController:(id)viewController toViewController:(id)viewController2 transition:(int)transition shouldSetSelected:(BOOL)selected;	// 0x300eb199
- (void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;	// 0x300ea341
- (void)updateTabBarItemForViewController:(id)viewController;	// 0x301feaa9
// declared property getter: - (id)viewControllers;	// 0x300e5171
- (void)viewDidAppear:(BOOL)view;	// 0x300ea6ad
- (void)viewDidDisappear:(BOOL)view;	// 0x301feb81
- (void)viewWillAppear:(BOOL)view;	// 0x300e941d
- (void)viewWillDisappear:(BOOL)view;	// 0x301febcd
- (void)viewWillLayoutSubviews;	// 0x300eb7ad
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fe7cd
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fe80d
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fe765
- (void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301fe84d
@end

