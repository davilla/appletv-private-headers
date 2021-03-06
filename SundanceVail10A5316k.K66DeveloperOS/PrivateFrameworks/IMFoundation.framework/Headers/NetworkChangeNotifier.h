/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMConnectionMonitorDelegate.h"
#import <NSObject.h> // Unknown library
#import "IMFoundation-Structs.h"
#import "IMSystemMonitorListener.h"

@class NSString, IMConnectionMonitor, NSArray;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate> {
	SCDynamicStoreRef _store;	// 4 = 0x4
	CFRunLoopSourceRef _runLoopSource;	// 8 = 0x8
	NSString *_myIP;	// 12 = 0xc
	NSArray *_myIPs;	// 16 = 0x10
	IMConnectionMonitor *_connectionMonitor;	// 20 = 0x14
	BOOL _lastPostedNetworkUp;	// 24 = 0x18
}
@property(retain, nonatomic) IMConnectionMonitor *connectionMonitor;	// G=0x34a7daad; S=0x34a7dabd; @synthesize=_connectionMonitor
@property(readonly, assign, nonatomic) SCDynamicStoreRef getDynamicStore;	// G=0x34a6e2cd; 
@property(readonly, assign, nonatomic) BOOL isNetworkUp;	// G=0x34a7da09; 
@property(assign, nonatomic) BOOL lastPostedNetworkUp;	// G=0x34a7dacd; S=0x34a7dadd; @synthesize=_lastPostedNetworkUp
@property(readonly, assign, nonatomic) NSString *myGatewayAddress;	// G=0x34a7d87d; 
@property(retain, nonatomic) NSString *myIP;	// G=0x34a7da6d; S=0x34a7da7d; @synthesize=_myIP
@property(readonly, assign, nonatomic) NSString *myIPAddress;	// G=0x34a6f1c1; 
@property(readonly, assign, nonatomic) NSArray *myIPAddresses;	// G=0x34a6e0fd; 
@property(retain, nonatomic) NSArray *myIPs;	// G=0x34a7da8d; S=0x34a7da9d; @synthesize=_myIPs
@property(assign, nonatomic) CFRunLoopSourceRef runLoopSource;	// G=0x34a7da4d; S=0x34a7da5d; @synthesize=_runLoopSource
@property(assign, nonatomic) SCDynamicStoreRef store;	// G=0x34a7da2d; S=0x34a7da3d; @synthesize=_store
+ (void)disableNotifications;	// 0x34a7d625
+ (BOOL)enableNotifications;	// 0x34a6d121
+ (id)sharedInstance;	// 0x34a7d601
- (id)init;	// 0x34a6d161
- (void)_clearIPCache;	// 0x34a7d64d
- (void)_clearSharedDNSService;	// 0x34a7d939
- (BOOL)_listenForChanges;	// 0x34a6d221
// declared property getter: - (id)connectionMonitor;	// 0x34a7daad
- (void)connectionMonitorDidUpdate:(id)connectionMonitor;	// 0x34a7d93d
- (void)dealloc;	// 0x34a7d729
// declared property getter: - (SCDynamicStoreRef)getDynamicStore;	// 0x34a6e2cd
// declared property getter: - (BOOL)isNetworkUp;	// 0x34a7da09
// declared property getter: - (BOOL)lastPostedNetworkUp;	// 0x34a7dacd
// declared property getter: - (id)myGatewayAddress;	// 0x34a7d87d
// declared property getter: - (id)myIP;	// 0x34a7da6d
// declared property getter: - (id)myIPAddress;	// 0x34a6f1c1
// declared property getter: - (id)myIPAddresses;	// 0x34a6e0fd
// declared property getter: - (id)myIPs;	// 0x34a7da8d
// declared property getter: - (CFRunLoopSourceRef)runLoopSource;	// 0x34a7da4d
// declared property setter: - (void)setConnectionMonitor:(id)monitor;	// 0x34a7dabd
// declared property setter: - (void)setLastPostedNetworkUp:(BOOL)up;	// 0x34a7dadd
// declared property setter: - (void)setMyIP:(id)ip;	// 0x34a7da7d
// declared property setter: - (void)setMyIPs:(id)ips;	// 0x34a7da9d
// declared property setter: - (void)setRunLoopSource:(CFRunLoopSourceRef)source;	// 0x34a7da5d
// declared property setter: - (void)setStore:(SCDynamicStoreRef)store;	// 0x34a7da3d
// declared property getter: - (SCDynamicStoreRef)store;	// 0x34a7da2d
- (void)systemDidWake;	// 0x34a7d6ad
- (void)systemWillSleep;	// 0x34a7d69d
@end

