/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSData.h> // Unknown library


@interface NSData (MimeDataEncoding)
+ (unsigned)quotedPrintableLengthOfHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x329deb8d
- (id)decodeBase64;	// 0x329423c5
- (id)decodeModifiedBase64;	// 0x329ded31
- (id)decodeQuotedPrintableForText:(BOOL)text;	// 0x329def81
- (id)encodeBase64;	// 0x329426cd
- (id)encodeBase64AllowCancel:(BOOL)cancel;	// 0x329decfd
- (id)encodeBase64HeaderData;	// 0x329deccd
- (id)encodeBase64WithoutLineBreaks;	// 0x329ded19
- (id)encodeBase64WithoutLineBreaksOrPadding;	// 0x32941fd5
- (id)encodeModifiedBase64;	// 0x329dece5
- (id)encodeQuotedPrintableForText:(BOOL)text;	// 0x329dec41
- (id)encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;	// 0x329ded3d
- (BOOL)isValidBase64Data;	// 0x329deba9
@end

@interface NSData (BRDataUtilities)
- (id)AES256DecryptWithKey:(id)key;	// 0x32a18ff1
- (id)AES256EncryptWithKey:(id)key;	// 0x32a190b9
@end

