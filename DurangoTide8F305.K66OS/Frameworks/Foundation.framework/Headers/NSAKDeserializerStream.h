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
- (id)initFromMemoryNoCopy:(const void *)memoryNoCopy length:(unsigned)length freeWhenDone:(BOOL)done;	// 0x3281942d
- (id)initFromPath:(id)path;	// 0x32819e39
- (void)dealloc;	// 0x32819b3d
- (void)finalize;	// 0x32819ae5
- (unsigned)readAlignedDataSize;	// 0x3281992d
- (void)readData:(void *)data length:(unsigned)length;	// 0x32819dbd
- (int)readInt;	// 0x328199fd
@end

