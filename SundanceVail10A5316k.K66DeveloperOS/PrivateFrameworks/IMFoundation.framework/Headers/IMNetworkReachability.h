/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "IMFoundation-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface IMNetworkReachability : NSObject {
	BOOL localWiFiRef;	// 4 = 0x4
	SCNetworkReachabilityRef reachabilityRef;	// 8 = 0x8
}
+ (id)reachabilityForInternetConnection;	// 0x34a99865
+ (id)reachabilityForLocalWiFi;	// 0x34a99895
+ (id)reachabilityWithAddress:(const sockaddr_in *)address;	// 0x34a99799
+ (id)reachabilityWithHostName:(id)hostName;	// 0x34a996c1
- (int)currentReachabilityStatus;	// 0x34a99a29
- (void)dealloc;	// 0x34a99679
- (int)localWiFiStatusForFlags:(unsigned)flags;	// 0x34a998dd
- (int)networkStatusForFlags:(unsigned)flags;	// 0x34a999dd
@end
