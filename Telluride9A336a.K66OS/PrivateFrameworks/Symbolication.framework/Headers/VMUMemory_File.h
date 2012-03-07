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
	unsigned _mappedSize;	// 8 = 0x8
	NSDate *_lastModifiedTimestamp;	// 12 = 0xc
	VMURange _addressRange;	// 16 = 0x10
	VMURange _fileRange;	// 32 = 0x20
	NSString *_path;	// 48 = 0x30
	VMUArchitecture *_architecture;	// 52 = 0x34
	NSMutableDictionary *_sharedCacheMap;	// 56 = 0x38
}
@property(readonly, assign) VMURange addressRange;	// G=0x3011e2f9; converted property
@property(readonly, retain) VMUArchitecture *architecture;	// G=0x3011e31d; converted property
@property(readonly, retain) NSDate *lastModifiedTimestamp;	// G=0x3011e2e9; converted property
@property(readonly, retain) NSString *path;	// G=0x3011e2d9; converted property
+ (id)headerFromSharedCacheWithPath:(id)path;	// 0x3011e549
+ (id)headerWithPath:(id)path;	// 0x3011e71d
+ (id)memoryWithPath:(id)path;	// 0x3011e4cd
+ (id)memoryWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3011e45d
- (id)initWithPath:(id)path fileRange:(VMURange)range mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3011e331
// converted property getter: - (VMURange)addressRange;	// 0x3011e2f9
// converted property getter: - (id)architecture;	// 0x3011e31d
- (void)buildSharedCacheMap;	// 0x3011f061
- (void)dealloc;	// 0x3011ec1d
- (id)description;	// 0x3011ed21
- (void)finalize;	// 0x3011ebc1
- (BOOL)isContiguous;	// 0x3011e32d
// converted property getter: - (id)lastModifiedTimestamp;	// 0x3011e2e9
- (BOOL)map;	// 0x3011edb9
- (id)memoryAtAddress:(unsigned long long)address maxSize:(unsigned long long)size;	// 0x3011ea19
- (id)memoryFromSubRange:(VMURange)subRange mapToAddress:(unsigned long long)address architecture:(id)architecture;	// 0x3011e879
// converted property getter: - (id)path;	// 0x3011e2d9
- (unsigned long long)sharedCacheHeaderOffsetForPath:(id)path;	// 0x3011f025
- (id)swappedView;	// 0x3011e7c1
- (id)view;	// 0x3011e81d
@end
