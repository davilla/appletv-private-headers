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
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x340bc04d; converted property
+ (void)initialize;	// 0x340bb371
+ (void)setSingleton:(id)singleton;	// 0x340bb361
+ (id)singleton;	// 0x340bb351
- (id)init;	// 0x340bb3e1
- (id)_loadFlickrURL:(id)url;	// 0x340bdb45
- (void)_performAccountIconImageLoad:(id)load;	// 0x340bd815
- (void)_performAccountLoad:(id)load;	// 0x340bc06d
- (void)_performAccountMediaLoad:(id)load;	// 0x340bc225
- (void)_performAccountSubAccountsLoad:(id)load;	// 0x340bce59
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x340bd7d5
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x340bd7f5
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x340bd915
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x340bd671
- (void)_performCollectionAssetsLoad:(id)load;	// 0x340bcff1
- (void)_performSearch:(id)search;	// 0x340bd691
- (id)_savedSearchesFilePath;	// 0x340bdc8d
- (void)addAccount:(id)account;	// 0x340bb5d9
// converted property getter: - (id)backgroundTask;	// 0x340bc04d
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x340bbde1
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x340bbe3d
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x340bbf6d
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x340bbfdd
- (void)cancelLoadMediaForAccount:(id)account;	// 0x340bbcc5
- (void)cancelLoadSubAccountsForAccount:(id)account;	// 0x340bbd85
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x340bbefd
- (void)dealloc;	// 0x340bb4d5
- (void)loadAccountIconForAccount:(id)account;	// 0x340bb79d
- (void)loadAccountWithName:(id)name;	// 0x340bb665
- (void)loadAssetsForCollection:(id)collection;	// 0x340bb805
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x340bb8e9
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x340bb965
- (void)loadMediaForAccount:(id)account;	// 0x340bb6cd
- (void)loadSubAccountsForAccount:(id)account;	// 0x340bb735
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x340bb86d
- (void)removeAccountWithName:(id)name;	// 0x340bb561
- (void)removeSavedSearchTerm:(id)term;	// 0x340bbb25
- (void)saveSearchTerm:(id)term;	// 0x340bba09
- (id)savedSearchTerms;	// 0x340bbc8d
- (void)searchWithSearchTerm:(id)searchTerm;	// 0x340bb9e1
- (id)taskContext;	// 0x340bc05d
@end

