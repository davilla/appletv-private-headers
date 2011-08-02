/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"

@class MRImageProvider;

@interface MREffectVignettingOverlay : MREffect {
	MRImageProvider *mVignetteProvider;	// 112 = 0x70
}
- (id)initWithEffectID:(id)effectID;	// 0x33d598b9
- (void)_cleanup;	// 0x33d599b9
- (void)_unload;	// 0x33d59a85
- (BOOL)isLoadedForTime:(double)time;	// 0x33d59a5d
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d59a7d
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x33d59a81
- (void)setPixelSize:(CGSize)size;	// 0x33d599f5
@end
