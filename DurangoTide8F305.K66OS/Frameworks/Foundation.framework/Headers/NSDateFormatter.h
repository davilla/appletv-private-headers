/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSFormatter.h"

@class NSMutableDictionary;

@interface NSDateFormatter : NSFormatter {
@private
	NSMutableDictionary *_attributes;	// 4 = 0x4
	CFDateFormatterRef _formatter;	// 8 = 0x8
	unsigned _counter;	// 12 = 0xc
}
@property(retain) id AMSymbol;	// G=0x3280f79d; S=0x3280e631; converted property
@property(retain) id PMSymbol;	// G=0x3280f851; S=0x3280e6c5; converted property
@property(retain) id calendar;	// G=0x3280f11d; S=0x3280e0e5; converted property
@property(retain) id dateFormat;	// G=0x3280de3d; S=0x3280dea9; converted property
@property(assign) unsigned dateStyle;	// G=0x3280dbe5; S=0x32765971; converted property
@property(retain) id defaultDate;	// G=0x3280f365; S=0x3280e2b9; converted property
@property(assign) BOOL doesRelativeDateFormatting;	// G=0x3280ef71; S=0x3280d42d; converted property
@property(retain) id eraSymbols;	// G=0x3280f419; S=0x3280e34d; converted property
@property(assign) unsigned formatterBehavior;	// G=0x3280d345; S=0x3280d2ed; converted property
@property(assign) BOOL generatesCalendarDates;	// G=0x3280ddb9; S=0x3280ddf5; converted property
@property(retain) id gregorianStartDate;	// G=0x32810229; S=0x3280eedd; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x3280f209; S=0x3280e179; converted property
@property(retain) id locale;	// G=0x3280dcdd; S=0x3280dd59; converted property
@property(retain) id longEraSymbols;	// G=0x3280f905; S=0x3280e759; converted property
@property(retain) id monthSymbols;	// G=0x3280f4cd; S=0x3280e3e1; converted property
@property(retain) id quarterSymbols;	// G=0x3280ff59; S=0x3280ec8d; converted property
@property(retain) id shortMonthSymbols;	// G=0x3280f581; S=0x3280e475; converted property
@property(retain) id shortQuarterSymbols;	// G=0x3281000d; S=0x3280ed21; converted property
@property(retain) id shortStandaloneMonthSymbols;	// G=0x3280fb21; S=0x3280e915; converted property
@property(retain) id shortStandaloneQuarterSymbols;	// G=0x32810175; S=0x3280ee49; converted property
@property(retain) id shortStandaloneWeekdaySymbols;	// G=0x3280fdf1; S=0x3280eb65; converted property
@property(retain) id shortWeekdaySymbols;	// G=0x3280f6e9; S=0x3280e59d; converted property
@property(retain) id standaloneMonthSymbols;	// G=0x3280fa6d; S=0x3280e881; converted property
@property(retain) id standaloneQuarterSymbols;	// G=0x328100c1; S=0x3280edb5; converted property
@property(retain) id standaloneWeekdaySymbols;	// G=0x3280fd3d; S=0x3280ead1; converted property
@property(assign) unsigned timeStyle;	// G=0x3280dc61; S=0x327659e9; converted property
@property(retain) id timeZone;	// G=0x3280f051; S=0x3280e051; converted property
@property(retain) id twoDigitStartDate;	// G=0x3280f2b1; S=0x3280e225; converted property
@property(retain) id veryShortMonthSymbols;	// G=0x3280f9b9; S=0x3280e7ed; converted property
@property(retain) id veryShortStandaloneMonthSymbols;	// G=0x3280fbd5; S=0x3280e9a9; converted property
@property(retain) id veryShortStandaloneWeekdaySymbols;	// G=0x3280fea5; S=0x3280ebf9; converted property
@property(retain) id veryShortWeekdaySymbols;	// G=0x3280fc89; S=0x3280ea3d; converted property
@property(retain) id weekdaySymbols;	// G=0x3280f635; S=0x3280e509; converted property
+ (id)dateFormatFromTemplate:(id)aTemplate options:(unsigned)options locale:(id)locale;	// 0x3280f019
+ (unsigned)defaultFormatterBehavior;	// 0x327651a5
+ (void)initialize;	// 0x32765099
+ (id)localizedStringFromDate:(id)date dateStyle:(unsigned)style timeStyle:(unsigned)style3;	// 0x3280d37d
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x327650b9
- (id)init;	// 0x327650cd
- (id)initWithCoder:(id)coder;	// 0x3280d605
// converted property getter: - (id)AMSymbol;	// 0x3280f79d
// converted property getter: - (id)PMSymbol;	// 0x3280f851
- (id)_dateFormat;	// 0x3280df2d
- (void)_regenerateFormatter;	// 0x327651b1
- (void)_reset;	// 0x3280d7f1
- (void)_setDateFormat:(id)format;	// 0x3280df85
- (void)_setIsLenient:(BOOL)lenient;	// 0x3280dfe9
// converted property getter: - (id)calendar;	// 0x3280f11d
- (id)copyWithZone:(NSZone *)zone;	// 0x3280d795
// converted property getter: - (id)dateFormat;	// 0x3280de3d
- (id)dateFromString:(id)string;	// 0x3280d3f5
// converted property getter: - (unsigned)dateStyle;	// 0x3280dbe5
- (void)dealloc;	// 0x3280d5ad
// converted property getter: - (id)defaultDate;	// 0x3280f365
// converted property getter: - (BOOL)doesRelativeDateFormatting;	// 0x3280ef71
- (void)encodeWithCoder:(id)coder;	// 0x3280d4d9
// converted property getter: - (id)eraSymbols;	// 0x3280f419
- (void)finalize;	// 0x3280d56d
// converted property getter: - (unsigned)formatterBehavior;	// 0x3280d345
// converted property getter: - (BOOL)generatesCalendarDates;	// 0x3280ddb9
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x3280db19
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x3280daf9
// converted property getter: - (id)gregorianStartDate;	// 0x32810229
// converted property getter: - (BOOL)isLenient;	// 0x3280f209
// converted property getter: - (id)locale;	// 0x3280dcdd
// converted property getter: - (id)longEraSymbols;	// 0x3280f905
// converted property getter: - (id)monthSymbols;	// 0x3280f4cd
// converted property getter: - (id)quarterSymbols;	// 0x3280ff59
// converted property setter: - (void)setAMSymbol:(id)symbol;	// 0x3280e631
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x3280e0e5
// converted property setter: - (void)setDateFormat:(id)format;	// 0x3280dea9
// converted property setter: - (void)setDateStyle:(unsigned)style;	// 0x32765971
// converted property setter: - (void)setDefaultDate:(id)date;	// 0x3280e2b9
// converted property setter: - (void)setDoesRelativeDateFormatting:(BOOL)formatting;	// 0x3280d42d
// converted property setter: - (void)setEraSymbols:(id)symbols;	// 0x3280e34d
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x3280d2ed
// converted property setter: - (void)setGeneratesCalendarDates:(BOOL)dates;	// 0x3280ddf5
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x3280eedd
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x3280e179
// converted property setter: - (void)setLocale:(id)locale;	// 0x3280dd59
// converted property setter: - (void)setLongEraSymbols:(id)symbols;	// 0x3280e759
// converted property setter: - (void)setMonthSymbols:(id)symbols;	// 0x3280e3e1
// converted property setter: - (void)setPMSymbol:(id)symbol;	// 0x3280e6c5
// converted property setter: - (void)setQuarterSymbols:(id)symbols;	// 0x3280ec8d
// converted property setter: - (void)setShortMonthSymbols:(id)symbols;	// 0x3280e475
// converted property setter: - (void)setShortQuarterSymbols:(id)symbols;	// 0x3280ed21
// converted property setter: - (void)setShortStandaloneMonthSymbols:(id)symbols;	// 0x3280e915
// converted property setter: - (void)setShortStandaloneQuarterSymbols:(id)symbols;	// 0x3280ee49
// converted property setter: - (void)setShortStandaloneWeekdaySymbols:(id)symbols;	// 0x3280eb65
// converted property setter: - (void)setShortWeekdaySymbols:(id)symbols;	// 0x3280e59d
// converted property setter: - (void)setStandaloneMonthSymbols:(id)symbols;	// 0x3280e881
// converted property setter: - (void)setStandaloneQuarterSymbols:(id)symbols;	// 0x3280edb5
// converted property setter: - (void)setStandaloneWeekdaySymbols:(id)symbols;	// 0x3280ead1
// converted property setter: - (void)setTimeStyle:(unsigned)style;	// 0x327659e9
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3280e051
// converted property setter: - (void)setTwoDigitStartDate:(id)date;	// 0x3280e225
// converted property setter: - (void)setVeryShortMonthSymbols:(id)symbols;	// 0x3280e7ed
// converted property setter: - (void)setVeryShortStandaloneMonthSymbols:(id)symbols;	// 0x3280e9a9
// converted property setter: - (void)setVeryShortStandaloneWeekdaySymbols:(id)symbols;	// 0x3280ebf9
// converted property setter: - (void)setVeryShortWeekdaySymbols:(id)symbols;	// 0x3280ea3d
// converted property setter: - (void)setWeekdaySymbols:(id)symbols;	// 0x3280e509
// converted property getter: - (id)shortMonthSymbols;	// 0x3280f581
// converted property getter: - (id)shortQuarterSymbols;	// 0x3281000d
// converted property getter: - (id)shortStandaloneMonthSymbols;	// 0x3280fb21
// converted property getter: - (id)shortStandaloneQuarterSymbols;	// 0x32810175
// converted property getter: - (id)shortStandaloneWeekdaySymbols;	// 0x3280fdf1
// converted property getter: - (id)shortWeekdaySymbols;	// 0x3280f6e9
// converted property getter: - (id)standaloneMonthSymbols;	// 0x3280fa6d
// converted property getter: - (id)standaloneQuarterSymbols;	// 0x328100c1
// converted property getter: - (id)standaloneWeekdaySymbols;	// 0x3280fd3d
- (id)stringForObjectValue:(id)objectValue;	// 0x32765a7d
- (id)stringFromDate:(id)date;	// 0x32765a61
// converted property getter: - (unsigned)timeStyle;	// 0x3280dc61
// converted property getter: - (id)timeZone;	// 0x3280f051
// converted property getter: - (id)twoDigitStartDate;	// 0x3280f2b1
// converted property getter: - (id)veryShortMonthSymbols;	// 0x3280f9b9
// converted property getter: - (id)veryShortStandaloneMonthSymbols;	// 0x3280fbd5
// converted property getter: - (id)veryShortStandaloneWeekdaySymbols;	// 0x3280fea5
// converted property getter: - (id)veryShortWeekdaySymbols;	// 0x3280fc89
// converted property getter: - (id)weekdaySymbols;	// 0x3280f635
@end

