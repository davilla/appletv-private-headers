/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"

@class NSMutableArray, GEOExpiringTileCache, NSMapTable, NSLock, GEOTileCache;
@protocol GEOTileServerProxy;

@interface GEOTileLoader : NSObject {
	GEOTileCache *_tiles;	// 4 = 0x4
	GEOExpiringTileCache *_expTiles;	// 8 = 0x8
	NSMapTable *_pendingLoads;	// 12 = 0xc
	NSLock *_pendingLoadsLock;	// 16 = 0x10
	NSMapTable *_pendingNetworkLoads;	// 20 = 0x14
	NSLock *_pendingNetworkLoadsLock;	// 24 = 0x18
	NSMutableArray *_tileDecoders;	// 28 = 0x1c
	id<GEOTileServerProxy> _serverConnection;	// 32 = 0x20
	int _memoryHits;	// 36 = 0x24
	int _diskHits;	// 40 = 0x28
	int _networkHits;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) int diskHits;	// G=0x314394dd; 
@property(readonly, assign, nonatomic) int memoryHits;	// G=0x314394cd; 
@property(readonly, assign, nonatomic) int networkHits;	// G=0x314394ed; 
+ (id)diskCacheLocation;	// 0x314377f9
+ (void)setDiskCacheLocation:(id)location;	// 0x314377b9
+ (id)sharedLoader;	// 0x31437815
+ (void)useLocalLoader;	// 0x314377a9
+ (void)useRemoteLoader;	// 0x31437799
- (id)init;	// 0x31437881
- (void)_asyncDecodeTile:(id)tile forKey:(const GEOTileKey *)key completion:(id)completion;	// 0x31437d0d
- (id)_decodeTile:(id)tile forKey:(const GEOTileKey *)key;	// 0x31437c39
- (void)_loadTilesFromServer:(id)server checkDisk:(BOOL)disk allowNetworking:(BOOL)networking;	// 0x31438619
- (void)_tileEditionChanged:(id)changed;	// 0x314384f5
- (void)cancelAllRequests;	// 0x31438bd1
- (void)cancelRequest:(id)request;	// 0x31438e35
- (void)clearAllCaches;	// 0x31437bfd
- (void)closeDatabase;	// 0x314384b5
- (void)dealloc;	// 0x31437aa5
// declared property getter: - (int)diskHits;	// 0x314394dd
- (id)expireTilesWithType:(unsigned char)type provider:(unsigned short)provider olderThan:(double)than;	// 0x314393f9
- (id)hostnameForProviderID:(unsigned short)providerID;	// 0x3143946d
- (void)loadTiles:(id)tiles progress:(id)progress finished:(id)finished error:(id)error;	// 0x31438ae5
- (void)loadTilesFromCache:(id)cache progress:(id)progress finished:(id)finished error:(id)error;	// 0x31438ab9
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error;	// 0x31438a8d
- (void)loadTilesFromCacheAndNetwork:(id)cacheAndNetwork progress:(id)progress finished:(id)finished error:(id)error skipNetwork:(BOOL)network;	// 0x314387f9
// declared property getter: - (int)memoryHits;	// 0x314394cd
// declared property getter: - (int)networkHits;	// 0x314394ed
- (void)openDatabase;	// 0x314384d5
- (void)registerTileDecoder:(id)decoder;	// 0x31437b99
- (void)registerTileLoader:(Class)loader;	// 0x31439419
- (id)renderDataForKey:(GEOTileKey *)key;	// 0x31438099
- (id)renderDataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x314381cd
- (void)tileServerProxy:(id)proxy receivedData:(id)data forKey:(GEOTileKey)key forRequest:(id)request fromDisk:(BOOL)disk;	// 0x31438f51
- (void)tileServerProxy:(id)proxy receivedError:(id)error forRequest:(id)request;	// 0x314391bd
- (void)tileServerProxy:(id)proxy requestFinished:(id)finished;	// 0x314392dd
- (void)tileServerProxy:(id)proxy requestMovedToNetwork:(id)network;	// 0x314391b9
@end
