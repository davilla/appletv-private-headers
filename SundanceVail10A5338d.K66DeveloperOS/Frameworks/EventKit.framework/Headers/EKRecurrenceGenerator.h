/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSCalendar, NSArray, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject {
	NSCalendar *_calendar;	// 4 = 0x4
	NSDate *_eventStartDate;	// 8 = 0x8
	NSDate *_eventEndDate;	// 12 = 0xc
	NSTimeZone *_eventTimeZone;	// 16 = 0x10
	unsigned _duration;	// 20 = 0x14
	BOOL _allDay;	// 24 = 0x18
	int _interval;	// 28 = 0x1c
	int _frequency;	// 32 = 0x20
	NSDate *_endDate;	// 36 = 0x24
	int _weekStart;	// 40 = 0x28
	BOOL _shouldPinMonthDays;	// 44 = 0x2c
	NSArray *_daysOfTheWeek;	// 48 = 0x30
	NSArray *_daysOfTheMonth;	// 52 = 0x34
	NSArray *_daysOfTheYear;	// 56 = 0x38
	NSArray *_weeksOfTheYear;	// 60 = 0x3c
	NSArray *_monthsOfTheYear;	// 64 = 0x40
	NSArray *_setPositions;	// 68 = 0x44
}
@property(assign, nonatomic) BOOL allDay;	// G=0x34b915a1; S=0x34b40669; @synthesize=_allDay
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x34b915c9; S=0x34b4094d; @synthesize=_daysOfTheMonth
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x34b915b5; S=0x34b40939; @synthesize=_daysOfTheWeek
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x34b915dd; S=0x34b40961; @synthesize=_daysOfTheYear
@property(copy, nonatomic) NSDate *endDate;	// G=0x34b409c1; S=0x34b409ad; @synthesize=_endDate
@property(copy, nonatomic) NSDate *eventEndDate;	// G=0x34b91579; S=0x34b40645; @synthesize=_eventEndDate
@property(copy, nonatomic) NSDate *eventStartDate;	// G=0x34b91565; S=0x34b40631; @synthesize=_eventStartDate
@property(copy, nonatomic) NSTimeZone *eventTimeZone;	// G=0x34b9158d; S=0x34b40659; @synthesize=_eventTimeZone
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x34b91605; S=0x34b40989; @synthesize=_monthsOfTheYear
@property(copy, nonatomic) NSArray *setPositions;	// G=0x34b91619; S=0x34b4099d; @synthesize=_setPositions
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x34b915f1; S=0x34b40975; @synthesize=_weeksOfTheYear
+ (id)generator;	// 0x34b8dc41
- (id)init;	// 0x34b8dc79
- (id)_computeRecurrenceEndDate:(int)date;	// 0x34b8f7f9
- (double)_convertAbsoluteTime:(double)time fromTimeZone:(id)timeZone toTimeZone:(id)timeZone3;	// 0x34b8f999
- (id)_copyDailyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x34b8f9c9
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x34b41fb1
- (id)_copyOccurrenceDatesBetweenStartDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date2 timeZone:(id)zone limit:(int)limit;	// 0x34b40abd
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x34b9075d
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x34b41149
- (id)_copyYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x34b90939
- (BOOL)_isSimpleYearlyRecurrence;	// 0x34b8f8e9
- (void)_prepareForCalRecurrence:(void *)calRecurrence locked:(BOOL)locked;	// 0x34b8f0d9
- (void)_prepareForEKRecurrence:(id)ekrecurrence;	// 0x34b40679
- (void)_prepareForPersistentRecurrence:(id)persistentRecurrence;	// 0x34b8eed9
- (void)_setupForCalEvent:(void *)calEvent locked:(BOOL)locked;	// 0x34b8dfd5
- (void)_setupForEKEvent:(id)ekevent;	// 0x34b8dcf5
- (void)_setupForPersistentEvent:(id)persistentEvent;	// 0x34b8dec1
- (BOOL)_validateCalDate:(XXStruct_lQVxyC)date pinned:(BOOL)pinned;	// 0x34b90731
// declared property getter: - (BOOL)allDay;	// 0x34b915a1
- (id)copyOccurrenceDatesWithCalEvent:(void *)calEvent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit locked:(BOOL)locked;	// 0x34b8e2f1
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x34b8e46d
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x34b8e12d
- (id)copyOccurrenceDatesWithEvent:(id)event recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x34b8e735
- (id)copyOccurrenceDatesWithEvent:(id)event startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x34b8e571
- (id)copyOccurrenceDatesWithInitialDate:(id)initialDate calRecurrences:(id)recurrences rangeStart:(id)start rangeEnd:(id)end timeZone:(id)zone;	// 0x34b8e839
// declared property getter: - (id)daysOfTheMonth;	// 0x34b915c9
// declared property getter: - (id)daysOfTheWeek;	// 0x34b915b5
// declared property getter: - (id)daysOfTheYear;	// 0x34b915dd
- (void)dealloc;	// 0x34b41ded
// declared property getter: - (id)endDate;	// 0x34b409c1
// declared property getter: - (id)eventEndDate;	// 0x34b91579
// declared property getter: - (id)eventStartDate;	// 0x34b91565
// declared property getter: - (id)eventTimeZone;	// 0x34b9158d
- (BOOL)isOccurrenceDate:(id)date validForEvent:(id)event;	// 0x34b8eb65
// declared property getter: - (id)monthsOfTheYear;	// 0x34b91605
- (id)nextOccurrenceDateWithEKRecurrences:(id)ekrecurrences initialDate:(id)date afterDate:(id)date3;	// 0x34b40261
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x34b40669
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x34b4094d
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x34b40939
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x34b40961
// declared property setter: - (void)setEndDate:(id)date;	// 0x34b409ad
// declared property setter: - (void)setEventEndDate:(id)date;	// 0x34b40645
// declared property setter: - (void)setEventStartDate:(id)date;	// 0x34b40631
// declared property setter: - (void)setEventTimeZone:(id)zone;	// 0x34b40659
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x34b40989
// declared property getter: - (id)setPositions;	// 0x34b91619
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x34b4099d
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x34b40975
// declared property getter: - (id)weeksOfTheYear;	// 0x34b915f1
@end

