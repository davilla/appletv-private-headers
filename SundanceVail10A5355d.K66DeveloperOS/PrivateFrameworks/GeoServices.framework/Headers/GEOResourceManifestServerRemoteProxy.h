/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GEOResourceManifestServerProxy.h"

@class NSMutableArray;
@protocol GEOResourceManifestServerProxyDelegate, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerRemoteProxy : NSObject <GEOResourceManifestServerProxy> {
	id<GEOResourceManifestServerProxyDelegate> _delegate;	// 4 = 0x4
	NSObject<OS_xpc_object> *_conn;	// 8 = 0x8
	int _closedCount;	// 12 = 0xc
	unsigned long long _regionalResourceHandleCounter;	// 16 = 0x10
	NSMutableArray *_inProgressRegionalResourcesRequests;	// 24 = 0x18
	BOOL _started;	// 28 = 0x1c
	BOOL _hiDPI;	// 29 = 0x1d
	unsigned _retryCount;	// 32 = 0x20
}
@property(assign, nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate;	// G=0x345669f1; S=0x34566a01; @synthesize=_delegate
- (id)initWithDelegate:(id)delegate;	// 0x34564cc5
- (void)_handleMessage:(id)message xpcMessage:(id)message2;	// 0x34565ff5
- (void)_setupConnection;	// 0x34564d95
- (id)authToken;	// 0x34564d91
- (oneway void)cancelRegionalResourcesLoadForKeys:(id)keys;	// 0x34565d91
- (void)closeConnection;	// 0x345652a1
- (void)dealloc;	// 0x34564d2d
// declared property getter: - (id)delegate;	// 0x345669f1
- (oneway void)forceUpdate;	// 0x345656e1
- (void)getResourceManifestWithHandler:(id)handler;	// 0x34565781
- (oneway void)loadRegionalResourcesForKeys:(id)keys allowNetwork:(BOOL)network;	// 0x34565a85
- (void)openConnection;	// 0x34565219
- (oneway void)refreshActiveTileGroup;	// 0x345659e5
- (oneway void)resetActiveTileGroup;	// 0x34565641
- (oneway void)setActiveTileGroupIdentifier:(id)identifier;	// 0x3456556d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34566a01
- (oneway void)startServer:(id)server;	// 0x34565465
@end

