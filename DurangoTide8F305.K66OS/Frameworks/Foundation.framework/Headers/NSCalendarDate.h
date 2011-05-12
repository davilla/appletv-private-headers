/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDate.h> // Unknown library
#import "Foundation-Structs.h"

@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
@private
	unsigned refCount;	// 4 = 0x4
	double _timeIntervalSinceReferenceDate;	// 8 = 0x8
	NSTimeZone *_timeZone;	// 16 = 0x10
	NSString *_formatString;	// 20 = 0x14
	void *_reserved;	// 24 = 0x18
}
@property(retain) id calendarFormat;	// G=0x327801e9; S=0x32765025; converted property
@property(readonly, assign) double timeIntervalSinceReferenceDate;	// G=0x3273783d; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x327801d9; S=0x32764fd1; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x327376b1
+ (id)calendarDate;	// 0x327807c5
+ (id)dateWithNaturalLanguageString:(id)naturalLanguageString date:(id)date locale:(id)locale;	// 0x327830f5
+ (id)dateWithString:(id)string calendarFormat:(id)format;	// 0x3278045d
+ (id)dateWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x32780419
+ (id)dateWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32768731
+ (id)distantFuture;	// 0x3278083d
+ (id)distantPast;	// 0x327807f9
- (id)init;	// 0x32737735
- (id)initWithCoder:(id)coder;	// 0x32780525
- (id)initWithString:(id)string;	// 0x327809d5
- (id)initWithString:(id)string calendarFormat:(id)format;	// 0x327804a1
- (id)initWithString:(id)string calendarFormat:(id)format locale:(id)locale;	// 0x32781acd
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x32737759
- (id)initWithYear:(int)year month:(unsigned)month day:(unsigned)day hour:(unsigned)hour minute:(unsigned)minute second:(unsigned)second timeZone:(id)zone;	// 0x32768785
- (id)addTimeInterval:(double)interval;	// 0x32764f49
// converted property getter: - (id)calendarFormat;	// 0x327801e9
- (Class)classForCoder;	// 0x32780a01
- (id)copyWithZone:(NSZone *)zone;	// 0x32780a0d
- (id)dateByAddingYears:(int)years months:(int)months days:(int)days hours:(int)hours minutes:(int)minutes seconds:(int)seconds;	// 0x32780ba5
- (int)dayOfCommonEra;	// 0x32780739
- (int)dayOfMonth;	// 0x32780a81
- (int)dayOfWeek;	// 0x32780ae1
- (int)dayOfYear;	// 0x32780b29
- (void)dealloc;	// 0x327378e9
- (id)description;	// 0x32780501
- (id)descriptionWithCalendarFormat:(id)calendarFormat;	// 0x327804c5
- (id)descriptionWithCalendarFormat:(id)calendarFormat locale:(id)locale;	// 0x32780e21
- (id)descriptionWithLocale:(id)locale;	// 0x327804dd
- (void)encodeWithCoder:(id)coder;	// 0x32780635
- (int)hourOfDay;	// 0x32784189
- (int)microsecondOfSecond;	// 0x32780b51
- (int)minuteOfHour;	// 0x32764ec9
- (int)monthOfYear;	// 0x32780ab1
- (oneway void)release;	// 0x3273784d
- (int)secondOfMinute;	// 0x327377c1
// converted property setter: - (void)setCalendarFormat:(id)format;	// 0x32765025
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x32764fd1
// converted property getter: - (double)timeIntervalSinceReferenceDate;	// 0x3273783d
// converted property getter: - (id)timeZone;	// 0x327801d9
- (id)timeZoneDetail;	// 0x327807b1
- (int)yearOfCommonEra;	// 0x32768701
- (void)years:(int *)years months:(int *)months days:(int *)days hours:(int *)hours minutes:(int *)minutes seconds:(int *)seconds sinceDate:(id)date;	// 0x32780c89
@end

