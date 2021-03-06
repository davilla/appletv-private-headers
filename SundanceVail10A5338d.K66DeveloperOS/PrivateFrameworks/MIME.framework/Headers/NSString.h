/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSString.h> // Unknown library
#import "MIME-Structs.h"


@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;	// 0x36b1539d
+ (id)mf_nameExtensions;	// 0x36b16371
+ (id)mf_partialSurnames;	// 0x36b164d9
- (id)mf_addressComment;	// 0x36b1529d
- (void)mf_addressCommentFirstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x36b15add
- (id)mf_addressDomain;	// 0x36b159a1
- (BOOL)mf_appearsToBeAnInitial;	// 0x36b165b5
- (id)mf_copyAddressComment;	// 0x36b15375
- (id)mf_copyIDNADecodedEmailAddress;	// 0x36b15a5d
- (id)mf_copyIDNAEncodedEmailAddress;	// 0x36b15a9d
- (id)mf_copyUncommentedAddress;	// 0x36b14c95
- (void)mf_firstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x36b15b51
- (BOOL)mf_hasSameNamesAs:(id)as;	// 0x36b16291
- (BOOL)mf_isEqualToAddress:(id)address;	// 0x36b15a3d
- (BOOL)mf_isLegalCommentedEmailAddress;	// 0x36b15591
- (BOOL)mf_isLegalEmailAddress;	// 0x36b155b9
- (NSRange)mf_rangeOfAddressDomain;	// 0x36b15749
- (id)mf_trimCommasSpacesQuotes;	// 0x36b1660d
- (id)mf_uncommentedAddress;	// 0x36b14f1d
- (id)mf_uncommentedAddressRespectingGroups;	// 0x36b14f45
@end

@interface NSString (MimeCharsetSupport)
- (id)_mf_bestMimeCharset:(id)charset;	// 0x36b18509
- (id)mf_bestMimeCharset;	// 0x36b184f5
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)messageDeliveryUsingSubtype;	// 0x36b188e5
- (id)mf_bestMimeCharsetUsingHint:(unsigned long)hint;	// 0x36b18639
@end

@interface NSString (MimeHeaderEncoding)
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)charsetHint;	// 0x36b19e39
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned long)encodingHint;	// 0x36b199b1
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned long)encodingHint;	// 0x36b18ff5
@end

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)data encoding:(unsigned)encoding;	// 0x36b20699
- (id)mf_MD5Digest;	// 0x36b20b0d
- (int)mf_caseInsensitiveCompareExcludingXDash:(id)dash;	// 0x36b20851
- (id)mf_copyStringByDecodingIDNA;	// 0x36b20f29
- (id)mf_copyStringByDecodingIDNAInRange:(NSRange)range;	// 0x36b20c45
- (id)mf_copyStringByEncodingIDNA;	// 0x36b20f5d
- (id)mf_copyStringByEncodingIDNAInRange:(NSRange)range;	// 0x36b20e81
- (id)mf_dataUsingEncoding:(unsigned)encoding;	// 0x36b20985
- (id)mf_dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x36b20999
- (const void *)mf_lossyDefaultCStringBytes;	// 0x36b206ed
- (id)mf_messageIDSubstring;	// 0x36b20b9d
@end

