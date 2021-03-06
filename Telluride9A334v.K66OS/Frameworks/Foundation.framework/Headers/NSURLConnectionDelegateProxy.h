/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSURLConnectionDelegateProxy : NSObject {
@private
	id delegate;	// 4 = 0x4
	unsigned flags;	// 8 = 0x8
}
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x306c4d45
- (void)connection:(id)connection didCancelAuthenticationChallenge:(id)challenge;	// 0x306c4ab9
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x306c4c7d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x306c4a79
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x306c4b39
- (void)connection:(id)connection didReceiveData:(id)data lengthReceived:(long long)received;	// 0x306c4b79
- (void)connection:(id)connection didReceiveDataArray:(id)array;	// 0x306c4bc1
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x306c4af9
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x306c4cbd
- (id)connection:(id)connection willCacheResponse:(id)response;	// 0x306c4c3d
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x306c4a2d
- (void)connectionDidFinishLoading:(id)connection;	// 0x306c4c01
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x306c4d05
- (BOOL)respondsToSelector:(SEL)selector;	// 0x306c49c5
- (void)setDelegate:(id)delegate;	// 0x306c475d
@end

