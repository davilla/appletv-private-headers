/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3Entity.h"

@class MLChapterTOC;

@interface ML3Track : ML3Entity {
}
@property(readonly, assign, nonatomic) MLChapterTOC *chapterTOC;	// G=0x333bb3a5; 
+ (id)TVShowEpisodesDefaultOrderingProperties;	// 0x333e27d1
+ (id)albumAllArtistsDefaultOrderingProperties;	// 0x333b8709
+ (id)albumAndArtistDefaultOrderingProperties;	// 0x333e27b9
+ (id)albumsDefaultOrderingProperties;	// 0x333b8309
+ (id)artistAllAlbumsDefaultOrderingProperties;	// 0x333e27ad
+ (id)artistsDefaultOrderingProperties;	// 0x333aeebd
+ (id)composersDefaultOrderingProperties;	// 0x333e27c5
+ (id)containerQueryWithContainer:(id)container;	// 0x333ea4cd
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate;	// 0x333ea47d
+ (id)containerQueryWithContainer:(id)container predicate:(id)predicate orderingProperties:(id)properties;	// 0x333b71a5
+ (id)databaseTable;	// 0x333aeeb1
+ (id)defaultOrderingProperties;	// 0x333b6149
+ (id)extraTablesToDelete;	// 0x333e27dd
+ (id)foreignColumnForProperty:(id)property;	// 0x333bb851
+ (id)foreignDatabaseTableForProperty:(id)property;	// 0x333bb831
+ (id)genresDefaultOrderingProperties;	// 0x333e27a1
+ (void)initialize;	// 0x333acf0d
+ (id)joinClauseForProperty:(id)property;	// 0x333aee91
+ (BOOL)libraryContentsChangeForProperty:(id)property;	// 0x333bb891
+ (id)orderingPropertiesForITTGTrackOrder:(unsigned long)ittgtrackOrder;	// 0x333e89cd
+ (id)persistentIDColumnForTable:(id)table;	// 0x333bb871
+ (id)podcastsDefaultOrderingProperties;	// 0x333bbf6d
+ (id)podcastsEpisodesDefaultOrderingProperties;	// 0x333bbf81
+ (id)predisambiguatedProperties;	// 0x333aee85
+ (id)sectionPropertyForProperty:(id)property;	// 0x333af945
+ (id)subselectPropertyForProperty:(id)property;	// 0x333e27e9
+ (id)subselectStatementForProperty:(id)property;	// 0x333af991
- (id)initWithDictionary:(id)dictionary inLibrary:(id)library;	// 0x333e2c51
// declared property getter: - (id)chapterTOC;	// 0x333bb3a5
- (BOOL)deleteFromLibrary;	// 0x333e2851
- (long long)imageDBRecordID:(int)anId;	// 0x333b8849
- (BOOL)isOTAPurchasedContent;	// 0x333ba619
- (BOOL)populateArtworkCacheWithArtworkData:(id)artworkData;	// 0x333f7eb9
- (void)populateChapterDataWithImportChapters:(id)importChapters;	// 0x333f75dd
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x333f7215
@end

