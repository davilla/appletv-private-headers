/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOTileCache : NSObject {
	mutex _lock;	// 4 = 0x4
	list<CacheItem, std::__1::allocator<CacheItem> > _list;	// 48 = 0x30
	unordered_map<_GEOTileKey, std::__1::__list_iterator<CacheItem, void *>, hashkey, eqkey, std::__1::allocator<std::__1::pair<const _GEOTileKey, std::__1::__list_iterator<CacheItem, void *>>> > _map;	// 60 = 0x3c
	unsigned _maxCapacity;	// 80 = 0x50
	unsigned _maxCost;	// 84 = 0x54
	unsigned _currentCost;	// 88 = 0x58
	unsigned _currentCount;	// 92 = 0x5c
}
@property(assign) unsigned maxCapacity;	// G=0x34513f79; S=0x34513e75; 
@property(assign) unsigned maxCost;	// G=0x3451402d; S=0x345140e1; 
- (id)init;	// 0x34513829
- (id).cxx_construct;	// 0x34514ec5
- (void).cxx_destruct;	// 0x34514e85
- (id)_description;	// 0x345139f9
- (void)_enteredBackground:(id)background;	// 0x34514e75
- (void)_evictWithMaxCost:(unsigned)maxCost maxCapacity:(unsigned)capacity;	// 0x34513cad
- (void)_receivedMemoryNotification:(id)notification;	// 0x34513d71
- (void)_removeTileForKey:(const GEOTileKey *)key;	// 0x34514555
- (void)dealloc;	// 0x34513961
- (id)description;	// 0x34513bcd
- (void)enumerate:(id)enumerate;	// 0x345149a5
// declared property getter: - (unsigned)maxCapacity;	// 0x34513f79
// declared property getter: - (unsigned)maxCost;	// 0x3451402d
- (void)removeAllObjects;	// 0x3451486d
- (void)removeTileForKey:(const GEOTileKey *)key;	// 0x345145f5
- (void)removeTilesMatchingPredicate:(id)predicate;	// 0x34514c1d
- (void)removeTilesWithKeys:(id)keys;	// 0x345146d5
// declared property setter: - (void)setMaxCapacity:(unsigned)capacity;	// 0x34513e75
// declared property setter: - (void)setMaxCost:(unsigned)cost;	// 0x345140e1
- (void)setNullForKey:(const GEOTileKey *)key;	// 0x34514525
- (void)setTile:(id)tile forKey:(const GEOTileKey *)key cost:(unsigned)cost;	// 0x345142ed
- (id)tileForKey:(const GEOTileKey *)key;	// 0x345141e5
@end

