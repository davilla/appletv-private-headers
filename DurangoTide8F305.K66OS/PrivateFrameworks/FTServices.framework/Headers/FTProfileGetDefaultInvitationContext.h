/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTProfileMessage.h"

@class NSDictionary, NSString;

@interface FTProfileGetDefaultInvitationContext : FTProfileMessage {
	NSString *_responseRegionID;	// 36 = 0x24
	NSString *_responseBasePhoneNumber;	// 40 = 0x28
	BOOL _responseValidated;	// 44 = 0x2c
	NSDictionary *_responseExtraInfo;	// 48 = 0x30
}
@property(copy) NSString *responseBasePhoneNumber;	// G=0x31c22275; S=0x31c222bd; @synthesize=_responseBasePhoneNumber
@property(copy) NSDictionary *responseExtraInfo;	// G=0x31c222a5; S=0x31c2230d; @synthesize=_responseExtraInfo
@property(copy) NSString *responseRegionID;	// G=0x31c2228d; S=0x31c222e5; @synthesize=_responseRegionID
@property(assign) BOOL responseValidated;	// G=0x31c22069; S=0x31c22079; @synthesize=_responseValidated
- (id)bagKey;	// 0x31c2205d
- (void)dealloc;	// 0x31c22101
- (void)handleResponseDictionary:(id)dictionary;	// 0x31c2216d
- (id)messageBody;	// 0x31c22089
- (id)requiredKeys;	// 0x31c220c5
// declared property getter: - (id)responseBasePhoneNumber;	// 0x31c22275
// declared property getter: - (id)responseExtraInfo;	// 0x31c222a5
// declared property getter: - (id)responseRegionID;	// 0x31c2228d
// declared property getter: - (BOOL)responseValidated;	// 0x31c22069
// declared property setter: - (void)setResponseBasePhoneNumber:(id)number;	// 0x31c222bd
// declared property setter: - (void)setResponseExtraInfo:(id)info;	// 0x31c2230d
// declared property setter: - (void)setResponseRegionID:(id)anId;	// 0x31c222e5
// declared property setter: - (void)setResponseValidated:(BOOL)validated;	// 0x31c22079
@end

