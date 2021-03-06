/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIWindow.h> // Unknown library

@class MPMovieTVHUDView, NPTVOutBackgroundView, MPVideoView;

@interface MPTVOutWindow : UIWindow {
	NPTVOutBackgroundView *_backgroundView;	// 188 = 0xbc
	MPMovieTVHUDView *_hudView;	// 192 = 0xc0
	MPVideoView *_videoView;	// 196 = 0xc4
}
@property(readonly, retain) MPVideoView *videoView;	// G=0x3417e249; converted property
- (id)init;	// 0x3417db2d
- (void)_playbackStateChanged:(id)changed;	// 0x3417e259
- (BOOL)_setupTargetScreen:(id)screen;	// 0x3417dea9
- (void)dealloc;	// 0x3417ddd9
- (BOOL)setVideoView:(id)view;	// 0x3417e0c5
// converted property getter: - (id)videoView;	// 0x3417e249
@end

