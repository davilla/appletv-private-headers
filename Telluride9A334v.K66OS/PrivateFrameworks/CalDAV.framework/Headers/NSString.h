/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CalendarExtensions)
+ (id)stringWithFileSystemRepresentation:(const char *)fileSystemRepresentation;	// 0x359530ad
- (id)appendSlashIfNeeded;	// 0x35952591
- (id)quote;	// 0x35952f25
- (id)removeSlashIfNeeded;	// 0x3595253d
- (id)safeFilename;	// 0x359524c5
- (id)searchAndReplaceString:(id)string withString:(id)string2;	// 0x35952375
- (id)trimChar:(unsigned short)aChar;	// 0x35952349
- (id)trimCommas;	// 0x35952269
- (id)trimFinalChar:(unsigned short)aChar;	// 0x35952291
- (id)trimFinalComma;	// 0x359521bd
- (id)trimFirstChar:(unsigned short)aChar;	// 0x359522fd
- (id)trimFirstComma;	// 0x3595221d
- (id)trimWhiteSpace;	// 0x35953065
- (id)unquote;	// 0x35952fc5
@end

@interface NSString (CalendarPathExtensions)
+ (id)stringWithContentsOfFile:(id)file usingEncoding:(unsigned)encoding;	// 0x35952e9d
@end

@interface NSString (CALIDExtensions)
- (id)stringByDecodingSlashes;	// 0x35952e5d
- (id)stringByEncodingSlashes;	// 0x35952c09
@end

@interface NSString (CALExtensions)
+ (id)ellipsisString;	// 0x35951fdd
@end

@interface NSString (DAVExtensions)
- (id)stringByURLQuoting;	// 0x35953b21
- (id)stringByURLQuotingPaths;	// 0x35953ad5
- (id)stringByURLUnquoting;	// 0x35953d01
- (id)stringByXMLUnquoting;	// 0x359536a9
@end

