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
+ (void)addGenre:(id)genre toQuery:(id)query;	// 0x1b6cc9
+ (void)addPropertiesForAlbumQuery:(id)albumQuery;	// 0x1b7351
+ (void)addPropertiesForSongsQuery:(id)songsQuery;	// 0x1b722d
+ (void)addiTunesLPFilterToQuery:(id)query;	// 0x1b6c61
+ (id)albumMenuItemForAlbum:(id)album;	// 0x1b7c2d
+ (id)albumMenuItemForAlbum:(id)album displaysArtistName:(BOOL)name;	// 0x1b7c41
+ (id)artistMenuItemForArtist:(id)artist;	// 0x1b7bb9
+ (void)initialize;	// 0x1b6b9d
+ (id)newAudiobooksQueryWithProperties:(BOOL)properties;	// 0x1b73ed
+ (id)newItemsQueryForAlbum:(id)album;	// 0x1b76f5
+ (id)newItemsQueryForPlaylist:(id)playlist;	// 0x1b7799
+ (id)newMusicVideosQueryWithProperties:(BOOL)properties;	// 0x1b74a1
+ (id)newMusicVideosQueryWithPropertiesForArtistID:(id)artistID;	// 0x1b7555
+ (id)newPlaylistsQueryWithProperties:(BOOL)properties;	// 0x1b75c9
+ (id)newSongsQuery;	// 0x1b6d29
+ (id)newSongsQueryForAlbumID:(id)albumID;	// 0x1b6f1d
+ (id)newSongsQueryForArtist:(id)artist;	// 0x1b6d85
+ (id)newSongsQueryForComposer:(id)composer;	// 0x1b6fe1
+ (id)newSongsQueryWithProperties;	// 0x1b6d49
+ (id)newSongsQueryWithPropertiesForAlbumID:(id)albumID;	// 0x1b71f1
+ (id)newSongsQueryWithPropertiesForArtist:(id)artist;	// 0x1b6ee1
+ (id)newSongsQueryWithPropertiesForComposer:(id)composer;	// 0x1b70a1
+ (id)playlistMenuItemForPlaylist:(id)playlist;	// 0x1b7de5
+ (id)previewForAlbum:(id)album preview:(id)preview;	// 0x1b82d5
+ (id)previewForMediaItem:(id)mediaItem preview:(id)preview;	// 0x1b800d
+ (id)songMenuItemForSong:(id)song;	// 0x1b7861
+ (id)songMenuItemForSong:(id)song displaySpeakerIfPlaying:(BOOL)playing;	// 0x1b7835
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist;	// 0x1b788d
+ (id)songMenuItemForSong:(id)song displaysArtist:(BOOL)artist displaySpeakerIfPlaying:(BOOL)playing;	// 0x1b78b1
+ (id)songsAndMusicVideosFilterWithAudiobook:(BOOL)audiobook;	// 0x1b70dd
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1b6bfd
- (void)_handleContextMenuSelection:(id)selection;	// 0x1b86a5
- (id)cancelProviderForContextMenu;	// 0x1b86a1
- (id)providersForContextMenu;	// 0x1b85e5
@end
