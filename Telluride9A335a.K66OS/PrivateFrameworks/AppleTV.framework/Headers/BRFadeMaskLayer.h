/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
@private
	float _topFadeHeight;	// 48 = 0x30
	float _bottomFadeHeight;	// 52 = 0x34
	float _leftFadeWidth;	// 56 = 0x38
	float _rightFadeWidth;	// 60 = 0x3c
	CGFunctionRef _shadingFunction;	// 64 = 0x40
}
@property(assign) float bottomFadeHeight;	// G=0x3425b981; S=0x3425b945; converted property
@property(assign) float leftFadeWidth;	// G=0x3425b9cd; S=0x3425b991; converted property
@property(assign) float rightFadeWidth;	// G=0x3425ba19; S=0x3425b9dd; converted property
@property(assign) float topFadeHeight;	// G=0x3425b935; S=0x3425b8f9; converted property
- (id)init;	// 0x3425b829
// converted property getter: - (float)bottomFadeHeight;	// 0x3425b981
- (void)dealloc;	// 0x3425b8b5
- (void)drawInContext:(CGContextRef)context;	// 0x3425ba29
// converted property getter: - (float)leftFadeWidth;	// 0x3425b9cd
// converted property getter: - (float)rightFadeWidth;	// 0x3425ba19
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x3425b945
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x3425bc71
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x3425b991
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x3425b9dd
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x3425b8f9
// converted property getter: - (float)topFadeHeight;	// 0x3425b935
@end

