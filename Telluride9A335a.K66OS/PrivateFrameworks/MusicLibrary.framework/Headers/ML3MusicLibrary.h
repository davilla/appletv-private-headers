/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import <NSObject.h> // Unknown library

@class ML3DatabaseMetadata, ML3NondurableWriteSet, ML3UbiquitousDatabase, NSString, NSMutableArray, ML3Container, NSArray, ML3MusicLibrary_SQLiteDatabaseContext;

@interface ML3MusicLibrary : NSObject {
@private
	ML3MusicLibrary_SQLiteDatabaseContext *_mainDatabaseContext;	// 4 = 0x4
	ML3MusicLibrary_SQLiteDatabaseContext *_backgroundDatabaseContext;	// 8 = 0x8
	ML3UbiquitousDatabase *_ubiquitousDatabase;	// 12 = 0xc
	dispatch_queue_s *_backgroundQueue;	// 16 = 0x10
	opaque_pthread_t *_backgroundQueueOwner;	// 20 = 0x14
	NSString *_path;	// 24 = 0x18
	NSMutableArray *_pendingNotifyPostNames;	// 28 = 0x1c
	NSString *_notifyName;	// 32 = 0x20
	int _notifyToken;	// 36 = 0x24
	NSString *_nonContentsNotifyName;	// 40 = 0x28
	int _nonContentsNotifyToken;	// 44 = 0x2c
	NSString *_displayValuesNotifyName;	// 48 = 0x30
	int _displayValuesNotifyToken;	// 52 = 0x34
	NSString *_syncGenerationNotifyName;	// 56 = 0x38
	int _syncGenerationNotifyToken;	// 60 = 0x3c
	BOOL _enableWrites;	// 64 = 0x40
	BOOL _requiresProcessAssertion;	// 65 = 0x41
	int _backupDisabledCount;	// 68 = 0x44
	BOOL _backupNeeded;	// 72 = 0x48
	BOOL _hasEverConnectedToDatabase;	// 73 = 0x49
	id _mcSettingsObserver;	// 76 = 0x4c
	dispatch_queue_s *_artworkQueue;	// 80 = 0x50
	int _artworkBlobFD;	// 84 = 0x54
	dispatch_queue_s *_nondurableConcurrentQueue;	// 88 = 0x58
	ML3NondurableWriteSet *_nondurableWriteSet;	// 92 = 0x5c
}
@property(readonly, assign) long long autoFilledTracksTotalSize;	// G=0x3099471d; 
@property(readonly, assign) long long currentRevision;	// G=0x30994391; 
@property(readonly, assign) ML3DatabaseMetadata *databaseInfo;	// G=0x30982581; 
@property(readonly, assign, nonatomic) BOOL hasEverConnectedToDatabase;	// G=0x3097cea5; @synthesize=_hasEverConnectedToDatabase
@property(readonly, assign) NSArray *localizedSectionIndexTitles;	// G=0x3097ae95; 
@property(readonly, retain) ML3MusicLibrary_SQLiteDatabaseContext *mainDatabaseContext;	// G=0x30975cbd; converted property
@property(readonly, assign) BOOL mediaRestrictionEnabled;	// G=0x3097a909; 
@property(readonly, assign, nonatomic, getter=isNondurableWritingActive) BOOL nondurableWritingActive;	// G=0x3098043d; 
@property(readonly, assign) NSString *path;	// G=0x3097481d; @synthesize=_path
@property(readonly, assign) long long persistentID;	// G=0x30994225; 
@property(readonly, assign) NSArray *preferredAudioTracks;	// G=0x30982525; 
@property(readonly, assign) NSArray *preferredSubtitleTracks;	// G=0x3098269d; 
@property(readonly, assign) ML3Container *purchasedTracksPlaylist;	// G=0x30992451; 
@property(readonly, assign) BOOL requiresPostProcessing;	// G=0x30974831; 
@property(assign) long long syncGenerationID;	// G=0x3097ca41; S=0x309944fd; 
@property(readonly, retain) ML3UbiquitousDatabase *ubiquitousDatabase;	// G=0x30977791; converted property
@property(readonly, assign, nonatomic) BOOL writable;	// G=0x30973ad5; 
+ (id)_autoFillTrackPredicate;	// 0x30994685
+ (sqlite3 *)_openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes forLibrary:(id)library;	// 0x30975d6d
+ (void)_stepStatement:(sqlite3_stmt *)statement hasRow:(BOOL *)row didFinish:(BOOL *)finish;	// 0x309771a5
+ (id)allSchemaSQL;	// 0x309b14c9
+ (MLArtworkFormatSpec)artworkFormatSpecForArtworkFormatID:(unsigned)artworkFormatID;	// 0x3097e329
+ (BOOL)buildDatabaseTablesUsingHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x309b183d
+ (void)closeDatabaseHandle:(sqlite3 *)handle;	// 0x30990d21
+ (BOOL)createIndexesUsingHandle:(sqlite3 *)handle;	// 0x309b31a1
+ (int)currentUserVersion;	// 0x309775c1
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle;	// 0x309b3181
+ (BOOL)dropIndexesUsingHandle:(sqlite3 *)handle tableNames:(const char *)names;	// 0x309b2f81
+ (void)enumerateSortMapTablesUsingBlock:(id)block;	// 0x30993ce9
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle;	// 0x3097ada5
+ (BOOL)executeSQL:(id)sql usingHandle:(sqlite3 *)handle waitIfBusy:(BOOL)busy;	// 0x3097adc9
+ (BOOL)importationEnabled;	// 0x30990071
+ (id)indexSchemaSQL;	// 0x309b1719
+ (void)initialize;	// 0x309732cd
+ (id)itemIndexSchemaSQL;	// 0x309b16a1
+ (id)itemSchemaSQL;	// 0x309b14bd
+ (id)localizedSectionHeaderForSectionHeader:(id)sectionHeader;	// 0x3097c961
+ (id)localizedSectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x3097bef9
+ (id)mainDatabasePath;	// 0x30973a41
+ (BOOL)migrateToCurrentUserVersionUsingHandle:(sqlite3 *)currentUserVersionUsingHandle;	// 0x309b1f9d
+ (sqlite3 *)openedDatabaseHandleForPath:(id)path enableWrites:(BOOL)writes;	// 0x3099078d
+ (BOOL)orderingLanguageMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x309775cd
+ (unsigned)readableArtworkFormatIDForArtworkFormatID:(unsigned)artworkFormatID;	// 0x30995205
+ (BOOL)schemaExactlyMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x309b1c5d
+ (id)sectionIndexTitleForSectionHeader:(id)sectionHeader;	// 0x3097bb91
+ (id)sectionIndexTitles;	// 0x3097bb49
+ (void)setImportationEnabled:(BOOL)enabled;	// 0x30973599
+ (id)sharedLibrary;	// 0x30973695
+ (id)sortMapSchemaSQL;	// 0x309b14b1
+ (BOOL)statementDidFinishAfterStepping:(sqlite3_stmt *)statement;	// 0x309816dd
+ (BOOL)statementHasRowAfterStepping:(sqlite3_stmt *)stepping;	// 0x3097717d
+ (id)storeLinkSchemaSQL;	// 0x309b14a5
+ (id)systemCurrentLanguage;	// 0x309776f5
+ (BOOL)updateSortMapOnHandle:(sqlite3 *)handle usingTransaction:(BOOL)transaction;	// 0x309b5001
+ (BOOL)userVersionMatchesSystemUsingHandle:(sqlite3 *)handle;	// 0x3097743d
+ (int)userVersionUsingHandle:(sqlite3 *)handle;	// 0x3097749d
- (id)initWithPath:(id)path enableWrites:(BOOL)writes;	// 0x309736c1
- (void)_accessAccountCacheDBForSQL:(id)sql usingBlock:(id)block;	// 0x30997181
- (void)_accessArtworkBlobFDWithBlock:(id)block;	// 0x309824cd
- (void)_accessDatabaseContextUsingBlock:(id)block;	// 0x30975c41
- (BOOL)_commitNondurableWrites;	// 0x30980ed9
- (void)_delayableNotifyPost:(id)post;	// 0x30982169
- (void)_dispatchBackgroundAsynchronouslyUsingBlock:(id)block;	// 0x30991469
- (void)_dispatchBackgroundSynchronouslyUsingBlock:(id)block;	// 0x3097732d
- (BOOL)_insertImageBytes:(const void *)bytes length:(unsigned long)length forCacheID:(id)cacheID formatID:(unsigned)anId imageSubRect:(CGRect)rect;	// 0x309953d1
- (id)_insertStringsIntoSortMapOrFail:(id)fail;	// 0x309b3949
- (BOOL)_mustProcessLanguageChange;	// 0x30993e09
- (void)_onBackgroundQueuePerformBlock:(id)block;	// 0x309773a1
- (void)_postChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x30982065
- (void)_postDisplayValuesChangeNotificationLocalOnly:(BOOL)only;	// 0x30993c81
- (void)_postNonContentsChangeNotificationAndScheduleFlushLocalOnly:(BOOL)only;	// 0x30983131
- (void)_scheduleCommitNondurableWritesAfterTimeInterval:(double)interval;	// 0x309982ed
- (void)accessDatabaseUsingBlock:(id)block;	// 0x309772d9
- (void)accessSortKeyBuilder:(id)builder;	// 0x3097b4d1
- (long long)addStringToSortMap:(id)sortMap;	// 0x30993e89
- (id)albumArtistForEffectiveAlbumArtistName:(id)effectiveAlbumArtistName;	// 0x309a86e5
- (id)albumForAlbumArtistPersistentID:(long long)albumArtistPersistentID albumName:(id)name feedURL:(id)url seasonNumber:(id)number compilation:(BOOL)compilation;	// 0x3099da7d
- (id)appleIDForDSID:(unsigned long long)dsid;	// 0x30997405
- (void)applyUbiquitousBookmarksToTrack:(id)track;	// 0x30998075
- (id)artistForArtistName:(id)artistName seriesName:(id)name;	// 0x3099d31d
// declared property getter: - (long long)autoFilledTracksTotalSize;	// 0x3099471d
- (id)backgroundQueue_backgroundDatabaseContext;	// 0x309773d9
- (BOOL)buildDatabaseTables;	// 0x309b1ae5
- (BOOL)coerceValidDatabase;	// 0x309b3579
- (BOOL)compactArtwork;	// 0x30996915
- (id)composerForComposerName:(id)composerName;	// 0x309a7ead
- (BOOL)createIndexes;	// 0x309b33dd
// declared property getter: - (long long)currentRevision;	// 0x30994391
// declared property getter: - (id)databaseInfo;	// 0x30982581
- (void)dealloc;	// 0x309905c5
- (BOOL)deleteAllArtwork;	// 0x309963b1
- (BOOL)deleteAndRecreateDatabaseUsingHandle:(sqlite3 **)handle;	// 0x309b2c85
- (BOOL)deleteArtworkForCacheID:(id)cacheID;	// 0x30996615
- (long long)deleteAutoFilledTracksOfAtLeastTotalSize:(long long)leastTotalSize;	// 0x309948e5
- (BOOL)dropItemIndexes;	// 0x309b325d
- (void)enumeratePersistentIDsAfterRevision:(long long)revision usingBlock:(id)block;	// 0x30994561
- (BOOL)executeSQL:(id)sql;	// 0x30990d65
- (id)genreForGenre:(id)genre;	// 0x309a1315
- (id)groupingKeyForString:(id)string;	// 0x30991735
- (BOOL)hasArtworkForCacheID:(id)cacheID;	// 0x30995251
// declared property getter: - (BOOL)hasEverConnectedToDatabase;	// 0x3097cea5
- (void)incrementalVaccuumIfAppropriate;	// 0x3099101d
- (BOOL)insertArtworkWithImageData:(id)imageData forCacheID:(id)cacheID;	// 0x30995d1d
- (long long)insertStringIntoSortMapNoTransaction:(id)transaction;	// 0x30981265
- (id)insertStringsIntoSortMap:(id)map;	// 0x309b49f5
// declared property getter: - (BOOL)isNondurableWritingActive;	// 0x3098043d
- (BOOL)isReadable;	// 0x30993e85
- (void)loadArtworkForCacheID:(id)cacheID formatID:(unsigned)anId completionHandler:(id)handler;	// 0x309822c5
- (id)localizedSectionHeaderForSectionIndex:(unsigned)sectionIndex;	// 0x3097b349
// declared property getter: - (id)localizedSectionIndexTitles;	// 0x3097ae95
- (id)locationKindForKind:(id)kind;	// 0x309b7645
// converted property getter: - (id)mainDatabaseContext;	// 0x30975cbd
// declared property getter: - (BOOL)mediaRestrictionEnabled;	// 0x3097a909
- (void)migratePresignedValidity;	// 0x30990381
- (XXStruct_Cy4r_A)nameOrderForString:(id)string;	// 0x309802e5
- (id)nondurableWriteSetForReading;	// 0x30977051
- (id)nondurableWriteSetForWriting;	// 0x3098089d
- (void)notifyContentsDidChange;	// 0x30982011
- (void)notifyDisplayValuesPropertyDidChange;	// 0x309923a5
- (void)notifyNonContentsPropertyDidChange;	// 0x309830dd
- (sqlite3 *)openedDatabaseHandle;	// 0x30975d21
// declared property getter: - (id)path;	// 0x3097481d
- (void)performTransactionAllowingWrites:(BOOL)writes withBlock:(id)block;	// 0x3097aab9
- (void)performTransactionKind:(int)kind waitIfBusy:(BOOL)busy withBlock:(id)block;	// 0x3097aae5
- (void)performTransactionKind:(int)kind withBlock:(id)block;	// 0x30991ae5
- (void)performTransactionWithBlock:(id)block;	// 0x30981a9d
// declared property getter: - (long long)persistentID;	// 0x30994225
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData trackValues:(id)values;	// 0x309ae295
- (BOOL)populateStaticItemsOfDynamicContainers;	// 0x30990ec9
// declared property getter: - (id)preferredAudioTracks;	// 0x30982525
// declared property getter: - (id)preferredSubtitleTracks;	// 0x3098269d
- (void)prepareStatementForSQL:(id)sql cache:(BOOL)cache usingBlock:(id)block;	// 0x30975b91
- (void)prepareStatementForSQL:(id)sql usingBlock:(id)block;	// 0x30975b71
- (void)prepareStatementForSQLPrefix:(id)sqlprefix inPersistentIDs:(const long long *)persistentIDs count:(unsigned)count usingBlock:(id)block;	// 0x3098fc31
// declared property getter: - (id)purchasedTracksPlaylist;	// 0x30992451
- (void)reconnectBackgroundDatabaseContext;	// 0x309913c1
- (void)reconnectMainDatabaseContext;	// 0x30991371
- (void)reconnectToDatabase;	// 0x30991519
- (void)removeOrphanedTracks;	// 0x30998435
// declared property getter: - (BOOL)requiresPostProcessing;	// 0x30974831
- (BOOL)resetAllContents;	// 0x309b59cd
- (void)savePlaylists;	// 0x309930c9
- (void)savePlaylistsSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x309930ed
- (void)saveTrackMetadata;	// 0x309928c9
- (void)saveTrackMetadataSinceRevision:(long long)revision withGrappaID:(unsigned)grappaID;	// 0x309928ed
- (unsigned)sectionIndexTitleIndexForSectionIndex:(unsigned)sectionIndex;	// 0x3097b59d
- (BOOL)setAppleID:(id)anId forDSID:(unsigned long long)dsid;	// 0x30997275
// declared property setter: - (void)setSyncGenerationID:(long long)anId;	// 0x309944fd
- (BOOL)setValue:(id)value forDatabaseProperty:(id)databaseProperty;	// 0x30997625
// declared property getter: - (long long)syncGenerationID;	// 0x3097ca41
- (double)timestampForAppliedUbiquitousBookmarkKey:(id)appliedUbiquitousBookmarkKey;	// 0x309977c5
// converted property getter: - (id)ubiquitousDatabase;	// 0x30977791
- (BOOL)updateActivePlaylistNamesForCurrentLanguage;	// 0x309a8c59
- (void)updateOrderingLanguagesForCurrentLanguage;	// 0x309a8da1
- (BOOL)updateSortMap;	// 0x3099406d
- (void)updateTrackIntegrity;	// 0x309905a9
- (void)updateUbiquitousBookmarksFromTrack:(id)track;	// 0x30997f29
- (void)updateUbiquitousBookmarksWithKey:(id)key bookmarkTime:(id)time timestamp:(double)timestamp;	// 0x309979f9
- (id)valueForDatabaseProperty:(id)databaseProperty;	// 0x3097ca75
// declared property getter: - (BOOL)writable;	// 0x30973ad5
@end

