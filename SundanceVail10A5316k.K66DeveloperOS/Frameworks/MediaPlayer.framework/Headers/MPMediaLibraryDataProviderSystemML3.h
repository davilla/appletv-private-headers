/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaLibraryDataProviderML3.h"


@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3 {
}
+ (BOOL)_isGeniusEnabled;	// 0x348b1901
+ (id)_localizedCloudGeniusErrorForError:(id)error;	// 0x348b25dd
+ (id)_localizedGeniusErrorForError:(id)error;	// 0x348b2961
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier;	// 0x348b35f1
- (id)_cacheIDForItemIdentifier:(long long)itemIdentifier atPlaybackTime:(double)playbackTime;	// 0x348b3675
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId completionBlock:(id)block;	// 0x348b2b95
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned)mlartworkFormatID artworkCacheID:(id)anId canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x348b2cd5
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;	// 0x348b2419
- (id)errorResolverForMediaItem:(id)mediaItem;	// 0x348b3df9
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;	// 0x348b2525
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;	// 0x348b3d29
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;	// 0x348b3d2d
- (BOOL)isGeniusEnabled;	// 0x348b1965
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID canUseSurfaceBackedImage:(BOOL)image completionBlock:(id)block;	// 0x348b391d
- (void)loadArtworkImageForFormat:(int)format ofItemWithArtworkCacheID:(id)artworkCacheID completionBlock:(id)block;	// 0x348b38e9
- (void)loadArtworkImageForFormat:(int)format ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x348b389d
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x348b36ed
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x348b3951
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x348b37c1
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x348b39e9
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x348b3a89
- (void)releaseGeniusClusterPlaylist:(void *)playlist;	// 0x348b25c9
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x348b198d
@end

