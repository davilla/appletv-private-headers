/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface SFUNumberFormatter : NSObject {
@private
	CFLocaleRef mLocale;	// 4 = 0x4
	CFArrayRef mDecimalFormatters;	// 8 = 0x8
	CFArrayRef mCurrencyFormatters;	// 12 = 0xc
	CFArrayRef mPercentageFormatters;	// 16 = 0x10
	CFArrayRef mScientificFormatters;	// 20 = 0x14
	CFNumberFormatterRef mFractionFormatter;	// 24 = 0x18
	NSMutableDictionary *mCurrencyCodeToSymbolMap;	// 28 = 0x1c
	NSString *mCurrencyString;	// 32 = 0x20
	NSString *mPercentageString;	// 36 = 0x24
	NSString *mScientificString;	// 40 = 0x28
	NSString *mDecimalString;	// 44 = 0x2c
	NSString *mPercentSymbol;	// 48 = 0x30
}
+ (id)availableCurrencyCodes;	// 0x32d8a6e9
+ (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32d8a16d
+ (id)currentLocaleCurrencyCode;	// 0x32d8a149
+ (id)defaultFormatStringForValueType:(int)valueType;	// 0x32d8a0cd
+ (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32d8a195
+ (void)formatString:(id)string replaceOccurencesOfUnescapedString:(id)unescapedString withString:(id)string3;	// 0x32d8c435
+ (id)formatString:(id)string transformedForNegativeStyle:(int)negativeStyle;	// 0x32d8a1bd
+ (id)formatterForLocale:(CFLocaleRef)locale;	// 0x32d8a075
+ (id)localizedPercentSymbol;	// 0x32d8a0a9
+ (id)numberFormatStringSpecialSymbols;	// 0x32d8a0f5
+ (int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32d8a46d
+ (int)positionOfMinusSignInNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32d8a42d
+ (int)positionOfSymbol:(id)symbol inNumberFormatSubpattern:(id)numberFormatSubpattern;	// 0x32d8a5c5
- (id)initWithLocale:(CFLocaleRef)locale;	// 0x32d8b579
- (BOOL)currencyFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3 currencyCode:(const CFStringRef *)code;	// 0x32d89f45
- (id)currencySymbolForCurrencyCode:(id)currencyCode;	// 0x32d8a875
- (id)currentLocaleCurrencyCode;	// 0x32d8a835
- (void)dealloc;	// 0x32d8a701
- (BOOL)decimalFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32d89f95
- (id)defaultFormatStringForValueType:(int)valueType;	// 0x32d89e81
- (id)displayNameForCurrencyCode:(id)currencyCode;	// 0x32d8a805
- (BOOL)findCurrencySymbolInString:(CFStringRef)string;	// 0x32d8ba9d
- (BOOL)fractionFromString:(CFStringRef)string value:(double *)value;	// 0x32d8b769
- (id)localizedPercentSymbol;	// 0x32d89ebd
- (void)numberPreferencesChanged:(id)changed;	// 0x32d89fd1
- (BOOL)percentageFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32d89f09
- (BOOL)scientificFromString:(CFStringRef)string value:(double *)value formatString:(const CFStringRef *)string3;	// 0x32d89ecd
- (BOOL)valueFromString:(CFStringRef)string formatters:(CFArrayRef)formatters value:(double *)value formatString:(const CFStringRef *)string4 currencyCode:(const CFStringRef *)code;	// 0x32d8aa45
@end

