/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFavorite.h"

@class NSSet, NSString, NSDictionary, NSDate, ATVStoreFavoriteRefreshTask;

@interface ATVStoreFavorite : ATVFavorite {
@private
	int _itemType;	// 16 = 0x10
	NSString *_dsid;	// 20 = 0x14
	NSString *_storeFront;	// 24 = 0x18
	NSString *_artworkURL;	// 28 = 0x1c
	NSString *_thumbnailArtworkURL;	// 32 = 0x20
	NSString *_latestContentURL;	// 36 = 0x24
	NSDictionary *_latestSeason;	// 40 = 0x28
	ATVStoreFavoriteRefreshTask *_refreshTask;	// 44 = 0x2c
	unsigned _userOrder;	// 48 = 0x30
	NSDate *_autoBlueDotStartDate;	// 52 = 0x34
	id _completionHandler;	// 56 = 0x38
	NSSet *_autoBlueDotSeasons;	// 60 = 0x3c
}
@property(readonly, retain) NSSet *autoBlueDotSeasons;	// G=0x306a73b1; converted property
@property(readonly, retain) NSDate *autoBlueDotStartDate;	// G=0x306a73a1; converted property
@property(readonly, retain) NSString *dsid;	// G=0x306a7351; converted property
@property(assign) int itemType;	// G=0x306a73e5; S=0x306a73f5; @synthesize=_itemType
@property(readonly, retain) NSString *storeFront;	// G=0x306a7361; converted property
@property(assign) unsigned userOrder;	// G=0x306a73c1; S=0x306a73d1; 
+ (id)lookupStoreFavoriteFromATVFeedDictionary:(id)atvfeedDictionary initIfNotFound:(BOOL)found;	// 0x306a7ce5
+ (id)lookupStoreFavoriteFromFeed:(id)feed initIfNotFound:(BOOL)found;	// 0x306a7d81
- (id)initWithATVFeedDictionary:(id)atvfeedDictionary;	// 0x306a842d
- (id)initWithCatalogItem:(id)catalogItem;	// 0x306a8639
- (id)initWithDictionary:(id)dictionary;	// 0x306a8219
- (void)_cancelRefreshBackgroundTask;	// 0x306a7405
- (id)_dateOfMostRecentEpisodeWithBlueDot;	// 0x306a8825
- (void)_setupRefreshBackgroundTask;	// 0x306a744d
- (BOOL)_setupWithCatalogItem:(id)catalogItem;	// 0x306a79d9
- (id)artworkURLString;	// 0x306a7371
// converted property getter: - (id)autoBlueDotSeasons;	// 0x306a73b1
// converted property getter: - (id)autoBlueDotStartDate;	// 0x306a73a1
- (void)dealloc;	// 0x306a8131
- (void)didCompleteRefreshStoreDataAttempt;	// 0x306a7935
// converted property getter: - (id)dsid;	// 0x306a7351
- (void)encodeWithDictionary:(id)dictionary;	// 0x306a7f8d
// declared property getter: - (int)itemType;	// 0x306a73e5
- (id)itemsFromLatestSeason;	// 0x306a7909
- (id)latestContentURLString;	// 0x306a7391
- (id)latestSeasonID;	// 0x306a789d
- (void)refreshStoreData:(id)data;	// 0x306a798d
- (void)remove;	// 0x306a7ed1
- (void)save;	// 0x306a7f0d
// declared property setter: - (void)setItemType:(int)type;	// 0x306a73f5
// declared property setter: - (void)setUserOrder:(unsigned)order;	// 0x306a73d1
// converted property getter: - (id)storeFront;	// 0x306a7361
- (id)thumbnailArtworkURLString;	// 0x306a7381
- (void)updateWithPageDictionaryFromLatestSeason:(id)latestSeason;	// 0x306a8895
// declared property getter: - (unsigned)userOrder;	// 0x306a73c1
@end

