/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaObject.h"


@protocol BRMediaAsset <BRMediaObject>
@property(assign) unsigned bookmarkTimeInMS;	// converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// converted property
@property(assign) BOOL hasBeenPlayed;	// converted property
@property(retain) id lastPlayed;	// converted property
@property(assign) float userStarRating;	// converted property
- (id)artist;
- (id)artistCollection;
- (id)artistForSorting;
- (id)assetID;
- (id)authorName;
// converted property getter: - (unsigned)bookmarkTimeInMS;
// converted property getter: - (unsigned)bookmarkTimeInSeconds;
- (id)broadcaster;
- (BOOL)canBePlayedInShuffle;
- (id)cast;
- (id)category;
- (void)cleanUpPlaybackContext;
- (BOOL)closedCaptioned;
- (id)collections;
- (id)composer;
- (id)composerForSorting;
- (id)copyright;
- (void *)createMovieWithProperties:(void *)properties count:(long)count;
- (id)dateAcquired;
- (id)dateAcquiredString;
- (id)dateCreated;
- (id)dateCreatedString;
- (id)datePublished;
- (id)datePublishedString;
- (id)directors;
- (BOOL)dolbyDigital;
- (long)duration;
- (unsigned)episode;
- (id)episodeNumber;
- (BOOL)forceHDCPProtection;
- (id)genres;
- (int)grFormat;
// converted property getter: - (BOOL)hasBeenPlayed;
- (BOOL)hasCoverArt;
- (BOOL)hasVideoContent;
- (id)imageProxy;
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;
- (void)incrementPerformanceCount;
- (void)incrementPerformanceOrSkipCount:(unsigned)count;
@optional
- (id)infoOverlay;
- (id)infoOverlayDescriptionAttributes;
@required
- (BOOL)isAvailable;
- (BOOL)isCheckedOut;
- (BOOL)isDisabled;
- (BOOL)isExplicit;
- (BOOL)isHD;
- (BOOL)isInappropriate;
- (BOOL)isLocal;
- (BOOL)isPlaying;
- (BOOL)isPlayingOrPaused;
- (BOOL)isProtectedContent;
- (BOOL)isWidescreen;
- (id)keywords;
// converted property getter: - (id)lastPlayed;
- (id)mediaDescription;
- (id)mediaSummary;
- (id)mediaType;
- (id)mediaURL;
@optional
- (id)merchant;
- (id)networkBugImageProxy;
@required
- (long)parentalControlRatingRank;
- (long)parentalControlRatingSystemID;
- (long)performanceCount;
- (int)physicalMediaID;
- (BOOL)playable;
- (id)playbackMetadata;
- (id)playbackRightsOwner;
- (void)preparePlaybackContext;
- (id)previewURL;
- (id)primaryCollection;
- (int)primaryCollectionOrder;
- (id)primaryCollectionTitle;
- (id)primaryCollectionTitleForSorting;
- (id)primaryGenre;
- (id)producers;
- (id)provider;
- (id)publisher;
- (id)rating;
- (id)resolution;
- (unsigned)season;
- (id)seriesName;
- (id)seriesNameForSorting;
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;
// converted property setter: - (void)setLastPlayed:(id)played;
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;
// converted property setter: - (void)setUserStarRating:(float)rating;
- (void)skip;
- (id)sourceID;
- (float)starRating;
- (id)startDate;
- (unsigned)startTimeInMS;
- (unsigned)startTimeInSeconds;
- (unsigned)stopTimeInMS;
- (unsigned)stopTimeInSeconds;
- (id)title;
- (id)titleForSorting;
- (id)trickPlayURL;
// converted property getter: - (float)userStarRating;
- (id)viewCount;
- (void)willBeDeleted;
- (void)willBeginPlayback;
@end

