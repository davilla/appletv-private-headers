/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSURLDownload.h> // Unknown library

@class WebDownloadInternal;

@interface WebDownload : NSURLDownload {
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x3168ad51
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x3168ae05
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x3168aebd
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x3168ae59
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x3168af21
- (void)_setRealDelegate:(id)delegate;	// 0x3168aced
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x3168af79
- (void)dealloc;	// 0x3168adb9
@end

