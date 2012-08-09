/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUInputStream.h"
#import "SFUBufferedInputStream.h"


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned long mBufferSize;	// 12 = 0xc
	unsigned long mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithStream:(id)stream;	// 0x31e47585
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x31c549fd
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x31c549e1
- (BOOL)canSeek;	// 0x31c54fa1
- (void)close;	// 0x31c569e5
- (id)closeLocalStream;	// 0x31e476b1
- (void)dealloc;	// 0x31c55a31
- (void)disableSystemCaching;	// 0x31e47671
- (void)enableSystemCaching;	// 0x31e47691
- (long long)offset;	// 0x31e47599
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x31e475c1
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x31c54fc9
- (void)seekToOffset:(long long)offset;	// 0x31c54eb5
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x31e475f1
@end
