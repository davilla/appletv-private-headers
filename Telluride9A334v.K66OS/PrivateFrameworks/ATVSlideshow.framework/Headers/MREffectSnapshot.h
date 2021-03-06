/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectSnapshot : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
	BOOL mNumberOfLines;	// 128 = 0x80
}
+ (void)initialize;	// 0x32f352f1
- (id)initWithEffectID:(id)effectID;	// 0x32f35485
- (void)_cleanup;	// 0x32f354ed
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f36db9
- (int)_maxLinesForTextElement:(id)textElement;	// 0x32f36db5
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x32f36d1d
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x32f36c29
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x32f36cb5
- (BOOL)isLoadedForTime:(double)time;	// 0x32f35575
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x32f355f9
@end

