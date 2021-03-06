/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSString;

@interface FTProfileConfirmEmailsMessage : FTProfileMessage {
	NSString *_emailAddress;	// 36 = 0x24
	NSString *_vettingToken;	// 40 = 0x28
}
@property(copy) NSString *emailAddress;	// G=0x3473b305; S=0x3473b345; @synthesize=_emailAddress
@property(copy) NSString *vettingToken;	// G=0x3473b2ed; S=0x3473b31d; @synthesize=_vettingToken
- (id)bagKey;	// 0x3473b0f5
- (void)dealloc;	// 0x3473b169
// declared property getter: - (id)emailAddress;	// 0x3473b305
- (id)messageBody;	// 0x3473b1c5
- (id)requiredKeys;	// 0x3473b101
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x3473b345
// declared property setter: - (void)setVettingToken:(id)token;	// 0x3473b31d
// declared property getter: - (id)vettingToken;	// 0x3473b2ed
@end

