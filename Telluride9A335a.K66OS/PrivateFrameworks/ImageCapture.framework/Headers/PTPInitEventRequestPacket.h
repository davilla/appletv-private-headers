/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPInitEventRequestPacket : NSObject {
	unsigned _connectionNumber;	// 4 = 0x4
}
@property(assign) unsigned long connectionNumber;	// G=0x36de4e49; S=0x36de4e59; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber;	// 0x36de4e69
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x36de4f71
// converted property getter: - (unsigned long)connectionNumber;	// 0x36de4e49
- (id)contentForTCP;	// 0x36de4ef1
- (id)description;	// 0x36de4ea9
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x36de4e59
@end

