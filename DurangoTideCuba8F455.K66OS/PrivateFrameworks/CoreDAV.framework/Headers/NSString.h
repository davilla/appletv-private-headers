/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSString.h> // Unknown library


@interface NSString (CoreDAVExtensions)
+ (id)CDVStringWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3318599d
+ (id)CDVStringWithNumberOfSpaces:(unsigned)spaces;	// 0x33186c1d
- (BOOL)CDVIsEqualToXmlCharString:(const char *)xmlCharString;	// 0x33186b7d
- (BOOL)CDVIsHTTPStatusLineWithStatusCode:(int)statusCode;	// 0x3318584d
- (id)CDVStringByAddingPercentEscapesForHREF;	// 0x331875e1
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;	// 0x33187665
- (id)CDVStringByAppendingSlashIfNeeded;	// 0x33185961
- (id)CDVStringByRemovingPercentEscapesForHREF;	// 0x33187631
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;	// 0x33185915
- (id)CDVStringByXMLUnquoting;	// 0x33187135
@end

@interface NSString (CoreDAVExtensions_Deprecated)
+ (id)stringWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33185b3d
+ (id)stringWithNumberOfSpaces:(unsigned)spaces;	// 0x33185ad9
- (id)initWithNameSpace:(id)nameSpace elementName:(id)name;	// 0x33185b51
- (BOOL)isEqualToXmlCharString:(const char *)xmlCharString;	// 0x33185aa9
- (BOOL)isHTTPStatusLineWithStatusCode:(int)statusCode;	// 0x33185ac1
- (id)stringByAddingPercentEscapesForHREF;	// 0x33185b29
- (id)stringByAppendingSlashIfNeeded;	// 0x33185b01
- (id)stringByRemovingPercentEscapesForHREF;	// 0x33185b15
- (id)stringByRemovingSlashIfNeeded;	// 0x33185aed
@end

