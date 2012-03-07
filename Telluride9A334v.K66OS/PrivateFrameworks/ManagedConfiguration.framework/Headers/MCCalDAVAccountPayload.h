/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCalDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x3474e961; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x3474e8f1; S=0x3474eaf1; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x3474e951; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x3474e931; S=0x3474eacd; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x3474e901; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x3474e921; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x3474e911; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x3474e941; S=0x3474eaa9; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x3474ea21
+ (id)typeStrings;	// 0x3474ea81
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x3474ee25
// declared property getter: - (id)accountDescription;	// 0x3474e961
// declared property getter: - (id)accountPersistentUUID;	// 0x3474e8f1
- (void)dealloc;	// 0x3474e971
- (id)description;	// 0x3474ec69
// declared property getter: - (id)hostname;	// 0x3474e951
// declared property getter: - (id)password;	// 0x3474e931
// declared property getter: - (int)port;	// 0x3474e901
// declared property getter: - (id)principalURL;	// 0x3474e921
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x3474eaf1
// declared property setter: - (void)setPassword:(id)password;	// 0x3474eacd
// declared property setter: - (void)setUsername:(id)username;	// 0x3474eaa9
- (id)stubDictionary;	// 0x3474eb85
- (id)subtitle1Description;	// 0x3474eb35
- (id)subtitle1Label;	// 0x3474eb45
- (id)subtitle2Description;	// 0x3474eb15
- (id)subtitle2Label;	// 0x3474eb25
- (id)title;	// 0x3474eb55
// declared property getter: - (BOOL)useSSL;	// 0x3474e911
// declared property getter: - (id)username;	// 0x3474e941
@end
