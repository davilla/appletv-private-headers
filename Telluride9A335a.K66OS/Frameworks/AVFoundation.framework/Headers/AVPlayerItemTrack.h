/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVPlayerItemTrackInternal, AVAssetTrack;

@interface AVPlayerItemTrack : NSObject {
@private
	AVPlayerItemTrackInternal *_playerItemTrack;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAssetTrack *assetTrack;	// G=0x32310385; 
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3231072d; S=0x323106ad; 
+ (id)playerItemTrackWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x32310421
- (void)_addLayer:(id)layer;	// 0x32310355
- (id)_audioVolumeCurve;	// 0x323105ed
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x32310311
- (id)_initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem trackID:(int)anId asset:(id)asset playerItem:(id)item;	// 0x32310a2d
- (id)_playerItem;	// 0x32310359
- (void)_removeLayer:(id)layer;	// 0x32310351
- (void)_setAudioVolumeCurve:(id)curve;	// 0x32310479
// declared property getter: - (id)assetTrack;	// 0x32310385
- (void)dealloc;	// 0x32310975
- (id)description;	// 0x32310895
- (id)fallbackTrack;	// 0x323103c1
- (void)finalize;	// 0x32310901
- (unsigned)hash;	// 0x323107c5
// declared property getter: - (BOOL)isEnabled;	// 0x3231072d
- (BOOL)isEqual:(id)equal;	// 0x32310801
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x323106ad
- (int)trackID;	// 0x32310331
@end

