/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRInvalidatable.h"

@class BRAsyncTaskContext, NSMutableArray;
@protocol BRProvider;

__attribute__((visibility("hidden")))
@interface BRImageLoader : XXUnknownSuperclass <BRInvalidatable> {
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
@property(assign) int fillStrategy;	// G=0x373fb5; S=0x373e35; converted property
@property(assign) long queueSize;	// G=0x3740f5; S=0x373fc5; converted property
@property(assign) BOOL randomize;	// G=0x3743c9; S=0x3743b9; converted property
@property(assign) long segmentCount;	// G=0x373c29; S=0x373bd9; converted property
- (id)init;	// 0x373975
- (void)_abandonArtwork:(id)artwork;	// 0x375771
- (void)_abandonPendingImageProxyForImageWithID:(id)anId;	// 0x3751d9
- (void)_enqueueImage:(id)image;	// 0x374805
- (BOOL)_isQueuePrimed;	// 0x374abd
- (id)_pendingImageDictionaryForImageID:(id)imageID;	// 0x375449
- (void)_prepareImageForQueue:(id)queue withID:(id)anId imageProxy:(id)proxy;	// 0x374611
- (void)_primeQueue;	// 0x374be5
- (void)_promoteCandidateImageProxy:(id)proxy toPendingImageProxyForImageWithID:(id)anId;	// 0x375031
- (void)_providerUpdated:(id)updated;	// 0x375869
- (id)_pullNextImageProxy;	// 0x374d8d
- (id)_pullNextImageProxyRandomly;	// 0x374ee1
- (void)_setupForNewProvider;	// 0x3758bd
- (void)_updateArtwork:(id)artwork;	// 0x375599
- (void)dealloc;	// 0x373b11
// converted property getter: - (int)fillStrategy;	// 0x373fb5
- (id)finalFormForImage:(id)image;	// 0x3743f9
- (void)flushQueue;	// 0x374139
- (long)imageCount;	// 0x3743d9
- (void)invalidate;	// 0x3745c9
- (BOOL)isImageFinalForm:(id)form;	// 0x3743fd
- (id)nextImage;	// 0x374401
- (BOOL)queueReady;	// 0x3742d5
// converted property getter: - (long)queueSize;	// 0x3740f5
// converted property getter: - (BOOL)randomize;	// 0x3743c9
// converted property getter: - (long)segmentCount;	// 0x373c29
// converted property setter: - (void)setFillStrategy:(int)strategy;	// 0x373e35
- (void)setImageProxies:(id)proxies;	// 0x373c39
- (void)setProvider:(id)provider;	// 0x373c75
// converted property setter: - (void)setQueueSize:(long)size;	// 0x373fc5
// converted property setter: - (void)setRandomize:(BOOL)randomize;	// 0x3743b9
- (void)setSaveQueueOnFlush:(BOOL)flush;	// 0x374105
// converted property setter: - (void)setSegmentCount:(long)count;	// 0x373bd9
@end

