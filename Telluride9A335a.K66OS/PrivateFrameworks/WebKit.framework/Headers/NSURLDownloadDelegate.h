/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "NSObject.h"


@protocol NSURLDownloadDelegate <NSObject>
@optional
- (BOOL)download:(id)download canAuthenticateAgainstProtectionSpace:(id)space;
- (void)download:(id)download decideDestinationWithSuggestedFilename:(id)suggestedFilename;
- (void)download:(id)download didCancelAuthenticationChallenge:(id)challenge;
- (void)download:(id)download didCreateDestination:(id)destination;
- (void)download:(id)download didFailWithError:(id)error;
- (void)download:(id)download didReceiveAuthenticationChallenge:(id)challenge;
- (void)download:(id)download didReceiveDataOfLength:(unsigned)length;
- (void)download:(id)download didReceiveResponse:(id)response;
- (BOOL)download:(id)download shouldDecodeSourceDataOfMIMEType:(id)mimetype;
- (void)download:(id)download willResumeWithResponse:(id)response fromByte:(long long)byte;
- (id)download:(id)download willSendRequest:(id)request redirectResponse:(id)response;
- (void)downloadDidBegin:(id)download;
- (void)downloadDidFinish:(id)download;
- (BOOL)downloadShouldUseCredentialStorage:(id)download;
@end

