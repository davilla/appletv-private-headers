/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageRequestDelegate.h"
#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"

@class CPLRUDictionary, NSOperationQueue;
@protocol MPImageCacheDelegate;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
@private
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	dispatch_queue_s *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _retainCount;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x34e6cbf9; S=0x34e6c1bd; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x34e6cc09; S=0x34e6cc19; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x34e6c2ad; S=0x34e6c2d1; 
+ (id)sharedImageCache;	// 0x34e6be2d
- (id)init;	// 0x34e6ba2d
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x34e6c4e9
- (id)_cachedImageForKey:(id)key;	// 0x34e6c615
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x34e6c489
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x34e6c4d9
- (void)_enqueueRequest:(id)request;	// 0x34e6c865
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x34e6bf0d
- (BOOL)_isDeallocating;	// 0x34e6ba01
- (BOOL)_tryRetain;	// 0x34e6b9a5
- (void)_zapCache;	// 0x34e6ca41
- (void)_zapCachedPlaceholders;	// 0x34e6c8f1
// declared property getter: - (unsigned)cacheSize;	// 0x34e6cbf9
- (id)cachedImageForRequest:(id)request;	// 0x34e6bedd
- (void)cancelAllImageRequests;	// 0x34e6c2fd
- (void)dealloc;	// 0x34e6bc65
// declared property getter: - (id)delegate;	// 0x34e6cc09
- (id)imageForRequest:(id)request error:(id *)error;	// 0x34e6c021
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x34e6cacd
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x34e6caf1
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x34e6c31d
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x34e6c3bd
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x34e6c2ad
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x34e6c0f9
- (oneway void)release;	// 0x34e6b8f1
- (id)retain;	// 0x34e6b8b9
- (unsigned)retainCount;	// 0x34e6b991
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x34e6c1bd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34e6cc19
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x34e6c2d1
@end
