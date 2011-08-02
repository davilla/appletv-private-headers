/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIStatusBarBackgroundView : UIView {
@private
	int _style;	// 44 = 0x2c
	UIImageView *_glowView;	// 48 = 0x30
	BOOL _glowEnabled;	// 52 = 0x34
	BOOL _suppressGlow;	// 53 = 0x35
}
@property(readonly, assign) int style;	// G=0x300aa48d; converted property
- (id)initWithFrame:(CGRect)frame style:(int)style;	// 0x300aa07d
- (id)_baseImageForStyle:(int)style;	// 0x300aa209
- (id)_glowImageForStyle:(int)style;	// 0x3030ad81
- (id)_imageNameForStyle:(int)style;	// 0x300aa261
- (void)_setGlowAnimationEnabled:(BOOL)enabled waitForNextCycle:(BOOL)nextCycle;	// 0x30099391
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)nextCycle;	// 0x300993d9
- (void)_stopGlowAnimation;	// 0x300aa431
- (BOOL)_styleCanGlow:(int)glow;	// 0x300996a5
- (void)dealloc;	// 0x30174a79
- (void)setGlowAnimationEnabled:(BOOL)enabled;	// 0x300aba79
- (void)setSuppressesGlow:(BOOL)glow;	// 0x30099361
// converted property getter: - (int)style;	// 0x300aa48d
@end

