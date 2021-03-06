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
@property(assign) BOOL deletesFileUponFailure;	// G=0x320cdfb1; S=0x320cdf8d; converted property
+ (id)_downloadWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x320cd8a5
+ (id)_downloadWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x320cd6dd
+ (id)_downloadWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x320cd969
+ (BOOL)_isEncodingMIMETypeResumable:(id)resumable;	// 0x320ce04d
+ (BOOL)canResumeDownloadDecodedWithEncodingMIMEType:(id)encodingMIMEType;	// 0x320cdfd9
- (id)init;	// 0x320cd3bd
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x320cd431
- (id)initWithResumeData:(id)resumeData delegate:(id)delegate path:(id)path;	// 0x320cdbb1
- (id)_delegate;	// 0x32020511
- (BOOL)_deletesFileAfterFailure;	// 0x320cdf65
- (id)_directoryPath;	// 0x320ce065
- (BOOL)_downloadActive;	// 0x320204f1
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x320cd731
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x320cd619
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x320cd8f9
- (id)_initWithResumeInformation:(id)resumeInformation delegate:(id)delegate path:(id)path;	// 0x320cd9b1
- (id)_originatingURL;	// 0x320ce17d
- (id)_resumeInformation;	// 0x320cddb1
- (void)_setDelegate:(id)delegate;	// 0x320ce0b5
- (void)_setDeletesFileAfterFailure:(BOOL)failure;	// 0x320cdf41
- (void)_setDirectoryPath:(id)path;	// 0x320ce111
- (void)_setOriginatingURL:(id)url;	// 0x320ce159
- (void)cancel;	// 0x320cde39
- (void)cancelAuthenticationChallenge:(id)challenge;	// 0x320cd2a5
- (void)cleanupChallenges;	// 0x320cd15d
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)authenticationChallenge;	// 0x320cd245
- (void)dealloc;	// 0x32020a51
// converted property getter: - (BOOL)deletesFileUponFailure;	// 0x320cdfb1
- (void)releaseDelegate;	// 0x32020a11
- (id)request;	// 0x320cde75
- (id)resumeData;	// 0x320cddf5
- (BOOL)sendCanAuthenticateAgainstProtectionSpace:(CFURLProtectionSpaceRef)space;	// 0x320ce6a5
- (void)sendDecideDestinationWithSuggestedObjectName:(CFStringRef)suggestedObjectName;	// 0x320ce5b5
- (void)sendDidCreateDestination:(CFURLRef)send;	// 0x3202065d
- (void)sendDidFail:(CFErrorRef)send;	// 0x320ce621
- (void)sendDidFinish;	// 0x32020885
- (void)sendDidReceiveChallenge:(CFURLAuthChallengeRef)send;	// 0x320ce3c5
- (void)sendDidReceiveData:(long)send;	// 0x3202077d
- (void)sendDidReceiveResponse:(CFURLResponseRef)send;	// 0x32020531
- (void)sendDidStart:(CFURLDownloadRef)send;	// 0x320ce1c1
- (unsigned char)sendDownloadShouldUseCredentialStorage;	// 0x320ce351
- (bool)sendShouldDecodeDataOfMIMEType:(CFStringRef)send;	// 0x320ce539
- (void)sendWillResumeWithResponse:(CFURLResponseRef)send startingByte:(unsigned long long)byte;	// 0x320ce49d
- (CFURLRequestRef)sendWillSendRequest:(CFURLRequestRef)send redirectResponse:(CFURLResponseRef)response;	// 0x320ce23d
// converted property setter: - (void)setDeletesFileUponFailure:(BOOL)failure;	// 0x320cdf8d
- (void)setDestination:(id)destination allowOverwrite:(BOOL)overwrite;	// 0x320cdee9
- (id)url;	// 0x320cdfe9
- (void)useCredential:(id)credential forAuthenticationChallenge:(id)authenticationChallenge;	// 0x320cd1cd
@end

