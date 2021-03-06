/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

#import "TelephonyUI-Structs.h"
#import <UIButton.h> // Unknown library

@class UIImageView;

@interface TPButton : UIButton {
	UIImageView *_plusSeparator;	// 140 = 0x8c
	int _color;	// 144 = 0x90
}
@property(assign) int buttonColor;	// G=0x34857049; S=0x348570d5; converted property
+ (id)acceptVideoButtonImage;	// 0x34857711
+ (id)answerButtonImage;	// 0x348575fd
+ (id)declineButtonImage;	// 0x34857659
+ (id)declineVideoButtonImage;	// 0x348576b5
+ (float)defaultHeight;	// 0x34857121
+ (float)defaultHeightForColor:(int)color;	// 0x34857961
+ (void)preloadImagesForColor:(int)color;	// 0x348575f1
- (id)initWithTitle:(id)title icon:(id)icon color:(int)color frame:(CGRect)frame;	// 0x3485776d
- (void)_adjustIconColor;	// 0x34857059
- (void)_setButtonColor:(int)color;	// 0x348572e1
- (void)_setDisabledButtonColor:(int)color;	// 0x348575c5
// converted property getter: - (int)buttonColor;	// 0x34857049
- (void)dealloc;	// 0x34857e91
- (CGRect)imageRectForContentRect:(CGRect)contentRect;	// 0x34857f61
// converted property setter: - (void)setButtonColor:(int)color;	// 0x348570d5
- (void)setDisabledButtonColor:(int)color;	// 0x348570e5
- (void)setEnabled:(BOOL)enabled;	// 0x348580b9
- (void)setFrame:(CGRect)frame;	// 0x34857fc5
- (void)setHighlighted:(BOOL)highlighted;	// 0x348580f9
- (void)setIconVerticalOffset:(float)offset;	// 0x34857991
- (void)setMinimumTitleFontSize:(float)size;	// 0x348570f5
- (void)setPlusSeparatedTitle:(id)title;	// 0x34857a41
- (void)setTitleImagePadding:(float)padding;	// 0x34857ffd
- (void)setTitleVerticalOffset:(float)offset;	// 0x348579f1
- (CGRect)titleRectForContentRect:(CGRect)contentRect;	// 0x34857ef1
@end

