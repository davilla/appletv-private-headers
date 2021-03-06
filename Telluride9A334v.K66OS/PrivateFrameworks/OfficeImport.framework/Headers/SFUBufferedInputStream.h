/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "SFUBufferedInputStream.h"
#import "SFUInputStream.h"


@protocol SFUBufferedInputStream <SFUInputStream>
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;
- (BOOL)seekWithinBufferToOffset:(long long)offset;
@end

__attribute__((visibility("hidden")))
@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream> {
@private
	id<SFUInputStream> mStream;	// 4 = 0x4
	char *mBuffer;	// 8 = 0x8
	unsigned mBufferSize;	// 12 = 0xc
	unsigned mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithSFUStream:(id)sfustream;	// 0x357bbc85
- (id)initWithStream:(id)stream;	// 0x357bbc99
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x35663501
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x356634bd
- (BOOL)canSeek;	// 0x35663af5
- (void)close;	// 0x35665695
- (id)closeLocalStream;	// 0x357bbc75
- (void)dealloc;	// 0x35664659
- (void)disableSystemCaching;	// 0x357bbcad
- (void)enableSystemCaching;	// 0x357bbccd
- (long long)offset;	// 0x357bbbd1
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x357bbced
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x35663b1d
- (void)seekToOffset:(long long)offset;	// 0x35663a09
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x357bbbf9
@end

