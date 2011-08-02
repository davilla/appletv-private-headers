/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library
#import "BRResponder.h"
#import "BackRow-Structs.h"

@class BRMediaPlayer, NSTimer;

__attribute__((visibility("hidden")))
@interface BRMediaPlayerEventHandler : NSObject <BRResponder> {
@private
	BRMediaPlayer *_player;	// 4 = 0x4
	BOOL _waitingForUp;	// 8 = 0x8
	BOOL _inChapterSkipMode;	// 9 = 0x9
	double _virtualChapterMark;	// 12 = 0xc
	NSTimer *_chapterSelectionModeTimer;	// 20 = 0x14
	int _preShuttleState;	// 24 = 0x18
	int _shuttleSpeed;	// 28 = 0x1c
	int _shuttleDirection;	// 32 = 0x20
	BOOL _inShuttleMode;	// 36 = 0x24
	BOOL _readyToInitiateShuttle;	// 37 = 0x25
	NSTimer *_shuttleChapterSkipTimer;	// 40 = 0x28
	CGPoint _initialTouchPosition;	// 44 = 0x2c
	CGPoint _lastTouchPosition;	// 52 = 0x34
	CGPoint _lastTouchDelta;	// 60 = 0x3c
	double _shuttleFinishedTime;	// 68 = 0x44
}
+ (id)handlerWithPlayer:(id)player;	// 0x32fc5e51
- (id)initWithPlayer:(id)player;	// 0x32fc5e95
- (BOOL)_changePlayerStateTo:(int)to;	// 0x32fc3f95
- (BOOL)_changePlayerStateTo:(int)to onButtonDown:(id)down retrigger:(BOOL)retrigger;	// 0x32fc3f19
- (BOOL)_chapterSkipSupported;	// 0x32fc3b7d
- (BOOL)_chapteringSupported;	// 0x32fc3c05
- (BOOL)_defaultEventHandler:(id)handler;	// 0x32fc5acd
- (void)_endChapterSelectionMode:(id)mode;	// 0x32fc44e1
- (void)_handleAccessibilityOutputForState:(int)state;	// 0x32fc5f61
- (BOOL)_handleEventWhileChapterSelecting:(id)selecting;	// 0x32fc4d3d
- (BOOL)_handleEventWhileFF1:(id)a1;	// 0x32fc4b7d
- (BOOL)_handleEventWhileFF2:(id)a2;	// 0x32fc4ae1
- (BOOL)_handleEventWhileFF3:(id)a3;	// 0x32fc4a45
- (BOOL)_handleEventWhileLoading:(id)loading;	// 0x32fc5131
- (BOOL)_handleEventWhilePaused:(id)paused;	// 0x32fc52a5
- (BOOL)_handleEventWhilePlaying:(id)playing;	// 0x32fc4c05
- (BOOL)_handleEventWhileREW1:(id)a1;	// 0x32fc49bd
- (BOOL)_handleEventWhileREW2:(id)a2;	// 0x32fc4921
- (BOOL)_handleEventWhileREW3:(id)a3;	// 0x32fc4885
- (BOOL)_handleEventWhileSlowForward1:(id)a1;	// 0x32fc47fd
- (BOOL)_handleEventWhileSlowForward2:(id)a2;	// 0x32fc4761
- (BOOL)_handleEventWhileSlowForward3:(id)a3;	// 0x32fc46c5
- (BOOL)_handleEventWhileSlowRewind1:(id)a1;	// 0x32fc463d
- (BOOL)_handleEventWhileSlowRewind2:(id)a2;	// 0x32fc45a1
- (BOOL)_handleEventWhileSlowRewind3:(id)a3;	// 0x32fc4505
- (BOOL)_handleForwardEvent:(id)event;	// 0x32fc5915
- (BOOL)_handleLeftEvent:(id)event;	// 0x32fc549d
- (BOOL)_handleLeftEventWhileChapterSkipping:(id)skipping;	// 0x32fc5385
- (BOOL)_handleRewindEvent:(id)event;	// 0x32fc575d
- (BOOL)_handleRightEvent:(id)event;	// 0x32fc55fd
- (BOOL)_handleRightEventWhileChapterSkipping:(id)skipping;	// 0x32fc5411
- (BOOL)_handleTouchEvent:(id)event;	// 0x32fc647d
- (BOOL)_handleTouchMultiSwipeLeftEvent:(id)event;	// 0x32fc38f5
- (BOOL)_handleTouchMultiSwipeRightEvent:(id)event;	// 0x32fc3951
- (BOOL)_handleTouchSwipeEvent:(id)event;	// 0x32fc3a6d
- (BOOL)_handleTouchSwipeLeftEvent:(id)event;	// 0x32fc39ad
- (BOOL)_handleTouchSwipeRightEvent:(id)event;	// 0x32fc3a0d
- (BOOL)_handleTrickPlayWhileLoading:(id)loading;	// 0x32fc50e1
- (void)_initiateShuttleAction;	// 0x32fc3731
- (BOOL)_isFavoriteRadioStation;	// 0x32fc3ae5
- (BOOL)_performNextThingButtonAction:(id)action;	// 0x32fc4479
- (BOOL)_performPreviousThingButtonAction:(id)action;	// 0x32fc631d
- (void)_performShuttle:(long)shuttle;	// 0x32fc3c9d
- (void)_performShuttleExit;	// 0x32fc3ebd
- (BOOL)_performSkipBackwardAction:(id)action;	// 0x32fc4309
- (BOOL)_performSkipForwardAction:(id)action;	// 0x32fc43d1
- (BOOL)_performVolumeDownAction:(id)action;	// 0x32fc4021
- (BOOL)_performVolumeUpAction:(id)action;	// 0x32fc4195
- (void)_playSoundForState:(int)state;	// 0x32fc36cd
- (void)_playerAssetChanged:(id)changed;	// 0x32fc5c99
- (void)_playerStateChanged:(id)changed;	// 0x32fc5c65
- (void)_setInChapterSkipMode:(BOOL)chapterSkipMode;	// 0x32fc612d
- (void)_setShuttleSpeed:(int)speed;	// 0x32fc3869
- (void)_touchRepeatCancel;	// 0x32fc3705
- (void)_touchRepeatEvent;	// 0x32fc36d1
- (BOOL)brEventAction:(id)action;	// 0x32fc5cfd
- (BOOL)brKeyEvent:(id)event;	// 0x32fc36b9
- (void)dealloc;	// 0x32fc5de1
- (BOOL)showingChapterMarks;	// 0x32fc36bd
@end

