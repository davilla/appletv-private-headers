/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class PBStreamWriter, PBDataWriter;

@interface PBMessageStreamWriter : NSObject {
	PBStreamWriter *_writer;	// 4 = 0x4
	PBDataWriter *_messageWriter;	// 8 = 0x8
}
@property(retain) PBDataWriter *messageWriter;	// G=0x300cff71; S=0x300cff85; @synthesize=_messageWriter
@property(retain) PBStreamWriter *writer;	// G=0x300cff39; S=0x300cff4d; @synthesize=_writer
- (id)initWithOutputStream:(id)outputStream;	// 0x300cfd79
- (void)dealloc;	// 0x300cfe1d
// declared property getter: - (id)messageWriter;	// 0x300cff71
// declared property setter: - (void)setMessageWriter:(id)writer;	// 0x300cff85
// declared property setter: - (void)setWriter:(id)writer;	// 0x300cff4d
- (BOOL)writeMessage:(id)message;	// 0x300cfe75
// declared property getter: - (id)writer;	// 0x300cff39
@end
