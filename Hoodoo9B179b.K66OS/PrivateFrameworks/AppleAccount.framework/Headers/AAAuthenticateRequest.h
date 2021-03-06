/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import "AARequest.h"

@class NSString;

@interface AAAuthenticateRequest : AARequest {
	NSString *_username;	// 12 = 0xc
	NSString *_password;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *password;	// G=0x342e897d; S=0x342e898d; @synthesize=_password
@property(copy, nonatomic) NSString *username;	// G=0x342e8949; S=0x342e8959; @synthesize=_username
+ (Class)responseClass;	// 0x342e85f5
- (id)initWithURLString:(id)urlstring username:(id)username password:(id)password;	// 0x342e8671
- (id)initWithUsername:(id)username password:(id)password;	// 0x342e8611
- (void)dealloc;	// 0x342e877d
// declared property getter: - (id)password;	// 0x342e897d
// declared property setter: - (void)setPassword:(id)password;	// 0x342e898d
// declared property setter: - (void)setUsername:(id)username;	// 0x342e8959
- (id)urlCredential;	// 0x342e8731
- (id)urlRequest;	// 0x342e87dd
- (id)urlString;	// 0x342e86e9
// declared property getter: - (id)username;	// 0x342e8949
@end

