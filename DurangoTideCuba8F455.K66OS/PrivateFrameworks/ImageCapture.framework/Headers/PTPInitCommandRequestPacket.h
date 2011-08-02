/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {
	unsigned char _initiatorGUID[16];	// 4 = 0x4
	NSString *_initiatorFriendlyName;	// 20 = 0x14
}
@property(retain) NSString *initiatorFriendlyName;	// G=0x332ce7ed; S=0x332ce7fd; converted property
- (id)initWithInitiatorGUID:(char *)initiatorGUID initiatorFriendlyName:(id)name;	// 0x332cea09
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x332ce989
- (id)contentForTCP;	// 0x332ceac5
- (void)dealloc;	// 0x332ce941
- (id)description;	// 0x332ce871
// converted property getter: - (id)initiatorFriendlyName;	// 0x332ce7ed
- (const char *)initiatorGUID;	// 0x332ce7dd
// converted property setter: - (void)setInitiatorFriendlyName:(id)name;	// 0x332ce7fd
- (void)setInitiatorGUID:(char *)guid;	// 0x332ceaa9
@end

