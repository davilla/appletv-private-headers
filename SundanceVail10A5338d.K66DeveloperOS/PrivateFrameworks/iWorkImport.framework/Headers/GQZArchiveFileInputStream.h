/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQZArchiveInputStream.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQZArchiveFileInputStream : NSObject <GQZArchiveInputStream> {
	FILE *mFile;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	long long mBufferStart;	// 12 = 0xc
	long long mBufferEnd;	// 20 = 0x14
	long long mSize;	// 28 = 0x1c
}
- (id)initWithPath:(id)path;	// 0x350b858d
- (const char *)dataAtOffset:(long long)offset size:(unsigned long)size end:(long long)end readSize:(unsigned *)size4;	// 0x350b881d
- (void)dealloc;	// 0x350b87c5
- (void)readFromOffset:(long long)offset size:(unsigned long)size buffer:(char *)buffer;	// 0x350b8a9d
- (long long)size;	// 0x350b8b61
@end

