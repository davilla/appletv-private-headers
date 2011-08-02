/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectReflectionsSubtitle : MREffect {
	MRCroppingSprite *mTextSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
}
- (id)initWithEffectID:(id)effectID;	// 0x33d3d35d
- (void)_cleanup;	// 0x33d3d3b5
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d3d91d
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d3d44d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d3d435
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d3d451
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d3d495
- (BOOL)isLoadedForTime:(double)time;	// 0x33d3d4e1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d3d551
@end

