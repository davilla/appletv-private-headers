/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVPlayerTimelyCaller.h"
#import "AVFoundation-Structs.h"


@interface AVPlayerPeriodicCaller : AVPlayerTimelyCaller {
	XXStruct_pwHToB _interval;	// 24 = 0x18
	id _block;	// 48 = 0x30
	OpaqueFigPlaybackItem *_figPlaybackItem;	// 52 = 0x34
}
- (id)initWithPlayer:(id)player interval:(XXStruct_pwHToB)interval queue:(dispatch_queue_s *)queue block:(id)block;	// 0x3144b695
- (void)_resetTimerForPlayerNewRate:(float)playerNewRate;	// 0x3144b16d
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;	// 0x3144b1c9
- (void)_stopObservingPlaybackItemNotifications;	// 0x3144b06d
- (void)_stopRespondingToPlayerStateChanges;	// 0x3144b579
- (void)dealloc;	// 0x3144b631
- (void)finalize;	// 0x3144b5ed
- (void)invalidate;	// 0x3144b4b5
- (void)itemTimeJumped;	// 0x3144b115
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3144b2dd
@end

