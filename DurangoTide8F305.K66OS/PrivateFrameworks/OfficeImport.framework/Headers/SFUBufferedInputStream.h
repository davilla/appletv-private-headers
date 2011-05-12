/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "SFUInputStream.h"
#import <NSObject.h> // Unknown library
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
	unsigned mBufferSize;	// 12 = 0xc
	unsigned mBufferOffset;	// 16 = 0x10
	long long mBufferStart;	// 20 = 0x14
	long long mBufferEnd;	// 28 = 0x1c
}
- (id)initWithStream:(id)stream;	// 0x346496cd
- (id)initWithStream:(id)stream bufferSize:(unsigned long)size;	// 0x345030c1
- (id)initWithStream:(id)stream dataLength:(long long)length;	// 0x3450308d
- (BOOL)canSeek;	// 0x3450362d
- (void)close;	// 0x34504d69
- (id)closeLocalStream;	// 0x3464967d
- (void)dealloc;	// 0x34504075
- (void)disableSystemCaching;	// 0x346496ad
- (void)enableSystemCaching;	// 0x3464968d
- (long long)offset;	// 0x346495f9
- (unsigned long)readToBuffer:(char *)buffer size:(unsigned long)size;	// 0x346496e5
- (unsigned long)readToOwnBuffer:(const char **)ownBuffer size:(unsigned long)size;	// 0x34503655
- (void)seekToOffset:(long long)offset;	// 0x34503571
- (BOOL)seekWithinBufferToOffset:(long long)offset;	// 0x34649625
@end

