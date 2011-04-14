/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"

@class NSString, NSArray, NSDictionary;

@interface VMULazySymbolOwner : NSObject {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	NSArray *_regions;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
}
@property(readonly, assign) unsigned flags;	// G=0x3017e299; converted property
@property(readonly, retain) NSString *name;	// G=0x3017e279; converted property
@property(readonly, retain) NSArray *regions;	// G=0x3017e251; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x3017e289; converted property
+ (id)lazySymbolOwnerWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x3017e525
- (id)initWithName:(id)name signature:(id)signature regions:(id)regions flags:(unsigned)flags;	// 0x3017e495
- (id)architecture;	// 0x3017e43d
- (BOOL)containsAddress:(unsigned long long)address;	// 0x3017e575
- (void)dealloc;	// 0x3017e2ad
- (id)description;	// 0x3017e339
// converted property getter: - (unsigned)flags;	// 0x3017e299
- (BOOL)hasRegionsForName:(id)name;	// 0x3017e3a9
- (BOOL)isLazy;	// 0x3017e261
- (BOOL)isProtected;	// 0x3017e265
// converted property getter: - (id)name;	// 0x3017e279
- (BOOL)overlapsAddressRange:(VMURange)range;	// 0x3017e595
- (id)path;	// 0x3017e469
// converted property getter: - (id)regions;	// 0x3017e251
// converted property getter: - (id)signature;	// 0x3017e289
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x3017e639
- (BOOL)validate;	// 0x3017e2a9
@end
