/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView, NSString;

@interface TPButton : UIButton {
	UIImageView *_plusSeparator;	// 180 = 0xb4
	int _color;	// 184 = 0xb8
	NSString *_plusSeparatedTitle;	// 188 = 0xbc
	BOOL _forceReLayout;	// 192 = 0xc0
	BOOL _currentlyLayingOut;	// 193 = 0xc1
	BOOL _useStandardSizing;	// 194 = 0xc2
}
@property(assign) int buttonColor;	// G=0x3793b0fd; S=0x3793b0dd; converted property
@property(assign) BOOL useStandardSizing;	// G=0x3793bb49; S=0x3793bb61; @synthesize=_useStandardSizing
+ (id)acceptVideoButtonImage;	// 0x3793aaa5
+ (id)answerButtonImage;	// 0x3793a9fd
+ (id)declineButtonImage;	// 0x3793aa35
+ (id)declineVideoButtonImage;	// 0x3793aa6d
+ (float)defaultHeight;	// 0x3793a85d
+ (float)defaultHeightForColor:(int)color;	// 0x3793a889
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x3793adf5
- (void)_adjustIconColor;	// 0x3793afdd
- (void)_setButtonColor:(int)color;	// 0x3793aadd
- (void)_setDisabledButtonColor:(int)color;	// 0x3793adc9
// converted property getter: - (int)buttonColor;	// 0x3793b0fd
- (void)dealloc;	// 0x3793b2d9
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x3793b1d5
- (void)layoutSubviews;	// 0x3793b6d5
// converted property setter: - (void)setButtonColor:(int)color;	// 0x3793b0dd
- (void)setDisabledButtonColor:(int)color;	// 0x3793b0ed
- (void)setEnabled:(BOOL)enabled;	// 0x3793b09d
- (void)setHighlighted:(BOOL)highlighted;	// 0x3793b05d
- (void)setIconVerticalOffset:(float)offset;	// 0x3793b481
- (void)setMinimumTitleFontSize:(float)size;	// 0x3793b4e9
- (void)setMinimumTitleFontSize:(float)size maximumTitleFontSize:(float)size2;	// 0x3793b61d
- (void)setPlusSeparatedTitle:(id)title;	// 0x3793b34d
- (void)setTitleImagePadding:(float)padding;	// 0x3793b10d
- (void)setTitleVerticalOffset:(float)offset;	// 0x3793b421
// declared property setter: - (void)setUseStandardSizing:(BOOL)sizing;	// 0x3793bb61
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x3793b251
// declared property getter: - (BOOL)useStandardSizing;	// 0x3793bb49
@end
