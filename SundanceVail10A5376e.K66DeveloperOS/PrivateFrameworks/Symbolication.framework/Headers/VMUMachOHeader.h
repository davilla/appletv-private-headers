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
@property(readonly, assign) unsigned long long address;	// G=0x3221cf2d; converted property
@property(retain) NSString *dsymPath;	// G=0x3221cddd; S=0x3221ce75; converted property
@property(readonly, assign) unsigned fileType;	// G=0x3221cf75; converted property
@property(readonly, assign) unsigned flags;	// G=0x3221cf85; converted property
@property(readonly, assign) unsigned long long linkEditBase;	// G=0x3221cf45; converted property
@property(readonly, retain) NSArray *loadCommands;	// G=0x3221cf1d; converted property
@property(retain) NSString *name;	// G=0x3221cdbd; S=0x3221cdfd; converted property
@property(retain) NSString *path;	// G=0x3221cdcd; S=0x3221ce39; converted property
@property(retain) NSDate *timestamp;	// G=0x3221cded; S=0x3221ceb1; converted property
@property(readonly, assign) long long vmaddrSlide;	// G=0x3221cf5d; converted property
// converted property getter: - (unsigned long long)address;	// 0x3221cf2d
- (id)architecture;	// 0x3221cefd
- (id)commpage;	// 0x3221d945
- (unsigned)compatibilityVersion;	// 0x3221d7e5
- (unsigned)currentVersion;	// 0x3221d74d
- (void)dealloc;	// 0x3221df11
- (id)description;	// 0x3221de9d
// converted property getter: - (id)dsymPath;	// 0x3221cddd
- (id)dyLinkerPath;	// 0x3221d6b5
- (id)dySymbolTable;	// 0x3221d639
// converted property getter: - (unsigned)fileType;	// 0x3221cf75
// converted property getter: - (unsigned)flags;	// 0x3221cf85
- (BOOL)isCommpage;	// 0x3221d915
- (BOOL)isFromSharedCache;	// 0x3221cf95
- (BOOL)isMachO;	// 0x3221cfa9
- (BOOL)isProtected;	// 0x3221dafd
// converted property getter: - (unsigned long long)linkEditBase;	// 0x3221cf45
// converted property getter: - (id)loadCommands;	// 0x3221cf1d
- (id)memory;	// 0x3221ceed
// converted property getter: - (id)name;	// 0x3221cdbd
// converted property getter: - (id)path;	// 0x3221cdcd
- (id)regions;	// 0x3221d12d
- (id)sections;	// 0x3221d061
- (id)segmentAddresses;	// 0x3221db95
- (id)segmentNamed:(id)named;	// 0x3221cfad
// converted property setter: - (void)setDsymPath:(id)path;	// 0x3221ce75
// converted property setter: - (void)setName:(id)name;	// 0x3221cdfd
// converted property setter: - (void)setPath:(id)path;	// 0x3221ce39
// converted property setter: - (void)setTimestamp:(id)timestamp;	// 0x3221ceb1
- (id)signature;	// 0x3221dd25
- (id)symbolTable;	// 0x3221d5bd
// converted property getter: - (id)timestamp;	// 0x3221cded
- (id)uuid;	// 0x3221d87d
// converted property getter: - (long long)vmaddrSlide;	// 0x3221cf5d
@end

