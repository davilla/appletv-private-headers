/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CDNDownloadData, NSMutableArray, NSMutableDictionary;

@interface PlaylistBuilder : XXUnknownSuperclass {
	NSMutableDictionary *playlists_;	// 4 = 0x4
	CDNDownloadData *selectedCdn_;	// 8 = 0x8
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 12 = 0xc
	int initialPlaylistTrackIndex_;	// 16 = 0x10
	int initialPlaylistStreamIndex_;	// 20 = 0x14
	BOOL unmuxed_;	// 24 = 0x18
}
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x4c8335; S=0x4c8349; @synthesize=downloadedContentHeaderDownloadableData_
@property(assign) int initialPlaylistStreamIndex;	// G=0x4c8385; S=0x4c8399; @synthesize=initialPlaylistStreamIndex_
@property(assign) int initialPlaylistTrackIndex;	// G=0x4c8359; S=0x4c836d; @synthesize=initialPlaylistTrackIndex_
@property(retain) NSMutableDictionary *playlists;	// G=0x4c82ed; S=0x4c8301; @synthesize=playlists_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x4c8311; S=0x4c8325; @synthesize=selectedCdn_
@property(assign) BOOL unmuxed;	// G=0x4c83b1; S=0x4c83c9; @synthesize=unmuxed_
+ (id)sharedInstance;	// 0x4c5139
- (BOOL)build:(unsigned)build;	// 0x4c52b5
- (BOOL)buildIFramePlaylist:(id)playlist;	// 0x4c6999
- (BOOL)buildMasterPlaylist;	// 0x4c768d
- (BOOL)buildPlaylist:(id)playlist withMaxAudioBitrate:(int)maxAudioBitrate;	// 0x4c5a79
- (void)dealloc;	// 0x4c5225
- (id)description;	// 0x4c7fc1
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x4c8335
// declared property getter: - (int)initialPlaylistStreamIndex;	// 0x4c8385
// declared property getter: - (int)initialPlaylistTrackIndex;	// 0x4c8359
- (BOOL)isUnmuxed;	// 0x4c81d5
- (void)metrics;	// 0x4c7fbd
// declared property getter: - (id)playlists;	// 0x4c82ed
- (void)reset;	// 0x4c56c5
- (void)selectDownloadedContentHeaderDownloadableDataInitialBitrate:(unsigned)bitrate;	// 0x4c5741
// declared property getter: - (id)selectedCdn;	// 0x4c8311
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x4c8349
// declared property setter: - (void)setInitialPlaylistStreamIndex:(int)index;	// 0x4c8399
// declared property setter: - (void)setInitialPlaylistTrackIndex:(int)index;	// 0x4c836d
// declared property setter: - (void)setPlaylists:(id)playlists;	// 0x4c8301
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x4c8325
// declared property setter: - (void)setUnmuxed:(BOOL)unmuxed;	// 0x4c83c9
- (void)sortDownloadedContentHeaderDownloadableDataByBitrates;	// 0x4c570d
// declared property getter: - (BOOL)unmuxed;	// 0x4c83b1
@end

