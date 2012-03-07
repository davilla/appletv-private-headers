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
@property(retain) id AMSymbol;	// G=0x3033fabd; S=0x3033fb89; converted property
@property(retain) id PMSymbol;	// G=0x3033fc25; S=0x3033fcf1; converted property
@property(retain) id calendar;	// G=0x3033edc1; S=0x3033eecd; converted property
@property(retain) id dateFormat;	// G=0x3033ea6d; S=0x3027cad5; converted property
@property(assign) unsigned dateStyle;	// G=0x3033e715; S=0x30278579; converted property
@property(retain) id defaultDate;	// G=0x3033f24d; S=0x3033f319; converted property
@property(assign) BOOL doesRelativeDateFormatting;	// G=0x30341071; S=0x30341131; converted property
@property(retain) id eraSymbols;	// G=0x3033f3b5; S=0x3033f481; converted property
@property(assign) unsigned formatterBehavior;	// G=0x3033e9c9; S=0x3033ea09; converted property
@property(assign) BOOL generatesCalendarDates;	// G=0x3033e925; S=0x3033e96d; converted property
@property(retain) id gregorianStartDate;	// G=0x30340f09; S=0x30340fd5; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x3033ef69; S=0x3033f029; converted property
@property(retain) id locale;	// G=0x3033e825; S=0x3033e8b9; converted property
@property(retain) id longEraSymbols;	// G=0x3033fd8d; S=0x3033fe59; converted property
@property(retain) id monthSymbols;	// G=0x3033f51d; S=0x3033f5e9; converted property
@property(retain) id quarterSymbols;	// G=0x30340969; S=0x30340a35; converted property
@property(retain) id shortMonthSymbols;	// G=0x3033f685; S=0x3033f751; converted property
@property(retain) id shortQuarterSymbols;	// G=0x30340ad1; S=0x30340b9d; converted property
@property(retain) id shortStandaloneMonthSymbols;	// G=0x303401c5; S=0x30340291; converted property
@property(retain) id shortStandaloneQuarterSymbols;	// G=0x30340da1; S=0x30340e6d; converted property
@property(retain) id shortStandaloneWeekdaySymbols;	// G=0x30340699; S=0x30340765; converted property
@property(retain) id shortWeekdaySymbols;	// G=0x3033f955; S=0x3033fa21; converted property
@property(retain) id standaloneMonthSymbols;	// G=0x3034005d; S=0x30340129; converted property
@property(retain) id standaloneQuarterSymbols;	// G=0x30340c39; S=0x30340d05; converted property
@property(retain) id standaloneWeekdaySymbols;	// G=0x3029db59; S=0x303405fd; converted property
@property(assign) unsigned timeStyle;	// G=0x3033e79d; S=0x30278601; converted property
@property(retain) id timeZone;	// G=0x3033ec3d; S=0x3033ed25; converted property
@property(retain) id twoDigitStartDate;	// G=0x3033f0e5; S=0x3033f1b1; converted property
@property(retain) id veryShortMonthSymbols;	// G=0x3033fef5; S=0x3033ffc1; converted property
@property(retain) id veryShortStandaloneMonthSymbols;	// G=0x3034032d; S=0x303403f9; converted property
@property(retain) id veryShortStandaloneWeekdaySymbols;	// G=0x30340801; S=0x303408cd; converted property
@property(retain) id veryShortWeekdaySymbols;	// G=0x30340495; S=0x30340561; converted property
@property(retain) id weekdaySymbols;	// G=0x3033f7ed; S=0x3033f8b9; converted property
+ (id)dateFormatFromTemplate:(id)aTemplate options:(unsigned)options locale:(id)locale;	// 0x3033e6cd
+ (unsigned)defaultFormatterBehavior;	// 0x30277f0d
+ (void)initialize;	// 0x30277de9
+ (id)localizedStringFromDate:(id)date dateStyle:(unsigned)style timeStyle:(unsigned)style3;	// 0x3033e639
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x30277e15
- (id)init;	// 0x30277e2d
- (id)initWithCoder:(id)coder;	// 0x3033e119
// converted property getter: - (id)AMSymbol;	// 0x3033fabd
// converted property getter: - (id)PMSymbol;	// 0x3033fc25
- (id)_dateFormat;	// 0x3033eae9
- (void)_regenerateFormatter;	// 0x30277f1d
- (void)_reset;	// 0x3033defd
- (void)_setDateFormat:(id)format;	// 0x3033eb4d
- (void)_setIsLenient:(BOOL)lenient;	// 0x3033ebbd
// converted property getter: - (id)calendar;	// 0x3033edc1
- (id)copyWithZone:(NSZone *)zone;	// 0x3033e009
// converted property getter: - (id)dateFormat;	// 0x3033ea6d
- (id)dateFromString:(id)string;	// 0x3033e5fd
// converted property getter: - (unsigned)dateStyle;	// 0x3033e715
- (void)dealloc;	// 0x3029dc25
// converted property getter: - (id)defaultDate;	// 0x3033f24d
// converted property getter: - (BOOL)doesRelativeDateFormatting;	// 0x30341071
- (void)encodeWithCoder:(id)coder;	// 0x3033e071
// converted property getter: - (id)eraSymbols;	// 0x3033f3b5
- (void)finalize;	// 0x3033dfc5
// converted property getter: - (unsigned)formatterBehavior;	// 0x3033e9c9
// converted property getter: - (BOOL)generatesCalendarDates;	// 0x3033e925
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x3033e2b9
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x3033e5dd
// converted property getter: - (id)gregorianStartDate;	// 0x30340f09
// converted property getter: - (BOOL)isLenient;	// 0x3033ef69
// converted property getter: - (id)locale;	// 0x3033e825
// converted property getter: - (id)longEraSymbols;	// 0x3033fd8d
// converted property getter: - (id)monthSymbols;	// 0x3033f51d
// converted property getter: - (id)quarterSymbols;	// 0x30340969
// converted property setter: - (void)setAMSymbol:(id)symbol;	// 0x3033fb89
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x3033eecd
// converted property setter: - (void)setDateFormat:(id)format;	// 0x3027cad5
// converted property setter: - (void)setDateStyle:(unsigned)style;	// 0x30278579
// converted property setter: - (void)setDefaultDate:(id)date;	// 0x3033f319
// converted property setter: - (void)setDoesRelativeDateFormatting:(BOOL)formatting;	// 0x30341131
// converted property setter: - (void)setEraSymbols:(id)symbols;	// 0x3033f481
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x3033ea09
// converted property setter: - (void)setGeneratesCalendarDates:(BOOL)dates;	// 0x3033e96d
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x30340fd5
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x3033f029
// converted property setter: - (void)setLocale:(id)locale;	// 0x3033e8b9
// converted property setter: - (void)setLongEraSymbols:(id)symbols;	// 0x3033fe59
// converted property setter: - (void)setMonthSymbols:(id)symbols;	// 0x3033f5e9
// converted property setter: - (void)setPMSymbol:(id)symbol;	// 0x3033fcf1
// converted property setter: - (void)setQuarterSymbols:(id)symbols;	// 0x30340a35
// converted property setter: - (void)setShortMonthSymbols:(id)symbols;	// 0x3033f751
// converted property setter: - (void)setShortQuarterSymbols:(id)symbols;	// 0x30340b9d
// converted property setter: - (void)setShortStandaloneMonthSymbols:(id)symbols;	// 0x30340291
// converted property setter: - (void)setShortStandaloneQuarterSymbols:(id)symbols;	// 0x30340e6d
// converted property setter: - (void)setShortStandaloneWeekdaySymbols:(id)symbols;	// 0x30340765
// converted property setter: - (void)setShortWeekdaySymbols:(id)symbols;	// 0x3033fa21
// converted property setter: - (void)setStandaloneMonthSymbols:(id)symbols;	// 0x30340129
// converted property setter: - (void)setStandaloneQuarterSymbols:(id)symbols;	// 0x30340d05
// converted property setter: - (void)setStandaloneWeekdaySymbols:(id)symbols;	// 0x303405fd
// converted property setter: - (void)setTimeStyle:(unsigned)style;	// 0x30278601
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x3033ed25
// converted property setter: - (void)setTwoDigitStartDate:(id)date;	// 0x3033f1b1
// converted property setter: - (void)setVeryShortMonthSymbols:(id)symbols;	// 0x3033ffc1
// converted property setter: - (void)setVeryShortStandaloneMonthSymbols:(id)symbols;	// 0x303403f9
// converted property setter: - (void)setVeryShortStandaloneWeekdaySymbols:(id)symbols;	// 0x303408cd
// converted property setter: - (void)setVeryShortWeekdaySymbols:(id)symbols;	// 0x30340561
// converted property setter: - (void)setWeekdaySymbols:(id)symbols;	// 0x3033f8b9
// converted property getter: - (id)shortMonthSymbols;	// 0x3033f685
// converted property getter: - (id)shortQuarterSymbols;	// 0x30340ad1
// converted property getter: - (id)shortStandaloneMonthSymbols;	// 0x303401c5
// converted property getter: - (id)shortStandaloneQuarterSymbols;	// 0x30340da1
// converted property getter: - (id)shortStandaloneWeekdaySymbols;	// 0x30340699
// converted property getter: - (id)shortWeekdaySymbols;	// 0x3033f955
// converted property getter: - (id)standaloneMonthSymbols;	// 0x3034005d
// converted property getter: - (id)standaloneQuarterSymbols;	// 0x30340c39
// converted property getter: - (id)standaloneWeekdaySymbols;	// 0x3029db59
- (id)stringForObjectValue:(id)objectValue;	// 0x302786a9
- (id)stringFromDate:(id)date;	// 0x30278689
// converted property getter: - (unsigned)timeStyle;	// 0x3033e79d
// converted property getter: - (id)timeZone;	// 0x3033ec3d
// converted property getter: - (id)twoDigitStartDate;	// 0x3033f0e5
// converted property getter: - (id)veryShortMonthSymbols;	// 0x3033fef5
// converted property getter: - (id)veryShortStandaloneMonthSymbols;	// 0x3034032d
// converted property getter: - (id)veryShortStandaloneWeekdaySymbols;	// 0x30340801
// converted property getter: - (id)veryShortWeekdaySymbols;	// 0x30340495
// converted property getter: - (id)weekdaySymbols;	// 0x3033f7ed
@end
