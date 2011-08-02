/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableArray;
@protocol BRControlFactory;

@interface ATVDotMacRecentAlbumsProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_accountsBeingLoaded;	// 4 = 0x4
	NSArray *_mostRecentAlbums;	// 8 = 0x8
	NSMutableArray *_accountProviders;	// 12 = 0xc
	NSMutableArray *_collectionProviders;	// 16 = 0x10
	NSMutableArray *_collectionsBeingLoaded;	// 20 = 0x14
	id<BRControlFactory> _controlFactory;	// 24 = 0x18
	BOOL _queryInProgress;	// 28 = 0x1c
	double _lastQueryTime;	// 32 = 0x20
}
+ (id)cacheFolderPath;	// 0x306ac821
+ (id)mainMenuProvider;	// 0x306ac865
+ (id)standardProvider;	// 0x306ac8a5
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x306ac635
- (void)_accountsInserted:(id)inserted;	// 0x306acbfd
- (void)_accountsRemoved:(id)removed;	// 0x306abf49
- (void)_aggregateRecentAlbums:(id)albums forAccountName:(id)accountName;	// 0x306abb4d
- (void)_collectionImageUpdated:(id)updated;	// 0x306ac195
- (void)_collectionProviderUpdated:(id)updated;	// 0x306ac321
- (void)_loadAccounts;	// 0x306acc81
- (void)_loadCollection:(id)collection;	// 0x306abac5
- (void)_loadRSSFeedWithAccountName:(id)accountName;	// 0x306acd39
- (void)_loadRecentAlbumsFromCache;	// 0x306ac8e5
- (void)_networkChanged:(id)changed;	// 0x306abea1
- (BOOL)_okToFetchNewData;	// 0x306abd65
- (id)_persistentAccountNames;	// 0x306ac131
- (void)_removeRecentCachedAlbumsFromAccount:(id)account;	// 0x306ace65
- (void)_rssFeedRequestReady:(id)ready;	// 0x306ad039
- (void)_saveRecentAlbumsToCache;	// 0x306ab7b5
- (void)_sortCollectionsBeingLoaded;	// 0x306ab919
- (id)controlFactory;	// 0x306ab7a5
- (id)dataAtIndex:(long)index;	// 0x306ac529
- (long)dataCount;	// 0x306ac549
- (void)dealloc;	// 0x306ac569
- (id)hashForDataAtIndex:(long)index;	// 0x306ac4f9
- (void)reload;	// 0x306ac4cd
@end

