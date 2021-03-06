/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface BRDownloadManager : NSObject {
@private
	NSMutableArray *_downloads;	// 4 = 0x4
	NSMutableArray *_playableNotifications;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *downloads;	// G=0x3292c1c1; converted property
+ (id)allDownloads;	// 0x3292ca65
+ (id)displayStringForDownloadEstimatedTimeUntilPlayableForItem:(id)item;	// 0x329cd689
+ (id)displayStringForDownloadState:(int)downloadState context:(int)context;	// 0x3292c981
+ (id)displayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x3292c85d
+ (id)downloadManagerForMediaType:(id)mediaType;	// 0x32919d29
+ (id)downloadTestManager;	// 0x329cd2a1
+ (BOOL)downloadsInProgress;	// 0x329cd249
+ (void)initialize;	// 0x32918255
+ (void)registerDownloadManager:(id)manager forMediaType:(id)mediaType;	// 0x32919c51
+ (void)registerDownloadTestManager:(id)manager;	// 0x329cd34d
+ (void)removeDownloadManagerForMediaType:(id)mediaType;	// 0x329cd3fd
+ (id)shortDisplayStringForDownloadState:(int)downloadState;	// 0x329cd4bd
+ (id)shortDisplayStringForDownloadStateWithPercentageForItem:(id)item;	// 0x329cd579
- (id)init;	// 0x329182a9
- (void)_assetPlayable:(id)playable;	// 0x3292ccf1
- (void)addDownload:(id)download;	// 0x3292c079
- (void)cancelNetworkSpeedTest;	// 0x329cd1ad
- (void)dealloc;	// 0x329cd1c5
- (void)deleteDownloadFromITunesQueue:(id)itunesQueue removeFromDisk:(BOOL)disk;	// 0x329cd1b1
// converted property getter: - (id)downloads;	// 0x3292c1c1
- (BOOL)networkDiagnosticsAvailable;	// 0x329cd1a5
- (void)prioritizeDownload:(id)download;	// 0x3292c275
- (void)removeDownload:(id)download;	// 0x3293cd65
- (void)startNetworkSpeedTestWithUserInput:(id)userInput;	// 0x329cd1a9
@end

