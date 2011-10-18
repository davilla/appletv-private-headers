/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRRSSMediaAsset.h"

@class ATVMusicStoreShowInfo, NSDictionary;

@interface ATVMusicStorePodcastAsset : BRRSSMediaAsset {
@private
	NSDictionary *_feedInfo;	// 16 = 0x10
	ATVMusicStoreShowInfo *_showInfo;	// 20 = 0x14
}
@property(assign) unsigned bookmarkTimeInMS;	// G=0x340e66f1; S=0x340e66c5; converted property
@property(retain) NSDictionary *feedInfo;	// G=0x340e5f15; S=0x340e5ed5; converted property
- (id)initWithFeedInfo:(id)feedInfo;	// 0x340e5db9
- (id)_podcastID;	// 0x340e68a5
- (id)_showInfo;	// 0x340e6901
- (id)artist;	// 0x340e64bd
- (id)assetID;	// 0x340e5f25
// converted property getter: - (unsigned)bookmarkTimeInMS;	// 0x340e66f1
- (id)cast;	// 0x340e6059
- (id)copyright;	// 0x340e6555
- (id)coverArtID;	// 0x340e6225
- (id)dateAcquired;	// 0x340e62dd
- (id)datePublished;	// 0x340e62a5
- (id)datePublishedString;	// 0x340e6495
- (void)dealloc;	// 0x340e5e75
- (id)description;	// 0x340e65a1
- (id)directors;	// 0x340e60d9
- (long)duration;	// 0x340e5fdd
// converted property getter: - (id)feedInfo;	// 0x340e5f15
- (id)genres;	// 0x340e63ed
- (BOOL)hasCoverArt;	// 0x340e61f5
- (BOOL)hasVideoContent;	// 0x340e6415
- (void)incrementPerformanceCount;	// 0x340e6659
- (BOOL)isExplicit;	// 0x340e65c9
- (id)mediaDescription;	// 0x340e5fa5
- (id)mediaSummary;	// 0x340e6545
- (id)mediaType;	// 0x340e62ed
- (id)mediaURL;	// 0x340e6111
- (long)performanceCount;	// 0x340e6631
- (id)previewURL;	// 0x340e6179
- (id)primaryCollectionTitle;	// 0x340e6501
- (id)primaryGenre;	// 0x340e6341
- (id)primaryGenreAsString;	// 0x340e6309
- (id)producers;	// 0x340e60f5
- (id)publisher;	// 0x340e659d
- (id)rating;	// 0x340e6411
// converted property setter: - (void)setBookmarkTimeInMS:(unsigned)ms;	// 0x340e66c5
// converted property setter: - (void)setFeedInfo:(id)info;	// 0x340e5ed5
- (void)setHasBeenPlayed:(BOOL)played;	// 0x340e6699
- (id)thumbnailArtID;	// 0x340e6295
- (id)thumbnailURL;	// 0x340e658d
- (id)title;	// 0x340e5f6d
- (float)userStarRating;	// 0x340e6409
- (void)willBeginPlayback;	// 0x340e6719
@end

