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
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;	// G=0x30296fb9; S=0x30296f45; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x30297e09; S=0x30297ce5; 
@property(retain) NSArray *buttonItems;	// G=0x30298859; S=0x30298869; converted property
@property(assign, nonatomic) id<UITabBarDelegate> delegate;	// G=0x30298261; S=0x300ad6bd; @synthesize=_delegate
@property(copy, nonatomic) NSArray *items;	// G=0x300f3ca9; S=0x30297a39; 
@property(assign, getter=isLocked) BOOL locked;	// G=0x300ad725; S=0x300ad5e9; converted property
@property(retain, nonatomic) UIColor *selectedImageTintColor;	// G=0x30298241; S=0x302981a9; 
@property(assign, nonatomic) UITabBarItem *selectedItem;	// G=0x300cd641; S=0x300b204d; 
@property(retain, nonatomic) UIImage *selectionIndicatorImage;	// G=0x30297f71; S=0x30297e29; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x300afe59; S=0x302980fd; 
+ (float)_buttonGap;	// 0x302988ad
+ (float)defaultHeightForBarSize:(int)barSize;	// 0x30298271
- (id)initWithCoder:(id)coder;	// 0x302974d9
- (id)initWithFrame:(CGRect)frame;	// 0x300acf09
- (void)_adjustButtonSelection:(id)selection;	// 0x3013b06d
- (void)_alertDidHide;	// 0x30298b89
- (void)_alertWillShow:(BOOL)_alert duration:(float)duration;	// 0x302988b5
- (id)_appearanceStorage;	// 0x300afe49
// declared property getter: - (id)_backgroundView;	// 0x30296fb9
- (void)_buttonCancel:(id)cancel;	// 0x30298c31
- (void)_buttonDown:(id)down;	// 0x3013afa1
- (void)_buttonDownDelayed:(id)delayed;	// 0x30298be9
- (void)_buttonUp:(id)up;	// 0x3013aff5
- (BOOL)_canDrawContent;	// 0x300acfd5
- (void)_configureTabBarReplacingItem:(id)item withNewItem:(id)newItem dragging:(BOOL)dragging swapping:(BOOL)swapping;	// 0x302994a1
- (void)_customizeDoneButtonAction:(id)action;	// 0x30298e71
- (void)_customizeWithAvailableItems:(id)availableItems;	// 0x30298fe9
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x300b4501
- (void)_dismissCustomizeSheet:(BOOL)sheet;	// 0x30298c69
- (void)_finishCustomizeAnimation:(id)animation;	// 0x30298e85
- (void)_finishSetItems:(id)items finished:(id)finished context:(void *)context;	// 0x30297a4d
- (BOOL)_isHidden:(id)hidden;	// 0x302996e5
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30297635
- (void)_positionTabBarButtons:(id)buttons ignoringItem:(id)item;	// 0x300b1759
- (void)_sendAction:(id)action withEvent:(id)event;	// 0x3013b179
- (void)_setBackgroundImage:(id)image;	// 0x30296fc9
// declared property setter: - (void)_setBackgroundView:(id)view;	// 0x30296f45
- (void)_setLabelFont:(id)font;	// 0x30296fe9
- (void)_setLabelShadowColor:(id)color;	// 0x3029726d
- (void)_setLabelShadowOffset:(CGSize)offset;	// 0x30297395
- (void)_setLabelTextColor:(id)color selectedTextColor:(id)color2;	// 0x30297111
- (void)_setSelectionIndicatorImage:(id)image;	// 0x30296fd9
- (BOOL)_subclassImplementsDrawRect;	// 0x300acf55
- (void)_tabBarFinishedAnimating;	// 0x30298299
- (void)_updateBackgroundImage;	// 0x300ad10d
- (void)_updateTintedImages:(id)images selected:(BOOL)selected;	// 0x30297f91
// declared property getter: - (id)backgroundImage;	// 0x30297e09
- (void)beginCustomizingItems:(id)items;	// 0x30297b71
// converted property getter: - (id)buttonItems;	// 0x30298859
- (void)dealloc;	// 0x30297891
// declared property getter: - (id)delegate;	// 0x30298261
- (void)dismissCustomizeSheet:(BOOL)sheet;	// 0x302982b9
- (void)drawRect:(CGRect)rect;	// 0x30298631
- (void)encodeWithCoder:(id)coder;	// 0x30297745
- (BOOL)endCustomizingAnimated:(BOOL)animated;	// 0x30297c65
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30299679
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x3013ae41
- (BOOL)isCustomizing;	// 0x300e4699
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x302a8565
// converted property getter: - (BOOL)isLocked;	// 0x300ad725
// declared property getter: - (id)items;	// 0x300f3ca9
- (void)layoutSubviews;	// 0x300b49ed
// declared property getter: - (id)selectedImageTintColor;	// 0x30298241
// declared property getter: - (id)selectedItem;	// 0x300cd641
// declared property getter: - (id)selectionIndicatorImage;	// 0x30297f71
- (void)setAutoresizingMask:(unsigned)mask;	// 0x30298535
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x30297ce5
- (void)setBadgeAnimated:(BOOL)animated forButton:(int)button;	// 0x302984e5
- (void)setBadgeGlyph:(id)glyph forButton:(int)button;	// 0x30298495
- (void)setBadgeValue:(id)value forButton:(int)button;	// 0x30298445
- (void)setBounds:(CGRect)bounds;	// 0x30298581
// converted property setter: - (void)setButtonItems:(id)items;	// 0x30298869
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300ad6bd
- (void)setFrame:(CGRect)frame;	// 0x300ad025
// declared property setter: - (void)setItems:(id)items;	// 0x30297a39
- (void)setItems:(id)items animated:(BOOL)animated;	// 0x300af309
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x300ad5e9
// declared property setter: - (void)setSelectedImageTintColor:(id)color;	// 0x302981a9
// declared property setter: - (void)setSelectedItem:(id)item;	// 0x300b204d
// declared property setter: - (void)setSelectionIndicatorImage:(id)image;	// 0x30297e29
// declared property setter: - (void)setTintColor:(id)color;	// 0x302980fd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x300ad61d
// declared property getter: - (id)tintColor;	// 0x300afe59
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302982e5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302983ed
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x30298395
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3029833d
@end
