/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLAuthenticationChallengeSender.h"

@class NSURLDownloadInternal;

@interface NSURLDownload : NSObject <NSURLAuthenticationChallengeSender> {
@private
	NSURLDownloadInternal *_internal;	// 4 = 0x4
}
@property(assign) BOOL deletesFileUponFailure;	// G=0x324c3579; S=0x324c3529; converted property
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x324c2911
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x324c28cd
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x324c28b5
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x324c3991
- (id)init;	// 0x324c2a0d
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x324c2e0d
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x324c329d
- (id)_delegate;	// 0x324c18d1
- (BOOL)_deletesFileAfterFailure;	// 0x324c359d
- (id)_directoryPath;	// 0x324c3871
- (BOOL)_downloadActive;	// 0x324c18ed
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x324c2f59
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x324c308d
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x324c3149
- (id)_originatingURL;	// 0x324c38dd
- (id)_resumeInformation;	// 0x324c33f1
- (void)_setDelegate:(id)delegate;	// 0x324c2861
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x324c3551
- (void)_setDirectoryPath:(id)path;	// 0x324c30ed
- (void)_setOriginatingURL:(id)url;	// 0x324c38b9
- (void)cancel;	// 0x324c2bd5
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x324c2c0d
- (void)cleanupChallenges;	// 0x324c295d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x324c2b19
- (void)dealloc;	// 0x324c29c5
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x324c3579
- (void)releaseDelegate;	// 0x324c2829
- (id)request;	// 0x324c3469
- (id)resumeData;	// 0x324c342d
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x324c240d
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x324c250d
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x324c3801
- (void)sendDidFail:(CFErrorRef)send;	// 0x324c3919
- (void)sendDidFinish;	// 0x324c24b1
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x324c35c1
- (void)sendDidReceiveData:(long)send;	// 0x324c25e1
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x324c26d1
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x324c27b9
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x324c2749
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x324c256d
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x324c2641
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x324c36ad
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x324c3529
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x324c34d5
- (id)url;	// 0x324c37ad
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x324c2b6d
@end

