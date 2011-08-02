/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class NSMutableArray, MRCroppingSprite, MRImage, MRTextRenderer;

@interface MREffectTableTopTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 112 = 0x70
	MRImage *mImage;	// 116 = 0x74
	NSMutableArray *mLetterImages;	// 120 = 0x78
	NSMutableArray *mLetterFrames;	// 124 = 0x7c
	NSMutableArray *mCachedRenderedLetters;	// 128 = 0x80
	CGContextRef mCachedRenderedText;	// 132 = 0x84
	int mNumberOfLetters;	// 136 = 0x88
	MRCroppingSprite *mTextSprite;	// 140 = 0x8c
}
- (id)init;	// 0x33d57ef5
- (void)_cleanup;	// 0x33d57fb9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d58125
- (int)_maxLinesForTextElement:(id)textElement;	// 0x33d58471
- (CGSize)_maxSizeForTextElement:(id)textElement;	// 0x33d58445
- (void)_unload;	// 0x33d58475
- (void)cacheRenderedWords;	// 0x33d58611
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x33d58019
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x33d5805d
- (BOOL)isLoadedForTime:(double)time;	// 0x33d580a9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d58971
@end

