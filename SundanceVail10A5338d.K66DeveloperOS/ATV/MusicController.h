/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRDataQueryController.h"


__attribute__((visibility("hidden")))
@interface MusicController : BRDataQueryController {
}
+ (void)addGenre:(id)genre toQuery:(id)query;	// 0x1a4581
+ (void)addPropertiesForAlbumQuery:(id)albumQuery;	// 0x1a4c09
+ (void)addPropertiesForSongsQuery:(id)songsQuery;	// 0x1a4ae5
+ (void)addiTunesLPFilterToQuery:(id)query;	// 0x1a4519
+ (id)albumMenuItemForAlbum:(id)album;	// 0x1a547d
+ (id)albumMenuItemForAlbum:(id)album displaysArtistName:(BOOL)name;	// 0x1a5491
+ (id)artistMenuItemForArtist:(id)artist;	// 0x1a5409
+ (void)initialize;	// 0x1a4455
+ (id)newAudiobooksQueryWithProperties:(BOOL)properties;	// 0x1a4ca5
+ (id)newItemsQueryForAlbum:(id)album;	// 0x1a4fad
+ (id)newItemsQueryForPlaylist:(id)playlist;	// 0x1a5051
+ (id)newMusicVideosQueryWithProperties:(BOOL)properties;	// 0x1a4d59
+ (id)newMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x1a4e0d
+ (id)newPlaylistsQueryWithProperties:(BOOL)properties;	// 0x1a4e81
+ (id)newSongsQuery;	// 0x1a45e1
+ (id)newSongsQueryForAlbumID:(id)albumID;	// 0x1a47d5
+ (id)newSongsQueryForArtist:(id)artist;	// 0x1a463d
+ (id)newSongsQueryForComposer:(id)composer;	// 0x1a4899
+ (id)newSongsQueryWithProperties;	// 0x1a4601
+ (id)newSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x1a4aa9
+ (id)newSongsQueryWithPropertiesForArtist:(id)artist;	// 0x1a4799
+ (id)newSongsQueryWithPropertiesForComposer:(id)composer;	// 0x1a4959
+ (id)playlistMenuItemForPlaylist:(id)playlist;	// 0x1a5635
+ (id)previewForAlbum:(id)album preview:(id)preview;	// 0x1a5b25
+ (id)previewForMediaItem:(id)mediaItem preview:(id)preview;	// 0x1a585d
+ (id)songMenuItemForSong:(id)song;	// 0x1a50ed
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist;	// 0x1a510d
+ (id)songsAndMusicVideosFilterWithAudiobook:(BOOL)audiobook;	// 0x1a4995
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1a44b5
- (void)_handleContextMenuSelection:(id)selection;	// 0x1a5ef1
- (id)providersForContextMenu;	// 0x1a5e35
@end
