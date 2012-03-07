/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class VMUArchitecture;

@interface VMUMemory_Handle : VMUMemory_Base <VMUMemory> {
	id<VMUMemory> _parent;	// 4 = 0x4
	char *_data;	// 8 = 0x8
	VMURange _addressRange;	// 12 = 0xc
	VMUArchitecture *_architecture;	// 28 = 0x1c
}
@property(readonly, assign) VMURange addressRange;	// G=0x35bd1189; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x35bd11ad; converted property
- (id)initWithParent:(id)parent addressRange:(VMURange)range architecture:(id)architecture data:(char *)data;	// 0x35bd11c1
// converted property getter: - (VMURange)addressRange;	// 0x35bd1189
// converted property getter: - (id)architecture;	// 0x35bd11ad
- (void)dealloc;	// 0x35bd1271
- (id)description;	// 0x35bd1319
- (BOOL)isContiguous;	// 0x35bd11bd
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x35bd1605
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x35bd144d
- (id)swappedView;	// 0x35bd1395
- (id)view;	// 0x35bd13f1
@end
