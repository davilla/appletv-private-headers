/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRPanelControl.h"

@class NSDictionary, NSArray;

@interface BRTabControl : BRPanelControl {
@private
	int _selectedTabIndex;	// 76 = 0x4c
	float _scaledTextPadding;	// 80 = 0x50
	float _scaledPreferredHeight;	// 84 = 0x54
	int _tabBeingDeselected;	// 88 = 0x58
	id _tabControlDelegate;	// 92 = 0x5c
	NSArray *_greyImages;	// 96 = 0x60
	NSArray *_blackImages;	// 100 = 0x64
	NSArray *_blueImages;	// 104 = 0x68
	NSDictionary *_tabItemLabelAttributes;	// 108 = 0x6c
}
@property(assign) id tabControlDelegate;	// G=0x366c2711; S=0x366c2721; converted property
+ (id)fullSizeTabControl;	// 0x366c22d5
+ (id)menuTabControl;	// 0x366c239d
- (id)init;	// 0x366c2465
- (id)_centerTabImagesFromImages:(id)images;	// 0x366c383d
- (void)_focusChanged:(id)changed;	// 0x366c3e79
- (id)_imagesForTabItem:(id)tabItem;	// 0x366c3969
- (id)_leftTabImagesFromImages:(id)images;	// 0x366c378d
- (void)_loadTabImages;	// 0x366c3389
- (id)_rightTabImagesFromImages:(id)images;	// 0x366c38c5
- (void)_updateFocusNotifications;	// 0x366c3ddd
- (void)_updateTabItemNames:(int)names;	// 0x366c3ccd
- (id)accessibilityControls;	// 0x366c31e1
- (void)addTabItem:(id)item;	// 0x366c2731
- (void)addTabItems:(id)items;	// 0x366c2771
- (BOOL)brEventAction:(id)action;	// 0x366c263d
- (void)controlWasFocused;	// 0x366c3079
- (void)controlWasUnfocused;	// 0x366c312d
- (void)dealloc;	// 0x366c2525
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x366c2ffd
- (void)insertTabItem:(id)item atIndex:(int)index;	// 0x366c29f1
- (void)removeAllTabItems;	// 0x366c2bb1
- (void)removeTabItem:(id)item;	// 0x366c2bc5
- (void)selectNextTabItem;	// 0x366c2f81
- (void)selectPreviousTabItem;	// 0x366c2f29
- (void)selectTabItem:(id)item;	// 0x366c2d21
- (void)selectTabItemAtIndex:(int)index;	// 0x366c2ec5
- (id)selectedTabItem;	// 0x366c2cd5
- (int)selectedTabItemIndex;	// 0x366c2d11
- (void)setScaledPreferredHeight:(float)height;	// 0x366c25ed
- (void)setScaledTextPadding:(float)padding;	// 0x366c25dd
// converted property setter: - (void)setTabControlDelegate:(id)delegate;	// 0x366c2721
- (void)setTabItemLabelAttributes:(id)attributes;	// 0x366c25fd
- (void)setTabItemNonSelectedImages:(id)images;	// 0x366c3731
- (void)setTabItemSelectedInFocusImages:(id)focusImages;	// 0x366c3679
- (void)setTabItemSelectedNonFocusedImages:(id)images;	// 0x366c36d5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x366c31f1
// converted property getter: - (id)tabControlDelegate;	// 0x366c2711
- (int)tabItemCount;	// 0x366c2cad
- (id)tabItems;	// 0x366c29e1
@end

