/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library
#import "Symbolication-Structs.h"
#import "NSCopying.h"

@class NSString, NSArray, NSDictionary;
@protocol VMUMemory;

@interface VMUSymbolOwner : NSObject <NSCopying> {
	NSString *_name;	// 4 = 0x4
	NSDictionary *_signature;	// 8 = 0x8
	id<VMUMemory> _textMemory;	// 12 = 0xc
	NSArray *_regions;	// 16 = 0x10
	NSArray *_symbols;	// 20 = 0x14
	NSArray *_sourceInfos;	// 24 = 0x18
	unsigned _flags;	// 28 = 0x1c
	unsigned _currentVersion;	// 32 = 0x20
	unsigned _compatibilityVersion;	// 36 = 0x24
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x31f71551; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x31f71541; converted property
@property(readonly, assign) unsigned flags;	// G=0x31f71531; converted property
@property(readonly, retain) NSString *name;	// G=0x31f714e1; converted property
@property(readonly, retain) NSArray *regions;	// G=0x31f71501; converted property
@property(readonly, retain) NSDictionary *signature;	// G=0x31f714f1; converted property
@property(readonly, retain) NSArray *sourceInfos;	// G=0x31f71521; converted property
@property(readonly, retain) NSArray *symbols;	// G=0x31f71511; converted property
+ (id)symbolOwnerWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x31f717e1
- (id)initWithName:(id)name signature:(id)signature textMemory:(id)memory regions:(id)regions symbols:(id)symbols sourceInfos:(id)infos flags:(unsigned)flags currentVersion:(unsigned)version compatibilityVersion:(unsigned)version9;	// 0x31f71619
- (id)architecture;	// 0x31f72165
- (int)compare:(id)compare;	// 0x31f71c91
// converted property getter: - (unsigned)compatibilityVersion;	// 0x31f71551
- (BOOL)containsAddress:(unsigned long long)address;	// 0x31f7213d
- (id)copyWithZone:(NSZone *)zone;	// 0x31f71851
// converted property getter: - (unsigned)currentVersion;	// 0x31f71541
- (void)dealloc;	// 0x31f71b29
- (id)description;	// 0x31f71c09
// converted property getter: - (unsigned)flags;	// 0x31f71531
- (BOOL)isAOut;	// 0x31f715b1
- (BOOL)isBundle;	// 0x31f715ed
- (BOOL)isCommpage;	// 0x31f7159d
- (BOOL)isDsym;	// 0x31f71605
- (BOOL)isDyld;	// 0x31f715d9
- (BOOL)isDylib;	// 0x31f715c5
- (BOOL)isEqualToSymbolOwner:(id)symbolOwner;	// 0x31f71d9d
- (BOOL)isLazy;	// 0x31f72a71
- (BOOL)isMachO;	// 0x31f71561
- (BOOL)isPEF;	// 0x31f71589
- (BOOL)isProtected;	// 0x31f71575
// converted property getter: - (id)name;	// 0x31f714e1
- (id)path;	// 0x31f72195
- (id)programTextForAddress:(unsigned long long)address;	// 0x31f72c19
- (id)programTextForAddressRange:(VMURange)addressRange;	// 0x31f72c75
- (id)regionForAddress:(unsigned long long)address;	// 0x31f72059
// converted property getter: - (id)regions;	// 0x31f71501
- (id)regionsForName:(id)name;	// 0x31f72071
// converted property getter: - (id)signature;	// 0x31f714f1
- (unsigned long long)size;	// 0x31f72f05
- (void)slideToSegmentAddresses:(id)segmentAddresses;	// 0x31f72cdd
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x31f71e4d
// converted property getter: - (id)sourceInfos;	// 0x31f71521
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x31f71ded
- (id)symbolForAddress:(unsigned long long)address;	// 0x31f72041
- (id)symbolForName:(id)name;	// 0x31f71f31
- (id)symbolOwnerByAddingContentsOfOwner:(id)owner;	// 0x31f72a79
// converted property getter: - (id)symbols;	// 0x31f71511
- (id)symbolsForMangledName:(id)mangledName;	// 0x31f71e65
- (id)symbolsForName:(id)name;	// 0x31f71f75
- (id)symbolsInAddressRange:(VMURange)addressRange;	// 0x31f71e1d
- (BOOL)validate;	// 0x31f72a75
@end

