/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x32cfc0e5
- (BOOL)hasPrefixCaseInsensitive:(id)insensitive;	// 0x32cfc071
- (id)quote;	// 0x32cfc9c1
- (id)safeFilename;	// 0x32cfb771
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x32cfb7e9
- (id)trimChar:(unsigned short)aChar;	// 0x32cfb901
- (id)trimCommas;	// 0x32cfb9d9
- (id)trimFinalChar:(unsigned short)aChar;	// 0x32cfb971
- (id)trimFinalComma;	// 0x32cfba41
- (id)trimFirstChar:(unsigned short)aChar;	// 0x32cfb929
- (id)trimFirstComma;	// 0x32cfb9fd
- (id)trimWhiteSpace;	// 0x32cfc0a5
- (id)unquote;	// 0x32cfca5d
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x32cfbff1
- (BOOL)isPathToAppleScript;	// 0x32cfbd11
- (BOOL)isPathToBackupFile;	// 0x32cfbc21
- (BOOL)isPathToICalBookmark;	// 0x32cfbbc1
- (BOOL)isPathToICalData;	// 0x32cfbc5d
- (BOOL)isPathToVCalData;	// 0x32cfbc99
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x32cfbe09
- (id)stringByEncodingSlashes;	// 0x32cfcaf9
@end

@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x32cfbd4d
@end

@interface NSString (CalNSStringEmailAddressAdditions)
- (BOOL)hasMailto;	// 0x32cfcba1
- (BOOL)resemblesEmailAddress;	// 0x32cfcc79
- (id)stringAddingMailto;	// 0x32cfcb69
- (id)stringRemovingMailto;	// 0x32cfcb35
@end

