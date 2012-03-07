/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIBarItem.h"

@class NSString, UIToolbarButton, NSSet, UIColor, UIImage, UIView;

@interface UIBarButtonItem : UIBarItem <NSCoding> {
@private
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_landscapeImagePhone;	// 28 = 0x1c
	UIEdgeInsets _imageInsets;	// 32 = 0x20
	UIEdgeInsets _landscapeImagePhoneInsets;	// 48 = 0x30
	float _width;	// 64 = 0x40
	UIView *_view;	// 68 = 0x44
	int _tag;	// 72 = 0x48
	id _appearanceStorage;	// 76 = 0x4c
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned isMinibarView : 1;
		unsigned disableAutosizing : 1;
		unsigned selected : 1;
		unsigned imageHasEffects : 1;
	} _barButtonItemFlags;	// 80 = 0x50
	float _toolbarCharge;	// 84 = 0x54
	float _minimumWidth;	// 88 = 0x58
	float _maximumWidth;	// 92 = 0x5c
}
@property(assign, nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;	// G=0x302ade35; S=0x302ade15; 
@property(assign, nonatomic, setter=_setMaximumWidth:) float _maximumWidth;	// G=0x300d1535; S=0x302add9d; @synthesize
@property(assign, nonatomic, setter=_setMinimumWidth:) float _minimumWidth;	// G=0x300d1525; S=0x302add8d; @synthesize
@property(readonly, assign, nonatomic) UIToolbarButton *_toolbarButton;	// G=0x301b05e9; 
@property(assign, nonatomic, setter=_setToolbarCharge:) float _toolbarCharge;	// G=0x300d00e5; S=0x3007d58d; @synthesize
@property(assign, nonatomic) SEL action;	// G=0x30082641; S=0x3007d959; @synthesize=_action
@property(retain, nonatomic) UIView *customView;	// G=0x30173da9; S=0x300cccd9; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x30080c25; S=0x3007d511; 
@property(retain) UIImage *image;	// G=0x300cd245; S=0x301b056d; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x3008261d; S=0x302acef9; converted property
@property(assign) BOOL isMinibarView;	// G=0x30088f61; S=0x30081845; converted property
@property(readonly, assign, nonatomic) BOOL isSystemItem;
@property(readonly, assign, nonatomic) BOOL isSystemItem;	// G=0x3007dab9; 
@property(retain) UIImage *landscapeImagePhone;	// G=0x30088f11; S=0x302acddd; converted property
@property(assign) UIEdgeInsets landscapeImagePhoneInsets;	// G=0x302aced5; S=0x302ace49; converted property
@property(retain, nonatomic, getter=_miniImage, setter=_setMiniImage:) UIImage *miniImage;	// G=0x302addad; S=0x302addbd; 
@property(assign, nonatomic, getter=_miniImageInsets, setter=_setMiniImageInsets:) UIEdgeInsets miniImageInsets;	// G=0x302addcd; S=0x302addf1; 
@property(copy, nonatomic) NSSet *possibleTitles;	// G=0x3007e9b5; S=0x3007d969; 
@property(assign, nonatomic) BOOL selected;	// G=0x302acf85; S=0x301a4701; 
@property(assign, nonatomic) BOOL selected;
@property(assign, nonatomic) int style;	// G=0x3007e985; S=0x3007d901; 
@property(readonly, assign, nonatomic) int systemItem;
@property(readonly, assign, nonatomic) int systemItem;	// G=0x30081c4d; 
@property(assign) int tag;	// G=0x30105b29; S=0x301adfad; converted property
@property(assign, nonatomic) id target;	// G=0x3010b3d9; S=0x3007d949; @synthesize=_target
@property(retain, nonatomic) UIColor *tintColor;	// G=0x302ad2ed; S=0x302ad229; 
@property(retain) NSString *title;	// G=0x3007e935; S=0x3007d59d; converted property
@property(retain) UIView *view;	// G=0x3007e3c5; S=0x300817c1; converted property
@property(assign, nonatomic) float width;	// G=0x30082651; S=0x300ccdc9; 
+ (id)_appearanceProxyViewClasses;	// 0x302acf99
+ (Class)classForNavigationButton;	// 0x3007e999
- (id)init;	// 0x3007d4b1
- (id)initWithBarButtonSystemItem:(int)barButtonSystemItem target:(id)target action:(SEL)action;	// 0x30081bbd
- (id)initWithCoder:(id)coder;	// 0x302ac6e1
- (id)initWithCustomView:(id)customView;	// 0x300ccca5
- (id)initWithImage:(id)image landscapeImagePhone:(id)phone style:(int)style target:(id)target action:(SEL)action;	// 0x302ac649
- (id)initWithImage:(id)image style:(int)style target:(id)target action:(SEL)action;	// 0x301b04ed
- (id)initWithTitle:(id)title style:(int)style target:(id)target action:(SEL)action;	// 0x3007d431
- (id)_appearanceStorage;	// 0x302ad041
- (void)_applyPositionAdjustmentToSegmentedControl:(id)segmentedControl;	// 0x302ade4d
- (void)_connectInterfaceBuilderEventConnection:(id)connection;	// 0x3029f135
- (void)_getNavBarEdgeSizeAdjust:(CGSize *)adjust imageInsets:(UIEdgeInsets *)insets landscape:(BOOL)landscape;	// 0x300824f5
- (void)_getSystemItemStyle:(int *)style title:(id *)title image:(id *)image selectedImage:(id *)image4 action:(SEL *)action forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x30081ed9
- (void)_getToolbarEdgeInsets:(UIEdgeInsets *)insets imageInsets:(UIEdgeInsets *)insets2 glowInsets:(UIEdgeInsets *)insets3 forBarStyle:(int)barStyle landscape:(BOOL)landscape alwaysBordered:(BOOL)bordered;	// 0x300cde2d
// declared property getter: - (BOOL)_imageHasEffects;	// 0x302ade35
// declared property getter: - (float)_maximumWidth;	// 0x300d1535
// declared property getter: - (id)_miniImage;	// 0x302addad
// declared property getter: - (UIEdgeInsets)_miniImageInsets;	// 0x302addcd
// declared property getter: - (float)_minimumWidth;	// 0x300d1525
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3010b359
// declared property setter: - (void)_setImageHasEffects:(BOOL)effects;	// 0x302ade15
// declared property setter: - (void)_setMaximumWidth:(float)width;	// 0x302add9d
// declared property setter: - (void)_setMiniImage:(id)image;	// 0x302addbd
// declared property setter: - (void)_setMiniImageInsets:(UIEdgeInsets)insets;	// 0x302addf1
// declared property setter: - (void)_setMinimumWidth:(float)width;	// 0x302add8d
// declared property setter: - (void)_setToolbarCharge:(float)charge;	// 0x3007d58d
- (void)_setWidth:(float)width;	// 0x302adef5
- (BOOL)_shouldBezelSystemButtonImage;	// 0x30082691
// declared property getter: - (id)_toolbarButton;	// 0x301b05e9
// declared property getter: - (float)_toolbarCharge;	// 0x300d00e5
- (void)_updateView;	// 0x3007d625
- (float)_width;	// 0x302adf6d
// declared property getter: - (SEL)action;	// 0x30082641
- (id)backButtonBackgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x302ad59d
- (float)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302adb4d
- (UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302add29
- (id)backgroundImageForState:(unsigned)state barMetrics:(int)metrics;	// 0x302ad1c5
- (float)backgroundVerticalPositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302ad7b5
- (id)createViewForNavigationItem:(id)navigationItem;	// 0x3007e3d5
- (id)createViewForToolbar:(id)toolbar;	// 0x300cd555
// declared property getter: - (id)customView;	// 0x30173da9
- (void)dealloc;	// 0x300aa23d
- (void)encodeWithCoder:(id)coder;	// 0x302aca25
// converted property getter: - (id)image;	// 0x300cd245
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x3008261d
- (BOOL)isCustomViewItem;	// 0x3007e3b1
// declared property getter: - (BOOL)isEnabled;	// 0x30080c25
// converted property getter: - (BOOL)isMinibarView;	// 0x30088f61
// declared property getter: - (BOOL)isSystemItem;	// 0x3007dab9
// converted property getter: - (id)landscapeImagePhone;	// 0x30088f11
// converted property getter: - (UIEdgeInsets)landscapeImagePhoneInsets;	// 0x302aced5
- (id)nextResponder;	// 0x30189cb5
// declared property getter: - (id)possibleTitles;	// 0x3007e9b5
- (id)scriptingID;	// 0x3017348d
// declared property getter: - (BOOL)selected;	// 0x302acf85
// declared property setter: - (void)setAction:(SEL)action;	// 0x3007d959
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x302ad47d
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x302ada05
- (void)setBackButtonTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x302adba5
- (void)setBackgroundImage:(id)image forState:(unsigned)state barMetrics:(int)metrics;	// 0x302ad051
- (void)setBackgroundVerticalPositionAdjustment:(float)adjustment forBarMetrics:(int)barMetrics;	// 0x302ad601
// declared property setter: - (void)setCustomView:(id)view;	// 0x300cccd9
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3007d511
// converted property setter: - (void)setImage:(id)image;	// 0x301b056d
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x302acef9
// converted property setter: - (void)setIsMinibarView:(BOOL)view;	// 0x30081845
// converted property setter: - (void)setLandscapeImagePhone:(id)phone;	// 0x302acddd
// converted property setter: - (void)setLandscapeImagePhoneInsets:(UIEdgeInsets)insets;	// 0x302ace49
// declared property setter: - (void)setPossibleTitles:(id)titles;	// 0x3007d969
// declared property setter: - (void)setSelected:(BOOL)selected;	// 0x301a4701
// declared property setter: - (void)setStyle:(int)style;	// 0x3007d901
// converted property setter: - (void)setTag:(int)tag;	// 0x301adfad
// declared property setter: - (void)setTarget:(id)target;	// 0x3007d949
// declared property setter: - (void)setTintColor:(id)color;	// 0x302ad229
// converted property setter: - (void)setTitle:(id)title;	// 0x3007d59d
- (void)setTitlePositionAdjustment:(UIOffset)adjustment forBarMetrics:(int)barMetrics;	// 0x302ad80d
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x302ad30d
// converted property setter: - (void)setView:(id)view;	// 0x300817c1
// declared property setter: - (void)setWidth:(float)width;	// 0x300ccdc9
// declared property getter: - (int)style;	// 0x3007e985
// declared property getter: - (int)systemItem;	// 0x30081c4d
// converted property getter: - (int)tag;	// 0x30105b29
// declared property getter: - (id)target;	// 0x3010b3d9
// declared property getter: - (id)tintColor;	// 0x302ad2ed
// converted property getter: - (id)title;	// 0x3007e935
- (UIOffset)titlePositionAdjustmentForBarMetrics:(int)barMetrics;	// 0x302ad9a1
- (id)titleTextAttributesForState:(unsigned)state;	// 0x302ad431
// converted property getter: - (id)view;	// 0x3007e3c5
// declared property getter: - (float)width;	// 0x30082651
- (id)window;	// 0x30189c95
@end
