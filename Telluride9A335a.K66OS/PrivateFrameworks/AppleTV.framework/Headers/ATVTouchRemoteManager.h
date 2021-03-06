/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSTimer, NSMutableArray, ATVRemoteControlMessageHandler;

@interface ATVTouchRemoteManager : BRSingleton {
@private
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSTimer *_trickSpeedAdvanceTimer;	// 16 = 0x10
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x340fbc9d; converted property
+ (void)setSingleton:(id)singleton;	// 0x340fb93d
+ (id)singleton;	// 0x340fb92d
+ (id)touchablePlayer;	// 0x340fb94d
- (id)init;	// 0x340fb9f5
- (BOOL)_preparePlayback;	// 0x340fc829
- (void)_sendPromptUpdate:(id)update;	// 0x340fca25
- (void)_startPlaybackWithPlayer:(id)player;	// 0x340fc8ed
- (void)_startTrickSpeedAdvanceTimer;	// 0x340fc705
- (void)_stopTrickSpeedAdvanceTimer;	// 0x340fc77d
- (void)_updateTrickSpeed:(id)speed;	// 0x340fc7ad
- (void)_userAction;	// 0x340fc649
- (void)beginFF;	// 0x340fc0d5
- (void)beginRW;	// 0x340fc1c1
- (void)dealloc;	// 0x340fbadd
- (void)nextChapter;	// 0x340fc2ad
- (void)nextItem;	// 0x340fc33d
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x340fbcd5
// converted property getter: - (id)pairableTouchRemotes;	// 0x340fbc9d
- (id)pairedTouchRemotes;	// 0x340fbc31
- (void)pause;	// 0x340fc009
- (void)play;	// 0x340fbe71
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x340fbdbd
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x340fbd11
- (void)playPause;	// 0x340fbec1
- (void)playResume;	// 0x340fbf29
- (void)prevChapter;	// 0x340fc2f5
- (void)prevItem;	// 0x340fc411
- (void)removePairableTouchRemote:(id)remote;	// 0x340fbb81
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x340fbc65
- (void)repeatAdvance;	// 0x340fc595
- (void)restartItem;	// 0x340fc0a1
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x340fc611
- (void)shuffleSongs;	// 0x340fbe6d
- (void)shuffleToggle;	// 0x340fc52d
- (void)stop;	// 0x340fc055
@end

