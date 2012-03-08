/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSHTTPURLResponse, NSString, NSMutableDictionary, NSURL, NSURLCredential, NSData, NSMutableData, NSError, NSURLConnection;

__attribute__((visibility("hidden")))
@interface MMRequest : NSObject {
@private
	NSData *_messageBody;	// 4 = 0x4
	NSString *_method;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_originalUrl;	// 16 = 0x10
	NSMutableDictionary *_requestHeaders;	// 20 = 0x14
	NSHTTPURLResponse *_response;	// 24 = 0x18
	NSMutableData *_responseData;	// 28 = 0x1c
	NSURLCredential *_credentials;	// 32 = 0x20
	NSError *_error;	// 36 = 0x24
	NSURLConnection *_connection;	// 40 = 0x28
	BOOL _requestStarted;	// 44 = 0x2c
	BOOL _requestCompleted;	// 45 = 0x2d
}
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x30483bf1; S=0x30483f39; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x30483c11; S=0x30483ee9; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x30483c01; S=0x30483f11; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x30483c91; S=0x30483df9; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x30483c81; S=0x30483e21; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x30483c61; S=0x30483e71; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x30483bb1; S=0x30483bc1; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x30483c51; S=0x30483e99; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x30483bd1; S=0x30483be1; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x30483c41; S=0x30483ec1; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x30483c21; S=0x30483c31; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x30483c71; S=0x30483e49; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x30483ca1
- (void)_cleanUpConnection;	// 0x30484171
- (void)_runRequestThread;	// 0x304843f1
- (id)_urlRequest;	// 0x30484205
// declared property getter: - (id)connection;	// 0x30483bf1
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x30483f85
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x304840ad
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x30484045
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x30484031
- (void)connectionDidFinishLoading:(id)connection;	// 0x30483f61
// declared property getter: - (id)credentials;	// 0x30483c11
- (void)dealloc;	// 0x304845a5
// declared property getter: - (id)error;	// 0x30483c01
- (int)httpStatusCode;	// 0x304843c1
// declared property getter: - (id)messageBody;	// 0x30483c91
// declared property getter: - (id)method;	// 0x30483c81
// declared property getter: - (id)originalUrl;	// 0x30483c61
// declared property getter: - (BOOL)requestCompleted;	// 0x30483bb1
// declared property getter: - (id)requestHeaders;	// 0x30483c51
// declared property getter: - (BOOL)requestStarted;	// 0x30483bd1
// declared property getter: - (id)response;	// 0x30483c41
// declared property getter: - (id)responseData;	// 0x30483c21
- (id)result;	// 0x304843b1
- (void)sendAsynchronously;	// 0x30484565
- (void)sendSynchronously;	// 0x30484509
// declared property setter: - (void)setConnection:(id)connection;	// 0x30483f39
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x30483ee9
// declared property setter: - (void)setError:(id)error;	// 0x30483f11
// declared property setter: - (void)setMessageBody:(id)body;	// 0x30483df9
// declared property setter: - (void)setMethod:(id)method;	// 0x30483e21
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x30483e71
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x30483bc1
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x30483e99
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x30483be1
// declared property setter: - (void)setResponse:(id)response;	// 0x30483ec1
// declared property setter: - (void)setResponseData:(id)data;	// 0x30483c31
// declared property setter: - (void)setUrl:(id)url;	// 0x30483e49
- (void)setUsername:(id)username andPassword:(id)password;	// 0x3048430d
- (void)setValue:(id)value forHeader:(id)header;	// 0x30484379
// declared property getter: - (id)url;	// 0x30483c71
@end
