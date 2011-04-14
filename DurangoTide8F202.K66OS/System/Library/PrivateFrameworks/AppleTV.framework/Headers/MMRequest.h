/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSError, NSString, NSMutableDictionary, NSMutableData, NSData, NSURL, NSHTTPURLResponse, NSURLCredential, NSURLConnection;

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
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x33974755; S=0x33975125; @synthesize=_connection
@property(retain, nonatomic) NSURLCredential *credentials;	// G=0x33974775; S=0x339750d5; @synthesize=_credentials
@property(retain, nonatomic) NSError *error;	// G=0x33974765; S=0x339750fd; @synthesize=_error
@property(retain, nonatomic) NSData *messageBody;	// G=0x339747f5; S=0x33974fe5; @synthesize=_messageBody
@property(retain, nonatomic) NSString *method;	// G=0x339747e5; S=0x3397500d; @synthesize=_method
@property(retain, nonatomic) NSURL *originalUrl;	// G=0x339747c5; S=0x3397505d; @synthesize=_originalUrl
@property(assign, nonatomic) BOOL requestCompleted;	// G=0x33974715; S=0x33974725; @synthesize=_requestCompleted
@property(retain, nonatomic) NSMutableDictionary *requestHeaders;	// G=0x339747b5; S=0x33975085; @synthesize=_requestHeaders
@property(assign, nonatomic) BOOL requestStarted;	// G=0x33974735; S=0x33974745; @synthesize=_requestStarted
@property(retain, nonatomic) NSHTTPURLResponse *response;	// G=0x339747a5; S=0x339750ad; @synthesize=_response
@property(assign, nonatomic) NSMutableData *responseData;	// G=0x33974785; S=0x33974795; @synthesize=_responseData
@property(retain, nonatomic) NSURL *url;	// G=0x339747d5; S=0x33975035; @synthesize=_url
- (id)initWithMessage:(id)message usingMethod:(id)method headers:(id)headers url:(id)url;	// 0x33974ca1
- (void)_cleanUpConnection;	// 0x3397492d
- (void)_runRequestThread;	// 0x33974e2d
- (id)_urlRequest;	// 0x339749b1
// declared property getter: - (id)connection;	// 0x33974755
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x33974f45
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x3397487d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x3397481d
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x33974805
- (void)connectionDidFinishLoading:(id)connection;	// 0x33974f25
// declared property getter: - (id)credentials;	// 0x33974775
- (void)dealloc;	// 0x33974bb5
// declared property getter: - (id)error;	// 0x33974765
- (int)httpStatusCode;	// 0x33974b51
// declared property getter: - (id)messageBody;	// 0x339747f5
// declared property getter: - (id)method;	// 0x339747e5
// declared property getter: - (id)originalUrl;	// 0x339747c5
// declared property getter: - (BOOL)requestCompleted;	// 0x33974715
// declared property getter: - (id)requestHeaders;	// 0x339747b5
// declared property getter: - (BOOL)requestStarted;	// 0x33974735
// declared property getter: - (id)response;	// 0x339747a5
// declared property getter: - (id)responseData;	// 0x33974785
- (id)result;	// 0x33974b3d
- (void)sendAsynchronously;	// 0x33974b7d
- (void)sendSynchronously;	// 0x33974dd5
// declared property setter: - (void)setConnection:(id)connection;	// 0x33975125
// declared property setter: - (void)setCredentials:(id)credentials;	// 0x339750d5
// declared property setter: - (void)setError:(id)error;	// 0x339750fd
// declared property setter: - (void)setMessageBody:(id)body;	// 0x33974fe5
// declared property setter: - (void)setMethod:(id)method;	// 0x3397500d
// declared property setter: - (void)setOriginalUrl:(id)url;	// 0x3397505d
// declared property setter: - (void)setRequestCompleted:(BOOL)completed;	// 0x33974725
// declared property setter: - (void)setRequestHeaders:(id)headers;	// 0x33975085
// declared property setter: - (void)setRequestStarted:(BOOL)started;	// 0x33974745
// declared property setter: - (void)setResponse:(id)response;	// 0x339750ad
// declared property setter: - (void)setResponseData:(id)data;	// 0x33974795
// declared property setter: - (void)setUrl:(id)url;	// 0x33975035
- (void)setUsername:(id)username andPassword:(id)password;	// 0x33974aa1
- (void)setValue:(id)value forHeader:(id)header;	// 0x33974b01
// declared property getter: - (id)url;	// 0x339747d5
@end
