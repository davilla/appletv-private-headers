/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLCacheInternal;

@interface NSURLCache : NSObject {
@private
	NSURLCacheInternal *_internal;	// 4 = 0x4
}
@property(assign) unsigned diskCapacity;	// G=0x3100b549; S=0x3100b4e1; converted property
@property(assign) unsigned memoryCapacity;	// G=0x3100b56d; S=0x3100b4b9; converted property
+ (void)_diskCacheSyncLoop:(id)loop;	// 0x310a5d71
+ (void)_performDiskCacheSync;	// 0x310a3d71
+ (void)setSharedURLCache:(id)cache;	// 0x310203e5
+ (id)sharedURLCache;	// 0x3100b21d
- (id)init;	// 0x31020375
- (id)initWithExistingSharedCFURLCache:(CFURLCacheRef)existingSharedCFURLCache;	// 0x310a4a91
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x3100b381
- (CFURLCacheRef)_CFURLCache;	// 0x3100b52d
- (id)_cacheDirectory;	// 0x310203e1
- (XXStruct_K5nmsA)_cacheStatistics;	// 0x310a4239
- (void)_diskCacheClear;	// 0x310a4f79
- (BOOL)_diskCacheCreateDirectory;	// 0x310a3c59
- (void)_diskCacheCreateLRUList:(id)list;	// 0x310a53f5
- (id)_diskCacheDefaultPath;	// 0x31020399
- (void)_diskCacheExecuteRemoval:(id)removal;	// 0x310a5a81
- (void)_diskCacheExecuteWrite:(id)write;	// 0x310a5b41
- (id)_diskCacheGet:(id)get;	// 0x310a5565
- (void)_diskCacheScheduleRemoval:(id)removal;	// 0x310a4df9
- (void)_diskCacheScheduleWrite:(id)write;	// 0x310a4ec1
- (void)_diskCacheSetSyncTimer;	// 0x310a5031
- (void)_diskCacheSync;	// 0x310a5109
- (void)_diskCacheTruncate:(unsigned)truncate;	// 0x310a590d
- (void)_memoryCacheAppendNodeToLRUList:(id)lrulist;	// 0x310a3bc1
- (void)_memoryCacheClear;	// 0x310a3d91
- (id)_memoryCacheGet:(id)get;	// 0x310a4059
- (void)_memoryCachePut:(id)put;	// 0x310a3f45
- (void)_memoryCacheRemove:(id)remove;	// 0x310a3e2d
- (void)_memoryCacheRemoveNodeFromLRUList:(id)lrulist;	// 0x310a3ae5
- (void)_memoryCacheTouchNode:(id)node;	// 0x310a41f1
- (void)_memoryCacheTruncate:(unsigned)truncate;	// 0x310a4109
- (CFCachedURLResponseRef)_nscfBridgeURLCacheCopyResponseForRequest:(CFURLRequestRef)request;	// 0x310a4a1d
- (long)_nscfBridgeURLCacheCurrentDiskUsage;	// 0x310a4281
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;	// 0x310a4295
- (long)_nscfBridgeURLCacheDiskCapacity;	// 0x310a430d
- (long)_nscfBridgeURLCacheMemoryCapacity;	// 0x310a42a9
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;	// 0x310a42bd
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)request;	// 0x310a42d1
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)capacity;	// 0x310a42e5
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)capacity;	// 0x310a42f9
- (void)_nscfBridgeURLCacheStoreCachedResponse:(CFCachedURLResponseRef)response forRequest:(CFURLRequestRef)request;	// 0x31008e5d
- (id)cachedResponseForRequest:(id)request;	// 0x310a4c55
- (unsigned)currentDiskUsage;	// 0x310a4dd5
- (unsigned)currentMemoryUsage;	// 0x310a4db1
- (void)dealloc;	// 0x310a4531
// converted property getter: - (unsigned)diskCapacity;	// 0x3100b549
// converted property getter: - (unsigned)memoryCapacity;	// 0x3100b56d
- (void)removeAllCachedResponses;	// 0x31035b09
- (void)removeCachedResponseForRequest:(id)request;	// 0x310a4d75
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x3100b4e1
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x3100b4b9
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x310a4d15
@end

