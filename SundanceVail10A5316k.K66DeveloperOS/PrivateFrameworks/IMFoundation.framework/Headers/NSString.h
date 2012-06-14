/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSString.h> // Unknown library
#import "IMFoundation-Structs.h"


@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// 0x34a722c1
+ (id)randomString;	// 0x34a72241
+ (id)stringGUID;	// 0x34a721a5
+ (id)stringGUIDForObject:(id)object;	// 0x34a721e5
- (int)_FZBestGuessFZIDType;	// 0x34a72769
- (id)_FZIDFromEmail;	// 0x34a72595
- (id)_FZIDFromPhoneNumber;	// 0x34a725c5
- (int)_FZIDType;	// 0x34a725fd
- (id)_IDFromFZIDType:(int)fzidtype;	// 0x34a727c1
- (id)_URIFromEmail;	// 0x34a726c1
- (id)_URIFromFZIDType:(int)fzidtype;	// 0x34a7278d
- (id)_URIFromPhoneNumber;	// 0x34a72701
- (NSRange)__rangeOfNewlineInRange:(NSRange)range;	// 0x34a72871
- (id)__stringByStrippingAttachmentAndControlCharacters;	// 0x34a72a81
- (id)__stringByStrippingControlCharacters;	// 0x34a72989
- (BOOL)_appearsToBeEmail;	// 0x34a727f5
- (BOOL)_appearsToBePhoneNumber;	// 0x34a72801
- (id)_bestGuessURI;	// 0x34a72739
- (id)_stripFZIDPrefix;	// 0x34a7253d
- (unsigned)hexValue;	// 0x34a7233d
- (BOOL)isDirectory;	// 0x34a71855
- (BOOL)isEqualToIgnoringCase:(id)ignoringCase;	// 0x34a7150d
- (int)localizedCompareToString:(id)string;	// 0x34a6fcd5
- (id)pathStringForDisplay;	// 0x34a72b99
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;	// 0x34a72c15
- (id)stringByAddingURLEscapes;	// 0x34a72445
- (id)stringByRemovingCharactersFromSet:(id)set;	// 0x34a70ef1
- (id)stringByRemovingURLEscapes;	// 0x34a7240d
- (id)stringByRemovingWhitespace;	// 0x34a6f369
- (id)stringByResolvingAndStandardizingPath;	// 0x34a6dd8d
- (id)trimmedString;	// 0x34a6f64d
- (id)uniqueSavePath;	// 0x34a728f5
- (unsigned)unsignedIntValue;	// 0x34a723e5
- (id)urlFromString;	// 0x34a72485
@end

@interface NSString (MobileMeHelpers)
@property(readonly, assign, nonatomic) BOOL hasMobileMeSuffix;	// G=0x34a80175; 
@property(readonly, assign, nonatomic) NSString *mobileMeDomain;	// G=0x34a8007d; 
@property(readonly, assign, nonatomic) NSString *stripMobileMSuffixIfPresent;	// G=0x34a80191; 
// declared property getter: - (BOOL)hasMobileMeSuffix;	// 0x34a80175
// declared property getter: - (id)mobileMeDomain;	// 0x34a8007d
// declared property getter: - (id)stripMobileMSuffixIfPresent;	// 0x34a80191
@end
