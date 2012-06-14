/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSData, NSDictionary;

@interface HSRequest : NSObject {
@private
	NSString *_action;	// 4 = 0x4
	NSData *_bodyData;	// 8 = 0x8
	NSDictionary *_headers;	// 12 = 0xc
	NSDictionary *_arguments;	// 16 = 0x10
	CFHTTPMessageRef _message;	// 20 = 0x14
	int _method;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSString *action;	// G=0x308c6489; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x308c6499; S=0x308c64ad; @synthesize=_bodyData
@property(assign, nonatomic) int method;	// G=0x308c64bd; S=0x308c64cd; @synthesize=_method
+ (id)request;	// 0x308c5ca5
- (id)initWithAction:(id)action;	// 0x308c5d49
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x308c61c5
- (id)_defaultHeaderFields;	// 0x308c63fd
- (id)_methodStringForMethod:(int)method;	// 0x308c646d
- (BOOL)acceptsGzipEncoding;	// 0x308c63f9
// declared property getter: - (id)action;	// 0x308c6489
// declared property getter: - (id)bodyData;	// 0x308c6499
- (id)canonicalResponseForResponse:(id)response;	// 0x308c63f5
- (void)dealloc;	// 0x308c5dcd
- (id)description;	// 0x308c5e6d
- (id)descriptionWithoutHeaderFields;	// 0x308c5efd
// declared property getter: - (int)method;	// 0x308c64bd
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x308c600d
- (id)requestURLForConnection:(id)connection;	// 0x308c5be1
// declared property setter: - (void)setBodyData:(id)data;	// 0x308c64ad
// declared property setter: - (void)setMethod:(int)method;	// 0x308c64cd
- (void)setValue:(id)value forArgument:(id)argument;	// 0x308c5f9d
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x308c5f7d
@end
