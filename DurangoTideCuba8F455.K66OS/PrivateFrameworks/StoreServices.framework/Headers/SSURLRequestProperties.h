/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSData, NSInputStream, NSString, NSURL, NSDictionary;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying> {
@private
	int _allowedRetryCount;	// 4 = 0x4
	int _assetType;	// 8 = 0x8
	unsigned _cachePolicy;	// 12 = 0xc
	NSString *_clientIdentifier;	// 16 = 0x10
	dispatch_queue_s *_dispatchQueue;	// 20 = 0x14
	long long _expectedContentLength;	// 24 = 0x18
	NSData *_httpBody;	// 32 = 0x20
	NSInputStream *_httpBodyStream;	// 36 = 0x24
	NSDictionary *_httpHeaders;	// 40 = 0x28
	NSString *_httpMethod;	// 44 = 0x2c
	BOOL _isITunesStoreRequest;	// 48 = 0x30
	NSDictionary *_requestParameters;	// 52 = 0x34
	BOOL _shouldProcessProtocol;	// 56 = 0x38
	double _timeoutInterval;	// 60 = 0x3c
	NSString *_urlBagKey;	// 68 = 0x44
	int _urlBagType;	// 72 = 0x48
	id _urlBagURLBlock;	// 76 = 0x4c
	NSArray *_urls;	// 80 = 0x50
}
@property(readonly, copy) NSData *HTTPBody;	// G=0x32738575; 
@property(readonly, retain) NSInputStream *HTTPBodyStream;	// G=0x32737ecd; 
@property(readonly, copy) NSDictionary *HTTPHeaders;	// G=0x327384c9; 
@property(readonly, copy) NSString *HTTPMethod;	// G=0x3273841d; 
@property(readonly, assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// G=0x3273839d; 
@property(readonly, retain) NSURL *URL;	// G=0x32738091; 
@property(readonly, copy) NSString *URLBagKey;	// G=0x3273813d; 
@property(readonly, assign) int URLBagType;	// G=0x32737e4d; 
@property(readonly, copy) id URLBagURLBlock;	// G=0x32737da1; 
@property(readonly, copy) NSArray *URLs;	// G=0x32737ce5; 
@property(readonly, assign) int allowedRetryCount;	// G=0x327387d5; 
@property(readonly, assign) int assetType;	// G=0x32738011; 
@property(readonly, assign) unsigned cachePolicy;	// G=0x32738755; 
@property(readonly, assign) BOOL canBeResolved;	// G=0x32737f91; 
@property(readonly, copy) NSString *clientIdentifier;	// G=0x327386a9; 
@property(readonly, assign) long long expectedContentLength;	// G=0x32738621; 
@property(readonly, copy) NSDictionary *requestParameters;	// G=0x327382f1; 
@property(readonly, assign) BOOL shouldProcessProtocol;	// G=0x32738271; 
@property(readonly, assign) double timeoutInterval;	// G=0x327381e9; 
- (id)init;	// 0x32737281
- (id)initWithCoder:(id)coder;	// 0x327368ad
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x327390d1
- (id)initWithURL:(id)url;	// 0x3273722d
- (id)initWithURLRequest:(id)urlrequest;	// 0x32737061
// declared property getter: - (id)HTTPBody;	// 0x32738575
// declared property getter: - (id)HTTPBodyStream;	// 0x32737ecd
// declared property getter: - (id)HTTPHeaders;	// 0x327384c9
// declared property getter: - (id)HTTPMethod;	// 0x3273841d
// declared property getter: - (id)URL;	// 0x32738091
// declared property getter: - (id)URLBagKey;	// 0x3273813d
// declared property getter: - (int)URLBagType;	// 0x32737e4d
// declared property getter: - (id)URLBagURLBlock;	// 0x32737da1
// declared property getter: - (id)URLs;	// 0x32737ce5
- (id)_initCommon;	// 0x32735c91
// declared property getter: - (int)allowedRetryCount;	// 0x327387d5
// declared property getter: - (int)assetType;	// 0x32738011
// declared property getter: - (unsigned)cachePolicy;	// 0x32738755
// declared property getter: - (BOOL)canBeResolved;	// 0x32737f91
// declared property getter: - (id)clientIdentifier;	// 0x327386a9
- (id)copyPropertyListEncoding;	// 0x327379dd
- (id)copyURLRequest;	// 0x32737961
- (id)copyWithZone:(NSZone *)zone;	// 0x32736899
- (void)dealloc;	// 0x32737299
- (void)encodeWithCoder:(id)coder;	// 0x32737a59
// declared property getter: - (long long)expectedContentLength;	// 0x32738621
- (BOOL)isEqual:(id)equal;	// 0x327362f1
// declared property getter: - (BOOL)isITunesStoreRequest;	// 0x3273839d
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3273887d
// declared property getter: - (id)requestParameters;	// 0x327382f1
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x32738271
// declared property getter: - (double)timeoutInterval;	// 0x327381e9
@end

