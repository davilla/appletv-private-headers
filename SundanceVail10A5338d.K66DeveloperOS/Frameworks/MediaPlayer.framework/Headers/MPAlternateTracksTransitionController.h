/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPTransitionController.h"

@class UIImageView, MPVideoViewController;

@interface MPAlternateTracksTransitionController : MPTransitionController {
	MPVideoViewController *_videoController;	// 52 = 0x34
	UIImageView *_snapshotCoverImageView;	// 56 = 0x38
}
@property(assign, nonatomic) MPVideoViewController *videoController;	// G=0x34163ce5; S=0x34163cf5; @synthesize=_videoController
- (void)_animationDidStop;	// 0x34163c15
- (void)performTransition:(unsigned)transition;	// 0x34163661
// declared property setter: - (void)setVideoController:(id)controller;	// 0x34163cf5
// declared property getter: - (id)videoController;	// 0x34163ce5
@end

