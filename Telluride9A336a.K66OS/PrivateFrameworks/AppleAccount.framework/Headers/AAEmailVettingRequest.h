/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAEmailVettingRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x3389d909; S=0x3389d919; @synthesize=_account
- (id)initWithAccount:(id)account;	// 0x3389d541
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x3389d589
// declared property getter: - (id)account;	// 0x3389d909
- (void)dealloc;	// 0x3389d8bd
// declared property setter: - (void)setAccount:(id)account;	// 0x3389d919
- (id)urlRequest;	// 0x3389d61d
@end

