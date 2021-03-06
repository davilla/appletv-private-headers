/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MPLayer.h"
#import "ATVSlideshow-Structs.h"

@class MCContainerSerializer;

@interface MPLayerSerializer : MPLayer {
	MCContainerSerializer *_layerSerializer;	// 48 = 0x30
}
- (id)container;	// 0x320916d5
- (void)dealloc;	// 0x32090b01
- (id)description;	// 0x32090a51
- (void)finalize;	// 0x32090ac1
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x32090b6d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x32091451
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x320910f9
- (void)setAudioPlaylist:(id)playlist;	// 0x320915d1
- (void)setLayerSerializer:(id)serializer;	// 0x320916e5
@end

