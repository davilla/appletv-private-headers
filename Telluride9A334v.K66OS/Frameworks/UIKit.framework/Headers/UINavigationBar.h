/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UINavigationItem, UIColor, NSMutableArray, NSDictionary, NSArray;

@interface UINavigationBar : UIView <NSCoding> {
@private
	NSMutableArray *_itemStack;	// 48 = 0x30
	float _rightMargin;	// 52 = 0x34
	unsigned _state;	// 56 = 0x38
	id _delegate;	// 60 = 0x3c
	UIView *_backgroundView;	// 64 = 0x40
	UIView *_titleView;	// 68 = 0x44
	NSArray *_leftViews;	// 72 = 0x48
	NSArray *_rightViews;	// 76 = 0x4c
	UIView *_prompt;	// 80 = 0x50
	UIView *_accessoryView;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	id _appearanceStorage;	// 92 = 0x5c
	struct {
		unsigned animate : 1;
		unsigned animationDisabledCount : 10;
		unsigned transitioningBarStyle : 1;
		unsigned newBarStyle : 3;
		unsigned barStyle : 3;
		unsigned isTranslucent : 1;
		unsigned disableLayout : 1;
		unsigned backPressed : 1;
		unsigned animatePromptChange : 1;
		unsigned pendingHideBackButton : 1;
		unsigned titleAutosizesToFit : 1;
		unsigned usingNewAPI : 1;
		unsigned minibar : 1;
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned shouldUpdatePromptAfterTransition : 1;
		unsigned crossfadeItems : 1;
		unsigned autoAdjustTitle : 1;
		unsigned isContainedInPopover : 1;
		unsigned needsDrawRect : 1;
		unsigned animationCleanupCancelled : 1;
		unsigned forceLayout : 1;
		unsigned layoutInProgress : 1;
	} _navbarFlags;	// 96 = 0x60
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x301f2fb9; S=0x301f2fc9; 
@property(readonly, assign, nonatomic) UINavigationItem *backItem;	// G=0x300b1021; 
@property(assign, nonatomic) int barStyle;	// G=0x3007e921; S=0x300f4ab9; 
@property(assign, nonatomic) id delegate;	// G=0x300f4e5d; S=0x300654fd; 
@property(assign) BOOL forceFullHeightInLandscape;	// G=0x30057929; S=0x300576f5; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x300de835; S=0x300de8ed; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x30065565; S=0x30065579; converted property
@property(retain) id navigationItems;	// G=0x300de859; S=0x301f45ad; converted property
@property(retain) UIView *prompt;	// G=0x30057a81; S=0x3006b4ad; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300864dd; S=0x300d76e9; 
@property(assign) BOOL titleAutoresizesToFit;	// G=0x30069ba1; S=0x301f49b5; converted property
@property(copy, nonatomic) NSDictionary *titleTextAttributes;	// G=0x301f3a75; S=0x301f3a0d; 
@property(readonly, assign, nonatomic) UINavigationItem *topItem;	// G=0x30065f15; 
@property(assign) float topItemAlpha;	// G=0x301f65bd; S=0x301f65dd; converted property
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x30086491; S=0x300f4d39; 
+ (void)_setUseCustomBackButtonAction:(BOOL)action;	// 0x301f85f9
+ (BOOL)_useCustomBackButtonAction;	// 0x301f8609
+ (id)defaultPromptFont;	// 0x301a8709
+ (CGSize)defaultSize;	// 0x300653c5
+ (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x300653e9
+ (CGSize)defaultSizeWithPrompt;	// 0x301f3c11
+ (CGSize)defaultSizeWithPromptForOrientation:(int)orientation;	// 0x301a8459
+ (void)setDefaultAnimationDuration:(double)duration;	// 0x301f3c35
- (id)initWithCoder:(id)coder;	// 0x301f3c49
- (id)initWithFrame:(CGRect)frame;	// 0x30063c49
- (void)_adjustVisibleItemsByDelta:(float)delta;	// 0x301a8525
- (id)_allViews;	// 0x3016b1e1
- (id)_appearanceStorage;	// 0x3008147d
- (void)_applySPIAppearanceToButtons;	// 0x300fbba5
- (void)_backgroundFadeDidFinish:(id)_backgroundFade finished:(id)finished context:(void *)context;	// 0x3019608d
// declared property getter: - (id)_backgroundView;	// 0x301f2fb9
- (int)_barStyle:(BOOL)style;	// 0x30069625
- (CGRect)_boundsForPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x301f7171
- (BOOL)_canDrawContent;	// 0x30063ddd
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x301c3a9d
- (void)_cancelInProgressPushOrPop;	// 0x300edb8d
- (id)_commonHitTest:(CGPoint)test forView:(id)view;	// 0x30107b29
- (void)_commonNavBarInit;	// 0x30063ee9
- (id)_currentLeftViews;	// 0x30065f7d
- (id)_currentRightViews;	// 0x30066101
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x301ae269
- (id)_defaultTitleFont;	// 0x30088f75
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x3006c989
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)newItems oldItems:(id)items;	// 0x300ded91
- (void)_drawPrompt:(id)prompt inRect:(CGRect)rect withFont:(id)font barStyle:(int)style;	// 0x301a872d
- (id)_effectiveTintColor;	// 0x30064d49
- (void)_fadeAllViewsIn;	// 0x3016b105
- (void)_fadeAllViewsOut;	// 0x301f7551
- (void)_fadeViewOut:(id)anOut;	// 0x301f74e5
- (void)_fadeViewsIn:(id)anIn;	// 0x3010a339
- (void)_fadeViewsOut:(id)anOut;	// 0x3010a2e1
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3;	// 0x30066111
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views;	// 0x30066135
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrame:(CGRect *)frame2 rightViewFrame:(CGRect *)frame3 forViews:(id *)views forItemAtIndex:(unsigned)index;	// 0x300661bd
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3;	// 0x301f7a81
- (void)_getTitleViewFrame:(CGRect *)frame leftViewFrames:(id)frames rightViewFrames:(id)frames3 forItemAtIndex:(unsigned)index;	// 0x30066371
- (void)_handleMouseDownAtPoint:(CGPoint)point;	// 0x301087d9
- (void)_handleMouseUpAtPoint:(CGPoint)point;	// 0x30108b45
- (BOOL)_hasBackButton;	// 0x30066079
- (void)_hideButtonsAnimationDidStop:(id)_hideButtonsAnimation finished:(id)finished context:(void *)context;	// 0x301f6181
- (id)_itemStack;	// 0x301f7b05
- (void)_navBarButtonPressed:(id)pressed;	// 0x301f8559
- (void)_navigationAnimationDidFinish:(id)_navigationAnimation finished:(id)finished context:(void *)context;	// 0x3010a771
- (id)_popNavigationItemWithTransition:(int)transition;	// 0x300ba8e5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301f3ec1
- (void)_prepareForPopAnimationWithNewTopItem:(id)newTopItem;	// 0x300bb289
- (void)_prepareForPushAnimationWithItems:(id)items;	// 0x30069729
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)previousColor;	// 0x301f4819
- (void)_pushNavigationItem:(id)item transition:(int)transition;	// 0x30068e81
- (void)_removeAccessoryView;	// 0x301f6ffd
- (void)_removeItemsFromSuperview:(id)superview;	// 0x300dee71
- (void)_setAutoAdjustTitle:(BOOL)title;	// 0x300d7edd
- (void)_setBackButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x300fb809
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x301f3069
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x301f2fc9
- (void)_setBarStyle:(int)style;	// 0x30069c51
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x300fbd45
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x301f3349
- (void)_setButtonItemTextColor:(id)color shadowColor:(id)color2 forState:(unsigned)state;	// 0x301f3095
- (void)_setButtonTextShadowOffset:(CGSize)offset;	// 0x301f3391
- (void)_setIsContainedInPopover:(BOOL)popover;	// 0x301f48b1
- (void)_setItems:(id)items transition:(int)transition;	// 0x300de9c1
- (void)_setLeftView:(id)view rightView:(id)view2;	// 0x301f58e1
- (void)_setLeftViews:(id)views rightViews:(id)views2;	// 0x30069ed5
- (void)_setNeedsLayoutForce:(BOOL)force;	// 0x301f7b15
- (void)_setPressedButtonItemTextColor:(id)color shadowColor:(id)color2;	// 0x301f336d
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)pressed;	// 0x301f35f9
- (void)_setupTopNavItem:(id)item oldTopNavItem:(id)item2;	// 0x300def41
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)navigationItem;	// 0x300a0d69
- (void)_showLeftRightButtonsAnimationDidStop:(id)_showLeftRightButtonsAnimation finished:(id)finished context:(void *)context;	// 0x3010ac39
- (void)_startBarStyleAnimation:(int)animation withTintColor:(id)tintColor;	// 0x30195739
- (void)_startPopAnimationFromItems:(id)items fromBarStyle:(int)barStyle toItems:(id)items3 toBarStyle:(int)barStyle4;	// 0x30109861
- (void)_startPushAnimationFromItems:(id)items fromBarStyle:(int)barStyle;	// 0x301564fd
- (BOOL)_subclassImplementsDrawBackgroundInRect;	// 0x30064009
- (BOOL)_subclassImplementsDrawRect;	// 0x30063ce1
- (unsigned)_subviewIndexAboveBackground;	// 0x3010a219
- (int)_transitionForOldItems:(id)oldItems newItems:(id)items;	// 0x301f455d
- (void)_updateBackgroundImage;	// 0x30065065
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style;	// 0x30064d0d
- (void)_updateNavigationBarItem:(id)item forStyle:(int)style previousTintColor:(id)color;	// 0x30064d71
- (void)_updateNavigationBarItemsForStyle:(int)style;	// 0x300f4b0d
- (void)_updateNavigationBarItemsForStyle:(int)style previousTintColor:(id)color;	// 0x300f4b41
- (void)_updateOpacity;	// 0x30063e2d
- (void)_updateTitleView;	// 0x301718a9
- (unsigned)animationDisabledCount;	// 0x301f4ca1
- (CGRect)availableTitleArea;	// 0x301f6269
- (id)backButtonViewAtPoint:(CGPoint)point;	// 0x30108f81
// declared property getter: - (id)backItem;	// 0x300b1021
- (id)backgroundImageForBarMetrics:(int)barMetrics;	// 0x301f39d9
// declared property getter: - (int)barStyle;	// 0x3007e921
- (id)buttonItemShadowColor;	// 0x30097ce1
- (id)buttonItemTextColor;	// 0x30097e45
- (id)createButtonWithContents:(id)contents width:(float)width barStyle:(int)style buttonStyle:(int)style4 isRight:(BOOL)right;	// 0x301f5e8d
- (id)currentBackButton;	// 0x30068235
- (id)currentLeftView;	// 0x301733c1
- (id)currentRightView;	// 0x30173445
- (void)dealloc;	// 0x300f5b89
- (float)defaultButtonHeight;	// 0x300a1035
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x3005793d
// declared property getter: - (id)delegate;	// 0x300f4e5d
- (void)didAddSubview:(id)subview;	// 0x30064cc1
- (void)disableAnimation;	// 0x30068f81
- (void)drawBackButtonBackgroundInRect:(CGRect)rect withStyle:(int)style pressed:(BOOL)pressed;	// 0x300b2059
- (void)drawBackgroundInRect:(CGRect)rect withStyle:(int)style;	// 0x301f4cb5
- (void)drawRect:(CGRect)rect;	// 0x300fc9a5
- (void)enableAnimation;	// 0x3006b8e1
- (void)encodeWithCoder:(id)coder;	// 0x301f404d
// converted property getter: - (BOOL)forceFullHeightInLandscape;	// 0x30057929
- (void)hideButtons;	// 0x301f5eb1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x301f45c1
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30107ad5
- (BOOL)isAnimationEnabled;	// 0x3006b38d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302b5601
// converted property getter: - (BOOL)isLocked;	// 0x30065565
- (BOOL)isMinibar;	// 0x3007e39d
// declared property getter: - (BOOL)isTranslucent;	// 0x30086491
// declared property getter: - (id)items;	// 0x300de835
- (void)layoutSubviews;	// 0x30065cad
- (void)mouseDown:(GSEventRef)down;	// 0x301f4615
- (void)mouseUp:(GSEventRef)up;	// 0x301f4671
- (id)navigationItemAtPoint:(CGPoint)point;	// 0x301088b9
// converted property getter: - (id)navigationItems;	// 0x300de859
- (void)popNavigationItem;	// 0x300bab5d
- (id)popNavigationItemAnimated:(BOOL)animated;	// 0x30108fd9
// converted property getter: - (id)prompt;	// 0x30057a81
- (CGRect)promptBounds;	// 0x301f4c35
- (id)promptView;	// 0x301f4c25
- (void)pushNavigationItem:(id)item;	// 0x30068f9d
- (void)pushNavigationItem:(id)item animated:(BOOL)animated;	// 0x301d603d
- (void)setAccessoryView:(id)view animate:(BOOL)animate;	// 0x301f417d
- (void)setBackgroundImage:(id)image forBarMetrics:(int)barMetrics;	// 0x301f3855
// declared property setter: - (void)setBarStyle:(int)style;	// 0x300f4ab9
- (void)setBounds:(CGRect)bounds;	// 0x300657dd
- (void)setButton:(int)button enabled:(BOOL)enabled;	// 0x301f5da1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300654fd
// converted property setter: - (void)setForceFullHeightInLandscape:(BOOL)landscape;	// 0x300576f5
- (void)setFrame:(CGRect)frame;	// 0x30057aad
// declared property setter: - (void)setItems:(id)items;	// 0x300de8ed
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x300de901
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x30065579
// converted property setter: - (void)setNavigationItems:(id)items;	// 0x301f45ad
- (void)setNeedsLayout;	// 0x300654b9
// converted property setter: - (void)setPrompt:(id)prompt;	// 0x3006b4ad
- (void)setRightMargin:(float)margin;	// 0x301f4979
// declared property setter: - (void)setTintColor:(id)color;	// 0x300d76e9
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x301f49b5
// declared property setter: - (void)setTitleTextAttributes:(id)attributes;	// 0x301f3a0d
- (void)setTitleVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x301f3a95
- (void)setTitleView:(id)view;	// 0x30069bd5
// converted property setter: - (void)setTopItemAlpha:(float)alpha;	// 0x301f65dd
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x300f4d39
- (void)showBackButton:(BOOL)button animated:(BOOL)animated;	// 0x300c76a9
- (void)showButtonsWithLeft:(id)left right:(id)right leftBack:(BOOL)back;	// 0x301f4f2d
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title;	// 0x301f4ee5
- (void)showButtonsWithLeftTitle:(id)leftTitle rightTitle:(id)title leftBack:(BOOL)back;	// 0x301f4f09
- (void)showHideBackButtomAnimationDidStop:(id)showHideBackButtomAnimation finished:(id)finished context:(void *)context;	// 0x301f61ed
- (void)showLeftButton:(id)button withStyle:(int)style rightButton:(id)button3 withStyle:(int)style4;	// 0x301f4f5d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30057855
- (int)state;	// 0x301f416d
// declared property getter: - (id)tintColor;	// 0x300864dd
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x30069ba1
// declared property getter: - (id)titleTextAttributes;	// 0x301f3a75
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x301f3bb9
// declared property getter: - (id)topItem;	// 0x30065f15
// converted property getter: - (float)topItemAlpha;	// 0x301f65bd
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x30108781
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x301d5f49
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30108aed
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301cab9d
- (void)updatePrompt;	// 0x3006b3dd
@end
