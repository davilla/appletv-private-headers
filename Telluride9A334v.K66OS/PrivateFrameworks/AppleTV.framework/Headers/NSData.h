/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSData.h> // Unknown library


@interface NSData (BRDataUtilities)
- (id)AES256DecryptWithKey:(id)key;	// 0x332c644d
- (id)AES256EncryptWithKey:(id)key;	// 0x332c6389
@end

@interface NSData (MimeDataEncoding)
+ (unsigned)quotedPrintableLengthOfHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x332e9a71
- (id)decodeBase64;	// 0x332e8e15
- (id)decodeModifiedBase64;	// 0x332e9a51
- (id)decodeQuotedPrintableForText:(BOOL)text;	// 0x332e87ad
- (id)encodeBase64;	// 0x332e9a39
- (id)encodeBase64AllowCancel:(BOOL)cancel;	// 0x332e9a45
- (id)encodeBase64HeaderData;	// 0x332e9a65
- (id)encodeBase64WithoutLineBreaks;	// 0x332e9441
- (id)encodeBase64WithoutLineBreaksOrPadding;	// 0x332e9a2d
- (id)encodeModifiedBase64;	// 0x332e9a59
- (id)encodeQuotedPrintableForText:(BOOL)text;	// 0x332e8ae5
- (id)encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;	// 0x332e8af9
- (BOOL)isValidBase64Data;	// 0x332e9391
@end

