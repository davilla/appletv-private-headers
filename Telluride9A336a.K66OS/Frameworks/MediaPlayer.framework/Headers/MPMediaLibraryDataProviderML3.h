/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "MPMediaLibraryDataProviderPrivate.h"

@class NSArray, NSString, NSSet, ML3MusicLibrary;

@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate> {
	dispatch_queue_s *_backgroundTaskQueue;	// 4 = 0x4
	unsigned _backgroundTask;	// 8 = 0x8
	unsigned _backgroundTaskCount;	// 12 = 0xc
	ML3MusicLibrary *_library;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isGeniusEnabled;
@property(retain, nonatomic) ML3MusicLibrary *library;	// G=0x35bc40a5; S=0x35bbe88d; @synthesize=_library
@property(readonly, assign, nonatomic) NSString *name;	// G=0x35bbe9a5; 
@property(readonly, assign, nonatomic) NSArray *preferredAudioLanguages;	// G=0x35bc0f21; 
@property(readonly, assign, nonatomic) NSArray *preferredSubtitleLanguages;	// G=0x35bc0f41; 
@property(readonly, assign, nonatomic) NSSet *propertiesToCache;
@property(readonly, assign, nonatomic) BOOL requiresAuthentication;
@property(readonly, assign, nonatomic) NSString *syncValidity;	// G=0x35bc0f71; 
@property(readonly, assign, nonatomic) NSString *uniqueIdentifier;	// G=0x35bbe9d9; 
+ (id)_unadjustedValueForMPProperty:(id)mpproperty withDefaultValue:(id)defaultValue;	// 0x35bc2b5d
- (id)initWithLibrary:(id)library;	// 0x35bbe60d
- (void)_displayValuesDidChange:(id)_displayValues;	// 0x35bc2f41
- (void)_dynamicPropertiesDidChange:(id)_dynamicProperties;	// 0x35bc2f21
- (void)_libraryContentsDidChange:(id)_libraryContents;	// 0x35bc2f01
- (void)_loadEntitiesUsingFetchRequest:(id)request entityQuery:(id)query writeBlock:(id)block;	// 0x35bc2f81
- (void)_loadProperties:(id)properties ofEntityWithIdentifier:(long long)identifier ML3EntityClass:(Class)aClass completionBlock:(id)block;	// 0x35bc3add
- (void)_loadValueForAggregateFunction:(id)aggregateFunction entityClass:(Class)aClass property:(id)property query:(id)query completionBlock:(id)block;	// 0x35bc3d19
- (BOOL)_removeEntitiesWithIdentifiers:(long long *)identifiers count:(unsigned)count entityClass:(Class)aClass;	// 0x35bc3e85
- (void)_syncGenerationDidChange:(id)_syncGeneration;	// 0x35bc2f61
- (void)addItemWithIdentifier:(long long)identifier toPlaylistWithIdentifier:(long long)identifier2 completionBlock:(id)block;	// 0x35bc07e1
- (void)addItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count toPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bc09b9
- (long long)addPlaylistWithValuesForProperties:(id)properties;	// 0x35bc02d1
- (id)adjustedValueForMPProperty:(id)mpproperty ofEntity:(id)entity withDefaultValue:(id)defaultValue;	// 0x35bc16f5
- (void)dealloc;	// 0x35bbe771
- (void)downloadItemWithIdentifier:(long long)identifier completionHandler:(id)handler;	// 0x35bc120d
- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x35bbf319
- (void)enumerateEntityChangesAfterSyncAnchor:(id)anchor itemBlock:(id)block collectionBlock:(id)block3;	// 0x35bc0fc9
- (void)enumerateItemIdentifiersForQueryCriteria:(id)queryCriteria cancelBlock:(id)block usingBlock:(id)block3;	// 0x35bbf275
- (BOOL)hasGeniusMixes;	// 0x35bbeec1
- (BOOL)hasMediaOfType:(int)type;	// 0x35bbec6d
- (BOOL)itemExistsWithPersistentID:(unsigned long long)persistentID;	// 0x35bbefc5
- (id)lastModifiedDate;	// 0x35bbe9e5
// declared property getter: - (id)library;	// 0x35bc40a5
- (void)loadBestArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bc0f61
- (void)loadBestTimedArtworkImageDataForSize:(CGSize)size ofItemWithIdentifier:(long long)identifier atPlaybackTime:(double)playbackTime completionBlock:(id)block;	// 0x35bc0f69
- (void)loadCollectionsUsingFetchRequest:(id)request;	// 0x35bbf9e9
- (void)loadItemsUsingFetchRequest:(id)request;	// 0x35bbf8d1
- (void)loadProperties:(id)properties ofCollectionWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bbfc05
- (void)loadProperties:(id)properties ofItemWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bbfbb9
- (void)loadQueryCriteria:(id)criteria hasCollectionsWithCompletionBlock:(id)completionBlock;	// 0x35bbf181
- (void)loadQueryCriteria:(id)criteria hasItemsWithCompletionBlock:(id)completionBlock;	// 0x35bbf08d
- (void)loadValueForAggregateFunction:(id)aggregateFunction onCollectionsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x35bbf871
- (void)loadValueForAggregateFunction:(id)aggregateFunction onItemsForProperty:(id)property queryCriteria:(id)criteria completionBlock:(id)block;	// 0x35bbf7fd
- (void)moveItemFromIndex:(unsigned)index toIndex:(unsigned)index2 inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bc0d59
// declared property getter: - (id)name;	// 0x35bbe9a5
- (void)performBackgroundTaskWithBlock:(id)block;	// 0x35bc1295
- (BOOL)performTransactionWithBlock:(id)block;	// 0x35bbfdbd
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)persistentID;	// 0x35bbf029
- (long long)playlistGeneration;	// 0x35bbead5
// declared property getter: - (id)preferredAudioLanguages;	// 0x35bc0f21
// declared property getter: - (id)preferredSubtitleLanguages;	// 0x35bc0f41
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)identifier;	// 0x35bc0c95
- (void)removeItemsWithIdentifiers:(long long *)identifiers atFilteredIndexes:(id)filteredIndexes inPlaylistWithIdentifier:(long long)identifier completionBlock:(id)block;	// 0x35bc0b81
- (BOOL)removeItemsWithIdentifiers:(long long *)identifiers count:(unsigned)count;	// 0x35bc079d
- (BOOL)removePlaylistWithIdentifier:(long long)identifier;	// 0x35bc074d
// declared property setter: - (void)setLibrary:(id)library;	// 0x35bbe88d
- (BOOL)setValue:(id)value forProperty:(id)property ofItemWithIdentifier:(long long)identifier;	// 0x35bbff2d
- (BOOL)setValue:(id)value forProperty:(id)property ofPlaylistWithIdentifier:(long long)identifier;	// 0x35bc0241
- (unsigned long long)syncGenerationID;	// 0x35bbeab5
// declared property getter: - (id)syncValidity;	// 0x35bc0f71
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x35bc1275
// declared property getter: - (id)uniqueIdentifier;	// 0x35bbe9d9
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkMediaValue:(id)value timestamp:(double)timestamp;	// 0x35bc1211
- (BOOL)writable;	// 0x35bbec49
@end

