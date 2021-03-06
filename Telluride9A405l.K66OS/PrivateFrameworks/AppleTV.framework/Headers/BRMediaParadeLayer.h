/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRMediaParadeLayer : BRControl {
@private
	CGSize _animationBounds;	// 48 = 0x30
	CGSize _maxImageBounds;	// 56 = 0x38
	BOOL _paused;	// 64 = 0x40
}
@property(assign) BOOL paused;	// G=0x35e11109; S=0x35e10e71; converted property
@property(retain) id provider;	// G=0x35e10cb9; S=0x35e10c9d; converted property
- (id)init;	// 0x35e10be5
- (id)_addLayerForImage:(id)image;	// 0x35e11119
- (void)_updateAnimationForImageLayer:(id)imageLayer withTimeOffset:(double)timeOffset;	// 0x35e1127d
- (void)_updateAnimations;	// 0x35e1119d
- (void)_updateKeyframes;	// 0x35e117f9
- (void)animationDidStop:(id)animation finished:(BOOL)finished;	// 0x35e11a55
- (void)layoutSubcontrols;	// 0x35e10dd5
- (long)maxImages;	// 0x35e10cd5
// converted property getter: - (BOOL)paused;	// 0x35e11109
// converted property getter: - (id)provider;	// 0x35e10cb9
- (void)setImages:(id)images;	// 0x35e10cd9
// converted property setter: - (void)setPaused:(BOOL)paused;	// 0x35e10e71
// converted property setter: - (void)setProvider:(id)provider;	// 0x35e10c9d
@end

