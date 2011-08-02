/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library

@class CALayer, NSMutableArray, MPVideoView;

@interface MPMovieSnapshotController : NSObject {
	MPVideoView *_videoView;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	NSMutableArray *_pendingSnapshots;	// 12 = 0xc
	unsigned _expectingTimeJump : 1;	// 16 = 0x10
	unsigned _pendingRestore : 1;	// 16 = 0x10
	float _originalTime;	// 20 = 0x14
}
- (id)_currentSnapshot;	// 0x335c12ed
- (void)_finishSnapshot:(id)snapshot;	// 0x335c11a9
- (void)_restoreOriginalTime;	// 0x335c1129
- (void)_startNextSnapshot;	// 0x335c10cd
- (void)_takeSnapshot:(id)snapshot;	// 0x335c1095
- (void)_timeDidJump:(id)_time;	// 0x335c132d
- (void)cancel;	// 0x335c15b5
- (void)dealloc;	// 0x335c16f1
- (void)scheduleSnapshotWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;	// 0x335c1421
- (void)setLayer:(id)layer;	// 0x335c13e5
- (void)setVideoView:(id)view;	// 0x335c0f25
@end

