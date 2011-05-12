/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x332ade61
- (void)_cleanup;	// 0x332adf65
- (void)_unload;	// 0x332ae3b9
- (BOOL)isLoadedForTime:(double)time;	// 0x332ae009
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332ae029
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x332ae291
- (void)setAttributes:(id)attributes;	// 0x332ae095
- (void)setPixelSize:(CGSize)size;	// 0x332adfa1
@end

