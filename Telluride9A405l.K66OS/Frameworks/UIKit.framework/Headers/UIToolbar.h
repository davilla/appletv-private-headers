/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSArray;

@interface UIToolbar : UIView {
@private
	id _delegate;	// 48 = 0x30
	NSArray *_items;	// 52 = 0x34
	UIColor *_tintColor;	// 56 = 0x38
	struct {
		unsigned barStyle : 2;
		unsigned mode : 2;
		unsigned alertShown : 1;
		unsigned wasEnabled : 1;
		unsigned downButtonSentAction : 1;
		unsigned isTranslucent : 1;
		unsigned forceTopBarAppearance : 1;
	} _toolbarFlags;	// 60 = 0x3c
	CFDictionaryRef _groups;	// 64 = 0x40
	NSArray *_buttonItems;	// 68 = 0x44
	int _currentButtonGroup;	// 72 = 0x48
	CFArrayRef _hiddenItems;	// 76 = 0x4c
	int _pressedTag;	// 80 = 0x50
	float _extraEdgeInsets;	// 84 = 0x54
	UIView *_backgroundView;	// 88 = 0x58
	id _appearanceStorage;	// 92 = 0x5c
}
@property(assign, nonatomic) int barStyle;	// G=0x32d19e19; S=0x32d1d68d; 
@property(retain) NSArray *buttonItems;	// G=0x32e717d9; S=0x32e717e9; converted property
@property(readonly, assign) int currentButtonGroup;	// G=0x32dc019d; converted property
@property(assign) id delegate;	// G=0x32d3e905; S=0x32d3e751; converted property
@property(assign) float extraEdgeInsets;	// G=0x32e70a09; S=0x32e709f9; converted property
@property(copy, nonatomic) NSArray *items;	// G=0x32dbfd71; S=0x32d3e761; 
@property(assign) int mode;	// G=0x32d1bf65; S=0x32e70a19; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32d1a2b5; S=0x32d23ec9; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x32d290d5; S=0x32df9e2d; 
+ (float)_buttonGap;	// 0x32d1d1b9
+ (Class)defaultButtonClass;	// 0x32e710f5
+ (id)defaultButtonFont;	// 0x32d3e915
+ (float)defaultHeight;	// 0x32d2407d
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x32d1f549
+ (float)defaultSelectionModeHeight;	// 0x32e71111
+ (Class)defaultTextButtonClass;	// 0x32d45b19
- (id)initInView:(id)view withFrame:(CGRect)frame withItemList:(id)itemList;	// 0x32d3c70d
- (id)initInView:(id)view withFrame:(CGRect)frame withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x32e71a11
- (id)initInView:(id)view withItemList:(id)itemList;	// 0x32d44171
- (id)initInView:(id)view withItems:(XXStruct_b4LybD *)items withCount:(int)count;	// 0x32e71b9d
- (id)initWithCoder:(id)coder;	// 0x32e706c1
- (id)initWithFrame:(CGRect)frame;	// 0x32d17d6d
- (void)_adjustButtonPressed:(id)pressed;	// 0x32e722c5
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x32e71cd1
- (id)_backgroundView;	// 0x32e70641
- (void)_buttonBarFinishedAnimating;	// 0x32e714bd
- (void)_buttonCancel:(id)cancel;	// 0x32e7228d
- (void)_buttonDown:(id)down;	// 0x32e72151
- (void)_buttonDownDelayed:(id)delayed;	// 0x32e721a9
- (id)_buttonName:(id)name withType:(int)type;	// 0x32e72599
- (void)_buttonUp:(id)up;	// 0x32e721f1
- (id)_buttonWithDescription:(id)description;	// 0x32d44d9d
- (id)_currentButtons;	// 0x32e7237d
- (id)_currentCustomBackgroundRespectOversize:(BOOL *)oversize;	// 0x32d23881
- (id)_customToolbarAppearance;	// 0x32e720c1
- (void)_customViewChangedForButtonItem:(id)buttonItem;	// 0x32e70e79
- (id)_descriptionForTag:(int)tag;	// 0x32e7213d
- (void)_didFinishHidingRetainedOldItems:(id)items;	// 0x32d1d5a9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32d1f6cd
- (float)_edgeMarginForBorderedItem:(BOOL)borderedItem;	// 0x32d1d12d
- (void)_finishButtonAnimation:(int)animation forButton:(int)button;	// 0x32e724e9
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x32dbe079
- (CGRect)_frameOfBarButtonItem:(id)barButtonItem;	// 0x32e71851
- (BOOL)_isHidden:(id)hidden;	// 0x32e72549
- (BOOL)_isInNavigationBar;	// 0x32e720d1
- (BOOL)_isPositionedHiddenForAlert;	// 0x32d23ea9
- (BOOL)_isTopBar;	// 0x32d1d339
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32e70801
- (void)_positionToolbarButtons:(id)buttons ignoringItem:(id)item;	// 0x32d1d545
- (id)_positionToolbarButtons:(id)buttons ignoringItem:(id)item actuallyRepositionButtons:(BOOL)buttons3;	// 0x32d1c0f5
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x32e70aed
- (void)_setBackgroundImage:(id)image mini:(id)mini;	// 0x32e718dd
- (void)_setBackgroundView:(id)view;	// 0x32e70651
- (void)_setButtonBackgroundImage:(id)image mini:(id)mini forStates:(unsigned)states;	// 0x32e71915
- (void)_setForceTopBarAppearance:(BOOL)appearance;	// 0x32e7182d
- (void)_setTintColor:(id)color force:(BOOL)force;	// 0x32d192c9
- (void)_showButtons:(int *)buttons withCount:(int)count group:(int)group withDuration:(double)duration adjustPositions:(BOOL)positions skipTag:(int)tag;	// 0x32d44469
- (BOOL)_subclassImplementsDrawRect;	// 0x32d17db9
- (void)_updateBackgroundImage;	// 0x32d185e5
- (void)_updateItemsForNewFrame:(id)newFrame;	// 0x32d18e25
- (void)_updateOpacity;	// 0x32d19295
- (void)_updateScriptingInfo:(id)info view:(id)view;	// 0x32dbfb8d
- (void)animateToolbarItemIndex:(unsigned)index duration:(double)duration target:(id)target didFinishSelector:(SEL)selector;	// 0x32e70df5
- (void)animateWithDuration:(float)duration forButton:(int)button;	// 0x32e717a5
- (id)backgroundImageForToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x32e710a1
// declared property getter: - (int)barStyle;	// 0x32d19e19
// converted property getter: - (id)buttonItems;	// 0x32e717d9
- (id)createButtonWithDescription:(id)description;	// 0x32d45059
// converted property getter: - (int)currentButtonGroup;	// 0x32dc019d
- (void)dealloc;	// 0x32d509d1
- (CGSize)defaultSizeForOrientation:(int)orientation;	// 0x32d23c45
// converted property getter: - (id)delegate;	// 0x32d3e905
- (void)drawRect:(CGRect)rect;	// 0x32d22799
- (void)encodeWithCoder:(id)coder;	// 0x32e70911
// converted property getter: - (float)extraEdgeInsets;	// 0x32e70a09
- (void)getVisibleButtonTags:(int *)tags count:(unsigned *)count maxItems:(unsigned)items;	// 0x32e71599
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f01651
- (BOOL)isMinibar;	// 0x32d17f6d
// declared property getter: - (BOOL)isTranslucent;	// 0x32d290d5
// declared property getter: - (id)items;	// 0x32dbfd71
- (void)layoutSubviews;	// 0x32d21c41
// converted property getter: - (int)mode;	// 0x32d1bf65
- (BOOL)onStateForButton:(int)button;	// 0x32e7174d
- (void)positionButtons:(id)buttons tags:(int *)tags count:(int)count group:(int)group;	// 0x32d45bad
- (void)registerButtonGroup:(int)group withButtons:(int *)buttons withCount:(int)count;	// 0x32e714dd
- (id)scriptingInfoWithChildren;	// 0x32dbf631
- (void)setBackgroundImage:(id)image forToolbarPosition:(int)toolbarPosition barMetrics:(int)metrics;	// 0x32e70f4d
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x32e716fd
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x32e716ad
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x32e7165d
// declared property setter: - (void)setBarStyle:(int)style;	// 0x32d1d68d
- (void)setBarStyle:(int)style force:(BOOL)force;	// 0x32d19051
- (void)setBounds:(CGRect)bounds;	// 0x32d23d75
- (void)setBounds:(CGRect)bounds;	// 0x32e70c09
- (void)setButtonBarTrackingMode:(int)mode;	// 0x32d4435d
// converted property setter: - (void)setButtonItems:(id)items;	// 0x32e717e9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32d3e751
// converted property setter: - (void)setExtraEdgeInsets:(float)insets;	// 0x32e709f9
- (void)setFrame:(CGRect)frame;	// 0x32d17e39
- (void)setFrame:(CGRect)frame;	// 0x32e70d01
// declared property setter: - (void)setItems:(id)items;	// 0x32d3e761
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x32d17fe9
// converted property setter: - (void)setMode:(int)mode;	// 0x32e70a19
- (void)setOnStateForButton:(BOOL)button forButton:(int)button2;	// 0x32e71775
// declared property setter: - (void)setTintColor:(id)color;	// 0x32d23ec9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x32df9e2d
- (void)showButtonGroup:(int)group withDuration:(double)duration;	// 0x32dc01ad
- (void)showButtons:(int *)buttons withCount:(int)count withDuration:(double)duration;	// 0x32d44439
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32d23afd
// declared property getter: - (id)tintColor;	// 0x32d1a2b5
@end

