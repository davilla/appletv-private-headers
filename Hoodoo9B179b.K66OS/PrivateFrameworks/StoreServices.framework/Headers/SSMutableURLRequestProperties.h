/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSURLRequestProperties.h"

@class NSURL, NSDictionary, NSData, NSArray, NSInputStream, NSString;

@interface SSMutableURLRequestProperties : SSURLRequestProperties {
}
@property(copy) NSData *HTTPBody;	// S=0x33c9d059; @dynamic
@property(retain) NSInputStream *HTTPBodyStream;	// S=0x33c9da21; @dynamic
@property(copy) NSDictionary *HTTPHeaders;	// S=0x33c9d139; @dynamic
@property(copy) NSString *HTTPMethod;	// S=0x33c9d219; @dynamic
@property(assign, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;	// S=0x33c9d2f9; @dynamic
@property(retain) NSURL *URL;	// S=0x33c9d5d5; @dynamic
@property(copy) NSString *URLBagKey;	// S=0x33c9d4f5; @dynamic
@property(assign) int URLBagType;	// S=0x33c9db85; @dynamic
@property(copy) id URLBagURLBlock;	// S=0x33c9dc05; @dynamic
@property(copy) NSArray *URLs;	// S=0x33c9dce5; @dynamic
@property(assign) int allowedRetryCount;	// S=0x33c9cde1; @dynamic
@property(assign) unsigned cachePolicy;	// S=0x33c9ce61; @dynamic
@property(copy) NSString *clientIdentifier;	// S=0x33c9cee1; @dynamic
@property(assign) long long expectedContentLength;	// S=0x33c9cfc1; @dynamic
@property(copy) NSDictionary *requestParameters;	// S=0x33c9d37d; @dynamic
@property(assign) BOOL shouldProcessProtocol;	// S=0x33c9db01; @dynamic
@property(assign) double timeoutInterval;	// S=0x33c9d45d; @dynamic
@property(copy) NSArray *userAgentComponents;	// S=0x33c9d639; @dynamic
- (id)copyWithZone:(NSZone *)zone;	// 0x33c9cdd1
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x33c9cde1
// declared property setter: - (void)setCachePolicy:(unsigned)policy;	// 0x33c9ce61
// declared property setter: - (void)setClientIdentifier:(id)identifier;	// 0x33c9cee1
// declared property setter: - (void)setExpectedContentLength:(long long)length;	// 0x33c9cfc1
// declared property setter: - (void)setHTTPBody:(id)body;	// 0x33c9d059
// declared property setter: - (void)setHTTPBodyStream:(id)stream;	// 0x33c9da21
// declared property setter: - (void)setHTTPHeaders:(id)headers;	// 0x33c9d139
// declared property setter: - (void)setHTTPMethod:(id)method;	// 0x33c9d219
// declared property setter: - (void)setITunesStoreRequest:(BOOL)request;	// 0x33c9d2f9
// declared property setter: - (void)setRequestParameters:(id)parameters;	// 0x33c9d37d
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x33c9db01
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x33c9d45d
// declared property setter: - (void)setURL:(id)url;	// 0x33c9d5d5
// declared property setter: - (void)setURLBagKey:(id)key;	// 0x33c9d4f5
// declared property setter: - (void)setURLBagType:(int)type;	// 0x33c9db85
// declared property setter: - (void)setURLBagURLBlock:(id)block;	// 0x33c9dc05
// declared property setter: - (void)setURLs:(id)urls;	// 0x33c9dce5
// declared property setter: - (void)setUserAgentComponents:(id)components;	// 0x33c9d639
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x33c9d719
- (void)setValue:(id)value forRequestParameter:(id)requestParameter;	// 0x33c9d89d
@end
