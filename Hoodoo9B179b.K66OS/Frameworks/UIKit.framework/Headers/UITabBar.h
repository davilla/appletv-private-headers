/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSArray, UITabBarItem, UIColor, UIImage;
@protocol UITabBarDelegate;

@interface UITabBar : UIView {
@private
	UIView *_customizeView;	// 48 = 0x30
	UIView *_backgroundView;	// 52 = 0x34
	id<UITabBarDelegate> _delegate;	// 56 = 0x38
	NSArray *_items;	// 60 = 0x3c
	UITabBarItem *_selectedItem;	// 64 = 0x40
	NSArray *_customizationItems;	// 68 = 0x44
	struct {
		unsigned pushedRunLoop : 1;
		unsigned isRotatingRight : 1;
		unsigned isZoomRubberBandEnabled : 1;
		unsigned zoomsFromCurrentToMinOrMax : 1;
		unsigned updatesScroller : 1;
		unsigned isAnimatingZoomFailure : 1;
	} _tabBarFlags;	// 72 = 0x48
	NSArray *_buttonItems;	// 76 = 0x4c
	CFArrayRef _hiddenItems;	// 80 = 0x50
	id _appearanceStorage;	// 84 = 0x54
}
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x331380a5; S=0x33138031; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x33138ef5; S=0x33138dd1; 
@property(retain) NSArray *buttonItems;	// G=0x33139945; S=0x33139955; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x3313934d; S=0x32f4e865; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x32f94e51; S=0x33138b25; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x32f4e8cd; S=0x32f4e791; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x3313932d; S=0x33139295; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x32f6e7e9; S=0x32f531f5; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x3313905d; S=0x33138f15; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32f51001; S=0x331391e9; 
+ (float)_buttonGap;	// 0x33139999
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x3313935d
- (id)initWithCoder:(id)coder;	// 0x331385c5
- (id)initWithFrame:(CGRect)frame;	// 0x32f4e0b1
- (void)_adjustButtonSelection:(id)selection;	// 0x32fdc1f1
- (void)_alertDidHide;	// 0x33139c75
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x331399a1
- (id)_appearanceStorage;	// 0x32f50ff1
// declared property getter: - (id)_backgroundView;	// 0x331380a5
- (void)_buttonCancel:(id)cancel;	// 0x33139d1d
- (void)_buttonDown:(id)down;	// 0x32fdc125
- (void)_buttonDownDelayed:(id)delayed;	// 0x33139cd5
- (void)_buttonUp:(id)up;	// 0x32fdc179
- (BOOL)_canDrawContent;	// 0x32f4e17d
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x3313a58d
- (void)_customizeDoneButtonAction:(id)action;	// 0x33139f5d
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x3313a0d5
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32f556a9
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x33139d55
- (void)_finishCustomizeAnimation:(id)animation;	// 0x33139f71
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x33138b39
- (BOOL)_isHidden:(id)hidden;	// 0x3313a7d1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33138721
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x32f52901
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x32fdc2fd
- (void)_setBackgroundImage:(id)image;	// 0x331380b5
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x33138031
- (void)_setLabelFont:(id)font;	// 0x331380d5
- (void)_setLabelShadowColor:(id)color;	// 0x33138359
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x33138481
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x331381fd
- (void)_setSelectionIndicatorImage:(id)image;	// 0x331380c5
- (BOOL)_subclassImplementsDrawRect;	// 0x32f4e0fd
- (void)_tabBarFinishedAnimating;	// 0x33139385
- (void)_updateBackgroundImage;	// 0x32f4e2b5
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x3313907d
// declared property getter: - (id)backgroundImage;	// 0x33138ef5
- (void)beginCustomizingItems:(id)items;	// 0x33138c5d
// converted property getter: - (id)buttonItems;	// 0x33139945
- (void)dealloc;	// 0x3313897d
// declared property getter: - (id)delegate;	// 0x3313934d
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x331393a5
- (void)drawRect:(CGRect)rect;	// 0x3313971d
- (void)encodeWithCoder:(id)coder;	// 0x33138831
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x33138d51
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3313a765
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32fdbfc5
- (BOOL)isCustomizing;	// 0x32f85841
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x33149651
// converted property getter: - (BOOL)isLocked;	// 0x32f4e8cd
// declared property getter: - (id)items;	// 0x32f94e51
- (void)layoutSubviews;	// 0x32f55b95
// declared property getter: - (id)selectedImageTintColor;	// 0x3313932d
// declared property getter: - (id)selectedItem;	// 0x32f6e7e9
// declared property getter: - (id)selectionIndicatorImage;	// 0x3313905d
- (void)setAutoresizingMask:(unsigned)mask;	// 0x33139621
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x33138dd1
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x331395d1
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x33139581
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x33139531
- (void)setBounds:(CGRect)bounds;	// 0x3313966d
// converted property setter: - (void)setButtonItems:(id)items;	// 0x33139955
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32f4e865
- (void)setFrame:(CGRect)frame;	// 0x32f4e1cd
// declared property setter: - (void)setItems:(id)items;	// 0x33138b25
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x32f504b1
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x32f4e791
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x33139295
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x32f531f5
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x33138f15
// declared property setter: - (void)setTintColor:(id)color;	// 0x331391e9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32f4e7c5
// declared property getter: - (id)tintColor;	// 0x32f51001
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x331393d1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x331394d9
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33139481
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33139429
@end

