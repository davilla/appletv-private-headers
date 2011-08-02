/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface Buffer : NSObject {
@private
	char *buf;	// 4 = 0x4
	int index;	// 8 = 0x8
	int bitMask;	// 12 = 0xc
	int length;	// 16 = 0x10
}
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x3071d534
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x3071d560
- (int)getBits:(unsigned)bits;	// 0x3071d0f0
- (int)getByte;	// 0x3071d1e8
- (id)getBytes:(unsigned)bytes;	// 0x3071d29c
- (int)getIndex;	// 0x3071d08c
- (int)getInt;	// 0x3071d230
- (int)getLength;	// 0x3071d078
- (long long)getLong;	// 0x3071d4d4
- (id)getNullTerminatedString;	// 0x3071d33c
- (int)getShort;	// 0x3071d190
- (id)getString:(unsigned)string;	// 0x3071d424
- (char *)getUnreadData;	// 0x3071d0c8
- (int)getUnreadLength;	// 0x3071d0a0
@end

