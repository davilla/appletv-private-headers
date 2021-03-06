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
@private
	WebDownloadInternal *_webInternal;	// 8 = 0x8
}
- (id)init;	// 0x353b12b9
- (id)initWithRequest:(id)request delegate:(id)delegate;	// 0x353b1441
- (id)_initWithLoadingCFURLConnection:(CFURLConnectionRef)loadingCFURLConnection request:(CFURLRequestRef)request response:(CFURLResponseRef)response delegate:(id)delegate proxy:(id)proxy;	// 0x353b1379
- (id)_initWithLoadingConnection:(id)loadingConnection request:(id)request response:(id)response delegate:(id)delegate proxy:(id)proxy;	// 0x353b13dd
- (id)_initWithRequest:(id)request delegate:(id)delegate directory:(id)directory;	// 0x353b1321
- (void)_setRealDelegate:(id)delegate;	// 0x353b10fd
- (void)connection:(id)connection willStopBufferingData:(id)data;	// 0x353b0ee5
- (void)dealloc;	// 0x353b1495
@end

