/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

#import <NSObject.h> // Unknown library
#import "MPAssetKeyDelegate.h"
#import "MediaControl-Structs.h"

@class NSLock, CALayer, MPDocument, MRMarimbaLayer, NSDictionary, NSMutableDictionary, MediaControlServer;

@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate> {
	NSLock *_lock;	// 4 = 0x4
	MediaControlServer *_server;	// 8 = 0x8
	CALayer *_presentationLayer;	// 12 = 0xc
	MPDocument *_marimbaDocument;	// 16 = 0x10
	MRMarimbaLayer *_marimbaLayer;	// 20 = 0x14
	unsigned char _sessionUUID[16];	// 24 = 0x18
	NSDictionary *_settings;	// 40 = 0x28
	int _state;	// 44 = 0x2c
	NSMutableDictionary *_assets;	// 48 = 0x30
	unsigned _nextAssetIndex;	// 52 = 0x34
	BOOL _hasMoreAssets;	// 56 = 0x38
	int _outstandingCount;	// 60 = 0x3c
	double _startTime;	// 64 = 0x40
	double _lastRemoveTime;	// 72 = 0x48
}
+ (id)slideshowFeatures;	// 0x300527d9
- (id)initWithServer:(id)server;	// 0x30052fb5
- (id)_assetForAssetKey:(id)assetKey;	// 0x30054eb9
- (unsigned)_bufferedAssetCount;	// 0x30054ddd
- (id)_copyImageForAssetKey:(id)assetKey decode:(BOOL)decode;	// 0x300524e1
- (unsigned)_freeAssetCount;	// 0x300524c9
- (id)_oldestAsset;	// 0x30054c61
- (void)_playbackConsumedAssetKey:(id)key;	// 0x3005257d
- (void)_playbackEnded:(id)ended;	// 0x30053155
- (void)_playbackPrefetch;	// 0x3005363d
- (void)_playbackPrefetchDone;	// 0x30053ca5
- (void)_playbackProducedAssetData:(id)data withAssetInfo:(id)assetInfo;	// 0x300531a9
- (void)_playbackRunStateMachine;	// 0x30052679
- (void)_playbackStart;	// 0x300541e5
- (void)_playbackStop;	// 0x30053fc9
- (void)_playbackUserNext:(id)next;	// 0x300522ed
- (void)_playbackUserPlayPause:(id)pause;	// 0x300523bd
- (void)_playbackUserPrevious:(id)previous;	// 0x300522cd
- (void)_playbackUserStop:(id)stop;	// 0x3005230d
- (void)_postProgressEvent:(id)event;	// 0x300523dd
- (void)_setSlideDuration;	// 0x30054a7d
- (void)_setTransition;	// 0x30054871
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x300539f1
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x30053971
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x300538f1
- (void)dealloc;	// 0x30052ee5
- (id)imageDataForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x30053a41
- (CGSize)resolutionForAssetKey:(id)assetKey;	// 0x30053bd9
- (void)setPresentationLayer:(id)layer;	// 0x30052ead
- (id)slideshowInfo;	// 0x3005277d
- (id)startSlideshowWithInfo:(id)info error:(id *)error;	// 0x30053049
- (id)stopSlideshowWithInfo:(id)info error:(id *)error;	// 0x30052749
@end

