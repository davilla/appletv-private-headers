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
@property(assign) unsigned long connectionNumber;	// G=0x332cec61; S=0x332cec71; converted property
- (id)initWithConnectionNumber:(unsigned long)connectionNumber;	// 0x332cec81
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x332ced79
// converted property getter: - (unsigned long)connectionNumber;	// 0x332cec61
- (id)contentForTCP;	// 0x332ced01
- (id)description;	// 0x332cecbd
// converted property setter: - (void)setConnectionNumber:(unsigned long)number;	// 0x332cec71
@end

