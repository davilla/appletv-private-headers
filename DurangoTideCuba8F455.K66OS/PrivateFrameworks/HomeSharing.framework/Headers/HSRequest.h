/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import <NSObject.h> // Unknown library
#import "HomeSharing-Structs.h"

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
@property(readonly, assign, nonatomic) NSString *action;	// G=0x33377801; @synthesize=_action
@property(copy, nonatomic) NSData *bodyData;	// G=0x333777f1; S=0x33377e61; @synthesize=_bodyData
@property(assign, nonatomic) int method;	// G=0x333777d1; S=0x333777e1; @synthesize=_method
+ (id)request;	// 0x33377991
- (id)initWithAction:(id)action;	// 0x33377919
- (CFHTTPMessageRef)CFHTTPMessageForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x33377c45
- (id)_defaultHeaderFields;	// 0x33377811
- (id)_methodStringForMethod:(int)method;	// 0x333777b9
- (BOOL)acceptsGzipEncoding;	// 0x333777b5
// declared property getter: - (id)action;	// 0x33377801
// declared property getter: - (id)bodyData;	// 0x333777f1
- (id)canonicalResponseForResponse:(id)response;	// 0x333777b1
- (void)dealloc;	// 0x33377a1d
// declared property getter: - (int)method;	// 0x333777d1
- (id)requestURLForBaseURL:(id)baseURL sessionID:(unsigned)anId;	// 0x33377aad
- (id)requestURLForConnection:(id)connection;	// 0x33375839
// declared property setter: - (void)setBodyData:(id)data;	// 0x33377e61
// declared property setter: - (void)setMethod:(int)method;	// 0x333777e1
- (void)setValue:(id)value forArgument:(id)argument;	// 0x33377891
- (void)setValue:(id)value forHeaderField:(id)headerField;	// 0x333778f9
@end

