/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "MCPayload.h"

@class NSString;

@interface MCCardDAVAccountPayload : MCPayload {
	NSString *_accountDescription;	// 40 = 0x28
	NSString *_hostname;	// 44 = 0x2c
	NSString *_username;	// 48 = 0x30
	NSString *_password;	// 52 = 0x34
	NSString *_principalURL;	// 56 = 0x38
	BOOL _useSSL;	// 60 = 0x3c
	int _port;	// 64 = 0x40
	NSString *_accountPersistentUUID;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) NSString *accountDescription;	// G=0x32b1c51d; @synthesize=_accountDescription
@property(copy, nonatomic) NSString *accountPersistentUUID;	// G=0x32b1c4ad; S=0x32b1cd59; @synthesize=_accountPersistentUUID
@property(readonly, assign, nonatomic) NSString *hostname;	// G=0x32b1c50d; @synthesize=_hostname
@property(copy, nonatomic) NSString *password;	// G=0x32b1c4ed; S=0x32b1cd2d; @synthesize=_password
@property(readonly, assign, nonatomic) int port;	// G=0x32b1c4bd; @synthesize=_port
@property(readonly, assign, nonatomic) NSString *principalURL;	// G=0x32b1c4dd; @synthesize=_principalURL
@property(readonly, assign, nonatomic) BOOL useSSL;	// G=0x32b1c4cd; @synthesize=_useSSL
@property(copy, nonatomic) NSString *username;	// G=0x32b1c4fd; S=0x32b1cd01; @synthesize=_username
+ (id)localizedDescriptionForPayloadCount:(unsigned)payloadCount;	// 0x32b1cd85
+ (id)typeStrings;	// 0x32b1c869
- (id)initWithDictionary:(id)dictionary profile:(id)profile outError:(id *)error;	// 0x32b1c891
// declared property getter: - (id)accountDescription;	// 0x32b1c51d
// declared property getter: - (id)accountPersistentUUID;	// 0x32b1c4ad
- (void)dealloc;	// 0x32b1c7c5
- (id)description;	// 0x32b1c645
// declared property getter: - (id)hostname;	// 0x32b1c50d
// declared property getter: - (id)password;	// 0x32b1c4ed
// declared property getter: - (int)port;	// 0x32b1c4bd
// declared property getter: - (id)principalURL;	// 0x32b1c4dd
// declared property setter: - (void)setAccountPersistentUUID:(id)uuid;	// 0x32b1cd59
// declared property setter: - (void)setPassword:(id)password;	// 0x32b1cd2d
// declared property setter: - (void)setUsername:(id)username;	// 0x32b1cd01
- (id)stubDictionary;	// 0x32b1c57d
- (id)subtitle1Description;	// 0x32b1c541
- (id)subtitle1Label;	// 0x32b1cced
- (id)subtitle2Description;	// 0x32b1c52d
- (id)subtitle2Label;	// 0x32b1ccd9
- (id)title;	// 0x32b1c555
// declared property getter: - (BOOL)useSSL;	// 0x32b1c4cd
// declared property getter: - (id)username;	// 0x32b1c4fd
@end

