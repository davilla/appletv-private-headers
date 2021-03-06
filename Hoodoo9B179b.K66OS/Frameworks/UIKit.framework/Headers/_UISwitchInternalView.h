/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface _UISwitchInternalView : UIView {
@private
	UIImage *_colorMask;	// 48 = 0x30
	UIImage *_shapeMask;	// 52 = 0x34
	UIImage *_shapeShadow;	// 56 = 0x38
	UIImage *_thumb;	// 60 = 0x3c
	UIImage *_thumbPressed;	// 64 = 0x40
	float _position;	// 68 = 0x44
	BOOL _pressed;	// 72 = 0x48
	UIImageView *_colorView;	// 76 = 0x4c
	UIImageView *_thumbView;	// 80 = 0x50
	UIImageView *_labelView;	// 84 = 0x54
	UIColor *_tintColor;	// 88 = 0x58
	UIColor *_nonAlternateColor;	// 92 = 0x5c
	BOOL _on;	// 96 = 0x60
	BOOL _sendAction;	// 97 = 0x61
	BOOL _useAleternateColor;	// 98 = 0x62
	BOOL _animating;	// 99 = 0x63
	UIImageView *_idleImageView;	// 100 = 0x64
	UIView *_interactiveView;	// 104 = 0x68
}
@property(assign, nonatomic) BOOL on;	// G=0x32f8fe49; S=0x33050ca5; @synthesize=_on
@property(assign) BOOL sendAction;	// G=0x33126265; S=0x33050cb5; converted property
@property(retain, nonatomic) UIColor *tintColor;	// G=0x32f8f1ed; S=0x331261a5; @synthesize=_tintColor
@property(assign, nonatomic) BOOL useAleternateColor;	// G=0x33126289; S=0x32f8f871; @synthesize=_useAleternateColor
- (id)initWithFrame:(CGRect)frame;	// 0x32f8d771
- (void)_buildControl;	// 0x32f8db1d
- (void)_cleanUpAfterAnimating;	// 0x32f8f481
- (id)_colorImage;	// 0x32f8f019
- (id)_createLabelImage;	// 0x32f8e3bd
- (void)_onAnimationDidStop:(id)_onAnimation finished:(id)finished context:(void *)context;	// 0x33051039
- (void)_prepareForInteraction;	// 0x33050aa1
- (void)_sendActions;	// 0x33051169
- (void)_setOn:(BOOL)on animated:(BOOL)animated force:(BOOL)force;	// 0x331261f9
- (void)_setPressed:(BOOL)pressed;	// 0x33050ae5
- (void)_setProgress:(float)progress;	// 0x32f8f271
- (void)_setProgress:(float)progress animated:(BOOL)animated withDuration:(float)duration force:(BOOL)force sendAction:(BOOL)action;	// 0x33050cc5
- (void)_setTintColor:(id)color;	// 0x32f8f9e9
- (id)_snapshotImage;	// 0x32f8f689
- (void)dealloc;	// 0x33042541
// declared property getter: - (BOOL)on;	// 0x32f8fe49
// converted property getter: - (BOOL)sendAction;	// 0x33126265
// declared property setter: - (void)setOn:(BOOL)on;	// 0x33050ca5
// converted property setter: - (void)setSendAction:(BOOL)action;	// 0x33050cb5
// declared property setter: - (void)setTintColor:(id)color;	// 0x331261a5
// declared property setter: - (void)setUseAleternateColor:(BOOL)color;	// 0x32f8f871
// declared property getter: - (id)tintColor;	// 0x32f8f1ed
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33050a71
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33126275
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33051025
// declared property getter: - (BOOL)useAleternateColor;	// 0x33126289
@end

