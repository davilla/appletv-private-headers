/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "LTTrickPlayAsset.h"
#import "AppleTV-Structs.h"

@class NSArray, NSString, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface LTImageTrickPlayAsset : LTTrickPlayAsset {
	NSArray *_frames;	// 12 = 0xc
	double _frameTimeDifferenceInSeconds;	// 16 = 0x10
	NSString *_frameFileNameFormat;	// 24 = 0x18
	float _frameCountMultipler;	// 28 = 0x1c
	BOOL _isEncrypted;	// 32 = 0x20
	BOOL _isReady;	// 33 = 0x21
	int _preloadedFilesOnEitherEnd;	// 36 = 0x24
	NSMutableIndexSet *_mutableActiveRequestsIndexSet;	// 40 = 0x28
	opaque_pthread_mutex_t _activeImageRequestMutex;	// 44 = 0x2c
}
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x540f5; converted property
@property(readonly, assign) BOOL isReady;	// G=0x53791; converted property
- (id)initWithAsset:(id)asset;	// 0x53569
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x53591
- (void).cxx_destruct;	// 0x5410d
- (id)URLForTime:(double)time;	// 0x53869
- (id)URLsForTime:(double)time;	// 0x538ed
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x53941
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x5396d
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x5391d
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x54155
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x54989
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x549ad
- (void)_setTrackConfig:(id)config;	// 0x54479
- (void)_trackConfigFileReady:(id)ready;	// 0x542d9
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x53ad5
- (void)dealloc;	// 0x534cd
- (id)firstImageFromURLs:(id)urls;	// 0x53d4d
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x540f5
- (id)imageForTime:(double)time;	// 0x53c7d
- (id)imageForTime:(double)time direction:(int)direction;	// 0x53cc5
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x53cf5
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x53ca1
- (unsigned)indexForTime:(double)time;	// 0x537a1
// converted property getter: - (BOOL)isReady;	// 0x53791
@end

