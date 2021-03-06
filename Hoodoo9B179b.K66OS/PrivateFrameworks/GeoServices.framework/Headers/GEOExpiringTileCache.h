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
	NSRecursiveLock *_entryLock;	// 56 = 0x38
	void *_head;	// 60 = 0x3c
	void *_tail;	// 64 = 0x40
}
- (id)init;	// 0x32ce1249
- (void)_removeAllEntries;	// 0x32ce12bd
- (void)dealloc;	// 0x32ce12f5
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x32ce1435
- (void)removeAllObjects;	// 0x32ce173d
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x32ce1631
- (id)tileForKey:(const GEOTileKey *)key;	// 0x32ce15c1
- (void)willEvictObject:(id)object;	// 0x32ce1369
@end

