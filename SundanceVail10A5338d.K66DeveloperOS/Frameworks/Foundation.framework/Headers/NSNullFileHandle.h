/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileHandle.h"


__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle {
}
@property(retain) id readabilityHandler;	// G=0x37371b39; S=0x37371b35; converted property
@property(retain) id writeabilityHandler;	// G=0x37371b31; S=0x37371b2d; converted property
- (id)availableData;	// 0x37371aad
- (void)closeFile;	// 0x37371b21
- (int)fileDescriptor;	// 0x37371b25
- (unsigned long long)offsetInFile;	// 0x37371b05
- (id)readDataOfLength:(unsigned)length;	// 0x37371ae5
- (id)readDataToEndOfFile;	// 0x37371ac9
// converted property getter: - (id)readabilityHandler;	// 0x37371b39
- (unsigned long long)seekToEndOfFile;	// 0x37371b0d
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x37371b15
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x37371b35
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x37371b2d
- (void)synchronizeFile;	// 0x37371b1d
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x37371b19
- (void)writeData:(id)data;	// 0x37371b01
// converted property getter: - (id)writeabilityHandler;	// 0x37371b31
@end

