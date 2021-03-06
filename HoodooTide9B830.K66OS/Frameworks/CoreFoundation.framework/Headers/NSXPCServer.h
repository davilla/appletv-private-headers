/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSObject.h"
#import "NSXPCObject.h"

@class NSString, NSMutableArray;

@interface NSXPCServer : NSObject <NSXPCObject> {
@private
	xpc_connection_s *_conn;	// 4 = 0x4
	int _lock;	// 8 = 0x8
	dispatch_queue_s *_dq;	// 12 = 0xc
	NSString *_serviceName;	// 16 = 0x10
	id _makeNewClient;	// 20 = 0x14
	NSMutableArray *_clients;	// 24 = 0x18
	NSMutableArray *_invalidHandlers;	// 28 = 0x1c
	int _started;	// 32 = 0x20
	int _invalid;	// 36 = 0x24
	BOOL _priv;	// 40 = 0x28
}
@property(assign, nonatomic) dispatch_queue_s *dispatchQueue;	// G=0x3273f681; S=0x3273f691; @dynamic
@property(copy) id makeNewClient;	// G=0x3273f589; S=0x3273f5e1; @dynamic
@property(copy) NSString *serviceName;	// G=0x3273f491; S=0x3273f4e9; @dynamic
- (id)init;	// 0x3273f391
- (void)__invalidate;	// 0x3273f721
- (void)addInvalidationHandler:(id)handler;	// 0x3273f90d
- (id)allClients;	// 0x3273fb69
- (void)dealloc;	// 0x3273f41d
// declared property getter: - (dispatch_queue_s *)dispatchQueue;	// 0x3273f681
- (void *)encodeToNewXPCObject;	// 0x3273fbc1
- (void)invalidate;	// 0x3273f8ad
// declared property getter: - (id)makeNewClient;	// 0x3273f589
// declared property getter: - (id)serviceName;	// 0x3273f491
// declared property setter: - (void)setDispatchQueue:(dispatch_queue_s *)queue;	// 0x3273f691
// declared property setter: - (void)setMakeNewClient:(id)client;	// 0x3273f5e1
- (void)setPrivileged:(BOOL)privileged;	// 0x3273f6d1
// declared property setter: - (void)setServiceName:(id)name;	// 0x3273f4e9
- (void)start;	// 0x3273f991
@end

