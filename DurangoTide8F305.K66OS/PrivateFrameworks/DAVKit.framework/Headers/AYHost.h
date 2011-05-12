/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "AYOperation.h"
#import "DAVKit-Structs.h"

@class NSData, NSArray;

@interface AYHost : AYOperation {
	CFHostRef _hostRef;	// 64 = 0x40
	CFHostClientContext _context;	// 68 = 0x44
	NSArray *_names;	// 88 = 0x58
	NSArray *_addresses;	// 92 = 0x5c
	NSData *_isReachable;	// 96 = 0x60
	BOOL _wasCreatedFromName;	// 100 = 0x64
	id _origin;	// 104 = 0x68
	int _infoType;	// 108 = 0x6c
}
@property(readonly, retain) NSArray *addresses;	// G=0x30093a15; converted property
@property(readonly, retain) NSArray *names;	// G=0x30093a25; converted property
+ (id)hostWithAddress:(id)address;	// 0x30093bfd
+ (id)hostWithName:(id)name;	// 0x30093c31
- (id)initHostWithAddress:(id)address;	// 0x30093c85
- (id)initHostWithName:(id)name;	// 0x30093d65
- (void)_handleInfoResolutionEventWithType:(int)type error:(const XXStruct_K5nmsA *)error;	// 0x30094085
- (void)_launchInfoResolutionWithType:(int)type;	// 0x30093f69
- (void)_setClient;	// 0x30093a35
// converted property getter: - (id)addresses;	// 0x30093a15
- (void)checkReachability;	// 0x30093bb5
- (void)dealloc;	// 0x30093ed9
- (id)description;	// 0x30093a95
- (void)endOperationWithError:(id)error;	// 0x30094001
- (void)finalize;	// 0x30093e9d
// converted property getter: - (id)names;	// 0x30093a25
- (unsigned)reachability;	// 0x30093b1d
- (void)resolveAddresses;	// 0x30093be5
- (void)resolveNames;	// 0x30093bcd
@end

