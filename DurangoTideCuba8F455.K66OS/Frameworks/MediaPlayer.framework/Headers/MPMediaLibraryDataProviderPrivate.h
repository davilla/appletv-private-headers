/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaLibraryDataProvider.h"
#import "MediaPlayer-Structs.h"

@class NSArray;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>
@optional
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut4 completionBlock:(id)block;
- (long long)addPlaylistWithValuesForProperties:(id)properties;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)seedItemIdentifiers count:(unsigned)count error:(id *)error;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)geniusClusterPlaylist count:(unsigned *)count error:(id *)error;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)identifier;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(int)type;
- (void)insertItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier afterPhysicalOrder:(long long)order insertedPhysicalOrdersOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut6 completionBlock:(id)block;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)identifier otherItemWithIdentifier:(long long)identifier2 compareRepresentativeItemArtwork:(BOOL)artwork missingAlwaysComparesEqual:(BOOL)equal;
// declared property getter: - (BOOL)isGeniusEnabled;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;
- (id)lastModifiedDate;
- (void)loadBestArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)loadBestTimedArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;
- (void)loadCoverFlowArtworkImageForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;
- (void)mediaLibraryDidChangeITunesIsSyncingToValue:(BOOL)mediaLibrary;
- (void)mediaLibraryWillChangeITunesIsSyncingToValue:(BOOL)mediaLibrary;
- (void)moveItemFromPhysicalOrder:(long long)physicalOrder toAfterPhysicalOrder:(long long)afterPhysicalOrder inPlaylistWithIdentifier:(long long)identifier insertedPhysicalOrderOut:(long long *)anOut fullReorderOccurredOut:(BOOL *)anOut5 completionBlock:(id)block;
- (BOOL)performTransactionWithBlock:(id)block;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;
// declared property getter: - (id)preferredAudioLanguages;
// declared property getter: - (id)preferredSubtitleLanguages;
- (void)releaseGeniusClusterPlaylist:(void *)playlist;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;
- (void)removeItemAtPhysicalOrder:(long long)physicalOrder inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;
- (void)seedPlaylistWithIdentifier:(long long)identifier withItemWithIdentifier:(long long)identifier2 completionBlock:(id)block;
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;
@end

