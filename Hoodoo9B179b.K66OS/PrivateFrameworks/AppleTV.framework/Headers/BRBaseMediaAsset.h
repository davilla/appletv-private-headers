/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRMediaAsset.h"

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x30260b59; S=0x30260b21; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x30260b25; S=0x30260b09; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x30260a2d; S=0x30260a31; converted property
@property(retain) id lastPlayed;	// G=0x30260b5d; S=0x30260b61; converted property
@property(assign) float userStarRating;	// G=0x30260ab9; S=0x30260ac1; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x302608b1
- (BOOL)alwaysRequiresAuthorization;	// 0x30260dd9
- (id)artist;	// 0x30260979
- (id)artistCollection;	// 0x30260bc9
- (id)artistForSorting;	// 0x3026097d
- (id)assetID;	// 0x30260961
- (id)authorName;	// 0x30260cd1
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x30260b59
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x30260b25
- (id)broadcaster;	// 0x30260aa5
- (BOOL)canBePlayedInShuffle;	// 0x30260ced
- (id)cast;	// 0x302609cd
- (id)category;	// 0x30260cdd
- (void)cleanUpPlaybackContext;	// 0x30260dcd
- (BOOL)closedCaptioned;	// 0x30260ad5
- (id)collections;	// 0x30260c1d
- (id)composer;	// 0x30260aed
- (id)composerForSorting;	// 0x30260af1
- (id)copyright;	// 0x302609c1
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x30260ded
- (id)dateAcquired;	// 0x30260a5d
- (id)dateAcquiredString;	// 0x30260c39
- (id)dateCreated;	// 0x30260a61
- (id)dateCreatedString;	// 0x30260c61
- (id)datePublished;	// 0x30260a65
- (id)datePublishedString;	// 0x30260c89
- (void)dealloc;	// 0x30260905
- (id)directors;	// 0x302609e9
- (BOOL)dolbyDigital;	// 0x30260ad9
- (long)duration;	// 0x302609c5
- (unsigned)episode;	// 0x30260ab1
- (id)episodeNumber;	// 0x30260aa9
- (BOOL)forceHDCPProtection;	// 0x30260b01
- (id)genres;	// 0x30260a71
- (int)grFormat;	// 0x30260ce5
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x30260a2d
- (BOOL)hasCoverArt;	// 0x30260a59
- (BOOL)hasVideoContent;	// 0x30260af5
- (unsigned)hash;	// 0x30260da1
- (id)imageProxy;	// 0x30260a45
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x30260a49
- (void)incrementPerformanceCount;	// 0x30260a21
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x30260a25
- (BOOL)isAvailable;	// 0x30260d31
- (BOOL)isCheckedOut;	// 0x30260df5
- (BOOL)isDisabled;	// 0x30260af9
- (BOOL)isEqual:(id)equal;	// 0x30260d3d
- (BOOL)isExplicit;	// 0x30260ddd
- (BOOL)isHD;	// 0x30260ac9
- (BOOL)isInappropriate;	// 0x30260ce1
- (BOOL)isLocal;	// 0x30260cf1
- (BOOL)isPlaying;	// 0x30260e21
- (BOOL)isPlayingOrPaused;	// 0x30260f5d
- (BOOL)isProtectedContent;	// 0x30260afd
- (BOOL)isValid;	// 0x30260965
- (BOOL)isWidescreen;	// 0x30260ad1
- (id)keywords;	// 0x30260cd5
// converted property getter: - (id)lastPlayed;	// 0x30260b5d
- (void)logDescription;	// 0x30260cb1
- (id)mediaCollections;	// 0x30260ab5
- (id)mediaDescription;	// 0x302609bd
- (id)mediaFlavor;	// 0x30260acd
- (id)mediaObjectID;	// 0x30260969
- (id)mediaSummary;	// 0x302609b9
- (id)mediaType;	// 0x30260a69
- (id)mediaURL;	// 0x30260a35
- (id)merchant;	// 0x30260ae5
- (long)parentalControlRatingRank;	// 0x30260dd5
- (long)parentalControlRatingSystemID;	// 0x30260dd1
- (void)performSelector:(SEL)selector target:(id)target;	// 0x30260df9
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x30260e0d
- (long)performanceCount;	// 0x302609c9
- (int)physicalMediaID;	// 0x30260a95
- (BOOL)playable;	// 0x30260de1
- (id)playbackMetadata;	// 0x30260de5
- (id)playbackRightsOwner;	// 0x30260b05
- (void)preparePlaybackContext;	// 0x30260dc9
- (id)previewURL;	// 0x30260a39
- (id)primaryCollection;	// 0x30260bc5
- (int)primaryCollectionOrder;	// 0x30260a8d
- (id)primaryCollectionTitle;	// 0x30260bcd
- (id)primaryCollectionTitleForSorting;	// 0x30260bf5
- (id)primaryGenre;	// 0x30260a6d
- (id)producers;	// 0x30260a05
- (id)provider;	// 0x30260951
- (id)publisher;	// 0x30260ae9
- (id)rating;	// 0x30260ac5
- (id)resolution;	// 0x30260cb5
- (unsigned)season;	// 0x30260aad
- (id)seriesName;	// 0x30260a9d
- (id)seriesNameForSorting;	// 0x30260aa1
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x30260b21
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x30260b09
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x30260a31
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x30260b61
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x30260de9
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x30260ac1
- (void)skip;	// 0x30260d35
- (id)sourceID;	// 0x30260df1
- (float)starRating;	// 0x30260add
- (id)startDate;	// 0x30260b99
- (unsigned)startTimeInMS;	// 0x30260b95
- (unsigned)startTimeInSeconds;	// 0x30260b65
- (unsigned)stopTimeInMS;	// 0x30260bc1
- (unsigned)stopTimeInSeconds;	// 0x30260b9d
- (id)title;	// 0x30260981
- (id)titleForSorting;	// 0x302609a9
- (id)trickPlayConfig;	// 0x30260a41
- (id)trickPlayURL;	// 0x30260a3d
// converted property getter: - (float)userStarRating;	// 0x30260ab9
- (id)viewCount;	// 0x30260cd9
- (void)willBeDeleted;	// 0x30260d39
- (void)willBeginPlayback;	// 0x30260a29
@end

