/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRSingleton.h> // Unknown library

@class NSTimer, NSMutableArray, ATVRemoteControlMessageHandler;

@interface ATVTouchRemoteManager : BRSingleton {
@private
	NSMutableArray *_outstandingNowPlayingRequests;	// 4 = 0x4
	NSMutableArray *_outstandingDialogUpdateRequests;	// 8 = 0x8
	NSMutableArray *_pairableTouchRemotes;	// 12 = 0xc
	NSTimer *_trickSpeedAdvanceTimer;	// 16 = 0x10
	ATVRemoteControlMessageHandler *_remoteMessageHandler;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *pairableTouchRemotes;	// G=0x336d32f9; converted property
+ (void)setSingleton:(id)singleton;	// 0x336d29ad
+ (id)singleton;	// 0x336d29a1
+ (id)touchablePlayer;	// 0x336d359d
- (id)init;	// 0x336d34c5
- (BOOL)_preparePlayback;	// 0x336d3639
- (void)_sendPromptUpdate:(id)update;	// 0x336d29bd
- (void)_startPlaybackWithPlayer:(id)player;	// 0x336d29e9
- (void)_startTrickSpeedAdvanceTimer;	// 0x336d2ba9
- (void)_stopTrickSpeedAdvanceTimer;	// 0x336d2b7d
- (void)_updateTrickSpeed:(id)speed;	// 0x336d2b11
- (void)_userAction;	// 0x336d2c0d
- (void)beginFF;	// 0x336d30c1
- (void)beginRW;	// 0x336d2fd9
- (void)dealloc;	// 0x336d3431
- (void)nextChapter;	// 0x336d2f99
- (void)nextItem;	// 0x336d2e9d
- (void)pairWithTouchRemote:(id)touchRemote withPIN:(id)pin;	// 0x336d32c5
// converted property getter: - (id)pairableTouchRemotes;	// 0x336d32f9
- (id)pairedTouchRemotes;	// 0x336d335d
- (void)pause;	// 0x336d3219
- (void)play;	// 0x336d37c5
- (void)playMediaAtIndex:(long)index inCollection:(id)collection shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x336d380d
- (void)playMediaAtIndex:(long)index inTracklist:(id)tracklist shuffle:(BOOL)shuffle repeat:(BOOL)repeat;	// 0x336d38cd
- (void)playPause;	// 0x336d325d
- (void)playResume;	// 0x336d36ed
- (void)prevChapter;	// 0x336d2f59
- (void)prevItem;	// 0x336d2da9
- (void)removePairableTouchRemote:(id)remote;	// 0x336d3389
- (BOOL)removePairedTouchRemote:(id)remote;	// 0x336d3329
- (void)repeatAdvance;	// 0x336d2ce1
- (void)restartItem;	// 0x336d31a9
- (unsigned long)sendGeneralPurposeMessage:(id)message;	// 0x336d2cb1
- (void)shuffleSongs;	// 0x336d29b9
- (void)shuffleToggle;	// 0x336d2d4d
- (void)stop;	// 0x336d31d5
@end

