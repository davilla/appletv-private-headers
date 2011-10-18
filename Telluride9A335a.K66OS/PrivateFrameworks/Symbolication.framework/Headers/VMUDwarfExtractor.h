/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUSymbolExtractor.h"

@class NSMutableDictionary, VMUMachOHeader;
@protocol VMUMemory;

@interface VMUDwarfExtractor : VMUSymbolExtractor {
	BOOL _shouldUseTaskBasedAddresses;	// 12 = 0xc
	NSMutableDictionary *_abbrevDicts;	// 16 = 0x10
	id<VMUMemory> _infoMem;	// 20 = 0x14
	id<VMUMemory> _abbrevMem;	// 24 = 0x18
	id<VMUMemory> _lineMem;	// 28 = 0x1c
	id<VMUMemory> _strMem;	// 32 = 0x20
	VMUMachOHeader *_hdr;	// 36 = 0x24
}
+ (unsigned long long)constantClassAttributeWithMemoryView:(id)memoryView form:(unsigned long long)form;	// 0x31f5d5dd
+ (id)dwarfExtractorWithMachOHeader:(id)machOHeader;	// 0x31f5d595
- (id)initWithMachOHeader:(id)machOHeader;	// 0x31f5e8ed
- (void)dealloc;	// 0x31f5e83d
- (id)parseAbbrevDictionaryAtOffset:(unsigned)offset;	// 0x31f5d3c5
- (void)parseCompilationUnitWithMemoryView:(id)memoryView withHeader:(id)header;	// 0x31f5de65
- (void)parseLineNumberMatrixAtOffset:(unsigned long long)offset withBaseDirectory:(id)baseDirectory withWordSize:(unsigned char)wordSize;	// 0x31f5d6b1
@end

