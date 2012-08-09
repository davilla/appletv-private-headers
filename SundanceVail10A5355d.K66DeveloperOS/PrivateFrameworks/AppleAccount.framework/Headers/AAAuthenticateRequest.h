/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class NSString, AAAccount;

@interface AAAuthenticateRequest : AARequest {
	NSString *_username;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	AAAccount *_account;	// 24 = 0x18
}
@property(copy, nonatomic) AAAccount *account;	// G=0x3574891d; S=0x35748931; @synthesize=_account
@property(copy, nonatomic) NSString *password;	// G=0x357488f9; S=0x3574890d; @synthesize=_password
@property(copy, nonatomic) NSString *username;	// G=0x357488d5; S=0x357488e9; @synthesize=_username
+ (Class)responseClass;	// 0x357482d9
- (id)initWithAccount:(id)account;	// 0x357482f5
- (id)initWithURLString:(id)urlstring username:(id)username password:(id)password;	// 0x357483d9
- (id)initWithUsername:(id)username password:(id)password;	// 0x35748355
- (void).cxx_destruct;	// 0x35748941
// declared property getter: - (id)account;	// 0x3574891d
// declared property getter: - (id)password;	// 0x357488f9
// declared property setter: - (void)setAccount:(id)account;	// 0x35748931
// declared property setter: - (void)setPassword:(id)password;	// 0x3574890d
// declared property setter: - (void)setUsername:(id)username;	// 0x357488e9
- (id)urlCredential;	// 0x357484fd
- (id)urlRequest;	// 0x35748549
- (id)urlString;	// 0x35748489
// declared property getter: - (id)username;	// 0x357488d5
@end
