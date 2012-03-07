/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRMediaAsset.h"
#import <NSObject.h> // Unknown library

@protocol BRMediaProvider;

@interface BRBaseMediaAsset : NSObject <BRMediaAsset> {
@private
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x331d3399; S=0x331d3361; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x331d3365; S=0x331d3349; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x331d3275; S=0x331d3279; converted property
@property(retain) id lastPlayed;	// G=0x331d339d; S=0x331d33a1; converted property
@property(assign) float userStarRating;	// G=0x331d32fd; S=0x331d3305; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x331d30f9
- (BOOL)alwaysRequiresAuthorization;	// 0x331d3619
- (id)artist;	// 0x331d31c1
- (id)artistCollection;	// 0x331d3409
- (id)artistForSorting;	// 0x331d31c5
- (id)assetID;	// 0x331d31a9
- (id)authorName;	// 0x331d3511
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x331d3399
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x331d3365
- (id)broadcaster;	// 0x331d32e9
- (BOOL)canBePlayedInShuffle;	// 0x331d352d
- (id)cast;	// 0x331d3215
- (id)category;	// 0x331d351d
- (void)cleanUpPlaybackContext;	// 0x331d360d
- (BOOL)closedCaptioned;	// 0x331d3315
- (id)collections;	// 0x331d345d
- (id)composer;	// 0x331d332d
- (id)composerForSorting;	// 0x331d3331
- (id)copyright;	// 0x331d3209
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x331d362d
- (id)dateAcquired;	// 0x331d32a1
- (id)dateAcquiredString;	// 0x331d3479
- (id)dateCreated;	// 0x331d32a5
- (id)dateCreatedString;	// 0x331d34a1
- (id)datePublished;	// 0x331d32a9
- (id)datePublishedString;	// 0x331d34c9
- (void)dealloc;	// 0x331d314d
- (id)directors;	// 0x331d3231
- (BOOL)dolbyDigital;	// 0x331d3319
- (long)duration;	// 0x331d320d
- (unsigned)episode;	// 0x331d32f5
- (id)episodeNumber;	// 0x331d32ed
- (BOOL)forceHDCPProtection;	// 0x331d3341
- (id)genres;	// 0x331d32b5
- (int)grFormat;	// 0x331d3525
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x331d3275
- (BOOL)hasCoverArt;	// 0x331d329d
- (BOOL)hasVideoContent;	// 0x331d3335
- (unsigned)hash;	// 0x331d35e1
- (id)imageProxy;	// 0x331d3289
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x331d328d
- (void)incrementPerformanceCount;	// 0x331d3269
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x331d326d
- (BOOL)isAvailable;	// 0x331d3571
- (BOOL)isCheckedOut;	// 0x331d3635
- (BOOL)isDisabled;	// 0x331d3339
- (BOOL)isEqual:(id)equal;	// 0x331d357d
- (BOOL)isExplicit;	// 0x331d361d
- (BOOL)isHD;	// 0x331d330d
- (BOOL)isInappropriate;	// 0x331d3521
- (BOOL)isLocal;	// 0x331d3531
- (BOOL)isPlaying;	// 0x331d3661
- (BOOL)isPlayingOrPaused;	// 0x331d379d
- (BOOL)isProtectedContent;	// 0x331d333d
- (BOOL)isValid;	// 0x331d31ad
- (BOOL)isWidescreen;	// 0x331d3311
- (id)keywords;	// 0x331d3515
// converted property getter: - (id)lastPlayed;	// 0x331d339d
- (void)logDescription;	// 0x331d34f1
- (id)mediaCollections;	// 0x331d32f9
- (id)mediaDescription;	// 0x331d3205
- (id)mediaObjectID;	// 0x331d31b1
- (id)mediaSummary;	// 0x331d3201
- (id)mediaType;	// 0x331d32ad
- (id)mediaURL;	// 0x331d327d
- (id)merchant;	// 0x331d3325
- (long)parentalControlRatingRank;	// 0x331d3615
- (long)parentalControlRatingSystemID;	// 0x331d3611
- (void)performSelector:(SEL)selector target:(id)target;	// 0x331d3639
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x331d364d
- (long)performanceCount;	// 0x331d3211
- (int)physicalMediaID;	// 0x331d32d9
- (BOOL)playable;	// 0x331d3621
- (id)playbackMetadata;	// 0x331d3625
- (id)playbackRightsOwner;	// 0x331d3345
- (void)preparePlaybackContext;	// 0x331d3609
- (id)previewURL;	// 0x331d3281
- (id)primaryCollection;	// 0x331d3405
- (int)primaryCollectionOrder;	// 0x331d32d1
- (id)primaryCollectionTitle;	// 0x331d340d
- (id)primaryCollectionTitleForSorting;	// 0x331d3435
- (id)primaryGenre;	// 0x331d32b1
- (id)producers;	// 0x331d324d
- (id)provider;	// 0x331d3199
- (id)publisher;	// 0x331d3329
- (id)rating;	// 0x331d3309
- (id)resolution;	// 0x331d34f5
- (unsigned)season;	// 0x331d32f1
- (id)seriesName;	// 0x331d32e1
- (id)seriesNameForSorting;	// 0x331d32e5
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x331d3361
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x331d3349
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x331d3279
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x331d33a1
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x331d3629
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x331d3305
- (void)skip;	// 0x331d3575
- (id)sourceID;	// 0x331d3631
- (float)starRating;	// 0x331d331d
- (id)startDate;	// 0x331d33d9
- (unsigned)startTimeInMS;	// 0x331d33d5
- (unsigned)startTimeInSeconds;	// 0x331d33a5
- (unsigned)stopTimeInMS;	// 0x331d3401
- (unsigned)stopTimeInSeconds;	// 0x331d33dd
- (id)title;	// 0x331d31c9
- (id)titleForSorting;	// 0x331d31f1
- (id)trickPlayURL;	// 0x331d3285
// converted property getter: - (float)userStarRating;	// 0x331d32fd
- (id)viewCount;	// 0x331d3519
- (void)willBeDeleted;	// 0x331d3579
- (void)willBeginPlayback;	// 0x331d3271
@end
