/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import "FTMessageDelivery.h"
#import "FTMessageQueueDelegate.h"

@class NSURLConnection, NSMutableData;

@interface FTMessageDelivery_HTTP : FTMessageDelivery <FTMessageQueueDelegate> {
	NSURLConnection *_currentURLConnection;	// 68 = 0x44
	NSMutableData *_currentResponseData;	// 72 = 0x48
}
- (id)init;	// 0x33fb0e4d
- (void)_cleanupURLConnection;	// 0x33fb26b5
- (void)_dequeueIfNeeded;	// 0x33fb27dd
- (void)_notifyDelegateAboutError:(id)error forMessage:(id)message;	// 0x33fb0c5d
- (id)_processResultData:(id)data forMessage:(id)message error:(id *)error;	// 0x33fb0d3d
- (BOOL)_sendMessageAsynchronously:(id)asynchronously error:(id *)error;	// 0x33fb2dad
- (void)_serverBagLoaded:(id)loaded;	// 0x33fb0ec1
- (void)_updateWiFiAssertions;	// 0x33fb0cc5
- (id)_urlRequestWithURL:(id)url andData:(id)data message:(id)message;	// 0x33fb1765
- (BOOL)busy;	// 0x33fb0bcd
- (void)cancelMessage:(id)message;	// 0x33fb1135
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x33fb10a1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33fb3151
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x33fb0f65
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x33fb0be1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33fb1585
- (void)connectionDidFinishLoading:(id)connection;	// 0x33fb1329
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x33fb0bc9
- (void)dealloc;	// 0x33fb0db9
- (void)invalidate;	// 0x33fb2ce5
- (void)queue:(id)queue hitTimeoutForMessage:(id)message;	// 0x33fb1251
- (int)sendMessage:(id)message error:(id *)error;	// 0x33fb233d
@end
