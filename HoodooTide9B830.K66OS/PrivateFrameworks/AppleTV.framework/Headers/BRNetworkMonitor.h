/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRSingleton.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface BRNetworkMonitor : BRSingleton {
@private
	NSTimer *_networkDropTimer;	// 4 = 0x4
}
+ (void)setSingleton:(id)singleton;	// 0x32aad905
+ (id)singleton;	// 0x32aad8f5
- (void)_completeNetworkTransition;	// 0x32aadb69
- (void)handleSysConfigCallbackWithStore:(SCDynamicStoreRef)store changedKeys:(CFArrayRef)keys info:(void *)info;	// 0x32aad915
@end

