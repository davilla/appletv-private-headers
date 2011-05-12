/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRCroppingSprite, MRTextRenderer, MRImage;

@interface MREffectSnapshot : MREffect {
	MRCroppingSprite *mSprite;	// 112 = 0x70
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
	BOOL mNumberOfLines;	// 128 = 0x80
}
- (id)initWithEffectID:(id)effectID;	// 0x332c39c5
- (void)_cleanup;	// 0x332c3a29
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332c5041
- (int)_maxLinesForTextElement:(id)textElement;	// 0x332c503d
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x332c4f91
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x332c4ead
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x332c4f35
- (BOOL)isLoadedForTime:(double)time;	// 0x332c3aa9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332c3b19
@end

