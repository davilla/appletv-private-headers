/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSString, MPMediaItemArtwork, NSDate, NSArray;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x3370dce1; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x3370dd3d; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x3370dd59; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x3370dd75; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x3370dd91; S=0x3370ddc5; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x3370d4c5; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x3370de09; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x3370dcfd; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x3370e005; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x3370de25; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x3370e411; S=0x3370e441; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x3370df05; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x3370de41; 
@property(readonly, assign, nonatomic) BOOL isUsableAsRepresentativeItem;	// G=0x3370eba9; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x3370e279; S=0x3370e295; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x3370e3d9; S=0x3370e3f5; 
@property(copy, nonatomic) NSDate *lastUsedDate;	// G=0x3370e2b1; S=0x3370e2cd; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x3370df35; 
@property(readonly, assign, nonatomic) BOOL mediaTypeCanSeedGenius;	// G=0x337a9349; 
@property(assign, nonatomic) unsigned playCount;	// G=0x3370e189; S=0x3370e1bd; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x3370e201; S=0x3370e235; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x3370df69; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x3370e049; 
@property(assign, nonatomic) unsigned rating;	// G=0x3370e065; S=0x3370e099; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x3370e0dd; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x3370e485; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x3370e2e9; S=0x3370e31d; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x3370e361; S=0x3370e395; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x3370df9d; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x3370dfd1; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x3370e0f9; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x3370e115; 
+ (void)_createFilterableDictionary;	// 0x3370d4e1
+ (BOOL)_isValidItemProperty:(id)property;	// 0x3370dc9d
+ (BOOL)canFilterByProperty:(id)property;	// 0x3370cc35
+ (id)dynamicProperties;	// 0x3370d399
+ (id)fallbackTitlePropertyForGroupingType:(int)groupingType;	// 0x3370d37d
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x3370d28d
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x3370d2f9
- (id)initWithCoder:(id)coder;	// 0x3370cb31
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x3370ca25
- (id)_bestStoreURL;	// 0x3370d1d5
- (id)_directStoreURL;	// 0x3370ebad
- (void)_getIsDownloadable:(BOOL *)downloadable isDownloadInProgress:(BOOL *)progress;	// 0x3377c785
- (id)_libraryLinkArtist;	// 0x3370ed55
- (id)_libraryLinkKind;	// 0x3370edc9
- (id)_libraryLinkPlaylistName;	// 0x3370ee89
- (id)_libraryLinkURL;	// 0x3370ef1d
// declared property getter: - (id)albumArtist;	// 0x3370dce1
// declared property getter: - (id)albumTitle;	// 0x3370dd3d
// declared property getter: - (id)artist;	// 0x3370dd59
// declared property getter: - (id)artwork;	// 0x3370dd75
// declared property getter: - (double)bookmarkTime;	// 0x3370dd91
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x3370e5e9
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x3370e6d5
// declared property getter: - (id)chapters;	// 0x3370d4c5
- (id)chaptersOfType:(int)type;	// 0x3370e4b5
- (void)clearBookmarkTime;	// 0x3370d155
// declared property getter: - (id)composer;	// 0x3370de09
- (unsigned)countOfChaptersOfType:(int)type;	// 0x3370e809
- (void)didReceiveMemoryWarning;	// 0x3370d1d1
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x3370cde9
// declared property getter: - (id)effectiveAlbumArtist;	// 0x3370dcfd
// declared property getter: - (double)effectiveStopTime;	// 0x3370e005
- (void)encodeWithCoder:(id)coder;	// 0x3370cbb9
- (BOOL)existsInLibrary;	// 0x3370d20d
- (void)gaplessHeuristicInfo:(unsigned *)info durationInSamples:(unsigned long long *)samples lastPacketsResync:(unsigned long long *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x3370e8e9
// declared property getter: - (id)genre;	// 0x3370de25
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x3370e411
- (BOOL)hasProperNetworkConditionsToPlay;	// 0x337a4999
- (unsigned)hash;	// 0x3370ca81
- (void)incrementPlayCountForPlayingToEnd;	// 0x3370cfdd
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x3370d059
- (void)incrementSkipCount;	// 0x3370cf61
- (BOOL)isEqual:(id)equal;	// 0x3370ca99
// declared property getter: - (BOOL)isITunesU;	// 0x3370df05
// declared property getter: - (BOOL)isRental;	// 0x3370de41
// declared property getter: - (BOOL)isUsableAsRepresentativeItem;	// 0x3370eba9
// declared property getter: - (id)lastPlayedDate;	// 0x3370e279
// declared property getter: - (id)lastSkippedDate;	// 0x3370e3d9
// declared property getter: - (id)lastUsedDate;	// 0x3370e2b1
- (void)markNominalAmountHasBeenPlayed;	// 0x3370ce69
// declared property getter: - (int)mediaType;	// 0x3370df35
// declared property getter: - (BOOL)mediaTypeCanSeedGenius;	// 0x337a9349
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x3370cee5
// declared property getter: - (unsigned)playCount;	// 0x3370e189
// declared property getter: - (unsigned)playCountSinceSync;	// 0x3370e201
// declared property getter: - (double)playbackDuration;	// 0x3370df69
// declared property getter: - (id)podcastTitle;	// 0x3370e049
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x3370d491
- (id)predicateForProperty:(id)property;	// 0x3370e149
// declared property getter: - (unsigned)rating;	// 0x3370e065
// declared property getter: - (id)releaseDate;	// 0x3370e0dd
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x3370e485
- (id)representativeItem;	// 0x3370d209
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x3370ddc5
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x3370e441
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x3370e295
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x3370e3f5
// declared property setter: - (void)setLastUsedDate:(id)date;	// 0x3370e2cd
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x3370e1bd
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x3370e235
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x3370e099
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x3370e31d
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x3370e395
// declared property getter: - (unsigned)skipCount;	// 0x3370e2e9
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x3370e361
// declared property getter: - (double)startTime;	// 0x3370df9d
// declared property getter: - (double)stopTime;	// 0x3370dfd1
// declared property getter: - (id)title;	// 0x3370e0f9
- (void)updateLastUsedDateToCurrentDate;	// 0x3370d0d9
- (id)valueForProperty:(id)property;	// 0x3370ccc1
- (id)valuesForProperties:(id)properties;	// 0x3370cd69
// declared property getter: - (unsigned)year;	// 0x3370e115
@end

