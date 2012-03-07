/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class BRWindow, NSMutableArray, NSTimer, NSDictionary;

@interface BRMediaPlayerManager : BRSingleton {
@private
	NSMutableArray *_registrations;	// 4 = 0x4
	NSDictionary *_singletons;	// 8 = 0x8
	BRWindow *_shroudyMcShroud;	// 12 = 0xc
	BRWindow *_playerWindow;	// 16 = 0x10
	NSTimer *_popupDelay;	// 20 = 0x14
	NSTimer *_autoPresentTimer;	// 24 = 0x18
	NSTimer *_safetyTimer;	// 28 = 0x1c
	NSTimer *_cloudMusicStopTimer;	// 32 = 0x20
	double _autoPresentTimeout;	// 36 = 0x24
	int _playerWindowState;	// 44 = 0x2c
	BOOL _screensaverUp;	// 48 = 0x30
	float _savedVolume;	// 52 = 0x34
}
@property(assign) double autoPresentTimeout;	// G=0x35e8b7a5; S=0x35e8b769; converted property
+ (void)setSingleton:(id)singleton;	// 0x35e8a5ad
+ (id)singleton;	// 0x35e8a59d
- (id)init;	// 0x35e8a5bd
- (void)_addPlayerWindowForController:(id)controller;	// 0x35e8c385
- (void)_addPlayerWindowUnderShroud;	// 0x35e8c5a9
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x35e8bded
- (id)_autoPresentPlayer;	// 0x35e8cbbd
- (void)_autoPresentTimerFired:(id)fired;	// 0x35e8ccc1
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x35e8bbe1
- (void)_cloudMusicStopTimerFired:(id)fired;	// 0x35e8bd5d
- (void)_dataClientStatusChanged:(id)changed;	// 0x35e8d48d
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x35e8bd19
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x35e8b81d
- (void)_networkStatusChanged:(id)changed;	// 0x35e8d5f1
- (void)_playerAssetChanged:(id)changed;	// 0x35e8d0ed
- (void)_playerControllerUserEvent:(id)event;	// 0x35e8c83d
- (void)_playerControllerWasPopped:(id)popped;	// 0x35e8d765
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x35e8b8c9
- (id)_playerInstanceForClass:(Class)aClass;	// 0x35e8ba71
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x35e8c85d
- (void)_playerStateChanged:(id)changed;	// 0x35e8ce49
- (void)_playerVolumeChanged:(id)changed;	// 0x35e8d14d
- (void)_popupDelayTimerFired:(id)fired;	// 0x35e8cb7d
- (id)_presentedPlayer;	// 0x35e8c2f5
- (id)_presentedPlayerController;	// 0x35e8c31d
- (void)_removePlayerWindow:(BOOL)window;	// 0x35e8c655
- (void)_removePlayerWindowUnderShroud;	// 0x35e8c765
- (void)_removeShroudWindow;	// 0x35e8c291
- (void)_removeShroudWindowWithAnimation;	// 0x35e8c041
- (void)_removeTrackPopup;	// 0x35e8c8d1
- (void)_safetyTimerFired:(id)fired;	// 0x35e8c205
- (void)_screenSaverActivated:(id)activated;	// 0x35e8d259
- (void)_screenSaverDismissed:(id)dismissed;	// 0x35e8d2c5
- (void)_serverStatusChanged:(id)changed;	// 0x35e8d32d
- (void)_showTrackPopupForPlayer:(id)player;	// 0x35e8c939
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x35e8cadd
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x35e8bc75
- (void)_updateAutoPresentPlayer;	// 0x35e8cd0d
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x35e8c871
- (void)_userActivity:(id)activity;	// 0x35e8d6dd
- (id)activeAudioPlayer;	// 0x35e8b311
- (id)activePlayer;	// 0x35e8b2c9
- (id)airtunesAudioPlayer;	// 0x35e8b455
- (id)audioPlayer;	// 0x35e8b3fd
- (id)audioVisualizer;	// 0x35e8b5e5
// converted property getter: - (double)autoPresentTimeout;	// 0x35e8b7a5
- (void)dealloc;	// 0x35e8a815
- (void)endPresentation;	// 0x35e8b27d
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x35e8ab09
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x35e8a97d
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x35e8aa6d
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x35e8a9e9
- (void)presentATVMediaAsset:(ATVMediaItemRef)asset options:(id)options;	// 0x35e8b119
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x35e8b175
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x35e8b079
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x35e8b22d
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x35e8b1f1
- (void)presentPlayer:(id)player options:(id)options;	// 0x35e8ab49
- (BOOL)presentationCanBeScreenSaver;	// 0x35e8b2a1
- (id)presentationWindow;	// 0x35e8b291
- (void)registerPlayerClass:(Class)aClass;	// 0x35e8a8f5
- (void)removePresentation;	// 0x35e8b269
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x35e8b769
- (void)setJavascriptOverlay:(id)overlay;	// 0x35e8b7bd
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x35e8b73d
- (void)showVolumeControl;	// 0x35e8b601
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x35e8b505
- (id)videoPlayer;	// 0x35e8b4ad
@end
