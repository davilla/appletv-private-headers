/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRInvalidatable.h"

@class BRAsyncTaskContext, NSMutableArray;
@protocol BRProvider;

@interface BRImageLoader : NSObject <BRInvalidatable> {
@private
	long _queueSize;	// 4 = 0x4
	NSMutableArray *_imageQueue;	// 8 = 0x8
	NSMutableArray *_candidateImages;	// 12 = 0xc
	NSMutableArray *_pendingImages;	// 16 = 0x10
	id<BRProvider> _provider;	// 20 = 0x14
	BOOL _randomize;	// 24 = 0x18
	long _serialIndex;	// 28 = 0x1c
	long _imageArrayIndex;	// 32 = 0x20
	long _segmentCount;	// 36 = 0x24
	int _fillStrategy;	// 40 = 0x28
	long _failedLoadCount;	// 44 = 0x2c
	BRAsyncTaskContext *_taskContext;	// 48 = 0x30
	BOOL _saveQueueOnFlush;	// 52 = 0x34
	NSMutableArray *_savedImageProxyQueue;	// 56 = 0x38
	NSMutableArray *_activeImageProxyQueue;	// 60 = 0x3c
	BOOL _hasBeenInvalidated;	// 64 = 0x40
}
@property(assign) int fillStrategy;	// G=0x303610b1; S=0x30360f35; converted property
@property(assign) long queueSize;	// G=0x303611e1; S=0x303610c1; converted property
@property(assign) BOOL randomize;	// G=0x30361499; S=0x30361489; converted property
@property(assign) long segmentCount;	// G=0x30360d29; S=0x30360cd9; converted property
- (id)init;	// 0x30360a7d
- (void)_abandonArtwork:(id)artwork;	// 0x303627d9
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x30362269
- (void)_enqueueImage:(id)image;	// 0x303618d5
- (BOOL)_isQueuePrimed;	// 0x30361b85
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x303624cd
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x303616dd
- (void)_primeQueue;	// 0x30361ca1
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x303620c9
- (void)_providerUpdated:(id)updated;	// 0x303628bd
- (id)_pullNextImageProxy;	// 0x30361e19
- (id)_pullNextImageProxyRandomly;	// 0x30361f6d
- (void)_setupForNewProvider;	// 0x30362911
- (void)_updateArtwork:(id)artwork;	// 0x30362605
- (void)dealloc;	// 0x30360c15
// converted property getter: - (int)fillStrategy;	// 0x303610b1
- (id)finalFormForImage:(id)image;	// 0x303614c9
- (void)flushQueue;	// 0x30361225
- (long)imageCount;	// 0x303614a9
- (void)invalidate;	// 0x30361695
- (BOOL)isImageFinalForm:(id)form;	// 0x303614cd
- (id)nextImage;	// 0x303614d1
- (BOOL)queueReady;	// 0x303613b5
// converted property getter: - (long)queueSize;	// 0x303611e1
// converted property getter: - (BOOL)randomize;	// 0x30361499
// converted property getter: - (long)segmentCount;	// 0x30360d29
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x30360f35
- (void)setImageProxies:(id)proxies;	// 0x30360d39
- (void)setProvider:(id)provider;	// 0x30360d75
// converted property setter: - (void)setQueueSize:(long)size;	// 0x303610c1
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x30361489
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x303611f1
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x30360cd9
@end

