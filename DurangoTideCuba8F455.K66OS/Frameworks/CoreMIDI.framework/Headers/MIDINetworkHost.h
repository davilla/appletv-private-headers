/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import <NSObject.h> // Unknown library
#import "CoreMIDI-Structs.h"

@class NSString;

@interface MIDINetworkHost : NSObject {
@private
	MIDINetworkHostImpl *_impl;	// 4 = 0x4
}
@property(readonly, retain, nonatomic) NSString *address;	// G=0x327756bd; 
@property(readonly, retain, nonatomic) NSString *name;	// G=0x327756ad; 
@property(readonly, retain, nonatomic) NSString *netServiceDomain;	// G=0x327756f1; 
@property(readonly, retain, nonatomic) NSString *netServiceName;	// G=0x327756e1; 
@property(readonly, assign, nonatomic) unsigned port;	// G=0x327756cd; 
+ (id)fromAddressAsText:(id)addressAsText withName:(id)name;	// 0x32775fd1
+ (id)hostWithName:(id)name address:(id)address port:(unsigned)port;	// 0x32775b8d
+ (id)hostWithName:(id)name netService:(id)service;	// 0x32775a9d
+ (id)hostWithName:(id)name netServiceName:(id)name2 netServiceDomain:(id)domain;	// 0x32775afd
- (id)init;	// 0x32775e7d
// declared property getter: - (id)address;	// 0x327756bd
- (id)addressAsText;	// 0x32775829
- (void)dealloc;	// 0x32775f1d
- (id)description;	// 0x32775a09
- (id)displayName;	// 0x32775771
- (BOOL)hasSameAddressAs:(id)as;	// 0x32775899
- (id)host;	// 0x327756dd
// declared property getter: - (id)name;	// 0x327756ad
// declared property getter: - (id)netServiceDomain;	// 0x327756f1
// declared property getter: - (id)netServiceName;	// 0x327756e1
// declared property getter: - (unsigned)port;	// 0x327756cd
- (void)setName:(id)name;	// 0x327759cd
@end

