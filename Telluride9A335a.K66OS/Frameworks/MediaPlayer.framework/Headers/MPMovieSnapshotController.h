/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, NSMutableArray, MPVideoView, MPAVController;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	MPAVController *_player;	// 8 = 0x8
	CALayer *_layer;	// 12 = 0xc
	NSMutableArray *_pendingSnapshots;	// 16 = 0x10
	unsigned _expectingTimeJump : 1;	// 20 = 0x14
	unsigned _pendingRestore : 1;	// 20 = 0x14
	float _originalTime;	// 24 = 0x18
}
@property(assign, nonatomic) MPAVController *player;	// G=0x300e8fd1; S=0x300e8fe1; @synthesize=_player
- (id)_currentSnapshot;	// 0x300e8cd1
- (void)_finishSnapshot:(id)snapshot;	// 0x300e8d19
- (void)_restoreOriginalTime;	// 0x300e8e81
- (void)_startNextSnapshot;	// 0x300e8f0d
- (void)_takeSnapshot:(id)snapshot;	// 0x300e8f91
- (void)_timeDidJump:(id)_time;	// 0x300e8c09
- (void)cancel;	// 0x300e8989
- (void)dealloc;	// 0x300e88c1
// declared property getter: - (id)player;	// 0x300e8fd1
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x300e8a0d
- (void)setLayer:(id)layer;	// 0x300e8bb5
// declared property setter: - (void)setPlayer:(id)player;	// 0x300e8fe1
- (void)setVideoView:(id)view;	// 0x300e8bf9
@end

