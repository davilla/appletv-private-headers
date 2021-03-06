/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider, MRTextRenderer, MRCroppingSprite, MRImage;

@interface MREffectShatterTitle : MREffect {
	MRImageProvider *mMasks[9];	// 116 = 0x74
	MRTextRenderer *mTextRenderer;	// 152 = 0x98
	MRImage *mTextImage;	// 156 = 0x9c
	MRCroppingSprite *mTextSprite;	// 160 = 0xa0
}
- (id)initWithEffectID:(id)effectID;	// 0x32108d51
- (void)_cleanup;	// 0x32108f2d
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32109a49
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32109d4d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32109d19
- (void)_unload;	// 0x32109cc1
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x32109029
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3210906d
- (BOOL)isLoadedForTime:(double)time;	// 0x321090c5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x321091a5
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32109229
- (void)setPixelSize:(CGSize)size;	// 0x32108fbd
@end

