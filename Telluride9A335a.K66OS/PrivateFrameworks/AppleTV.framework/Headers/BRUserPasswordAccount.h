/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRAccount.h"

@class NSString;

@interface BRUserPasswordAccount : BRAccount {
@private
	NSString *_password;	// 36 = 0x24
}
@property(retain) NSString *password;	// G=0x34282b81; S=0x34282b91; converted property
- (void)_readProtectedInfo:(id)info;	// 0x34282cc1
- (void)_writeProtectedInfo:(id)info;	// 0x34282c75
- (void)dealloc;	// 0x34282b35
// converted property getter: - (id)password;	// 0x34282b81
// converted property setter: - (void)setPassword:(id)password;	// 0x34282b91
@end

