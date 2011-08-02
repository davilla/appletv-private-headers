/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import "PBDataWriter.h"

@class NSOutputStream;

@interface PBStreamWriter : PBDataWriter {
	NSOutputStream *_stream;	// 8 = 0x8
}
@property(retain) NSOutputStream *stream;	// G=0x315736b1; S=0x315736c9; @synthesize=_stream
+ (id)writeProtoBuffers:(id)buffers toFile:(id)file;	// 0x315736f5
- (id)initWithOutputStream:(id)outputStream;	// 0x3157366d
- (void)dealloc;	// 0x31573631
// declared property setter: - (void)setStream:(id)stream;	// 0x315736c9
// declared property getter: - (id)stream;	// 0x315736b1
- (int)write:(char *)write maxLength:(unsigned)length;	// 0x31573605
@end

