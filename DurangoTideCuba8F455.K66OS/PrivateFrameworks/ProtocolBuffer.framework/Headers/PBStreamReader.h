/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataReader.h"

@class NSInputStream;

@interface PBStreamReader : PBDataReader {
	NSInputStream *_stream;	// 20 = 0x14
}
@property(retain) NSInputStream *stream;	// G=0x315742a1; S=0x315742b9; @synthesize=_stream
+ (id)readProtoBuffersOfClass:(Class)aClass fromFile:(id)file error:(id *)error;	// 0x31573edd
- (id)initWithStream:(id)stream;	// 0x3157424d
- (void)dealloc;	// 0x31574211
- (int)read:(char *)read maxLength:(unsigned)length;	// 0x3157417d
- (id)readBytes:(unsigned)bytes;	// 0x315740f5
- (id)readProtoBuffer;	// 0x315741d5
- (BOOL)seekToOffset:(unsigned)offset;	// 0x315740dd
// declared property setter: - (void)setStream:(id)stream;	// 0x315742b9
// declared property getter: - (id)stream;	// 0x315742a1
@end

