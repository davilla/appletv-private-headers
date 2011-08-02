/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSDeserializerStream.h"


@interface NSAKDeserializerStream : NSObject <NSDeserializerStream> {
	void *memory;	// 4 = 0x4
	char *current;	// 8 = 0x8
	unsigned left;	// 12 = 0xc
	unsigned max;	// 16 = 0x10
	BOOL freeWhenDone;	// 20 = 0x14
}
- (id)initFromMemoryNoCopy:(const void *)memoryNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x310db42d
- (id)initFromPath:(id)path;	// 0x310dbe39
- (void)dealloc;	// 0x310dbb3d
- (void)finalize;	// 0x310dbae5
- (unsigned)readAlignedDataSize;	// 0x310db92d
- (void)readData:(void *)data length:(unsigned)length;	// 0x310dbdbd
- (int)readInt;	// 0x310db9fd
@end

