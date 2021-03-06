/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"

@class SSURLBagContext, NSMutableArray, NSDictionary, SSXPCConnection;

@interface SSURLBag : NSObject {
@private
	SSXPCConnection *_connection;	// 4 = 0x4
	SSURLBagContext *_context;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	dispatch_queue_s *_dispatchQueue;	// 16 = 0x10
	double _expirationTime;	// 20 = 0x14
	NSMutableArray *_pendingLookups;	// 28 = 0x1c
}
@property(readonly, assign) SSURLBagContext *URLBagContext;	// G=0x305259b9; 
+ (id)URLBagForContext:(id)context;	// 0x30525669
- (id)init;	// 0x30525429
- (id)initWithURLBagContext:(id)urlbagContext;	// 0x30525489
// declared property getter: - (id)URLBagContext;	// 0x305259b9
- (id)_connection;	// 0x30525c25
- (void)_drainPendingLookupsWithError:(id)error;	// 0x30525c85
- (void)_loadURLBag;	// 0x30525e75
- (void)_loadWithCompletionBlock:(id)completionBlock;	// 0x30526205
- (void)dealloc;	// 0x30525561
- (void)invalidate;	// 0x305257e5
- (void)loadValueForKey:(id)key completionBlock:(id)block;	// 0x305258ed
- (void)loadWithCompletionBlock:(id)completionBlock;	// 0x30525c15
- (id)valueForKey:(id)key error:(id *)error;	// 0x305259f1
@end

