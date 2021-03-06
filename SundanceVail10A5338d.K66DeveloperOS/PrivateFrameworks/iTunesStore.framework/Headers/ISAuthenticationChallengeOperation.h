/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISDialogOperation.h"

@class ISAuthenticationChallenge;

@interface ISAuthenticationChallengeOperation : ISDialogOperation {
	ISAuthenticationChallenge *_challenge;	// 80 = 0x50
}
@property(retain) ISAuthenticationChallenge *challenge;	// G=0x3092bb3d; S=0x3092bb51; @synthesize=_challenge
+ (id)operationWithChallenge:(id)challenge;	// 0x3092b881
- (id)_copyCredentialForSignInResponseDictionary:(id)responseDictionary;	// 0x3092ba41
// declared property getter: - (id)challenge;	// 0x3092bb3d
- (void)dealloc;	// 0x3092b83d
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x3092b8e5
- (void)run;	// 0x3092b991
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x3092bb51
@end

