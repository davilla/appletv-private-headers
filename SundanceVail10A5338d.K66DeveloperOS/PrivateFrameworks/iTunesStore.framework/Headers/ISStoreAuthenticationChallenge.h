/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
	int _failureCount;	// 12 = 0xc
	BOOL _hasPassword;	// 16 = 0x10
	NSString *_password;	// 20 = 0x14
	id<NSURLAuthenticationChallengeSender> _sender;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	BOOL _userNameIsEditable;	// 32 = 0x20
}
@property(assign) int failureCount;	// G=0x3092bd8d; S=0x3092bda1; @synthesize=_failureCount
@property(assign) BOOL hasPassword;	// G=0x3092bdb9; S=0x3092bdd1; @synthesize=_hasPassword
@property(retain) NSString *password;	// G=0x3092bde9; S=0x3092bdfd; @synthesize=_password
@property(assign) id<NSURLAuthenticationChallengeSender> sender;	// G=0x3092be0d; S=0x3092be21; @synthesize=_sender
@property(retain) NSString *user;	// G=0x3092be39; S=0x3092be4d; @synthesize=_user
@property(assign) BOOL userNameIsEditable;	// G=0x3092be5d; S=0x3092be75; @synthesize=_userNameIsEditable
- (id)init;	// 0x3092bc79
- (void)dealloc;	// 0x3092bd31
// declared property getter: - (int)failureCount;	// 0x3092bd8d
// declared property getter: - (BOOL)hasPassword;	// 0x3092bdb9
// declared property getter: - (id)password;	// 0x3092bde9
// declared property getter: - (id)sender;	// 0x3092be0d
// declared property setter: - (void)setFailureCount:(int)count;	// 0x3092bda1
// declared property setter: - (void)setHasPassword:(BOOL)password;	// 0x3092bdd1
// declared property setter: - (void)setPassword:(id)password;	// 0x3092bdfd
// declared property setter: - (void)setSender:(id)sender;	// 0x3092be21
// declared property setter: - (void)setUser:(id)user;	// 0x3092be4d
// declared property setter: - (void)setUserNameIsEditable:(BOOL)editable;	// 0x3092be75
// declared property getter: - (id)user;	// 0x3092be39
// declared property getter: - (BOOL)userNameIsEditable;	// 0x3092be5d
- (BOOL)userNameIsEmail;	// 0x3092bd89
@end
