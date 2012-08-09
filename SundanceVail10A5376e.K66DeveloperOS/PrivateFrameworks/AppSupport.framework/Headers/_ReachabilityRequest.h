/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSString;

@interface _ReachabilityRequest : NSObject {
	NSLock *_lock;	// 4 = 0x4
	NSString *_hostname;	// 8 = 0x8
	SCNetworkReachabilityRef _reachability;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
	CFDictionaryRef _observers;	// 20 = 0x14
	BOOL _isReachable;	// 24 = 0x18
	BOOL _receivedAtLeastOneCallback;	// 25 = 0x19
}
@property(assign, nonatomic) NSString *hostname;	// G=0x366a2689; S=0x366a2699; @synthesize=_hostname
- (id)initWithHostname:(id)hostname;	// 0x366a1d85
- (void)addObserver:(id)observer selector:(SEL)selector;	// 0x366a2355
- (void)dealloc;	// 0x366a1e35
- (id)description;	// 0x366a1ee5
- (BOOL)hasObservers;	// 0x366a261d
// declared property getter: - (id)hostname;	// 0x366a2689
- (void)reachabilityChangedWithFlags:(unsigned)flags;	// 0x366a1f4d
- (void)removeObserver:(id)observer;	// 0x366a256d
// declared property setter: - (void)setHostname:(id)hostname;	// 0x366a2699
@end
