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
@property(assign) BOOL deletesFileUponFailure;	// G=0x310ab579; S=0x310ab529; converted property
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x310aa911
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x310aa8cd
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x310aa8b5
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x310ab991
- (id)init;	// 0x310aaa0d
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x310aae0d
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x310ab29d
- (id)_delegate;	// 0x310a98d1
- (BOOL)_deletesFileAfterFailure;	// 0x310ab59d
- (id)_directoryPath;	// 0x310ab871
- (BOOL)_downloadActive;	// 0x310a98ed
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x310aaf59
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x310ab08d
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x310ab149
- (id)_originatingURL;	// 0x310ab8dd
- (id)_resumeInformation;	// 0x310ab3f1
- (void)_setDelegate:(id)delegate;	// 0x310aa861
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x310ab551
- (void)_setDirectoryPath:(id)path;	// 0x310ab0ed
- (void)_setOriginatingURL:(id)url;	// 0x310ab8b9
- (void)cancel;	// 0x310aabd5
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x310aac0d
- (void)cleanupChallenges;	// 0x310aa95d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x310aab19
- (void)dealloc;	// 0x310aa9c5
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x310ab579
- (void)releaseDelegate;	// 0x310aa829
- (id)request;	// 0x310ab469
- (id)resumeData;	// 0x310ab42d
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x310aa40d
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x310aa50d
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x310ab801
- (void)sendDidFail:(CFErrorRef)send;	// 0x310ab919
- (void)sendDidFinish;	// 0x310aa4b1
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x310ab5c1
- (void)sendDidReceiveData:(long)send;	// 0x310aa5e1
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x310aa6d1
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x310aa7b9
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x310aa749
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x310aa56d
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x310aa641
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x310ab6ad
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x310ab529
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x310ab4d5
- (id)url;	// 0x310ab7ad
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x310aab6d
@end

