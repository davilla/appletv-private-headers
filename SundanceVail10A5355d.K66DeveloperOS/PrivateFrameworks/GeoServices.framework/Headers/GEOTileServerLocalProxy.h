/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import "GEOTileServerProxy.h"
#import <NSObject.h> // Unknown library

@class NSMapTable, GEOTileDBReader, GEOTileDBWriter, NSLock, NSMutableArray, NSString;
@protocol GEOTileServerProxyDelegate;

@interface GEOTileServerLocalProxy : NSObject <GEOTileServerProxy> {
	NSMutableArray *_inProgress;	// 4 = 0x4
	NSLock *_inProgressLock;	// 8 = 0x8
	NSMapTable *_providers;	// 12 = 0xc
	GEOTileDBWriter *_dbWriter;	// 16 = 0x10
	GEOTileDBReader *_dbReader;	// 20 = 0x14
	NSString *_cacheLocation;	// 24 = 0x18
	id<GEOTileServerProxyDelegate> _delegate;	// 28 = 0x1c
}
- (id)initWithCacheLocation:(id)cacheLocation;	// 0x3451b64d
- (id)_contextForFullList:(id)fullList;	// 0x3451bb99
- (id)_contextForNetworkList:(id)networkList;	// 0x3451bc6d
- (void)_registerBuiltInProviders;	// 0x3451b831
- (void)beginPreloadSessionOfSize:(unsigned long long)size;	// 0x3451cc55
- (void)cancelLoad:(id)load;	// 0x3451c62d
- (void)closeCacheConnection;	// 0x3451baf1
- (id)dataForKey:(GEOTileKey *)key;	// 0x3451ca89
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x3451cae5
- (void)dealloc;	// 0x3451b791
- (void)endPreloadSession;	// 0x3451cc75
- (void)flushPendingWrites;	// 0x3451bb79
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x3451bd41
- (void)openCacheConnection;	// 0x3451bb35
- (void)registerProvider:(Class)provider;	// 0x3451b8c5
- (void)reportCorruptTile:(const GEOTileKey *)tile;	// 0x3451cb59
- (void)setDelegate:(id)delegate;	// 0x3451bae1
- (void)shrinkDiskCacheToSize:(unsigned long long)size finished:(id)finished;	// 0x3451cc35
- (BOOL)skipNetworkForKeysWhenPreloading:(id)keysWhenPreloading;	// 0x3451cc95
- (void)tileRequester:(id)requester receivedData:(id)data tileEdition:(unsigned)edition tileSet:(unsigned)set forKey:(GEOTileKey)key userInfo:(id)info;	// 0x3451c775
- (void)tileRequester:(id)requester receivedError:(id)error;	// 0x3451c87d
- (void)tileRequesterFinished:(id)finished;	// 0x3451c989
@end

