/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class AAAccount;

@interface AAUpdateAccountRequest : AARequest {
	AAAccount *_account;	// 8 = 0x8
}
@property(retain, nonatomic) AAAccount *account;	// G=0x34320ced; S=0x3432251d; @synthesize=_account
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x343213fd
// declared property getter: - (id)account;	// 0x34320ced
- (void)dealloc;	// 0x343213b5
// declared property setter: - (void)setAccount:(id)account;	// 0x3432251d
- (id)urlRequest;	// 0x34321fbd
@end

