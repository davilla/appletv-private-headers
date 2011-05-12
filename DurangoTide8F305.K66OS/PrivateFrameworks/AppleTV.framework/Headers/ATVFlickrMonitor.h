/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVFlickrMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x30734e49; converted property
+ (void)initialize;	// 0x3073684d
+ (void)setSingleton:(id)singleton;	// 0x30734e3d
+ (id)singleton;	// 0x30734e31
- (id)init;	// 0x30736771
- (id)_loadFlickrURL:(id)url;	// 0x307372b1
- (void)_performAccountIconImageLoad:(id)load;	// 0x307350ed
- (void)_performAccountLoad:(id)load;	// 0x30735a19
- (void)_performAccountMediaLoad:(id)load;	// 0x307368ad
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x30735899
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x307351f5
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x307351d5
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x30734eed
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x30735345
- (void)_performCollectionAssetsLoad:(id)load;	// 0x30735365
- (void)_performSearch:(id)search;	// 0x30735215
- (id)_savedSearchesFilePath;	// 0x30734e95
- (void)addAccount:(id)account;	// 0x30736609
// converted property getter: - (id)backgroundTask;	// 0x30734e49
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x30735dd5
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x30735d01
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x30735c21
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x30735bb1
- (void)cancelLoadMediaForAccount:(id)account;	// 0x30735eb5
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x30735e45
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x30735c91
- (void)dealloc;	// 0x307366f1
- (void)loadAccountIconForAccount:(id)account;	// 0x30736429
- (void)loadAccountWithName:(id)name;	// 0x307365a9
- (void)loadAssetsForCollection:(id)collection;	// 0x30736381
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x30736281
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x30736201
- (void)loadMediaForAccount:(id)account;	// 0x30736529
- (void)loadSubAccountsForAccount:(id)account;	// 0x307364a9
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x30736301
- (void)removeAccountWithName:(id)name;	// 0x30736685
- (void)removeSavedSearchTerm:(id)term;	// 0x30735fa5
- (void)saveSearchTerm:(id)term;	// 0x307360e1
- (id)savedSearchTerms;	// 0x30735f71
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x307361d9
- (id)taskContext;	// 0x30734e59
@end

