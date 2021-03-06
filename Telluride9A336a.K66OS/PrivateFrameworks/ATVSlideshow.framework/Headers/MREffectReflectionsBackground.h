/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MREffect.h"
#import "ATVSlideshow-Structs.h"

@class MRImageProvider;

@interface MREffectReflectionsBackground : MREffect {
	MRImageProvider *mGradientProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x34338329
- (void)_cleanup;	// 0x34338431
- (void)_unload;	// 0x343388e1
- (BOOL)isLoadedForTime:(double)time;	// 0x343384c9
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x343384ed
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x34338765
- (void)setAttributes:(id)attributes;	// 0x34338559
- (void)setPixelSize:(CGSize)size;	// 0x34338471
@end

