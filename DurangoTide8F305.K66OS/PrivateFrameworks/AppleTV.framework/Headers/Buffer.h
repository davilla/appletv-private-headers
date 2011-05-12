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
- (id)initWithData:(char *)data length:(unsigned)length;	// 0x307d5414
- (id)initWithData:(char *)data offset:(unsigned)offset length:(unsigned)length;	// 0x307d5440
- (int)getBits:(unsigned)bits;	// 0x307d4fd0
- (int)getByte;	// 0x307d50c8
- (id)getBytes:(unsigned)bytes;	// 0x307d517c
- (int)getIndex;	// 0x307d4f6c
- (int)getInt;	// 0x307d5110
- (int)getLength;	// 0x307d4f58
- (long long)getLong;	// 0x307d53b4
- (id)getNullTerminatedString;	// 0x307d521c
- (int)getShort;	// 0x307d5070
- (id)getString:(unsigned)string;	// 0x307d5304
- (char *)getUnreadData;	// 0x307d4fa8
- (int)getUnreadLength;	// 0x307d4f80
@end

