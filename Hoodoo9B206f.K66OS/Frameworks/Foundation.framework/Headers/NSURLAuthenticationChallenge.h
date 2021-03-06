/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCoding.h"
#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURLAuthenticationChallengeInternal;

@interface NSURLAuthenticationChallenge : NSObject <NSCoding> {
@private
	NSURLAuthenticationChallengeInternal *_internal;	// 4 = 0x4
}
@property(retain) id sender;	// G=0x31dada05; S=0x31dadc01; converted property
+ (id)_createAuthenticationChallengeForCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x31dadaf5
- (id)init;	// 0x31dad5e5
- (id)initWithAuthenticationChallenge:(id)authenticationChallenge sender:(id)sender;	// 0x31dad691
- (id)initWithCoder:(id)coder;	// 0x31dada99
- (id)initWithProtectionSpace:(id)protectionSpace proposedCredential:(id)credential previousFailureCount:(int)count failureResponse:(id)response error:(id)error sender:(id)sender;	// 0x31dad5fd
- (CFURLAuthChallengeRef)_createCFAuthChallenge;	// 0x31dadb31
- (id)_initWithCFAuthChallenge:(CFURLAuthChallengeRef)cfauthChallenge sender:(id)sender;	// 0x31dad781
- (void)dealloc;	// 0x31dad889
- (void)encodeWithCoder:(id)coder;	// 0x31dada49
- (id)error;	// 0x31dad97d
- (id)failureResponse;	// 0x31dad9c1
- (int)previousFailureCount;	// 0x31dad95d
- (id)proposedCredential;	// 0x31dad919
- (id)protectionSpace;	// 0x31dad8d5
// converted property getter: - (id)sender;	// 0x31dada05
// converted property setter: - (void)setSender:(id)sender;	// 0x31dadc01
@end

