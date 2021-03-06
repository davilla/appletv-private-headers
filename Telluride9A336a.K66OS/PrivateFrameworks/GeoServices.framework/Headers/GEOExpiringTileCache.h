/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "NSCacheDelegate.h"
#import "GEOTileCache.h"

@class NSRecursiveLock;

@interface GEOExpiringTileCache : GEOTileCache <NSCacheDelegate> {
	NSRecursiveLock *_entryLock;	// 60 = 0x3c
	void *_head;	// 64 = 0x40
	void *_tail;	// 68 = 0x44
}
- (id)init;	// 0x366fe381
- (void)_removeAllEntries;	// 0x366fe3fd
- (void)cache:(id)cache willEvictObject:(id)object;	// 0x366fe505
- (void)dealloc;	// 0x366fe435
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x366fe5d1
- (void)removeAllObjects;	// 0x366fe875
- (void)setDelegate:(id)delegate;	// 0x366fe4ad
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x366fe769
- (id)tileForKey:(const GEOTileKey *)key;	// 0x366fe6f9
@end

