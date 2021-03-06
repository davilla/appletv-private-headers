/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUMemory_Base.h"
#import "Symbolication-Structs.h"
#import "VMUMemory.h"

@class NSString, NSMutableDictionary, VMUArchitecture, NSDate;

@interface VMUMemory_File : VMUMemory_Base <VMUMemory> {
	char *_mappedAddress;	// 4 = 0x4
	unsigned long _mappedSize;	// 8 = 0x8
	NSDate *_lastModifiedTimestamp;	// 12 = 0xc
	VMURange _addressRange;	// 16 = 0x10
	VMURange _fileRange;	// 32 = 0x20
	NSString *_path;	// 48 = 0x30
	VMUArchitecture *_architecture;	// 52 = 0x34
	NSMutableDictionary *_sharedCacheMap;	// 56 = 0x38
}
@property(readonly, assign) VMURange addressRange;	// G=0x3221eea9; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x3221eecd; converted property
@property(readonly, retain) NSDate *lastModifiedTimestamp;	// G=0x3221e8f9; converted property
@property(readonly, retain) NSString *path;	// G=0x3221e8e9; converted property
+ (id)headerFromSharedCacheWithPath:(id)path;	// 0x3221e511
+ (id)headerWithPath:(id)path;	// 0x3221e469
+ (id)memoryWithPath:(id)path;	// 0x3221e6d5
+ (id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3221e751
- (id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3221e7c1
// converted property getter: - (VMURange)addressRange;	// 0x3221eea9
// converted property getter: - (id)architecture;	// 0x3221eecd
- (void)buildSharedCacheMap;	// 0x3221e909
- (void)dealloc;	// 0x3221ed45
- (id)description;	// 0x3221ecb1
- (void)finalize;	// 0x3221ee51
- (BOOL)isContiguous;	// 0x3221eedd
// converted property getter: - (id)lastModifiedTimestamp;	// 0x3221e8f9
- (BOOL)map;	// 0x3221ea5d
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x3221eee1
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3221f079
// converted property getter: - (id)path;	// 0x3221e8e9
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;	// 0x3221ea25
- (id)swappedView;	// 0x3221f28d
- (id)view;	// 0x3221f22d
@end

