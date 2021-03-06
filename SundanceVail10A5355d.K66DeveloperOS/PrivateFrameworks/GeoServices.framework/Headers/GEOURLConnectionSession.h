/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import "GeoServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMapTable;

@interface GEOURLConnectionSession : NSObject {
	CFURLConnectionSessionRef _connectionSession;	// 4 = 0x4
	NSMapTable *_connectionDelegates;	// 8 = 0x8
	NSLock *_delegateMapLock;	// 12 = 0xc
}
- (id)initPersistentSessionWithTimeout:(int)timeout loadWidth:(int)width;	// 0x345824c9
- (void)_createConnectionSessionWithPurgeTimeout:(int)purgeTimeout loadWidth:(int)width;	// 0x345826c5
- (id)_delegateForConnection:(CFURLConnectionRef)connection;	// 0x34582609
- (void)dealloc;	// 0x34582591
- (CFURLRequestRef)newCFMutableURLRequestWithURL:(id)url;	// 0x34582991
- (CFURLConnectionRef)newCFURLConnectionWithRequest:(CFURLRequestRef)request delegate:(id)delegate;	// 0x345829a5
- (void)removeDelegateForConnection:(CFURLConnectionRef)connection;	// 0x34582669
@end

