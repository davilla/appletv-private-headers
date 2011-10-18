/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface VMUSection : NSObject {
	NSString *_sectionName;	// 4 = 0x4
	NSString *_segmentName;	// 8 = 0x8
	unsigned long long _addr;	// 12 = 0xc
	unsigned long long _size;	// 20 = 0x14
	unsigned _offset;	// 28 = 0x1c
	unsigned _align;	// 32 = 0x20
	unsigned _reloff;	// 36 = 0x24
	unsigned _nreloc;	// 40 = 0x28
	unsigned _flags;	// 44 = 0x2c
	unsigned _reserved1;	// 48 = 0x30
	unsigned _reserved2;	// 52 = 0x34
}
@property(readonly, assign) unsigned long long addr;	// G=0x31f6a86d; converted property
@property(readonly, assign) unsigned align;	// G=0x31f6a8ad; converted property
@property(readonly, assign) unsigned flags;	// G=0x31f6a8dd; converted property
@property(readonly, assign) unsigned nreloc;	// G=0x31f6a8cd; converted property
@property(readonly, assign) unsigned offset;	// G=0x31f6a89d; converted property
@property(readonly, assign) unsigned reloff;	// G=0x31f6a8bd; converted property
@property(readonly, assign) unsigned reserved1;	// G=0x31f6a8ed; converted property
@property(readonly, assign) unsigned reserved2;	// G=0x31f6a8fd; converted property
@property(readonly, retain) NSString *sectionName;	// G=0x31f6a84d; converted property
@property(readonly, retain) NSString *segmentName;	// G=0x31f6a85d; converted property
@property(readonly, assign) unsigned long long size;	// G=0x31f6a885; converted property
// converted property getter: - (unsigned long long)addr;	// 0x31f6a86d
// converted property getter: - (unsigned)align;	// 0x31f6a8ad
- (void)dealloc;	// 0x31f6a99d
- (id)description;	// 0x31f6a90d
// converted property getter: - (unsigned)flags;	// 0x31f6a8dd
- (BOOL)isSection32;	// 0x31f6a845
- (BOOL)isSection64;	// 0x31f6a849
// converted property getter: - (unsigned)nreloc;	// 0x31f6a8cd
// converted property getter: - (unsigned)offset;	// 0x31f6a89d
// converted property getter: - (unsigned)reloff;	// 0x31f6a8bd
// converted property getter: - (unsigned)reserved1;	// 0x31f6a8ed
// converted property getter: - (unsigned)reserved2;	// 0x31f6a8fd
// converted property getter: - (id)sectionName;	// 0x31f6a84d
// converted property getter: - (id)segmentName;	// 0x31f6a85d
// converted property getter: - (unsigned long long)size;	// 0x31f6a885
@end

