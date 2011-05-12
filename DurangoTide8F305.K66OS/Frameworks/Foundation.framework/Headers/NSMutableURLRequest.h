/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSURLRequest.h"


@interface NSMutableURLRequest : NSURLRequest {
}
@property(assign) unsigned requestPriority;	// G=0x327e68c5; S=0x327e68e9; converted property
- (void)addValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3275fdbd
- (id)copyWithZone:(NSZone *)zone;	// 0x327e5ac1
// converted property getter: - (unsigned)requestPriority;	// 0x327e68c5
- (void)setAllHTTPHeaderFields:(id)fields;	// 0x32775fd1
- (void)setCachePolicy:(unsigned)policy;	// 0x3276673d
- (void)setContentDispositionEncodingFallbackArray:(id)array;	// 0x327667c5
- (void)setHTTPBody:(id)body;	// 0x3274d7c1
- (void)setHTTPBodyStream:(id)stream;	// 0x327e6931
- (void)setHTTPContentType:(id)type;	// 0x327e5a51
- (void)setHTTPExtraCookies:(id)cookies;	// 0x327e690d
- (void)setHTTPMethod:(id)method;	// 0x3274d779
- (void)setHTTPReferrer:(id)referrer;	// 0x327e6859
- (void)setHTTPShouldHandleCookies:(BOOL)handleCookies;	// 0x3274d751
- (void)setHTTPShouldUsePipelining:(BOOL)usePipelining;	// 0x3275f0e9
- (void)setHTTPUserAgent:(id)agent;	// 0x327e5a35
- (void)setMainDocumentURL:(id)url;	// 0x32766769
- (void)setNetworkServiceType:(unsigned)type;	// 0x327e6979
// converted property setter: - (void)setRequestPriority:(unsigned)priority;	// 0x327e68e9
- (void)setTimeoutInterval:(double)interval;	// 0x3276f325
- (void)setURL:(id)url;	// 0x32766941
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x3274d79d
@end

