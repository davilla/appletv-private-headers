/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSURLRequest.h"
#import "Foundation-Structs.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x310cbb4d; S=0x310cbb29; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3101138d
- (id)copyWithZone:(NSZone *)zone;	// 0x310cb579
// converted property getter: - (unsigned)requestPriority;	// 0x310cbb4d
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x3104e3ed
- (void)setBoundInterfaceIdentifier:(id)identifier;	// 0x310cb5ad
- (void)setCachePolicy:(unsigned)policy;	// 0x310cb529
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x310cbb91
- (void)setHTTPBody:(id)body;	// 0x3103b53d
- (void)setHTTPBodyStream:(id)stream;	// 0x310cba21
- (void)setHTTPContentType:(id)type;	// 0x310cba45
- (void)setHTTPExtraCookies:(id)cookies;	// 0x310cba61
- (void)setHTTPMethod:(id)method;	// 0x3103b4f1
- (void)setHTTPReferrer:(id)referrer;	// 0x310cba85
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x3103b4cd
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x310cbb6d
- (void)setHTTPUserAgent:(id)agent;	// 0x310cbb0d
- (void)setMainDocumentURL:(id)url;	// 0x310cb555
- (void)setNetworkServiceType:(unsigned)type;	// 0x310cb589
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x310cbb29
- (void)setTimeoutInterval:(double)interval;	// 0x3104b605
- (void)setURL:(id)url;	// 0x310cb505
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3103b515
@end

