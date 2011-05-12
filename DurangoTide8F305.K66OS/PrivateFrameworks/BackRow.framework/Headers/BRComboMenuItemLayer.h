/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRMarqueeTextControl, NSString, BRImageControl;

@interface BRComboMenuItemLayer : BRControl {
@private
	BRControl *_background;	// 44 = 0x2c
	BRImageControl *_thumbnailLayer;	// 48 = 0x30
	BRMarqueeTextControl *_titleLayer;	// 52 = 0x34
	BRTextControl *_subtitleLayer;	// 56 = 0x38
	BRTextControl *_leftTextLayer;	// 60 = 0x3c
	BRTextControl *_middleTextLayer;	// 64 = 0x40
	BRImageControl *_bottomRightImageLayer;	// 68 = 0x44
	BRImageControl *_topRightImageLayer;	// 72 = 0x48
	NSString *_thumbnailIdentifier;	// 76 = 0x4c
	float _thumbnailPaddingFactor;	// 80 = 0x50
	float _thumbnailLayerAspect;	// 84 = 0x54
}
@property(retain) id subtitle;	// G=0x329a9aa9; S=0x3294291d; converted property
@property(retain) NSString *thumbnailIdentifier;	// G=0x329434f1; S=0x32942da9; converted property
@property(assign) float thumbnailLayerAspectRatio;	// G=0x329a98bd; S=0x32942f7d; converted property
@property(assign) float thumbnailPaddingFactor;	// G=0x329a98ad; S=0x329427dd; converted property
@property(retain) id title;	// G=0x329a9ad9; S=0x32942811; converted property
- (id)init;	// 0x32942715
- (id)_comboMenuItemSubtitleTextAttributes;	// 0x329a9c25
- (id)_comboMenuItemTitleTextAttributes;	// 0x329a9be1
- (id)accessibilityLabel;	// 0x329a9b35
- (id)axSelectedItemText;	// 0x329a98d1
- (void)controlWasFocused;	// 0x329430b9
- (void)controlWasUnfocused;	// 0x3294312d
- (void)dealloc;	// 0x32943419
- (float)defaultRowHeight;	// 0x329a9b09
- (CGRect)focusCursorFrame;	// 0x32943175
- (BOOL)isAccessibilityElement;	// 0x329a98cd
- (void)layoutSubcontrols;	// 0x329a9c71
- (void)setBottomRightImage:(id)image;	// 0x32942ff5
- (void)setLeftText:(id)text;	// 0x32942a29
- (void)setMiddleText:(id)text;	// 0x32942b35
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x3294291d
// converted property setter: - (void)setThumbnailIdentifier:(id)identifier;	// 0x32942da9
- (void)setThumbnailImage:(id)image;	// 0x32942eb9
// converted property setter: - (void)setThumbnailLayerAspectRatio:(float)ratio;	// 0x32942f7d
// converted property setter: - (void)setThumbnailPaddingFactor:(float)factor;	// 0x329427dd
// converted property setter: - (void)setTitle:(id)title;	// 0x32942811
- (void)setTopRightImage:(id)image;	// 0x329a99e5
// converted property getter: - (id)subtitle;	// 0x329a9aa9
// converted property getter: - (id)thumbnailIdentifier;	// 0x329434f1
// converted property getter: - (float)thumbnailLayerAspectRatio;	// 0x329a98bd
// converted property getter: - (float)thumbnailPaddingFactor;	// 0x329a98ad
// converted property getter: - (id)title;	// 0x329a9ad9
@end

