/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite;

@interface MREffectJustASlide : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	BOOL mForceIsOpaque;	// 116 = 0x74
}
- (id)init;	// 0x33d175b5
- (void)_cleanup;	// 0x33d17621
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d17f55
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d17f99
- (BOOL)isAlphaFriendly;	// 0x33d17759
- (BOOL)isNative3D;	// 0x33d17649
- (BOOL)isOpaque;	// 0x33d176c9
- (id)patchworkAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d17ee5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d177c5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d17849
- (id)retainedByUserRenderedImageAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d17e19
@end

