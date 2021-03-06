/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImage, MRTextRenderer, MRCroppingSprite;

@interface MREffectMapTitle : MREffect {
	MRTextRenderer *mTextRenderer;	// 116 = 0x74
	MRImage *mTextImage;	// 120 = 0x78
	MRCroppingSprite *mTextSprite;	// 124 = 0x7c
}
- (id)initWithEffectID:(id)effectID;	// 0x3625a68d
- (void)_cleanup;	// 0x3625a6e9
- (void)_loadForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3625acc5
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x3625a76d
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x3625a7b1
- (BOOL)isLoadedForTime:(double)time;	// 0x3625aa55
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3625aad9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x3625ab11
- (void)setAttributes:(id)attributes;	// 0x3625a809
@end

