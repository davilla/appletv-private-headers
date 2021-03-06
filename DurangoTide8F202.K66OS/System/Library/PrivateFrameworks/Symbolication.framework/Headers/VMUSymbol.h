/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "Symbolication-Structs.h"
#import "NSCopying.h"
#import "VMUAddressRange.h"

@class NSString, VMUSymbolOwner;

@interface VMUSymbol : VMUAddressRange <NSCopying> {
	NSString *_name;	// 20 = 0x14
	NSString *_mangledName;	// 24 = 0x18
	VMUSymbolOwner *_owner;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, assign) unsigned flags;	// G=0x30176f95; converted property
@property(readonly, retain) NSString *mangledName;	// G=0x30176f55; converted property
@property(readonly, retain) NSString *name;	// G=0x30177491; converted property
@property(retain) VMUSymbolOwner *owner;	// G=0x30176f85; S=0x301776a1; converted property
+ (id)symbolWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x301775b1
- (id)initWithName:(id)name mangledName:(id)name2 addressRange:(VMURange)range owner:(id)owner flags:(unsigned)flags;	// 0x3017750d
- (VMURange)addressRange;	// 0x30176f65
- (int)compare:(id)compare;	// 0x30177049
- (id)copyWithZone:(NSZone *)zone;	// 0x301770d5
- (void)dealloc;	// 0x30177161
- (id)description;	// 0x301771d5
// converted property getter: - (unsigned)flags;	// 0x30176f95
- (BOOL)isArm;	// 0x30177031
- (BOOL)isDwarf;	// 0x3017701d
- (BOOL)isDyldStub;	// 0x30176fe1
- (BOOL)isEqualToSymbol:(id)symbol;	// 0x30177255
- (BOOL)isExternal;	// 0x30176ff5
- (BOOL)isFunction;	// 0x30176fa5
- (BOOL)isJavaMethod;	// 0x30176fcd
- (BOOL)isObjcMethod;	// 0x30176fb9
- (BOOL)isStab;	// 0x30177009
- (BOOL)isThumb;	// 0x30177045
// converted property getter: - (id)mangledName;	// 0x30176f55
// converted property getter: - (id)name;	// 0x30177491
// converted property getter: - (id)owner;	// 0x30176f85
// converted property setter: - (void)setOwner:(id)owner;	// 0x301776a1
- (id)sourceInfoForAddress:(unsigned long long)address;	// 0x301773ed
- (id)sourceInfos;	// 0x30177445
- (id)sourceInfosInAddressRange:(VMURange)addressRange;	// 0x30177615
- (id)text;	// 0x3017738d
@end

