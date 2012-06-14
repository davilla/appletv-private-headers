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

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned long mBufferSize;	// 12 = 0xc
	unsigned long mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithStream:(id)stream;	// 0x312c7645
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x310d50dd
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x310d50c1
- (BOOL)canSeek;	// 0x310d5681
- (void)close;	// 0x310d70c5
- (id)closeLocalStream;	// 0x312c7771
- (void)dealloc;	// 0x310d6111
- (void)disableSystemCaching;	// 0x312c7731
- (void)enableSystemCaching;	// 0x312c7751
- (long long)offset;	// 0x312c7659
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x312c7681
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x310d56a9
- (void)seekToOffset:(long long)offset;	// 0x310d5595
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x312c76b1
@end
