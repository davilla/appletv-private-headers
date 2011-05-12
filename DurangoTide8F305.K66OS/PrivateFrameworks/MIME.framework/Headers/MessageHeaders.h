/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "MIME-Structs.h"
#import "NSCopying.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
	NSData *_data;	// 4 = 0x4
	unsigned _preferredEncoding;	// 8 = 0x8
}
@property(assign) unsigned long preferredEncoding;	// G=0x304a8a11; S=0x304a8a21; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x304aaf89
+ (id)basicHeaders;	// 0x304a9121
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x304aa5bd
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x304a9289
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x304a9101
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x304a8ae1
- (id)init;	// 0x304a8a31
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x304a90bd
- (id)_capitalizedKeyForKey:(id)key;	// 0x304a9299
- (id)_copyAddressListForKey:(id)key;	// 0x304a8df1
- (id)_copyEncodedHeaderStringForKey:(id)key;	// 0x304a9399
- (id)_copyHeaderValueForKey:(id)key;	// 0x304a8ed5
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x304aa271
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x304aa4e9
- (id)_headerValueForKey:(id)key;	// 0x304a8eb1
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x304a8f65
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x304a9279
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x304a9309
- (id)allHeaderKeys;	// 0x304a8f95
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x304a95cd
- (id)copyAddressListForBcc;	// 0x304a8d11
- (id)copyAddressListForCc;	// 0x304a8d2d
- (id)copyAddressListForReplyTo;	// 0x304a8cd9
- (id)copyAddressListForResentFrom;	// 0x304a8cf5
- (id)copyAddressListForSender;	// 0x304a8dd5
- (id)copyAddressListForTo;	// 0x304a8d49
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x304a9f91
- (id)copyEncodedStringForBcc;	// 0x304a8c69
- (id)copyEncodedStringForCc;	// 0x304a8c85
- (id)copyEncodedStringForResentFrom;	// 0x304a8c4d
- (id)copyEncodedStringForSender;	// 0x304a8cbd
- (id)copyEncodedStringForTo;	// 0x304a8ca1
- (id)copyFirstHeaderForKey:(id)key;	// 0x304a8bfd
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x304a954d
- (id)copyFirstStringValueForKey:(id)key;	// 0x304a8b51
- (id)copyHeadersForKey:(id)key;	// 0x304a8e71
- (id)copyWithZone:(NSZone *)zone;	// 0x304a9075
- (void)dealloc;	// 0x304a902d
- (id)description;	// 0x304a8a6d
- (id)encodedHeaders;	// 0x304a8b21
- (id)firstHeaderForKey:(id)key;	// 0x304a8c29
- (id)firstSenderAddress;	// 0x304a8d65
- (BOOL)hasHeaderForKey:(id)key;	// 0x304aa331
- (id)headerData;	// 0x304a8fb5
- (id)headersForKey:(id)key;	// 0x304a8e4d
- (id)isoLatin1CharsetHint;	// 0x304aae21
- (BOOL)messageIsFromEntourage;	// 0x304aad79
- (id)mutableCopy;	// 0x304a8fe5
// converted property getter: - (unsigned long)preferredEncoding;	// 0x304a8a11
- (id)references;	// 0x304aa379
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x304a8a21
@end

