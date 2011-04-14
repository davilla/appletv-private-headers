/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject {
@private
	NSURLAuthenticationChallengeInternal *_internal;	// 4 = 0x4
}
+ (id)_authenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x324bb9a9
- (id)init;	// 0x324bb785
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge sender:(id)sender;	// 0x324bb61d
- (id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;	// 0x324bb701
- (CFURLAuthChallengeRef)_createCFAuthChallenge;	// 0x324bb8e9
- (void)dealloc;	// 0x324bb5d5
- (id)error;	// 0x324bb521
- (id)failureResponse;	// 0x324bb4e5
- (int)previousFailureCount;	// 0x324bb48d
- (id)proposedCredential;	// 0x324bb55d
- (id)protectionSpace;	// 0x324bb599
- (id)sender;	// 0x324bb4a9
@end
