/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol ATVRouteDelegate;

__attribute__((visibility("hidden")))
@interface ATVRoute : XXUnknownSuperclass {
	NStatSource *_statSource;	// 4 = 0x4
	NStatCounts _statCounts;	// 8 = 0x8
	NStatCounts _previouStatCounts;	// 84 = 0x54
	unsigned long long _routeID;	// 160 = 0xa0
	unsigned long long _parentRouteID;	// 168 = 0xa8
	unsigned long long _gatewayID;	// 176 = 0xb0
	sockaddr _hostAddress;	// 184 = 0xb8
	union {
		sockaddr sa;
		sockaddr_in sin;
		sockaddr_in6 sin6;
	} _gatewayAddress;	// 200 = 0xc8
	NSString *_interfaceName;	// 228 = 0xe4
	unsigned _flags;	// 232 = 0xe8
	id<ATVRouteDelegate> _delegate;	// 236 = 0xec
	NSString *_destinationIPAddress;	// 240 = 0xf0
	NSString *_gatewayIPAddress;	// 244 = 0xf4
}
@property(assign) id<ATVRouteDelegate> delegate;	// G=0x1fa7f5; S=0x1fa809; @synthesize=_delegate
@property(retain) NSString *destinationIPAddress;	// G=0x1fa869; S=0x1fa87d; @synthesize=_destinationIPAddress
@property(retain) NSString *gatewayIPAddress;	// G=0x1fa845; S=0x1fa859; @synthesize=_gatewayIPAddress
@property(retain) NSString *interfaceName;	// G=0x1fa821; S=0x1fa835; @synthesize=_interfaceName
- (id)initWithStatSource:(NStatSource *)statSource;	// 0x1f9929
- (void)asyncUpdateCounts;	// 0x1fa7dd
- (void)configureRoute;	// 0x1f9cc1
- (id)cumulativeDescription;	// 0x1fa185
- (id)cumulativeStatsDictionary;	// 0x1fa259
- (void)dealloc;	// 0x1f98a1
// declared property getter: - (id)delegate;	// 0x1fa7f5
- (id)deltaDescription;	// 0x1fa05d
- (id)deltaStatsDictionary;	// 0x1fa415
- (id)description;	// 0x1fa175
// declared property getter: - (id)destinationIPAddress;	// 0x1fa869
// declared property getter: - (id)gatewayIPAddress;	// 0x1fa845
// declared property getter: - (id)interfaceName;	// 0x1fa821
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1fa809
// declared property setter: - (void)setDestinationIPAddress:(id)address;	// 0x1fa87d
// declared property setter: - (void)setGatewayIPAddress:(id)address;	// 0x1fa859
// declared property setter: - (void)setInterfaceName:(id)name;	// 0x1fa835
- (id)statsDictionary;	// 0x1fa249
- (void)updateCounts;	// 0x1fa77d
@end
