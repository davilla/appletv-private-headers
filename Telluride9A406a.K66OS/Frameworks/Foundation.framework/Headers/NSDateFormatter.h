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
@property(retain) id AMSymbol;	// G=0x35ec3abd; S=0x35ec3b89; converted property
@property(retain) id PMSymbol;	// G=0x35ec3c25; S=0x35ec3cf1; converted property
@property(retain) id calendar;	// G=0x35ec2dc1; S=0x35ec2ecd; converted property
@property(retain) id dateFormat;	// G=0x35ec2a6d; S=0x35e00ad5; converted property
@property(assign) unsigned dateStyle;	// G=0x35ec2715; S=0x35dfc579; converted property
@property(retain) id defaultDate;	// G=0x35ec324d; S=0x35ec3319; converted property
@property(assign) BOOL doesRelativeDateFormatting;	// G=0x35ec5071; S=0x35ec5131; converted property
@property(retain) id eraSymbols;	// G=0x35ec33b5; S=0x35ec3481; converted property
@property(assign) unsigned formatterBehavior;	// G=0x35ec29c9; S=0x35ec2a09; converted property
@property(assign) BOOL generatesCalendarDates;	// G=0x35ec2925; S=0x35ec296d; converted property
@property(retain) id gregorianStartDate;	// G=0x35ec4f09; S=0x35ec4fd5; converted property
@property(assign, getter=isLenient) BOOL lenient;	// G=0x35ec2f69; S=0x35ec3029; converted property
@property(retain) id locale;	// G=0x35ec2825; S=0x35ec28b9; converted property
@property(retain) id longEraSymbols;	// G=0x35ec3d8d; S=0x35ec3e59; converted property
@property(retain) id monthSymbols;	// G=0x35ec351d; S=0x35ec35e9; converted property
@property(retain) id quarterSymbols;	// G=0x35ec4969; S=0x35ec4a35; converted property
@property(retain) id shortMonthSymbols;	// G=0x35ec3685; S=0x35ec3751; converted property
@property(retain) id shortQuarterSymbols;	// G=0x35ec4ad1; S=0x35ec4b9d; converted property
@property(retain) id shortStandaloneMonthSymbols;	// G=0x35ec41c5; S=0x35ec4291; converted property
@property(retain) id shortStandaloneQuarterSymbols;	// G=0x35ec4da1; S=0x35ec4e6d; converted property
@property(retain) id shortStandaloneWeekdaySymbols;	// G=0x35ec4699; S=0x35ec4765; converted property
@property(retain) id shortWeekdaySymbols;	// G=0x35ec3955; S=0x35ec3a21; converted property
@property(retain) id standaloneMonthSymbols;	// G=0x35ec405d; S=0x35ec4129; converted property
@property(retain) id standaloneQuarterSymbols;	// G=0x35ec4c39; S=0x35ec4d05; converted property
@property(retain) id standaloneWeekdaySymbols;	// G=0x35e21b59; S=0x35ec45fd; converted property
@property(assign) unsigned timeStyle;	// G=0x35ec279d; S=0x35dfc601; converted property
@property(retain) id timeZone;	// G=0x35ec2c3d; S=0x35ec2d25; converted property
@property(retain) id twoDigitStartDate;	// G=0x35ec30e5; S=0x35ec31b1; converted property
@property(retain) id veryShortMonthSymbols;	// G=0x35ec3ef5; S=0x35ec3fc1; converted property
@property(retain) id veryShortStandaloneMonthSymbols;	// G=0x35ec432d; S=0x35ec43f9; converted property
@property(retain) id veryShortStandaloneWeekdaySymbols;	// G=0x35ec4801; S=0x35ec48cd; converted property
@property(retain) id veryShortWeekdaySymbols;	// G=0x35ec4495; S=0x35ec4561; converted property
@property(retain) id weekdaySymbols;	// G=0x35ec37ed; S=0x35ec38b9; converted property
+ (id)dateFormatFromTemplate:(id)aTemplate options:(unsigned)options locale:(id)locale;	// 0x35ec26cd
+ (unsigned)defaultFormatterBehavior;	// 0x35dfbf0d
+ (void)initialize;	// 0x35dfbde9
+ (id)localizedStringFromDate:(id)date dateStyle:(unsigned)style timeStyle:(unsigned)style3;	// 0x35ec2639
+ (void)setDefaultFormatterBehavior:(unsigned)behavior;	// 0x35dfbe15
- (id)init;	// 0x35dfbe2d
- (id)initWithCoder:(id)coder;	// 0x35ec2119
// converted property getter: - (id)AMSymbol;	// 0x35ec3abd
// converted property getter: - (id)PMSymbol;	// 0x35ec3c25
- (id)_dateFormat;	// 0x35ec2ae9
- (void)_regenerateFormatter;	// 0x35dfbf1d
- (void)_reset;	// 0x35ec1efd
- (void)_setDateFormat:(id)format;	// 0x35ec2b4d
- (void)_setIsLenient:(BOOL)lenient;	// 0x35ec2bbd
// converted property getter: - (id)calendar;	// 0x35ec2dc1
- (id)copyWithZone:(NSZone *)zone;	// 0x35ec2009
// converted property getter: - (id)dateFormat;	// 0x35ec2a6d
- (id)dateFromString:(id)string;	// 0x35ec25fd
// converted property getter: - (unsigned)dateStyle;	// 0x35ec2715
- (void)dealloc;	// 0x35e21c25
// converted property getter: - (id)defaultDate;	// 0x35ec324d
// converted property getter: - (BOOL)doesRelativeDateFormatting;	// 0x35ec5071
- (void)encodeWithCoder:(id)coder;	// 0x35ec2071
// converted property getter: - (id)eraSymbols;	// 0x35ec33b5
- (void)finalize;	// 0x35ec1fc5
// converted property getter: - (unsigned)formatterBehavior;	// 0x35ec29c9
// converted property getter: - (BOOL)generatesCalendarDates;	// 0x35ec2925
- (BOOL)getObjectValue:(out id *)value forString:(id)string errorDescription:(out id *)description;	// 0x35ec22b9
- (BOOL)getObjectValue:(out id *)value forString:(id)string range:(inout NSRange *)range error:(out id *)error;	// 0x35ec25dd
// converted property getter: - (id)gregorianStartDate;	// 0x35ec4f09
// converted property getter: - (BOOL)isLenient;	// 0x35ec2f69
// converted property getter: - (id)locale;	// 0x35ec2825
// converted property getter: - (id)longEraSymbols;	// 0x35ec3d8d
// converted property getter: - (id)monthSymbols;	// 0x35ec351d
// converted property getter: - (id)quarterSymbols;	// 0x35ec4969
// converted property setter: - (void)setAMSymbol:(id)symbol;	// 0x35ec3b89
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x35ec2ecd
// converted property setter: - (void)setDateFormat:(id)format;	// 0x35e00ad5
// converted property setter: - (void)setDateStyle:(unsigned)style;	// 0x35dfc579
// converted property setter: - (void)setDefaultDate:(id)date;	// 0x35ec3319
// converted property setter: - (void)setDoesRelativeDateFormatting:(BOOL)formatting;	// 0x35ec5131
// converted property setter: - (void)setEraSymbols:(id)symbols;	// 0x35ec3481
// converted property setter: - (void)setFormatterBehavior:(unsigned)behavior;	// 0x35ec2a09
// converted property setter: - (void)setGeneratesCalendarDates:(BOOL)dates;	// 0x35ec296d
// converted property setter: - (void)setGregorianStartDate:(id)date;	// 0x35ec4fd5
// converted property setter: - (void)setLenient:(BOOL)lenient;	// 0x35ec3029
// converted property setter: - (void)setLocale:(id)locale;	// 0x35ec28b9
// converted property setter: - (void)setLongEraSymbols:(id)symbols;	// 0x35ec3e59
// converted property setter: - (void)setMonthSymbols:(id)symbols;	// 0x35ec35e9
// converted property setter: - (void)setPMSymbol:(id)symbol;	// 0x35ec3cf1
// converted property setter: - (void)setQuarterSymbols:(id)symbols;	// 0x35ec4a35
// converted property setter: - (void)setShortMonthSymbols:(id)symbols;	// 0x35ec3751
// converted property setter: - (void)setShortQuarterSymbols:(id)symbols;	// 0x35ec4b9d
// converted property setter: - (void)setShortStandaloneMonthSymbols:(id)symbols;	// 0x35ec4291
// converted property setter: - (void)setShortStandaloneQuarterSymbols:(id)symbols;	// 0x35ec4e6d
// converted property setter: - (void)setShortStandaloneWeekdaySymbols:(id)symbols;	// 0x35ec4765
// converted property setter: - (void)setShortWeekdaySymbols:(id)symbols;	// 0x35ec3a21
// converted property setter: - (void)setStandaloneMonthSymbols:(id)symbols;	// 0x35ec4129
// converted property setter: - (void)setStandaloneQuarterSymbols:(id)symbols;	// 0x35ec4d05
// converted property setter: - (void)setStandaloneWeekdaySymbols:(id)symbols;	// 0x35ec45fd
// converted property setter: - (void)setTimeStyle:(unsigned)style;	// 0x35dfc601
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x35ec2d25
// converted property setter: - (void)setTwoDigitStartDate:(id)date;	// 0x35ec31b1
// converted property setter: - (void)setVeryShortMonthSymbols:(id)symbols;	// 0x35ec3fc1
// converted property setter: - (void)setVeryShortStandaloneMonthSymbols:(id)symbols;	// 0x35ec43f9
// converted property setter: - (void)setVeryShortStandaloneWeekdaySymbols:(id)symbols;	// 0x35ec48cd
// converted property setter: - (void)setVeryShortWeekdaySymbols:(id)symbols;	// 0x35ec4561
// converted property setter: - (void)setWeekdaySymbols:(id)symbols;	// 0x35ec38b9
// converted property getter: - (id)shortMonthSymbols;	// 0x35ec3685
// converted property getter: - (id)shortQuarterSymbols;	// 0x35ec4ad1
// converted property getter: - (id)shortStandaloneMonthSymbols;	// 0x35ec41c5
// converted property getter: - (id)shortStandaloneQuarterSymbols;	// 0x35ec4da1
// converted property getter: - (id)shortStandaloneWeekdaySymbols;	// 0x35ec4699
// converted property getter: - (id)shortWeekdaySymbols;	// 0x35ec3955
// converted property getter: - (id)standaloneMonthSymbols;	// 0x35ec405d
// converted property getter: - (id)standaloneQuarterSymbols;	// 0x35ec4c39
// converted property getter: - (id)standaloneWeekdaySymbols;	// 0x35e21b59
- (id)stringForObjectValue:(id)objectValue;	// 0x35dfc6a9
- (id)stringFromDate:(id)date;	// 0x35dfc689
// converted property getter: - (unsigned)timeStyle;	// 0x35ec279d
// converted property getter: - (id)timeZone;	// 0x35ec2c3d
// converted property getter: - (id)twoDigitStartDate;	// 0x35ec30e5
// converted property getter: - (id)veryShortMonthSymbols;	// 0x35ec3ef5
// converted property getter: - (id)veryShortStandaloneMonthSymbols;	// 0x35ec432d
// converted property getter: - (id)veryShortStandaloneWeekdaySymbols;	// 0x35ec4801
// converted property getter: - (id)veryShortWeekdaySymbols;	// 0x35ec4495
// converted property getter: - (id)weekdaySymbols;	// 0x35ec37ed
@end

