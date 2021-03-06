/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "NSURLDownloadDelegate.h"

@class NSMutableArray, NSTimer, NSURLDownload;

@interface ATVRetailDemoModeManager : BRSingleton <NSURLDownloadDelegate> {
@private
	NSTimer *_retailPlaybackLimitTimer;	// 4 = 0x4
	BOOL _hasStartedPlaying;	// 8 = 0x8
	NSURLDownload *_retailMovieDownload;	// 12 = 0xc
	NSMutableArray *_topPodcastsFavCandidates;	// 16 = 0x10
	NSMutableArray *_topShowsFavCandidates;	// 20 = 0x14
	BOOL _retryOccurred;	// 24 = 0x18
}
+ (void)checkAndStart;	// 0x34130bb9
+ (id)retailDemoCacheDir;	// 0x34130d85
+ (BOOL)retailDemoMovieDownloadComplete;	// 0x34130e15
+ (id)retailDemoMoviePath;	// 0x34130dd5
+ (void)setSingleton:(id)singleton;	// 0x34130ba9
+ (id)singleton;	// 0x34130b99
- (id)init;	// 0x34130c21
- (void)_downloadRetailDemoMovie;	// 0x341320e5
- (void)_fetchNextPodcastFav;	// 0x341327c9
- (void)_fetchNextTVShowFav;	// 0x34132ec5
- (void)_nowPlayingStateChanged:(id)changed;	// 0x34131e61
- (void)_podcastReady:(id)ready;	// 0x34132961
- (void)_resetRetailSettings;	// 0x34131a99
- (id)_retailDemoMovieURL;	// 0x3413227d
- (void)_retailPlaybackLimitTimerFired:(id)fired;	// 0x34132089
- (void)_retryMovieDownloadLater;	// 0x341323b1
- (BOOL)_shouldLimitPlaybackForAsset:(id)asset;	// 0x34131f45
- (void)_startPlaybackLimitTimer;	// 0x34131fb9
- (void)_topPodcastsReady:(id)ready;	// 0x34132625
- (void)_topTVShowsReady:(id)ready;	// 0x34132d21
- (void)_tvShowReady:(id)ready;	// 0x341331f9
- (void)_updatePodcastFavorites;	// 0x341323fd
- (void)_updateTVShowFavorites;	// 0x34132af9
- (void)dealloc;	// 0x34130d29
- (void)download:(id)download didFailWithError:(id)error;	// 0x341333bd
- (void)downloadDidFinish:(id)download;	// 0x34133409
- (void)performRetailReset;	// 0x34130e99
- (void)updateRetailFavorites;	// 0x34131a69
@end

