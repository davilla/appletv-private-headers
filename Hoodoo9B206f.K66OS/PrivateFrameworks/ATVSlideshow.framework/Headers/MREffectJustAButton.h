/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"


@interface MREffectJustAButton : MREffect {
	BOOL mIsPressed;	// 112 = 0x70
	BOOL mIsSet;	// 113 = 0x71
}
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x30b5219d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b521b9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x30b521f1
- (void)setLiveAttributes:(id)attributes;	// 0x30b52125
@end
