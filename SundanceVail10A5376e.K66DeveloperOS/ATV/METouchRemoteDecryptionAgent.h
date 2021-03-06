/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface METouchRemoteDecryptionAgent : BRSingleton {
	NSData *_certData;	// 4 = 0x4
	NSData *_challenge;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0xdd29
+ (id)singleton;	// 0xdd19
- (id)init;	// 0xdd4d
- (void).cxx_destruct;	// 0xe095
- (id)_convertDataToString:(id)string;	// 0xe2b9
- (id)_convertStringToData:(id)data;	// 0xe1bd
- (id)_decryptStringFromData:(id)data;	// 0xe0c9
- (BOOL)_sendCertToTouchDevices;	// 0xe38d
- (BOOL)_sendNewChallengeToTouchDevices;	// 0xe629
- (id)_updateChallenge;	// 0xe5a5
- (id)certificateString;	// 0xe055
- (id)challengeString;	// 0xe075
- (void)dealloc;	// 0xdde9
- (id)decryptMessage:(id)message;	// 0xde55
@end

