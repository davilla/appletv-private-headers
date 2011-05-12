/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessage.h"

@class NSString, NSDictionary;

@interface FTProfileAuthenticationMessage : FTMessage {
	NSString *_username;	// 24 = 0x18
	NSString *_password;	// 28 = 0x1c
	NSString *_profileID;	// 32 = 0x20
	NSString *_authToken;	// 36 = 0x24
	NSDictionary *_responseAlert;	// 40 = 0x28
}
@property(copy) NSString *password;	// G=0x31c1ffcd; S=0x31c20055; @synthesize=_password
@property(copy) NSDictionary *responseAlertInfo;	// G=0x31c20015; S=0x31c200cd; @synthesize=_responseAlert
@property(copy) NSString *responseAuthorizationToken;	// G=0x31c1fffd; S=0x31c200a5; @synthesize=_authToken
@property(copy) NSString *responseProfileID;	// G=0x31c1ffe5; S=0x31c2007d; @synthesize=_profileID
@property(copy) NSString *username;	// G=0x31c1ffb5; S=0x31c2002d; @synthesize=_username
- (id)bagKey;	// 0x31c1fcd9
- (void)dealloc;	// 0x31c1fd4d
- (void)handleResponseDictionary:(id)dictionary;	// 0x31c1ff05
- (id)messageBody;	// 0x31c1fddd
// declared property getter: - (id)password;	// 0x31c1ffcd
- (BOOL)payloadCanBeLogged;	// 0x31c1fcd5
- (id)requiredKeys;	// 0x31c1fce5
// declared property getter: - (id)responseAlertInfo;	// 0x31c20015
// declared property getter: - (id)responseAuthorizationToken;	// 0x31c1fffd
// declared property getter: - (id)responseProfileID;	// 0x31c1ffe5
// declared property setter: - (void)setPassword:(id)password;	// 0x31c20055
// declared property setter: - (void)setResponseAlertInfo:(id)info;	// 0x31c200cd
// declared property setter: - (void)setResponseAuthorizationToken:(id)token;	// 0x31c200a5
// declared property setter: - (void)setResponseProfileID:(id)anId;	// 0x31c2007d
// declared property setter: - (void)setUsername:(id)username;	// 0x31c2002d
// declared property getter: - (id)username;	// 0x31c1ffb5
@end

