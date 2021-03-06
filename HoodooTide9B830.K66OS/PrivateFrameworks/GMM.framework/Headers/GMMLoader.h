/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import "GMM-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"

@class NSURLConnection, NSMutableData, NSThread;

__attribute__((visibility("hidden")))
@interface GMMLoader : NSObject <NSURLConnectionDelegate> {
	NSURLConnection *_connection;	// 4 = 0x4
	Requester *_requester;	// 8 = 0x8
	Response *_response;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	NSThread *_thread;	// 20 = 0x14
	BOOL _readPreamble;	// 24 = 0x18
	BOOL _needsCancel;	// 25 = 0x19
	unsigned long _bodyOffset;	// 28 = 0x1c
}
@property(readonly, assign) BOOL needsCancel;	// G=0x31f8adf1; converted property
- (id)initWithURL:(id)url postData:(id)data requester:(Requester *)requester timeout:(double)timeout;	// 0x31f8ac11
- (void)_applicationDidEnterBackground:(id)_application;	// 0x31f8b701
- (void)_cancelWithErrorCode:(int)errorCode;	// 0x31f8b001
- (void)_cleanup;	// 0x31f8ae85
- (BOOL)_continueReadStream:(BOOL)stream;	// 0x31f8b031
- (void)_failWithError:(id)error;	// 0x31f8af75
- (void)_failWithErrorCode:(int)errorCode;	// 0x31f8af8d
- (void)_handleSuspendOnThread;	// 0x31f8b73d
- (void)cancel;	// 0x31f8af39
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x31f8b6ad
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x31f8b571
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x31f8b45d
- (void)connectionDidFinishLoading:(id)connection;	// 0x31f8b629
- (void)dealloc;	// 0x31f8ae15
// converted property getter: - (BOOL)needsCancel;	// 0x31f8adf1
- (void)setNeedsCancel;	// 0x31f8ae01
@end

