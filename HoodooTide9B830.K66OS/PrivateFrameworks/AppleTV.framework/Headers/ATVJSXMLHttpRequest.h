/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class ATVJSContext, NSMutableURLRequest, NSURLConnection, NSMutableData, NSHTTPURLResponse, NSString;

__attribute__((visibility("hidden")))
@interface ATVJSXMLHttpRequest : NSObject {
@private
	ATVJSContext *_context;	// 4 = 0x4
	OpaqueJSValue *_object;	// 8 = 0x8
	unsigned _readyState;	// 12 = 0xc
	NSMutableURLRequest *_urlRequest;	// 16 = 0x10
	NSURLConnection *_urlConnection;	// 20 = 0x14
	BOOL _async;	// 24 = 0x18
	NSString *_user;	// 28 = 0x1c
	NSString *_password;	// 32 = 0x20
	NSHTTPURLResponse *_urlResponse;	// 36 = 0x24
	unsigned _statusCode;	// 40 = 0x28
	NSString *_statusText;	// 44 = 0x2c
	NSMutableData *_receivedData;	// 48 = 0x30
}
@property(assign, nonatomic) unsigned readyState;	// G=0x329746ad; S=0x32973c2d; @synthesize=_readyState
@property(retain) NSMutableData *receivedData;	// G=0x329747bd; S=0x329747d1; @synthesize=_receivedData
@property(assign, nonatomic) unsigned statusCode;	// G=0x32974765; S=0x32974775; @synthesize=_statusCode
@property(copy) NSString *statusText;	// G=0x32974785; S=0x32974799; @synthesize=_statusText
@property(retain) NSURLConnection *urlConnection;	// G=0x329746f5; S=0x32974709; @synthesize=_urlConnection
@property(retain) NSMutableURLRequest *urlRequest;	// G=0x329746bd; S=0x329746d1; @synthesize=_urlRequest
@property(retain) NSHTTPURLResponse *urlResponse;	// G=0x3297472d; S=0x32974741; @synthesize=_urlResponse
+ (void)registerClassInContext:(OpaqueJSContext *)context;	// 0x32972d45
- (id)initWithContext:(id)context jsObject:(OpaqueJSValue *)object;	// 0x32973ad1
- (void)abort;	// 0x3297423d
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x329744a1
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3297445d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x329743a1
- (void)connectionDidFinishLoading:(id)connection;	// 0x329745e5
- (void)dealloc;	// 0x32973b45
- (void)openWithMethod:(id)method url:(id)url async:(BOOL)async user:(id)user password:(id)password;	// 0x32973d39
// declared property getter: - (unsigned)readyState;	// 0x329746ad
// declared property getter: - (id)receivedData;	// 0x329747bd
- (void)sendWithData:(id)data;	// 0x32973e81
// declared property setter: - (void)setReadyState:(unsigned)state;	// 0x32973c2d
// declared property setter: - (void)setReceivedData:(id)data;	// 0x329747d1
// declared property setter: - (void)setStatusCode:(unsigned)code;	// 0x32974775
// declared property setter: - (void)setStatusText:(id)text;	// 0x32974799
// declared property setter: - (void)setUrlConnection:(id)connection;	// 0x32974709
// declared property setter: - (void)setUrlRequest:(id)request;	// 0x329746d1
// declared property setter: - (void)setUrlResponse:(id)response;	// 0x32974741
// declared property getter: - (unsigned)statusCode;	// 0x32974765
// declared property getter: - (id)statusText;	// 0x32974785
// declared property getter: - (id)urlConnection;	// 0x329746f5
// declared property getter: - (id)urlRequest;	// 0x329746bd
// declared property getter: - (id)urlResponse;	// 0x3297472d
@end
