/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVInternetPhotosMonitor.h"

@class BRBackgroundTask;

@interface ATVDotMacMonitor : ATVInternetPhotosMonitor {
@private
	BRBackgroundTask *_backgroundTask;	// 32 = 0x20
}
@property(readonly, retain) BRBackgroundTask *backgroundTask;	// G=0x32f41f29; converted property
+ (void)initialize;	// 0x32f4142d
+ (void)setSingleton:(id)singleton;	// 0x32f4141d
+ (id)singleton;	// 0x32f4140d
- (id)init;	// 0x32f4149d
- (void)_addCollectionForTemporaryDataMonitoring:(id)temporaryDataMonitoring;	// 0x32f451b9
- (id)_authenticationsForAccountWithName:(id)name;	// 0x32f44e75
- (void)_collectionLoadFailure:(id)failure newCollectionInfo:(id)info status:(int)status;	// 0x32f43e09
- (id)_dataForRelativePath:(id)relativePath forAccountWithName:(id)name secondaryAccount:(id)account;	// 0x32f44369
- (BOOL)_isAccountRegisteredForDataMonitoring:(id)dataMonitoring;	// 0x32f45101
- (void)_performAccountIconImageLoad:(id)load;	// 0x32f43f61
- (void)_performAccountLoad:(id)load;	// 0x32f421ed
- (void)_performAccountMediaLoad:(id)load;	// 0x32f42381
- (void)_performAssetCoverArtImageLoad:(id)load;	// 0x32f43f21
- (void)_performAssetFullSizeImageLoad:(id)load;	// 0x32f43f41
- (void)_performAssetImageLoad:(id)load sizeKey:(id)key;	// 0x32f44035
- (void)_performAssetThumbnailImageLoad:(id)load;	// 0x32f43f01
- (void)_performAuthenticateCollection:(id)collection;	// 0x32f41f39
- (void)_performCollectionAssetsLoad:(id)load;	// 0x32f42cb1
- (void)_performCollectionAssetsLoadForPhotoCollection:(id)photoCollection;	// 0x32f42d65
- (void)_performCollectionAssetsLoadForVideoCollection:(id)videoCollection;	// 0x32f4366d
- (id)_queryParamsForPath:(id)path;	// 0x32f44ee9
- (void)_saveAuthenticationForAccountWithName:(id)name secondaryAccount:(id)account;	// 0x32f4500d
- (id)_transactionForAccountWithName:(id)name path:(id)path depth:(int)depth secondaryAccount:(id)account;	// 0x32f44b4d
- (int)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate;	// 0x32f44aed
- (id)_xmlDataForRelativePath:(id)relativePath withDepth:(int)depth forAccountWithName:(id)name withParserDelegate:(id)parserDelegate secondaryAccount:(id)account requiresAuthentication:(BOOL)authentication;	// 0x32f44695
- (void)authenticateCollection:(id)collection withUserName:(id)userName password:(id)password;	// 0x32f41631
// converted property getter: - (id)backgroundTask;	// 0x32f41f29
- (void)cancelAuthenticateForCollection:(id)collection;	// 0x32f41a69
- (void)cancelLoadAccountIconForAccount:(id)account;	// 0x32f41ea9
- (void)cancelLoadAccountWithName:(id)name;	// 0x32f41ad9
- (void)cancelLoadAssetsForCollection:(id)collection;	// 0x32f41c45
- (void)cancelLoadCoverArtImageForAsset:(id)asset;	// 0x32f41dc9
- (void)cancelLoadFullSizeImageForAsset:(id)asset;	// 0x32f41e39
- (void)cancelLoadMediaForAccount:(id)account;	// 0x32f41b35
- (void)cancelLoadThumbnailImageForAsset:(id)asset;	// 0x32f41d59
- (void)dealloc;	// 0x32f4152d
- (void)loadAccountIconForAccount:(id)account;	// 0x32f419ed
- (void)loadAccountWithName:(id)name;	// 0x32f4170d
- (void)loadAssetsForCollection:(id)collection;	// 0x32f417f1
- (void)loadCoverArtImageForAsset:(id)asset;	// 0x32f418f5
- (void)loadFullSizeImageForAsset:(id)asset;	// 0x32f41971
- (void)loadMediaForAccount:(id)account;	// 0x32f41775
- (void)loadThumbnailImageForAsset:(id)asset;	// 0x32f41879
- (void)removeAccountWithName:(id)name;	// 0x32f415b9
- (id)taskContext;	// 0x32f41f19
@end

