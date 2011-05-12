/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@protocol VMUMemory;

@interface VMUFatArch : NSObject {
	unsigned _fileOffset;	// 4 = 0x4
	unsigned _size;	// 8 = 0x8
	unsigned _alignment;	// 12 = 0xc
	id<VMUMemory> _memory;	// 16 = 0x10
}
@property(readonly, assign) unsigned alignment;	// G=0x31187d51; converted property
@property(readonly, assign) unsigned fileOffset;	// G=0x31187d31; converted property
@property(readonly, assign) unsigned size;	// G=0x31187d41; converted property
+ (id)fatArchWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x31187e55
+ (id)fatArchWithMemory:(id)memory memoryView:(id)view;	// 0x31187ea5
- (id)initWithMemory:(id)memory fileOffset:(unsigned)offset size:(unsigned)size alignment:(unsigned)alignment;	// 0x31187ddd
- (id)initWithMemory:(id)memory memoryView:(id)view;	// 0x31187ee9
// converted property getter: - (unsigned)alignment;	// 0x31187d51
- (id)architecture;	// 0x31187dbd
- (void)dealloc;	// 0x31187d71
// converted property getter: - (unsigned)fileOffset;	// 0x31187d31
- (id)memory;	// 0x31187d61
// converted property getter: - (unsigned)size;	// 0x31187d41
@end

