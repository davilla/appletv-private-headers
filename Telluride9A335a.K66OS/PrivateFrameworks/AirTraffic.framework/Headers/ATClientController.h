/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import <NSObject.h> // Unknown library
#import "AirTraffic-Structs.h"

@class NSDictionary;

@interface ATClientController : NSObject {
	NSDictionary *_clientMap;	// 4 = 0x4
	CFDictionaryRef _queueMap;	// 8 = 0x8
}
+ (id)controllerForDataclasses:(id)dataclasses;	// 0x3675ee45
+ (id)sharedInstance;	// 0x3675eebd
- (BOOL)_loadClientsForDataclasses:(id)dataclasses;	// 0x3675e98d
- (id)allClients;	// 0x3675e3f9
- (id)clientForDataclass:(id)dataclass;	// 0x3675e3d9
- (void)dealloc;	// 0x3675ef05
- (dispatch_queue_s *)queueForClient:(id)client;	// 0x3675e805
- (void)resetQueues;	// 0x3675e419
- (void)waitToDrain;	// 0x3675e71d
@end

