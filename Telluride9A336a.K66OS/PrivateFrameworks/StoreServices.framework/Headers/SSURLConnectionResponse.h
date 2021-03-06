/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSDictionary, NSData;

@interface SSURLConnectionResponse : NSObject <SSCoding> {
@private
	NSDictionary *_allHeaderFields;	// 4 = 0x4
	NSData *_body;	// 8 = 0x8
	long long _expectedContentLength;	// 12 = 0xc
	NSString *_mimeType;	// 20 = 0x14
	int _statusCode;	// 24 = 0x18
	NSString *_suggestedFilename;	// 28 = 0x1c
	NSString *_textEncodingName;	// 32 = 0x20
	NSURL *_url;	// 36 = 0x24
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x3420192d; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3420195d; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x342018bd; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x34201905; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x34201915; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x342018f5; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x3420193d; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x3420194d; @synthesize=_textEncodingName
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x342016b9
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x342012e9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x34201881
// declared property getter: - (id)MIMEType;	// 0x3420192d
// declared property getter: - (id)URL;	// 0x3420195d
// converted property getter: - (id)allHeaderFields;	// 0x342018bd
// declared property getter: - (id)bodyData;	// 0x34201905
- (id)copyPropertyListEncoding;	// 0x34201511
- (void *)copyXPCEncoding;	// 0x34201685
- (void)dealloc;	// 0x34201461
// declared property getter: - (long long)expectedContentLength;	// 0x34201915
// converted property getter: - (int)statusCode;	// 0x342018f5
// declared property getter: - (id)suggestedFilename;	// 0x3420193d
// declared property getter: - (id)textEncodingName;	// 0x3420194d
@end

