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
- (id)availableData;	// 0x3104d9f5
- (void)closeFile;	// 0x3104d5f9
- (int)fileDescriptor;	// 0x3104d5fd
- (unsigned long long)offsetInFile;	// 0x3104d5dd
- (id)readDataOfLength:(unsigned)length;	// 0x3104d9b5
- (id)readDataToEndOfFile;	// 0x3104d9d5
- (unsigned long long)seekToEndOfFile;	// 0x3104d5e5
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x3104d5ed
- (void)synchronizeFile;	// 0x3104d5f5
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x3104d5f1
- (void)writeData:(id)data;	// 0x3104d5d9
@end

