/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface NflxhlsAuthenticationPrimer : NSObject {
@private
	BOOL myPassword[100];	// 4 = 0x4
}
- (id)init;	// 0x3073d540
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x3073dac0
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3073d820
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3073d860
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3073d4e8
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x3073d840
- (void)connectionDidFinishLoading:(id)connection;	// 0x3073d4ec
- (void)dealloc;	// 0x3073d504
- (char *)getGeneratedPassword;	// 0x3073d4f0
- (void)logTrusts:(SecTrust *)trusts;	// 0x3073d63c
- (void)prime;	// 0x3073d6e8
- (void)primeAuthorization;	// 0x3073d704
@end

