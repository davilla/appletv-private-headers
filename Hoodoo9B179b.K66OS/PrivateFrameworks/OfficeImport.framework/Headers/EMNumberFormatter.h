/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableString, NSString;

__attribute__((visibility("hidden")))
@interface EMNumberFormatter : NSObject {
@private
	CFNumberFormatterRef mGenericFormatter;	// 4 = 0x4
	CFNumberFormatterRef mBigNumberFormatter;	// 8 = 0x8
	CFNumberFormatterRef mSmallNumberFormatter;	// 12 = 0xc
	CFDateFormatterRef mDateFormatter;	// 16 = 0x10
	CFNumberFormatterRef mCurrencyFormatter;	// 20 = 0x14
	NSString *excelFormatString;	// 24 = 0x18
	NSMutableString *icuFormatString;	// 28 = 0x1c
	bool mIsNegativeRed;	// 32 = 0x20
	unsigned short mCurrencySymbol;	// 34 = 0x22
	int formatType;	// 36 = 0x24
}
@property(readonly, assign) int formatType;	// G=0x32831df1; converted property
@property(readonly, retain) NSMutableString *icuFormatString;	// G=0x32a2b0c9; converted property
+ (void)initFormatterCache;	// 0x3281bb61
+ (id)formatterForFormat:(id)format;	// 0x32831989
+ (void)releaseFormatterCache;	// 0x32846d29
- (id)initWithDefaultFormatString;	// 0x3283ad99
- (id)initWithExcelFormatString:(id)excelFormatString;	// 0x32831a95
- (CFNumberFormatterRef)_bigNumberFormatter;	// 0x328f594d
- (CFNumberFormatterRef)_currencyFormatter;	// 0x3289303d
- (CFDateFormatterRef)_dateFormatter;	// 0x32831e61
- (CFNumberFormatterRef)_genericFormatter;	// 0x3283af61
- (CFNumberFormatterRef)_genericFormatterForDouble;	// 0x3283b169
- (CFNumberFormatterRef)_genericFormatterForPercent;	// 0x3288ebb9
- (CFNumberFormatterRef)_smallNumberFormatter;	// 0x3283e685
- (void)convertCurrencyFormat;	// 0x3289310d
- (void)convertDateFormat;	// 0x32831f1d
- (void)convertGenericNumberFormat;	// 0x3283b1e5
- (void)dealloc;	// 0x32846d51
- (id)formatCurrency:(double)currency;	// 0x32892fd9
- (id)formatDate:(id)date;	// 0x32831e21
- (id)formatDefault:(double)aDefault;	// 0x3283ae4d
- (id)formatDoubleValue:(double)value;	// 0x3283b105
- (id)formatFraction:(double)fraction;	// 0x329348e1
- (id)formatPercent:(double)percent;	// 0x3288eb55
- (id)formatPhoneNumber:(double)number;	// 0x3293d45d
// converted property getter: - (int)formatType;	// 0x32831df1
// converted property getter: - (id)icuFormatString;	// 0x32a2b0c9
- (bool)isNegativeRed;	// 0x32831e01
- (void)preprocessIcuString;	// 0x32831b61
@end
