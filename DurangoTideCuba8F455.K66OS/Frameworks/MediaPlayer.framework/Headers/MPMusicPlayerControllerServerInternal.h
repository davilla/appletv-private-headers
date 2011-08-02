/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPServerObject.h"
#import "MPMusicPlayerController.h"

@class NSMutableArray, NSMutableDictionary, MPVideoViewController;

@interface MPMusicPlayerControllerServerInternal : MPServerObject <MPMusicPlayerController> {
@private
	NSMutableArray *_clientPorts;	// 12 = 0xc
	NSMutableDictionary *_clientPortsForPIDs;	// 16 = 0x10
	NSMutableDictionary *_clientStateForPIDs;	// 20 = 0x14
	MPVideoViewController *_videoViewController;	// 24 = 0x18
	int _activeClientPID;	// 28 = 0x1c
	int _extendedModeNotifyToken;	// 32 = 0x20
	unsigned _queuePrepared : 1;	// 36 = 0x24
}
@property(retain) id allowsRemoteUIAccess;	// G=0x3362506d; S=0x33625029; converted property
@property(retain) id currentChapterIndex;	// G=0x336251a1; S=0x33625105; converted property
@property(retain) id currentPlaybackTime;	// G=0x33625709; S=0x336256b9; converted property
@property(retain) id nowPlayingItem;	// G=0x33625881; S=0x33625969; converted property
@property(retain) id playbackSpeed;	// G=0x33626aed; S=0x33626a45; converted property
@property(retain) id repeatMode;	// G=0x33625e2d; S=0x33625ea5; converted property
@property(retain) id shuffleMode;	// G=0x33625db5; S=0x33625c5d; converted property
+ (BOOL)_canSeedGeniusWithItem:(id)item;	// 0x33624e01
- (id)init;	// 0x33625b61
- (BOOL)_activeClientPIDHasPermissionToPlay;	// 0x33624f31
- (void)_appDefaultsChangedNotification:(id)notification;	// 0x33627151
- (void)_applicationStateChangedNotification:(id)notification;	// 0x336260b1
- (id)_avController;	// 0x33624f05
- (id)_avControllerForClientPID:(int)clientPID;	// 0x33624eed
- (id)_avControllerForClientPID:(int)clientPID ignoreExtendedMode:(BOOL)mode;	// 0x33628171
- (BOOL)_clientPIDHasPermissionToPlay:(int)play;	// 0x33627f75
- (void)_clientPortInvalidated:(id)invalidated;	// 0x33627d49
- (void)_clientPortInvalidatedNotification:(id)notification;	// 0x33624fc1
- (id)_clientState;	// 0x33624f95
- (id)_clientStateForPID:(int)pid;	// 0x33624f55
- (BOOL)_currentClientPIDHasPermissionToPlay;	// 0x33627fd5
- (void)_endPlayback;	// 0x33625f0d
- (void)_endPlaybackForClientIfNecessary:(int)clientIfNecessary;	// 0x33626d01
- (void)_itemDidChangeNotification:(id)_item;	// 0x33626fa5
- (void)_itemPlaybackDidEndNotification:(id)_itemPlayback;	// 0x33627355
- (void)_playbackStateDidChangeNotification:(id)_playbackState;	// 0x33626b39
- (void)_prepareQueueIfNecessary;	// 0x33627449
- (void)_registerClientPort:(unsigned)port forProcessID:(int)processID;	// 0x33627959
- (void)_setQueueWithQuery:(id)query;	// 0x33625ff1
- (void)_tearDownVideoView;	// 0x33624e49
- (void)_tvOutCapabilityDidChangeNotification:(id)_tvOutCapability;	// 0x33627935
// converted property getter: - (id)allowsRemoteUIAccess;	// 0x3362506d
- (void)beginSeekingBackward;	// 0x336255e9
- (void)beginSeekingForward;	// 0x33625631
// converted property getter: - (id)currentChapterIndex;	// 0x336251a1
// converted property getter: - (id)currentPlaybackTime;	// 0x33625709
- (void)dealloc;	// 0x33625ba9
- (void)endSeeking;	// 0x336255a5
- (id)indexOfNowPlayingItem;	// 0x3362698d
- (id)isGeniusAvailable;	// 0x3362547d
- (id)isNowPlayingItemFromGeniusMix;	// 0x33626829
// converted property getter: - (id)nowPlayingItem;	// 0x33625881
- (id)nowPlayingItemAtIndex:(id)index;	// 0x3362537d
- (id)numberOfItems;	// 0x33625679
- (void)pause;	// 0x33625761
- (void)pauseWithFadeoutDuration:(id)fadeoutDuration;	// 0x33625289
- (void)play;	// 0x33625785
- (void)playItem:(id)item;	// 0x336252d1
// converted property getter: - (id)playbackSpeed;	// 0x33626aed
- (id)playbackState;	// 0x33625d71
- (void)prepareQueueForPlayback;	// 0x336250f1
- (id)queueAsQuery;	// 0x33625405
- (void)registerForServerDiedNotifications;	// 0x33624c5d
// converted property getter: - (id)repeatMode;	// 0x33625e2d
- (id)serverIsAlive;	// 0x336250d1
// converted property setter: - (void)setAllowsRemoteUIAccess:(id)access;	// 0x33625029
// converted property setter: - (void)setCurrentChapterIndex:(id)index;	// 0x33625105
// converted property setter: - (void)setCurrentPlaybackTime:(id)time;	// 0x336256b9
// converted property setter: - (void)setNowPlayingItem:(id)item;	// 0x33625969
// converted property setter: - (void)setPlaybackSpeed:(id)speed;	// 0x33626a45
- (void)setQueueWithItemCollection:(id)itemCollection;	// 0x336257b9
- (void)setQueueWithQuery:(id)query;	// 0x33625831
- (void)setQueueWithQuery:(id)query firstItem:(id)item;	// 0x33625445
- (id)setQueueWithSeedItems:(id)seedItems;	// 0x336262b1
// converted property setter: - (void)setRepeatMode:(id)mode;	// 0x33625ea5
// converted property setter: - (void)setShuffleMode:(id)mode;	// 0x33625c5d
- (void)setUseApplicationSpecificQueue:(id)queue;	// 0x336261c5
- (void)shuffle;	// 0x33625cc5
// converted property getter: - (id)shuffleMode;	// 0x33625db5
- (void)skipToBeginning;	// 0x33625555
- (void)skipToBeginningOrPreviousItem;	// 0x336254f5
- (void)skipToNextChapter;	// 0x33625261
- (void)skipToNextItem;	// 0x3362557d
- (void)skipToPreviousChapter;	// 0x33625239
- (void)skipToPreviousItem;	// 0x33625525
- (id)springboardNowPlayingInfo;	// 0x336265e9
- (void)stop;	// 0x3362574d
- (id)unshuffledIndexOfNowPlayingItem;	// 0x33626895
- (BOOL)useApplicationSpecificQueue;	// 0x336250ad
@end

