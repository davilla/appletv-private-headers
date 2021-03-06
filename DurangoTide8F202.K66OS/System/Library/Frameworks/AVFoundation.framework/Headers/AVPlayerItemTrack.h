/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {
@private
	AVPlayerItemTrackInternal *_playerItemTrack;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x303de225; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x303de6d1; S=0x303de2e1; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x303de25d
- (void)_addLayer:(id)layer;	// 0x303de105
- (id)_audioVolumeCurve;	// 0x303de631
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x303de0c9
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x303de37d
- (void)_removeLayer:(id)layer;	// 0x303de101
- (void)_setAudioVolumeCurve:(id)curve;	// 0x303de50d
// declared property getter: - (id)assetTrack;	// 0x303de225
- (void)dealloc;	// 0x303de7cd
- (id)description;	// 0x303de889
- (id)fallbackTrack;	// 0x303de109
- (void)finalize;	// 0x303de751
- (unsigned)hash;	// 0x303de9a5
// declared property getter: - (BOOL)isEnabled;	// 0x303de6d1
- (BOOL)isEqual:(id)equal;	// 0x303de919
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x303de2e1
- (int)trackID;	// 0x303de0e5
@end

