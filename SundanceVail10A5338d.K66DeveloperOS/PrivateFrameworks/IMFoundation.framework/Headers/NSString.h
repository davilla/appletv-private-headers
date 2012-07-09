/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSString.h> // Unknown library
#import "IMFoundation-Structs.h"


@interface NSString (FezAdditions)
+ (id)generatedRoomNameForGroupChat;	// 0x36930199
+ (id)randomString;	// 0x36930119
+ (id)stringGUID;	// 0x3693007d
+ (id)stringGUIDForObject:(id)object;	// 0x369300bd
- (int)_FZBestGuessFZIDType;	// 0x36930641
- (id)_FZIDFromEmail;	// 0x3693046d
- (id)_FZIDFromPhoneNumber;	// 0x3693049d
- (int)_FZIDType;	// 0x369304d5
- (id)_IDFromFZIDType:(int)fzidtype;	// 0x36930699
- (id)_URIFromEmail;	// 0x36930599
- (id)_URIFromFZIDType:(int)fzidtype;	// 0x36930665
- (id)_URIFromPhoneNumber;	// 0x369305d9
- (NSRange)__rangeOfNewlineInRange:(NSRange)range;	// 0x36930749
- (id)__stringByStrippingAttachmentAndControlCharacters;	// 0x36930959
- (id)__stringByStrippingControlCharacters;	// 0x36930861
- (BOOL)_appearsToBeEmail;	// 0x369306cd
- (BOOL)_appearsToBePhoneNumber;	// 0x369306d9
- (id)_bestGuessURI;	// 0x36930611
- (id)_stripFZIDPrefix;	// 0x36930415
- (unsigned)hexValue;	// 0x36930215
- (BOOL)isDirectory;	// 0x3692f72d
- (BOOL)isEqualToIgnoringCase:(id)ignoringCase;	// 0x3692f3e5
- (int)localizedCompareToString:(id)string;	// 0x3692dbad
- (id)pathStringForDisplay;	// 0x36930a71
- (BOOL)roomNameIsProbablyAutomaticallyGenerated;	// 0x36930aed
- (id)stringByAddingURLEscapes;	// 0x3693031d
- (id)stringByRemovingCharactersFromSet:(id)set;	// 0x3692edc9
- (id)stringByRemovingURLEscapes;	// 0x369302e5
- (id)stringByRemovingWhitespace;	// 0x3692d241
- (id)stringByResolvingAndStandardizingPath;	// 0x3692c13d
- (id)trimmedString;	// 0x3692d525
- (id)uniqueSavePath;	// 0x369307cd
- (unsigned)unsignedIntValue;	// 0x369302bd
- (id)urlFromString;	// 0x3693035d
@end

@interface NSString (MobileMeHelpers)
@property(readonly, assign, nonatomic) BOOL hasMobileMeSuffix;	// G=0x3693df49; 
@property(readonly, assign, nonatomic) NSString *mobileMeDomain;	// G=0x3693de51; 
@property(readonly, assign, nonatomic) NSString *stripMobileMSuffixIfPresent;	// G=0x3693df65; 
// declared property getter: - (BOOL)hasMobileMeSuffix;	// 0x3693df49
// declared property getter: - (id)mobileMeDomain;	// 0x3693de51
// declared property getter: - (id)stripMobileMSuffixIfPresent;	// 0x3693df65
@end
