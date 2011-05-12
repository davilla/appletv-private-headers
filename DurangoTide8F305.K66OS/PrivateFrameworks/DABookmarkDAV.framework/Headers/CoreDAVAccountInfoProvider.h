/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DABookmarkDAV.framework/DABookmarkDAV
 */

#import "NSObject.h"


@protocol CoreDAVAccountInfoProvider <NSObject>
- (id)accountID;
@optional
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)space withConnection:(id)connection;
@required
- (BOOL)handleCertificateError:(id)error;
@optional
- (BOOL)handleShouldUseCredentialStorage;
@required
- (BOOL)handleTrustChallenge:(id)challenge;
@optional
- (BOOL)handleTrustChallenge:(id)challenge withConnection:(id)connection;
@required
- (id)host;
- (id)identityPersist;
@optional
- (id)mmeToken;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteHomeSetOnDifferentHost:(id)host;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;
- (void)noteTimeSpentInNetworking:(double)networking;
@required
- (id)password;
- (int)port;
- (id)principalURL;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;
- (id)scheme;
- (id)serverComplianceClasses;
- (id)serverRoot;
- (BOOL)shouldFailAllTasks;
@optional
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;
- (BOOL)shouldTurnModalOnBadPassword;
@required
- (id)user;
- (id)userAgentHeader;
@end

