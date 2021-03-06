/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, BRTextControl;

@interface BRDetailedMusicMetadataControl : BRControl {
@private
	BRMarqueeTextControl *_songTitle;	// 48 = 0x30
	BRTextControl *_songArtist;	// 52 = 0x34
	BRTextControl *_albumTitle;	// 56 = 0x38
	BRTextControl *_trackInfo;	// 60 = 0x3c
	BRTextControl *_duration;	// 64 = 0x40
	BRTextControl *_releaseDate;	// 68 = 0x44
	BRTextControl *_price;	// 72 = 0x48
	BOOL _scrollingAllowed;	// 76 = 0x4c
}
@property(assign) BOOL scrollingAllowed;	// G=0x3306c075; S=0x3306c029; converted property
- (id)init;	// 0x3306b571
- (id)_metadataMusicArtistAndAlbumAttributes;	// 0x3306c0a9
- (id)_metadataMusicDetailsAttributes;	// 0x3306c085
- (id)_metadataMusicSongTitleAttributes;	// 0x3306c0cd
- (void)controlWasActivated;	// 0x3306b7b9
- (void)controlWasDeactivated;	// 0x3306b815
- (void)dealloc;	// 0x3306b6f5
- (void)layoutSubcontrols;	// 0x3306bc31
// converted property getter: - (BOOL)scrollingAllowed;	// 0x3306c075
- (void)setAlbumTitle:(id)title;	// 0x3306b991
- (void)setDuration:(id)duration;	// 0x3306ba79
- (void)setPrice:(id)price;	// 0x3306bb61
- (void)setReleaseDate:(id)date;	// 0x3306baed
// converted property setter: - (void)setScrollingAllowed:(BOOL)allowed;	// 0x3306c029
- (void)setSongArtist:(id)artist;	// 0x3306b91d
- (void)setSongTitle:(id)title;	// 0x3306b865
- (void)setTrackInfo:(id)info;	// 0x3306ba05
@end

