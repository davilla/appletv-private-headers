/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library


@interface PTPCancelPacket : NSObject {
	unsigned long _transactionID;	// 4 = 0x4
}
@property(assign) unsigned long transactionID;	// G=0x328bff11; S=0x328bff21; converted property
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x328bfdf1
- (id)initWithTransactionID:(unsigned long)transactionID;	// 0x328bfdb1
- (id)contentForTCP;	// 0x328bfe49
- (id)description;	// 0x328bfec9
// converted property setter: - (void)setTransactionID:(unsigned long)anId;	// 0x328bff21
// converted property getter: - (unsigned long)transactionID;	// 0x328bff11
@end
