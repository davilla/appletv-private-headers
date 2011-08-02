/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "AYAddress.h"


@interface AYIPV4Address : AYAddress {
	sockaddr_in _saddr;	// 4 = 0x4
}
- (id)initWithSockaddrBuffer:(sockaddr *)sockaddrBuffer;	// 0x314d9e91
- (id)URLToAddressWithScheme:(id)scheme andPort:(int)port URI:(id)uri;	// 0x314d9865
- (unsigned)_s_addr;	// 0x314d926d
- (id)addressAsData;	// 0x314d98b1
- (id)addressAsString;	// 0x314d9965
- (void)dumpInternal;	// 0x314d927d
- (void)getAddressAsSockAddr:(sockaddr *)addr length:(int *)length;	// 0x314d92e9
- (BOOL)isLocalAddressConnectingTo:(id)to;	// 0x314d98e1
- (int)port;	// 0x314d925d
- (id)type;	// 0x314d9251
@end

