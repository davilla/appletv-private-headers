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
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x3474721d; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x347476cd; S=0x347472d9; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x34747255
- (void)_addLayer:(id)layer;	// 0x347470fd
- (id)_audioVolumeCurve;	// 0x3474762d
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x347470c1
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x34747375
- (void)_removeLayer:(id)layer;	// 0x347470f9
- (void)_setAudioVolumeCurve:(id)curve;	// 0x34747509
// declared property getter: - (id)assetTrack;	// 0x3474721d
- (void)dealloc;	// 0x347477c9
- (id)description;	// 0x34747885
- (id)fallbackTrack;	// 0x34747101
- (void)finalize;	// 0x3474774d
- (unsigned)hash;	// 0x347479a1
// declared property getter: - (BOOL)isEnabled;	// 0x347476cd
- (BOOL)isEqual:(id)equal;	// 0x34747915
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x347472d9
- (int)trackID;	// 0x347470dd
@end

