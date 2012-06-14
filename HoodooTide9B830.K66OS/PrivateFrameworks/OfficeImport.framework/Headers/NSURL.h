/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSURL.h> // Unknown library


@interface NSURL (OCPURLAdditions)
+ (id)URLWithPackagePart:(id)packagePart;	// 0x3126ac71
- (id)initWithPackagePart:(id)packagePart;	// 0x3126acad
- (BOOL)isInternalToPackage;	// 0x3126ae31
@end

@interface NSURL (SFUtilityAdditions)
+ (id)filePathURLWithEscapes:(id)escapes;	// 0x313be5d9
+ (id)improperlyEscapedString:(id)string;	// 0x313be8bd
+ (id)properlyEscapedString:(id)string;	// 0x313bea55
+ (id)relativeURLWithEscapes:(id)escapes;	// 0x313be581
- (BOOL)isRelative;	// 0x313be4fd
@end
