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
@property(readonly, assign) unsigned long long address;	// G=0x311896dd; converted property
@property(retain) NSString *dsymPath;	// G=0x3118969d; S=0x3118a031; converted property
@property(readonly, assign) unsigned fileType;	// G=0x3118970d; converted property
@property(readonly, assign) unsigned flags;	// G=0x3118971d; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x311896ed; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x311896cd; converted property
@property(retain) NSString *name;	// G=0x3118967d; S=0x3118a0a1; converted property
@property(retain) NSString *path;	// G=0x3118968d; S=0x3118a069; converted property
@property(retain) NSDate *timestamp;	// G=0x311896ad; S=0x31189ff9; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x311896fd; converted property
// converted property getter: - (unsigned long long)address;	// 0x311896dd
- (id)architecture;	// 0x31189fd9
- (id)commpage;	// 0x311899a5
- (unsigned)compatibilityVersion;	// 0x31189bf1
- (unsigned)currentVersion;	// 0x31189c75
- (void)dealloc;	// 0x3118a0d9
- (id)description;	// 0x31189741
// converted property getter: - (id)dsymPath;	// 0x3118969d
- (id)dyLinkerPath;	// 0x31189cf9
- (id)dySymbolTable;	// 0x31189d7d
// converted property getter: - (unsigned)fileType;	// 0x3118970d
// converted property getter: - (unsigned)flags;	// 0x3118971d
- (BOOL)isCommpage;	// 0x31189b41
- (BOOL)isFromSharedCache;	// 0x3118972d
- (BOOL)isMachO;	// 0x3118973d
- (BOOL)isProtected;	// 0x3118990d
// converted property getter: - (unsigned long long)linkEditBase;	// 0x311896ed
// converted property getter: - (id)loadCommands;	// 0x311896cd
- (id)memory;	// 0x311896bd
// converted property getter: - (id)name;	// 0x3118967d
// converted property getter: - (id)path;	// 0x3118968d
- (id)regions;	// 0x3118a309
- (id)sections;	// 0x31189e6d
- (id)segmentAddresses;	// 0x3118a195
- (id)segmentNamed:(id)named;	// 0x31189f2d
// converted property setter: - (void)setDsymPath:(id)path;	// 0x3118a031
// converted property setter: - (void)setName:(id)name;	// 0x3118a0a1
// converted property setter: - (void)setPath:(id)path;	// 0x3118a069
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x31189ff9
- (id)signature;	// 0x311897b5
- (id)symbolTable;	// 0x31189df5
// converted property getter: - (id)timestamp;	// 0x311896ad
- (id)uuid;	// 0x31189b6d
// converted property getter: - (long long)vmaddrSlide;	// 0x311896fd
@end

