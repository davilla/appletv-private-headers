/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSDictionary, NSString, NSArray;

@interface FTRegistrationMessage : FTMessage {
	NSArray *_supportedProtocols;	// 24 = 0x18
	NSDictionary *_aliasInfo;	// 28 = 0x1c
	NSString *_responseSignature;	// 32 = 0x20
	NSString *_responseUserID;	// 36 = 0x24
	NSDictionary *_responseAliasInfo;	// 40 = 0x28
}
@property(copy) NSDictionary *aliasInfo;	// G=0x33fa4a09; S=0x33fa4a91; @synthesize=_aliasInfo
@property(copy) NSDictionary *responseAliasInfo;	// G=0x33fa4a51; S=0x33fa4b09; @synthesize=_responseAliasInfo
@property(copy) NSString *responseSignature;	// G=0x33fa4a21; S=0x33fa4ab9; @synthesize=_responseSignature
@property(copy) NSString *responseUserID;	// G=0x33fa4a39; S=0x33fa4ae1; @synthesize=_responseUserID
@property(copy) NSArray *supportedProtocols;	// G=0x33fa49f1; S=0x33fa4a69; @synthesize=_supportedProtocols
- (id)additionalMessageHeaders;	// 0x33fa446d
// declared property getter: - (id)aliasInfo;	// 0x33fa4a09
- (id)bagKey;	// 0x33fa437d
- (void)dealloc;	// 0x33fa43dd
- (void)handleResponseDictionary:(id)dictionary;	// 0x33fa470d
- (id)messageBody;	// 0x33fa4655
- (id)requiredKeys;	// 0x33fa4389
// declared property getter: - (id)responseAliasInfo;	// 0x33fa4a51
// declared property getter: - (id)responseSignature;	// 0x33fa4a21
// declared property getter: - (id)responseUserID;	// 0x33fa4a39
// declared property setter: - (void)setAliasInfo:(id)info;	// 0x33fa4a91
// declared property setter: - (void)setResponseAliasInfo:(id)info;	// 0x33fa4b09
// declared property setter: - (void)setResponseSignature:(id)signature;	// 0x33fa4ab9
// declared property setter: - (void)setResponseUserID:(id)anId;	// 0x33fa4ae1
// declared property setter: - (void)setSupportedProtocols:(id)protocols;	// 0x33fa4a69
// declared property getter: - (id)supportedProtocols;	// 0x33fa49f1
@end

