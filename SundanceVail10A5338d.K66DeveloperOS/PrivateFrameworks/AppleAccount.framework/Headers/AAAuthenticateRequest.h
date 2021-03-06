/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount, NSString;

@interface AAAuthenticateRequest : AARequest {
	NSString *_username;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	AAAccount *_account;	// 24 = 0x18
}
@property(copy, nonatomic) AAAccount *account;	// G=0x34ce3c65; S=0x34ce3c79; @synthesize=_account
@property(copy, nonatomic) NSString *password;	// G=0x34ce3c41; S=0x34ce3c55; @synthesize=_password
@property(copy, nonatomic) NSString *username;	// G=0x34ce3c1d; S=0x34ce3c31; @synthesize=_username
+ (Class)responseClass;	// 0x34ce3621
- (id)initWithAccount:(id)account;	// 0x34ce363d
- (id)initWithURLString:(id)urlstring username:(id)username password:(id)password;	// 0x34ce3721
- (id)initWithUsername:(id)username password:(id)password;	// 0x34ce369d
- (void).cxx_destruct;	// 0x34ce3c89
// declared property getter: - (id)account;	// 0x34ce3c65
// declared property getter: - (id)password;	// 0x34ce3c41
// declared property setter: - (void)setAccount:(id)account;	// 0x34ce3c79
// declared property setter: - (void)setPassword:(id)password;	// 0x34ce3c55
// declared property setter: - (void)setUsername:(id)username;	// 0x34ce3c31
- (id)urlCredential;	// 0x34ce3845
- (id)urlRequest;	// 0x34ce3891
- (id)urlString;	// 0x34ce37d1
// declared property getter: - (id)username;	// 0x34ce3c1d
@end

