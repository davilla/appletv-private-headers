/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"
#import "BackRow-Structs.h"

@class NSMutableArray, NSTimer, NSDictionary, BRWindow;

@interface BRMediaPlayerManager : BRSingleton {
@private
	NSMutableArray *_registrations;	// 4 = 0x4
	NSDictionary *_singletons;	// 8 = 0x8
	BRWindow *_shroudyMcShroud;	// 12 = 0xc
	BRWindow *_playerWindow;	// 16 = 0x10
	NSTimer *_popupDelay;	// 20 = 0x14
	NSTimer *_autoPresentTimer;	// 24 = 0x18
	NSTimer *_safetyTimer;	// 28 = 0x1c
	double _autoPresentTimeout;	// 32 = 0x20
	int _playerWindowState;	// 40 = 0x28
	BOOL _playerWindowBeingRemoved;	// 44 = 0x2c
	BOOL _playerWindowBeingAdded;	// 45 = 0x2d
	BOOL _playerWindowRemovedWhileBeingAdded;	// 46 = 0x2e
	BOOL _screensaverUp;	// 47 = 0x2f
	float _savedVolume;	// 48 = 0x30
}
@property(assign) double autoPresentTimeout;	// G=0x32fb6bd5; S=0x32fb8019; converted property
+ (void)setSingleton:(id)singleton;	// 0x32fb6bb9
+ (id)singleton;	// 0x32fb6bad
- (id)init;	// 0x32f140f9
- (void)_addPlayerWindowForController:(id)controller;	// 0x32fb77c9
- (void)_addPlayerWindowUnderShroud;	// 0x32fb771d
- (void)_addShroudWindowWithSelector:(SEL)selector;	// 0x32fb9011
- (id)_autoPresentPlayer;	// 0x32fb7159
- (void)_autoPresentTimerFired:(id)fired;	// 0x32fb8d4d
- (int)_calculateAccessModeForExtrasAsset:(id)extrasAsset;	// 0x32fb7bc1
- (void)_dataClientStatusChanged:(id)changed;	// 0x32fb936d
- (void)_deferredPresentPlayerAndOptions:(id)options;	// 0x32fb7ae9
- (Class)_findRegisteredPlayerClassForType:(id)type visualContent:(BOOL)content;	// 0x32fb7f19
- (void)_networkStatusChanged:(id)changed;	// 0x32fb6c71
- (void)_playerAssetChanged:(id)changed;	// 0x32fb6f65
- (void)_playerControllerUserEvent:(id)event;	// 0x32fb753d
- (void)_playerControllerWasPopped:(id)popped;	// 0x32fb6be5
- (id)_playerInstanceForAssetAtIndex:(long)index inTrackList:(id)trackList;	// 0x32fb7d99
- (id)_playerInstanceForClass:(Class)aClass;	// 0x32fb7c4d
- (void)_playerStackBankrupt:(id)bankrupt;	// 0x32fb7525
- (void)_playerStateChanged:(id)changed;	// 0x32fb6fb9
- (void)_playerVolumeChanged:(id)changed;	// 0x32fb6e75
- (void)_popupDelayTimerFired:(id)fired;	// 0x32fb7245
- (id)_presentedPlayer;	// 0x32fb7a69
- (id)_presentedPlayerController;	// 0x32fb7a0d
- (void)_removePlayerWindow:(BOOL)window;	// 0x32fb762d
- (void)_removePlayerWindowUnderShroud;	// 0x32fb7561
- (void)_removeShroudWindow;	// 0x32fb7a8d
- (void)_removeShroudWindowWithAnimation;	// 0x32fb8e7d
- (void)_removeTrackPopup;	// 0x32fb7479
- (void)_safetyTimerFired:(id)fired;	// 0x32fb8d8d
- (void)_screenSaverActivated:(id)activated;	// 0x32fb6db1
- (void)_screenSaverDismissed:(id)dismissed;	// 0x32fb6d3d
- (void)_screenSaverWillActivate:(id)_screenSaver;	// 0x32fb6e0d
- (void)_serverStatusChanged:(id)changed;	// 0x32fb9229
- (void)_showTrackPopupForPlayer:(id)player;	// 0x32fb7301
- (void)_showTrackPopupWithDelayForPlayer:(id)player;	// 0x32fb727d
- (BOOL)_stopCurrentPlayerUsingNewPlayer:(id)player;	// 0x32fb7b25
- (void)_updateAutoPresentPlayer;	// 0x32fb8c35
- (void)_updateTrackPopupForPlayer:(id)player;	// 0x32fb74d1
- (void)_userActivity:(id)activity;	// 0x32fb6bf9
- (id)activeAudioPlayer;	// 0x32fb8251
- (id)activePlayer;	// 0x32fb8321
- (id)airtunesAudioPlayer;	// 0x32fb81b9
- (id)audioPlayer;	// 0x32fb8205
- (id)audioVisualizer;	// 0x32fb8079
// converted property getter: - (double)autoPresentTimeout;	// 0x32fb6bd5
- (void)dealloc;	// 0x32fb8b65
- (void)endPresentation;	// 0x32fb8381
- (id)playerForATVMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x32fb89bd
- (id)playerForMediaAsset:(id)mediaAsset error:(id *)error;	// 0x32fb8af1
- (id)playerForMediaAssetAtIndex:(long)index inCollection:(id)collection error:(id *)error;	// 0x32fb8a01
- (id)playerForMediaAssetAtIndex:(long)index inTrackList:(id)trackList error:(id *)error;	// 0x32fb8a89
- (void)presentATVMediaAsset:(ATVMediaItemRef)asset options:(id)options;	// 0x32fb8491
- (void)presentATVMediaAssetAtIndex:(long)index inItemList:(id)itemList options:(id)options;	// 0x32fb8421
- (void)presentMediaAsset:(id)asset options:(id)options;	// 0x32fb84e1
- (void)presentMediaAssetAtIndex:(long)index inCollection:(id)collection options:(id)options;	// 0x32fb83b1
- (void)presentMediaAssetAtIndex:(long)index inTrackList:(id)trackList options:(id)options;	// 0x32fb83e9
- (void)presentPlayer:(id)player options:(id)options;	// 0x32fb8561
- (BOOL)presentationCanBeScreenSaver;	// 0x32fb835d
- (id)presentationWindow;	// 0x32fb6bc5
- (void)registerPlayerClass:(Class)aClass;	// 0x32fb8e05
- (void)removePresentation;	// 0x32fb8399
// converted property setter: - (void)setAutoPresentTimeout:(double)timeout;	// 0x32fb8019
- (void)setJavascriptOverlay:(id)overlay;	// 0x32fb7fc1
- (void)setTransportControlDisabled:(BOOL)disabled;	// 0x32fb8051
- (void)showVolumeControl;	// 0x32fb949d
- (void)stopMediaPlayersWithMediaFromProvider:(id)provider;	// 0x32fb8099
- (id)videoPlayer;	// 0x32fb816d
@end

