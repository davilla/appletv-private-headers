/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSString, NSArray, NSDate;
@protocol VMUMemory;

@interface VMUMachOHeader : VMUHeader {
	NSString *_name;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSString *_dsymPath;	// 12 = 0xc
	NSDate *_timestamp;	// 16 = 0x10
	id<VMUMemory> _memory;	// 20 = 0x14
	unsigned long long _address;	// 24 = 0x18
	unsigned long long _linkEditBase;	// 32 = 0x20
	NSArray *_loadCommands;	// 40 = 0x28
	long long _vmaddrSlide;	// 44 = 0x2c
	unsigned _fileType;	// 52 = 0x34
	unsigned _flags;	// 56 = 0x38
}
@property(readonly, assign) unsigned long long address;	// G=0x32c9cbe1; converted property
@property(retain) NSString *dsymPath;	// G=0x32c9cba1; S=0x32c9cce1; converted property
@property(readonly, assign) unsigned fileType;	// G=0x32c9cc29; converted property
@property(readonly, assign) unsigned flags;	// G=0x32c9cc39; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x32c9cbf9; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x32c9cbd1; converted property
@property(retain) NSString *name;	// G=0x32c9cb81; S=0x32c9cc61; converted property
@property(retain) NSString *path;	// G=0x32c9cb91; S=0x32c9cca1; converted property
@property(retain) NSDate *timestamp;	// G=0x32c9cbb1; S=0x32c9cd21; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x32c9cc11; converted property
// converted property getter: - (unsigned long long)address;	// 0x32c9cbe1
- (id)architecture;	// 0x32c9cd61
- (id)commpage;	// 0x32c9d72d
- (unsigned)compatibilityVersion;	// 0x32c9d5e5
- (unsigned)currentVersion;	// 0x32c9d559
- (void)dealloc;	// 0x32c9dd1d
- (id)description;	// 0x32c9dca9
// converted property getter: - (id)dsymPath;	// 0x32c9cba1
- (id)dyLinkerPath;	// 0x32c9d4cd
- (id)dySymbolTable;	// 0x32c9d451
// converted property getter: - (unsigned)fileType;	// 0x32c9cc29
// converted property getter: - (unsigned)flags;	// 0x32c9cc39
- (BOOL)isCommpage;	// 0x32c9d6fd
- (BOOL)isFromSharedCache;	// 0x32c9cc49
- (BOOL)isMachO;	// 0x32c9cc5d
- (BOOL)isProtected;	// 0x32c9d8f1
// converted property getter: - (unsigned long long)linkEditBase;	// 0x32c9cbf9
// converted property getter: - (id)loadCommands;	// 0x32c9cbd1
- (id)memory;	// 0x32c9cbc1
// converted property getter: - (id)name;	// 0x32c9cb81
// converted property getter: - (id)path;	// 0x32c9cb91
- (id)regions;	// 0x32c9ceed
- (id)sections;	// 0x32c9ce29
- (id)segmentAddresses;	// 0x32c9d985
- (id)segmentNamed:(id)named;	// 0x32c9cd81
// converted property setter: - (void)setDsymPath:(id)path;	// 0x32c9cce1
// converted property setter: - (void)setName:(id)name;	// 0x32c9cc61
// converted property setter: - (void)setPath:(id)path;	// 0x32c9cca1
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x32c9cd21
- (id)signature;	// 0x32c9db15
- (id)symbolTable;	// 0x32c9d3d5
// converted property getter: - (id)timestamp;	// 0x32c9cbb1
- (id)uuid;	// 0x32c9d671
// converted property getter: - (long long)vmaddrSlide;	// 0x32c9cc11
@end

