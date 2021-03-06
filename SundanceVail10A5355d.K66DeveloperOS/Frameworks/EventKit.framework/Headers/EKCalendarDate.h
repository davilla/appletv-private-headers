/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "EventKit-Structs.h"

@class EKTimeZone;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
	XXStruct_lQVxyC _dateGr;	// 4 = 0x4
	double _dateAbs;	// 20 = 0x14
	EKTimeZone *_timeZone;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
}
@property(readonly, retain) EKTimeZone *timeZone;	// G=0x31f69f55; converted property
+ (id)calendarDateWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x31f5cd91
+ (id)calendarDateWithDate:(id)date timeZone:(id)zone;	// 0x31f5fc21
+ (id)calendarDateWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x31f5e5ad
+ (id)calendarDateWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x31f6b8a1
- (id)initWithAbsoluteTime:(double)absoluteTime internalTimeZone:(id)zone;	// 0x31fc4105
- (id)initWithAbsoluteTime:(double)absoluteTime timeZone:(id)zone;	// 0x31f5cdd9
- (id)initWithDate:(id)date timeZone:(id)zone;	// 0x31f5fc65
- (id)initWithDateComponents:(id)dateComponents timeZone:(id)zone;	// 0x31f5e5ed
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate internalTimeZone:(id)zone;	// 0x31f5e511
- (id)initWithGregorianDate:(XXStruct_lQVxyC)gregorianDate timeZone:(id)zone;	// 0x31f6b8f5
- (double)absoluteTime;	// 0x31f5d7a5
- (id)calendarDateByAddingDays:(int)days;	// 0x31f5e901
- (id)calendarDateByAddingGregorianUnits:(XXStruct_mY3THC)units;	// 0x31f5e931
- (id)calendarDateByAddingWeeks:(int)weeks;	// 0x31fc42d5
- (id)calendarDateForDay;	// 0x31f5e781
- (id)calendarDateForEndOfDay;	// 0x31f5ea29
- (id)calendarDateForEndOfMonth;	// 0x31f638a1
- (id)calendarDateForEndOfWeekWithWeekStart:(unsigned)weekStart;	// 0x31f636dd
- (id)calendarDateForMonth;	// 0x31f637bd
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart;	// 0x31f5d6f9
- (id)calendarDateForWeekWithWeekStart:(unsigned)weekStart daysSinceWeekStart:(int *)start;	// 0x31f5d70d
- (id)calendarDateForYear;	// 0x31fc44e5
- (id)calendarDateInTimeZone:(id)timeZone;	// 0x31f75145
- (id)calendarDateWithDate:(id)date;	// 0x31fc4309
- (int)compare:(id)compare;	// 0x31f60c2d
- (id)components;	// 0x31f75249
- (id)copyWithZone:(NSZone *)zone;	// 0x31f5d6e9
- (id)date;	// 0x31f5eb21
- (unsigned)day;	// 0x31f79789
- (unsigned)dayOfWeek;	// 0x31f78aa9
- (unsigned)dayOfYear;	// 0x31fc43e9
- (unsigned)daysInMonth;	// 0x31f639a9
- (unsigned)daysInYear;	// 0x31fc444d
- (void)dealloc;	// 0x31f5fe75
- (id)description;	// 0x31fc4185
- (XXStruct_mY3THC)differenceAsGregorianUnits:(id)units flags:(unsigned long)flags;	// 0x31f6062d
- (int)differenceInDays:(id)days;	// 0x31f636a1
- (int)differenceInMonths:(id)months;	// 0x31f7972d
- (int)differenceInYears:(id)years;	// 0x31fc4349
- (id)earlierDate:(id)date;	// 0x31f79b45
- (XXStruct_lQVxyC)gregorianDate;	// 0x31f5e85d
- (unsigned)hour;	// 0x31f7824d
- (BOOL)isEqual:(id)equal;	// 0x31f6abf5
- (id)laterDate:(id)date;	// 0x31fc45d5
- (unsigned)minute;	// 0x31f78281
- (unsigned)month;	// 0x31fc43b5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x31f78a01
- (double)second;	// 0x31f782b9
- (int)secondsFromGMT;	// 0x31fc4295
// converted property getter: - (id)timeZone;	// 0x31f69f55
- (unsigned)weekOfYear;	// 0x31fc4419
- (unsigned)weeksInYear;	// 0x31fc4495
- (unsigned)year;	// 0x31fc4385
@end

