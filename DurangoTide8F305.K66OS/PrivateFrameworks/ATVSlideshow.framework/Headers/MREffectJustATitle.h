/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectJustATitle : MREffect {
	MRTextRenderer *mTextRenderer0;	// 112 = 0x70
	MRTextRenderer *mTextRenderer1;	// 116 = 0x74
	MRImage *mImage0;	// 120 = 0x78
	MRImage *mImage1;	// 124 = 0x7c
	MRCroppingSprite *mTextSprite0;	// 128 = 0x80
	MRCroppingSprite *mTextSprite1;	// 132 = 0x84
	BOOL mTextWasUpdatedSinceLastRendering;	// 136 = 0x88
}
- (id)init;	// 0x33288f99
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33289a71
- (int)_maxLinesForTextElement:(id)textElement;	// 0x3328a7e1
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x3328a5ed
- (void)_unload;	// 0x3328a849
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33289015
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3328909d
- (BOOL)isLoadedForTime:(double)time;	// 0x33289135
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3328920d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33289271
@end

