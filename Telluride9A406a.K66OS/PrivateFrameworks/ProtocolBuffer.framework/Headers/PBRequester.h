/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library
#import "NSURLConnectionDelegate.h"
#import "ProtocolBuffer-Structs.h"

@class NSURL, NSURLConnection, NSMutableArray, NSDictionary, NSMutableDictionary, NSString, NSArray, PBDataReader, NSMutableData;
@protocol PBRequesterDelegate;

@interface PBRequester : NSObject <NSURLConnectionDelegate> {
	NSURL *_URL;	// 4 = 0x4
	id<PBRequesterDelegate> _delegate;	// 8 = 0x8
	NSURLConnection *_connection;	// 12 = 0xc
	NSMutableData *_data;	// 16 = 0x10
	PBDataReader *_dataReader;	// 20 = 0x14
	unsigned _lastGoodDataOffset;	// 24 = 0x18
	unsigned _uploadPayloadSize;	// 28 = 0x1c
	int _responseStatusCode;	// 32 = 0x20
	NSMutableArray *_requests;	// 36 = 0x24
	NSMutableArray *_responses;	// 40 = 0x28
	NSMutableArray *_internalRequests;	// 44 = 0x2c
	NSMutableArray *_internalResponses;	// 48 = 0x30
	NSDictionary *_httpResponseHeaders;	// 52 = 0x34
	NSMutableDictionary *_httpRequestHeaders;	// 56 = 0x38
	double _timeoutSeconds;	// 60 = 0x3c
	CFRunLoopTimerRef _timeoutTimer;	// 68 = 0x44
	NSString *_logRequestToFile;	// 72 = 0x48
	NSString *_logResponseToFile;	// 76 = 0x4c
	NSArray *_clientCertificates;	// 80 = 0x50
	BOOL _shouldHandleCookies;	// 84 = 0x54
	struct {
		unsigned ignoresResponse : 1;
		unsigned loading : 1;
		unsigned needsCancel : 1;
		unsigned responseStatusSet : 1;
		unsigned parsedResponseHeader : 1;
		unsigned delegateDidReceiveResponse : 1;
		unsigned delegateDidFinish : 1;
		unsigned delegateDidCancel : 1;
		unsigned delegateDidFailWithError : 1;
		unsigned paused : 1;
		unsigned resuming : 1;
	} _flags;	// 85 = 0x55
}
@property(retain, nonatomic) NSURL *URL;	// G=0x343183d5; S=0x343183e5; @synthesize=_URL
@property(retain, nonatomic) NSArray *clientCertificates;	// G=0x34318525; S=0x34318535; @synthesize=_clientCertificates
@property(retain, nonatomic) NSURLConnection *connection;	// G=0x34318419; S=0x34318429; @synthesize=_connection
@property(assign, nonatomic) id delegate;	// G=0x34318409; S=0x34316119; @synthesize=_delegate
@property(copy, nonatomic) NSDictionary *httpRequestHeaders;	// G=0x3431645d; S=0x3431646d; 
@property(retain, nonatomic) NSDictionary *httpResponseHeaders;	// G=0x3431844d; S=0x3431845d; @synthesize=_httpResponseHeaders
@property(assign, nonatomic) BOOL ignoresResponse;	// G=0x343160e1; S=0x343160f5; 
@property(readonly, retain) NSMutableArray *internalRequests;	// G=0x34316351; converted property
@property(retain, nonatomic) NSString *logRequestToFile;	// G=0x343184ad; S=0x343184bd; @synthesize=_logRequestToFile
@property(retain, nonatomic) NSString *logResponseToFile;	// G=0x343184e1; S=0x343184f1; @synthesize=_logResponseToFile
@property(assign) BOOL needsCancel;	// G=0x343161fd; S=0x34316211; 
@property(readonly, assign, nonatomic) NSArray *requests;	// G=0x34316249; 
@property(assign, nonatomic) BOOL shouldHandleCookies;	// G=0x34318559; S=0x34318569; @synthesize=_shouldHandleCookies
@property(assign, nonatomic) double timeoutSeconds;	// G=0x34318481; S=0x34318499; @synthesize=_timeoutSeconds
@property(readonly, assign, nonatomic) unsigned uploadPayloadSize;	// G=0x34318515; @synthesize=_uploadPayloadSize
+ (BOOL)usesEncodedMessages;	// 0x343183c1
- (id)initWithURL:(id)url andDelegate:(id)delegate;	// 0x34315e19
// declared property getter: - (id)URL;	// 0x343183d5
- (id)_applicationID;	// 0x3431660d
- (void)_cancelWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x343173e5
- (void)_cleanup;	// 0x34316001
- (void)_failWithError:(id)error;	// 0x34317335
- (void)_failWithErrorDomain:(id)errorDomain errorCode:(int)code userInfo:(id)info;	// 0x34317375
- (id)_languageLocale;	// 0x3431652d
- (id)_osVersion;	// 0x34316641
- (void)_removeTimeoutTimer;	// 0x343182bd
- (void)_resetTimeoutTimer;	// 0x343182ed
- (void)_sendPayload:(id)payload;	// 0x34316931
- (void)_startTimeoutTimer;	// 0x343181cd
- (void)_timeoutTimerFired;	// 0x34318369
- (BOOL)_tryParseData;	// 0x34317581
- (void)addInternalRequest:(id)request;	// 0x34316361
- (void)addRequest:(id)request;	// 0x34316259
- (void)cancel;	// 0x343170d9
- (void)cancelWithErrorCode:(int)errorCode;	// 0x34317471
// declared property getter: - (id)clientCertificates;	// 0x34318525
// declared property getter: - (id)connection;	// 0x34318419
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x3431814d
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x34317bb9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x343179fd
- (void)connectionDidFinishLoading:(id)connection;	// 0x34317e29
- (void)dealloc;	// 0x34315e9d
- (id)decodeResponseData:(id)data;	// 0x343183d1
// declared property getter: - (id)delegate;	// 0x34318409
- (void)encodeRequestData:(id)data startRequestCallback:(id)callback;	// 0x343183c5
- (void)handleResponse:(id)response forInternalRequest:(id)internalRequest;	// 0x34316459
// declared property getter: - (id)httpRequestHeaders;	// 0x3431645d
// declared property getter: - (id)httpResponseHeaders;	// 0x3431844d
// declared property getter: - (BOOL)ignoresResponse;	// 0x343160e1
// converted property getter: - (id)internalRequests;	// 0x34316351
- (BOOL)isPaused;	// 0x343172d1
// declared property getter: - (id)logRequestToFile;	// 0x343184ad
// declared property getter: - (id)logResponseToFile;	// 0x343184e1
// declared property getter: - (BOOL)needsCancel;	// 0x343161fd
- (void)pause;	// 0x34317179
- (BOOL)readResponsePreamble:(id)preamble;	// 0x3431749d
- (id)requestPreamble;	// 0x343166f5
// declared property getter: - (id)requests;	// 0x34316249
- (id)responseForInternalRequest:(id)internalRequest;	// 0x343163c9
- (id)responseForRequest:(id)request;	// 0x343162c1
- (void)resume;	// 0x343172e5
// declared property setter: - (void)setClientCertificates:(id)certificates;	// 0x34318535
// declared property setter: - (void)setConnection:(id)connection;	// 0x34318429
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34316119
- (void)setHttpRequestHeader:(id)header forKey:(id)key;	// 0x343164b1
// declared property setter: - (void)setHttpRequestHeaders:(id)headers;	// 0x3431646d
// declared property setter: - (void)setHttpResponseHeaders:(id)headers;	// 0x3431845d
// declared property setter: - (void)setIgnoresResponse:(BOOL)response;	// 0x343160f5
// declared property setter: - (void)setLogRequestToFile:(id)file;	// 0x343184bd
// declared property setter: - (void)setLogResponseToFile:(id)file;	// 0x343184f1
- (void)setNeedsCancel;	// 0x34316235
// declared property setter: - (void)setNeedsCancel:(BOOL)cancel;	// 0x34316211
// declared property setter: - (void)setShouldHandleCookies:(BOOL)handleCookies;	// 0x34318569
// declared property setter: - (void)setTimeoutSeconds:(double)seconds;	// 0x34318499
// declared property setter: - (void)setURL:(id)url;	// 0x343183e5
// declared property getter: - (BOOL)shouldHandleCookies;	// 0x34318559
- (void)start;	// 0x34316d91
// declared property getter: - (double)timeoutSeconds;	// 0x34318481
- (id)tryReadResponseData:(id)data forRequest:(id)request forResponseClass:(Class)responseClass;	// 0x343174f9
// declared property getter: - (unsigned)uploadPayloadSize;	// 0x34318515
- (void)writeRequest:(id)request into:(id)into;	// 0x34316885
@end

