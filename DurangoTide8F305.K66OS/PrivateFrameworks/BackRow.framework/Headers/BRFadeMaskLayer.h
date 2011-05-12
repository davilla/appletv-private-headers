/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRFadeMaskLayer : BRControl {
@private
	float _topFadeHeight;	// 44 = 0x2c
	float _bottomFadeHeight;	// 48 = 0x30
	float _leftFadeWidth;	// 52 = 0x34
	float _rightFadeWidth;	// 56 = 0x38
	CGFunctionRef _shadingFunction;	// 60 = 0x3c
}
@property(assign) float bottomFadeHeight;	// G=0x3293e90d; S=0x3293e745; converted property
@property(assign) float leftFadeWidth;	// G=0x329aa3fd; S=0x32926ccd; converted property
@property(assign) float rightFadeWidth;	// G=0x32926d35; S=0x32926d01; converted property
@property(assign) float topFadeHeight;	// G=0x3293e8fd; S=0x3293e779; converted property
- (id)init;	// 0x3291a3fd
// converted property getter: - (float)bottomFadeHeight;	// 0x3293e90d
- (void)dealloc;	// 0x3291f3d5
- (void)drawInContext:(CGContextRef)context;	// 0x32926d5d
// converted property getter: - (float)leftFadeWidth;	// 0x329aa3fd
// converted property getter: - (float)rightFadeWidth;	// 0x32926d35
// converted property setter: - (void)setBottomFadeHeight:(float)height;	// 0x3293e745
- (void)setEnableMaskAnimation:(BOOL)animation;	// 0x32926161
// converted property setter: - (void)setLeftFadeWidth:(float)width;	// 0x32926ccd
// converted property setter: - (void)setRightFadeWidth:(float)width;	// 0x32926d01
// converted property setter: - (void)setTopFadeHeight:(float)height;	// 0x3293e779
// converted property getter: - (float)topFadeHeight;	// 0x3293e8fd
@end

