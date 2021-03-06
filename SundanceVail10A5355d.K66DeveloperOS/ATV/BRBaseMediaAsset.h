/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRMediaAsset.h"

@protocol BRMediaProvider;

__attribute__((visibility("hidden")))
@interface BRBaseMediaAsset : XXUnknownSuperclass <BRMediaAsset> {
	id<BRMediaProvider> _provider;	// 4 = 0x4
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x280865; S=0x28082d; converted property
@property(assign) unsigned bookmarkTimeInSeconds;	// G=0x280831; S=0x280815; converted property
@property(assign) BOOL hasBeenPlayed;	// G=0x280735; S=0x280739; converted property
@property(retain) id lastPlayed;	// G=0x280869; S=0x28086d; converted property
@property(assign) float userStarRating;	// G=0x2807c5; S=0x2807cd; converted property
- (id)initWithMediaProvider:(id)mediaProvider;	// 0x2805bd
- (BOOL)alwaysRequiresAuthorization;	// 0x280ae9
- (id)artist;	// 0x280685
- (id)artistCollection;	// 0x2808d5
- (id)artistForSorting;	// 0x280689
- (id)assetID;	// 0x28066d
- (id)authorName;	// 0x2809dd
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x280865
// converted property getter: - (unsigned)bookmarkTimeInSeconds;	// 0x280831
- (id)broadcaster;	// 0x2807b1
- (BOOL)canBePlayedInShuffle;	// 0x2809f9
- (id)cast;	// 0x2806d9
- (id)category;	// 0x2809e9
- (void)cleanUpPlaybackContext;	// 0x280add
- (BOOL)closedCaptioned;	// 0x2807e1
- (id)collections;	// 0x280929
- (id)composer;	// 0x2807f9
- (id)composerForSorting;	// 0x2807fd
- (id)copyright;	// 0x2806cd
- (void *)createMovieWithProperties:(void *)properties count:(long)count;	// 0x280afd
- (id)dateAcquired;	// 0x280769
- (id)dateAcquiredString;	// 0x280945
- (id)dateCreated;	// 0x28076d
- (id)dateCreatedString;	// 0x28096d
- (id)datePublished;	// 0x280771
- (id)datePublishedString;	// 0x280995
- (void)dealloc;	// 0x280611
- (id)directors;	// 0x2806f5
- (BOOL)dolbyDigital;	// 0x2807e5
- (long)duration;	// 0x2806d1
- (unsigned)episode;	// 0x2807bd
- (id)episodeNumber;	// 0x2807b5
- (BOOL)forceHDCPProtection;	// 0x28080d
- (id)genres;	// 0x28077d
- (int)grFormat;	// 0x2809f1
// converted property getter: - (BOOL)hasBeenPlayed;	// 0x280735
- (BOOL)hasCoverArt;	// 0x280765
- (BOOL)hasVideoContent;	// 0x280801
- (unsigned)hash;	// 0x280ab1
- (id)imageProxy;	// 0x280751
- (id)imageProxyWithBookMarkTimeInMS:(unsigned)ms;	// 0x280755
- (void)incrementPerformanceOrSkipCount:(unsigned)count;	// 0x28072d
- (BOOL)isAvailable;	// 0x280a3d
- (BOOL)isCheckedOut;	// 0x280b05
- (BOOL)isDisabled;	// 0x280805
- (BOOL)isEqual:(id)equal;	// 0x280a49
- (BOOL)isExplicit;	// 0x280aed
- (BOOL)isHD;	// 0x2807d5
- (BOOL)isInappropriate;	// 0x2809ed
- (BOOL)isLocal;	// 0x2809fd
- (BOOL)isPlaying;	// 0x280b31
- (BOOL)isPlayingOrPaused;	// 0x280c6d
- (BOOL)isProtectedContent;	// 0x280809
- (BOOL)isValid;	// 0x280671
- (BOOL)isWidescreen;	// 0x2807dd
- (id)keywords;	// 0x2809e1
// converted property getter: - (id)lastPlayed;	// 0x280869
- (void)logDescription;	// 0x2809bd
- (id)mediaCollections;	// 0x2807c1
- (id)mediaDescription;	// 0x2806c9
- (id)mediaFlavor;	// 0x2807d9
- (id)mediaObjectID;	// 0x280675
- (id)mediaSummary;	// 0x2806c5
- (id)mediaType;	// 0x280775
- (id)mediaURL;	// 0x28073d
- (id)merchant;	// 0x2807f1
- (long)parentalControlRatingRank;	// 0x280ae5
- (long)parentalControlRatingSystemID;	// 0x280ae1
- (void)performSelector:(SEL)selector target:(id)target;	// 0x280b09
- (void)performSelector:(SEL)selector target:(id)target withObject:(id)object;	// 0x280b1d
- (long)performanceCount;	// 0x2806d5
- (int)physicalMediaID;	// 0x2807a1
- (BOOL)playable;	// 0x280af1
- (id)playbackMetadata;	// 0x280af5
- (id)playbackRightsOwner;	// 0x280811
- (void)preparePlaybackContext;	// 0x280ad9
- (id)previewURL;	// 0x280741
- (id)primaryCollection;	// 0x2808d1
- (int)primaryCollectionOrder;	// 0x280799
- (id)primaryCollectionTitle;	// 0x2808d9
- (id)primaryCollectionTitleForSorting;	// 0x280901
- (id)primaryGenre;	// 0x280779
- (id)producers;	// 0x280711
- (id)provider;	// 0x28065d
- (id)publisher;	// 0x2807f5
- (id)rating;	// 0x2807d1
- (id)resolution;	// 0x2809c1
- (unsigned)season;	// 0x2807b9
- (id)secondScreenURL;	// 0x280745
- (id)seriesName;	// 0x2807a9
- (id)seriesNameForSorting;	// 0x2807ad
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x28082d
// converted property setter: - (void)setBookmarkTimeInSeconds:(unsigned)seconds;	// 0x280815
// converted property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x280739
// converted property setter: - (void)setLastPlayed:(id)played;	// 0x28086d
- (void)setPlaybackMetadataValue:(id)value forKey:(id)key;	// 0x280af9
// converted property setter: - (void)setUserStarRating:(float)rating;	// 0x2807cd
- (void)skip;	// 0x280a41
- (id)sourceID;	// 0x280b01
- (float)starRating;	// 0x2807e9
- (id)startDate;	// 0x2808a5
- (unsigned)startTimeInMS;	// 0x2808a1
- (unsigned)startTimeInSeconds;	// 0x280871
- (unsigned)stopTimeInMS;	// 0x2808cd
- (unsigned)stopTimeInSeconds;	// 0x2808a9
- (id)title;	// 0x28068d
- (id)titleForSorting;	// 0x2806b5
- (id)trickPlayConfig;	// 0x28074d
- (id)trickPlayURL;	// 0x280749
// converted property getter: - (float)userStarRating;	// 0x2807c5
- (id)viewCount;	// 0x2809e5
- (void)willBeDeleted;	// 0x280a45
- (void)willBeginPlayback;	// 0x280731
@end

