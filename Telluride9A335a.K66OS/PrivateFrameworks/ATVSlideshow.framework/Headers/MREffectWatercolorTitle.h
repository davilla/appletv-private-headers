/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectWatercolorTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mTextImage;	// 116 = 0x74
	MRCroppingSprite *mTextSprite;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x31b3dde5
- (void)_cleanup;	// 0x31b3de41
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b3e3b5
- (int)_maxLinesForTextElement:(id)textElement;	// 0x31b3e3b1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x31b3e37d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x31b3dec9
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x31b3df19
- (BOOL)isLoadedForTime:(double)time;	// 0x31b3dfa1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b3e025
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x31b3e05d
- (void)setPixelSize:(CGSize)size;	// 0x31b3df71
@end

