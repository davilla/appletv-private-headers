/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
 */

#import "DataDetectorsCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface DDURLifier : NSObject {
}
+ (void)initialize;	// 0x32c2701d
+ (BOOL)urlIfyNode:(id)node;	// 0x32c277a9
+ (BOOL)urlIfyNode:(id)node phoneNumberTypes:(unsigned)types;	// 0x32c27655
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types;	// 0x32c277c1
+ (id)urlIfyNode:(id)node usingScanner:(DDScannerRef)scanner phoneNumberTypes:(unsigned)types withReferenceDate:(id)referenceDate andTimeZone:(id)zone;	// 0x32c277ed
+ (BOOL)urlIfyTextNode:(id)node inNode:(id)node2 forMatches:(id)matches;	// 0x32c274cd
+ (id)urlMatchesForString:(id)string;	// 0x32c2705d
+ (id)urlMatchesForString:(id)string includingTel:(BOOL)tel;	// 0x32c27071
+ (id)urlMatchesForString:(id)string phoneNumberTypes:(unsigned)types;	// 0x32c27091
+ (id)urlMatchesForString:(id)string usingScanner:(DDScannerRef)scanner withPhoneNumberTypes:(unsigned)phoneNumberTypes referenceDate:(id)date timeZone:(id)zone storingResultsIn:(id)anIn;	// 0x32c27375
@end
