/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x3389c615; S=0x3389c625; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x3389c021
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3389c069
// declared property getter: - (id)account;	// 0x3389c615
- (void)dealloc;	// 0x3389c0c9
// declared property setter: - (void)setAccount:(id)account;	// 0x3389c625
- (id)urlRequest;	// 0x3389c149
- (id)urlString;	// 0x3389c115
@end
