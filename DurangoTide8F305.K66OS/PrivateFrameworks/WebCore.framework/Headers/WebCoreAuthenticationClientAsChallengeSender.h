/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "NSURLAuthenticationChallengeSender.h"
#import "WebCore-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface WebCoreAuthenticationClientAsChallengeSender : NSObject <NSURLAuthenticationChallengeSender> {
@private
	AuthenticationClient *m_client;	// 4 = 0x4
}
- (id)initWithAuthenticationClient:(AuthenticationClient *)authenticationClient;	// 0x3161e585
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x3161f041
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x3161f129
- (void)detachClient;	// 0x3161e551
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x3161f211
@end

