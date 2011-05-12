/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSDictionary, NSData;

@interface SSURLConnectionResponse : NSObject {
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
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x324d9379; @synthesize=_mimeType
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x324d9349; @synthesize=_url
@property(readonly, retain) NSDictionary *allHeaderFields;	// G=0x324d93a9; converted property
@property(readonly, assign, nonatomic) NSData *bodyData;	// G=0x324d9399; @synthesize=_body
@property(readonly, assign, nonatomic) long long expectedContentLength;	// G=0x324d9389; @synthesize=_expectedContentLength
@property(readonly, assign) int statusCode;	// G=0x324d9339; converted property
@property(readonly, assign, nonatomic) NSString *suggestedFilename;	// G=0x324d9369; @synthesize=_suggestedFilename
@property(readonly, assign, nonatomic) NSString *textEncodingName;	// G=0x324d9359; @synthesize=_textEncodingName
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324d93d9
- (id)initWithURLResponse:(id)urlresponse bodyData:(id)data;	// 0x324d9755
// declared property getter: - (id)MIMEType;	// 0x324d9379
// declared property getter: - (id)URL;	// 0x324d9349
// converted property getter: - (id)allHeaderFields;	// 0x324d93a9
// declared property getter: - (id)bodyData;	// 0x324d9399
- (id)copyPropertyListEncoding;	// 0x324d956d
- (void)dealloc;	// 0x324d96b1
// declared property getter: - (long long)expectedContentLength;	// 0x324d9389
// converted property getter: - (int)statusCode;	// 0x324d9339
// declared property getter: - (id)suggestedFilename;	// 0x324d9369
// declared property getter: - (id)textEncodingName;	// 0x324d9359
@end

