/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRPhotoMediaCollection, BRMediaPlayer;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface RUISlideShowControl : BRControl {
	BRMediaPlayer *_player;	// 80 = 0x50
	id<BRProvider> _provider;	// 84 = 0x54
	BRPhotoMediaCollection *_collection;	// 88 = 0x58
	BOOL _screenSaverAutoFired;	// 92 = 0x5c
}
- (id)init;	// 0x38b069
- (void).cxx_destruct;	// 0x38b405
- (void)_cupidDataClientUpdated:(id)updated;	// 0x38b485
- (void)_initiatePlaybackForMediaUpdate:(BOOL)mediaUpdate;	// 0x38bd05
- (void)_photoDatabaseUpdated:(id)updated;	// 0x38b6e9
- (void)_photoPlayerVisusalsChanged:(id)changed;	// 0x38b671
- (void)_providerUpdated:(id)updated;	// 0x38b559
- (void)_screenSaverCacheUpdated:(id)updated;	// 0x38b44d
- (void)_screenSaverDataReady:(id)ready;	// 0x38b751
- (void)_screenSaverDataReadyForMediaUpdate:(id)mediaUpdate;	// 0x38bbe5
- (void)_setScreenSaverAutoFired:(BOOL)fired;	// 0x38c34d
- (void)_startSlideshowWithCollection:(id)collection;	// 0x38be35
- (void)controlWasActivated;	// 0x38b26d
- (void)controlWasDeactivated;	// 0x38b2b1
- (void)dealloc;	// 0x38b1dd
- (void)layoutSubcontrols;	// 0x38b301
@end
