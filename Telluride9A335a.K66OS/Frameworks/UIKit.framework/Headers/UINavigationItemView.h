/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UINavigationItem, UIFont;

__attribute__((visibility("hidden")))
@interface UINavigationItemView : UIView {
@private
	UIFont *_font;	// 48 = 0x30
	UINavigationItem *_item;	// 52 = 0x34
	float _titleWidth;	// 56 = 0x38
	BOOL _titleAutosizesToFit;	// 60 = 0x3c
	UIView *_topCrossView;	// 64 = 0x40
	UIView *_bottomCrossView;	// 68 = 0x44
	BOOL _isCrossFading;	// 72 = 0x48
	int _lineBreakMode;	// 76 = 0x4c
}
@property(retain) UIFont *font;	// G=0x33b49c89; S=0x33b49c45; converted property
@property(assign) BOOL titleAutoresizesToFit;	// G=0x33b49c35; S=0x339babb5; converted property
- (id)initWithNavigationItem:(id)navigationItem;	// 0x339ba979
- (void)_cleanUpCrossView;	// 0x33b49ffd
- (void)_crossFadeHiddingButton:(BOOL)button;	// 0x33b49efd
- (id)_currentTextColorForBarStyle:(int)barStyle;	// 0x339e8d2d
- (id)_currentTextShadowColorForBarStyle:(int)barStyle;	// 0x339e8be5
- (CGSize)_currentTextShadowOffsetForBarStyle:(int)barStyle;	// 0x339e8aa1
- (id)_defaultFont;	// 0x339e8a69
- (void)_prepareCrossViewsForNewSize:(CGSize)newSize;	// 0x33b49c99
- (void)_resetTitleWidth;	// 0x339d3cf1
- (id)_scriptingInfo;	// 0x33ac420d
- (void)_setLineBreakMode:(int)mode;	// 0x339d4165
- (float)_titleWidth;	// 0x33a03629
- (BOOL)_useSilverLookForBarStyle:(int)barStyle;	// 0x339e8b65
- (void)drawRect:(CGRect)rect;	// 0x339e877d
- (void)drawText:(id)text inRect:(CGRect)rect barStyle:(int)style;	// 0x339e8861
// converted property getter: - (id)font;	// 0x33b49c89
- (id)navigationItem;	// 0x33b49c25
// converted property setter: - (void)setFont:(id)font;	// 0x33b49c45
- (void)setFrame:(CGRect)frame;	// 0x339baa35
// converted property setter: - (void)setTitleAutoresizesToFit:(BOOL)fit;	// 0x339babb5
- (id)title;	// 0x33a592e5
// converted property getter: - (BOOL)titleAutoresizesToFit;	// 0x33b49c35
@end

