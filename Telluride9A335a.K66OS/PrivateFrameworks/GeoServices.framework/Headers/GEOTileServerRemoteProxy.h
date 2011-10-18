/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"
#import "GEOTileServerProxy.h"

@class NSMutableArray, NSLock;

__attribute__((visibility("hidden")))
@interface GEOTileServerRemoteProxy : NSObject <GEOTileServerProxy> {
	id _delegate;	// 4 = 0x4
	NSMutableArray *_inProgress;	// 8 = 0x8
	NSLock *_inProgressLock;	// 12 = 0xc
	dispatch_queue_s *_connQueue;	// 16 = 0x10
	xpc_connection_s *_conn;	// 20 = 0x14
	NSLock *_connLock;	// 24 = 0x18
	int _suspendCount;	// 28 = 0x1c
}
- (id)init;	// 0x31d0d845
- (void)_handleBadDataForRequest:(id)request reason:(id)reason;	// 0x31d0e725
- (void)_handleEditionUpgrade:(void *)upgrade;	// 0x31d0e611
- (void)_handleError:(void *)error;	// 0x31d0e2f5
- (void)_handleEvent:(void *)event;	// 0x31d0d9b5
- (void)_handleFinished:(void *)finished;	// 0x31d0e379
- (void)_handleNetworkBegan:(void *)began;	// 0x31d0e4ed
- (void)_handleTile:(void *)tile;	// 0x31d0dea1
- (id)_requestForEvent:(void *)event acquireLock:(BOOL)lock;	// 0x31d0dd5d
- (void)_sendError:(id)error forRequest:(id)request;	// 0x31d0e15d
- (void)cancelLoad:(id)load;	// 0x31d0eb09
- (void)closeCacheConnection;	// 0x31d0f119
- (id)dataForKey:(GEOTileKey *)key;	// 0x31d0ed05
- (void)dataForKey:(GEOTileKey *)key asyncHandler:(id)handler;	// 0x31d0ee9d
- (void)dealloc;	// 0x31d0d955
- (void)flushPendingWrites;	// 0x31d0f395
- (void)loadTiles:(id)tiles checkDisk:(BOOL)disk allowNetworking:(BOOL)networking bundleIdentifier:(id)identifier bundleVersion:(id)version;	// 0x31d0e7f1
- (void)openCacheConnection;	// 0x31d0f189
- (void)setDelegate:(id)delegate;	// 0x31d0e7e1
@end

