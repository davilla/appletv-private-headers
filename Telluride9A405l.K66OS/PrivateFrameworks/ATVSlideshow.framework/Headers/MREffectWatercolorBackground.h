/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectWatercolorBackground : MREffect {
	MRImageProvider *mPlasmaProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x33565835
- (void)_cleanup;	// 0x3356593d
- (void)_unload;	// 0x3356625d
- (BOOL)isLoadedForTime:(double)time;	// 0x335659d5
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x335659f9
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33565c81
- (void)setAttributes:(id)attributes;	// 0x33565a65
- (void)setPixelSize:(CGSize)size;	// 0x3356597d
@end

