/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UILabel, _UIPressedIndicatorView, UIToolbarButtonBadge, UIColor;

__attribute__((visibility("hidden")))
@interface UIToolbarButton : UIControl {
@private
	CGRect _hitRect;	// 108 = 0x6c
	UIView *_info;	// 124 = 0x7c
	UILabel *_label;	// 128 = 0x80
	UIToolbarButtonBadge *_badge;	// 132 = 0x84
	_UIPressedIndicatorView *_pressedIndicator;	// 136 = 0x88
	int _barStyle;	// 140 = 0x8c
	int _style;	// 144 = 0x90
	UIEdgeInsets _glowAdjust;	// 148 = 0x94
	BOOL _onState;	// 164 = 0xa4
	BOOL _barHeight;	// 165 = 0xa5
	BOOL _badgeAnimated;	// 166 = 0xa6
	BOOL _bezel;	// 167 = 0xa7
	float _minimumWidth;	// 168 = 0xa8
	float _maximumWidth;	// 172 = 0xac
	float _labelHeight;	// 176 = 0xb0
	UIEdgeInsets _infoInsets;	// 180 = 0xb4
	UIColor *_toolbarTintColor;	// 196 = 0xc4
	BOOL _isAnimatedTrashButton;	// 200 = 0xc8
	id _appearanceStorage;	// 204 = 0xcc
	BOOL _isInTopBar;	// 208 = 0xd0
}
@property(retain, nonatomic, setter=_setTintColor:) UIColor *_tintColor;	// G=0x30147ecd; S=0x3027d305; 
@property(assign, nonatomic, getter=isAnimatedTrashButton) BOOL animatedTrashButton;	// G=0x3012cdd9; S=0x301269e9; @synthesize=_isAnimatedTrashButton
+ (id)_defaultLabelColor;	// 0x3027b6ad
+ (id)_defaultLabelFont;	// 0x3027b689
- (id)initWithImage:(id)image pressedImage:(id)image2 label:(id)label labelHeight:(float)height withBarStyle:(int)barStyle withStyle:(int)style withInsets:(UIEdgeInsets)insets possibleTitles:(id)titles possibleSystemItems:(id)items withToolbarTintColor:(id)toolbarTintColor bezel:(BOOL)bezel imageInsets:(UIEdgeInsets)insets12 glowInsets:(UIEdgeInsets)insets13 landscape:(BOOL)landscape;	// 0x3027b701
- (void)_UIAppearance_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3027d341
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d6a5
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d6ad
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30148385
- (void)_UIAppearance_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3027d039
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d349
- (void)_UIAppearance_setTintColor:(id)color;	// 0x3027d261
- (void)_UIAppearance_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d4c5
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3027d319
- (void)_adjustPushButtonForMiniBar:(BOOL)miniBar isChangingBarHeight:(BOOL)height;	// 0x30126359
- (void)_adjustToolbarButtonInfo;	// 0x301483a9
- (void)_adjustToolbarButtonInfoTintColorHasChanged:(BOOL)changed;	// 0x301483bd
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar;	// 0x3027cd05
- (void)_animateImage:(float)image withButtonBar:(id)buttonBar target:(id)target didFinishSelector:(SEL)selector;	// 0x3027cc65
- (void)_applyBarButtonAppearanceStorage:(id)storage withTaggedSelectors:(id)taggedSelectors;	// 0x30126a75
- (id)_backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x3027d1e9
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3027d475
- (void)_badgeAnimationDidStop:(id)_badgeAnimation finished:(id)finished;	// 0x3027c801
- (CGRect)_buttonBarHitRect;	// 0x301284c5
- (BOOL)_canGetPadding;	// 0x30128225
- (BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)location;	// 0x3027cb99
- (id)_defaultTitleColorForState:(unsigned)state;	// 0x30147f09
- (id)_defaultTitleShadowColorForState:(unsigned)state;	// 0x3027cdad
- (UIOffset)_defaultTitleShadowOffsetForState:(unsigned)state;	// 0x3027ce79
- (id)_info;	// 0x3027d029
- (BOOL)_isBordered;	// 0x3012a4fd
- (BOOL)_isOn;	// 0x3027cc55
- (id)_newButton;	// 0x30147c99
- (float)_paddingForLeft:(BOOL)left;	// 0x3012a381
- (void)_positionBadge;	// 0x30125821
- (void)_setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x3027d345
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d6a9
- (void)_setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d6b1
- (void)_setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x30148371
- (void)_setBackgroundImage:(id)image forState:(unsigned)state style:(int)style barMetrics:(int)metrics;	// 0x3027d1d9
- (void)_setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d465
- (void)_setBadgeAnimated:(BOOL)animated;	// 0x3027c8c1
- (void)_setBadgeValue:(id)value;	// 0x3027c5b1
- (void)_setBarHeight:(float)height;	// 0x301269fd
- (void)_setButtonBarHitRect:(CGRect)rect;	// 0x301284a9
- (void)_setInTopBar:(BOOL)topBar;	// 0x30128429
- (void)_setInfoExtremityWidth:(float)width isMin:(BOOL)min;	// 0x3027c919
- (void)_setInfoFlexibleWidth:(BOOL)width;	// 0x3027cab1
- (void)_setInfoWidth:(float)width;	// 0x301480c5
- (void)_setOn:(BOOL)on;	// 0x3027cc15
- (void)_setPressed:(BOOL)pressed;	// 0x3027c4b9
// declared property setter: - (void)_setTintColor:(id)color;	// 0x3027d305
- (void)_setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x3027d631
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3027d31d
- (void)_showPressedIndicator:(BOOL)indicator;	// 0x3027c389
- (void)_sizeView:(id)view toPossibleTitles:(id)possibleTitles pressedTitle:(id)title;	// 0x3027bfdd
// declared property getter: - (id)_tintColor;	// 0x30147ecd
- (UIOffset)_titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x3027d641
- (id)_titleTextAttributesForState:(unsigned)state;	// 0x3027d321
- (void)_updateInfoTextColorsForState:(unsigned)state;	// 0x301487f5
- (void)_updateShadowOffsetWithAttributes:(id)attributes forState:(unsigned)state;	// 0x3027cf01
- (BOOL)_useBarHeight;	// 0x30128279
- (BOOL)_useSilverLook;	// 0x3027cd41
- (UIEdgeInsets)alignmentRectInsets;	// 0x3027cbd9
- (void)dealloc;	// 0x3012d7e5
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3027cb31
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301caf29
// declared property getter: - (BOOL)isAnimatedTrashButton;	// 0x3012cdd9
- (void)layoutSubviews;	// 0x3012c841
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x3027cb01
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x301caf91
- (BOOL)pointMostlyInside:(CGPoint)inside withEvent:(id)event;	// 0x301cb4d9
// declared property setter: - (void)setAnimatedTrashButton:(BOOL)button;	// 0x301269e9
- (void)setBarStyle:(int)style;	// 0x3012a479
- (void)setEnabled:(BOOL)enabled;	// 0x30126db1
- (void)setFrame:(CGRect)frame;	// 0x301257d9
- (void)setHighlighted:(BOOL)highlighted;	// 0x301cafc5
- (void)setImage:(id)image;	// 0x3027c30d
- (void)setSizesToFitImage:(BOOL)fitImage;	// 0x3027beed
- (void)setTintColor:(id)color;	// 0x3027cd31
- (void)setToolbarTintColor:(id)color;	// 0x3012a4a1
- (void)setUseSelectedImage:(BOOL)image;	// 0x301f059d
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3027cb9d
@end
