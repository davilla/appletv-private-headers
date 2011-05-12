/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTrackInfoLayer, NSString, BRMediaPlayer;

__attribute__((visibility("hidden")))
@interface BRTrackInfoControl : BRControl {
@private
	BRTrackInfoLayer *_layer;	// 44 = 0x2c
	BRMediaPlayer *_player;	// 48 = 0x30
	NSString *_lastAssetID;	// 52 = 0x34
}
@property(retain) BRMediaPlayer *player;	// G=0x3298d2e1; S=0x3298d71d; converted property
- (id)init;	// 0x3298d9dd
- (id)_fetchCoverArt;	// 0x3298da6d
- (void)_playbackAssetChanged:(id)changed;	// 0x3298d515
- (void)_playerStateChanged:(id)changed;	// 0x3298d529
- (BOOL)_supportsShowingArtist:(id)artist;	// 0x3298d3c9
- (BOOL)_supportsShowingPrimaryCollectionTitle:(id)title;	// 0x3298d2f1
- (void)_updateCoverArt:(id)art;	// 0x3298d461
- (void)_updateTrackInfo;	// 0x3298d561
- (id)accessibilityLabel;	// 0x3298d6fd
- (void)controlWasActivated;	// 0x3298d891
- (void)controlWasDeactivated;	// 0x3298d805
- (void)dealloc;	// 0x3298d949
// converted property getter: - (id)player;	// 0x3298d2e1
// converted property setter: - (void)setPlayer:(id)player;	// 0x3298d71d
@end

