/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSCalendar, NSDate, NSTimeZone;

@interface EKRecurrenceGenerator : NSObject {
@private
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
@property(assign, nonatomic) BOOL allDay;	// G=0x327abe09; S=0x32767629; @synthesize=_allDay
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x327abe29; S=0x32767925; @synthesize=_daysOfTheMonth
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x327abe19; S=0x32767901; @synthesize=_daysOfTheWeek
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x327abe39; S=0x32767949; @synthesize=_daysOfTheYear
@property(copy, nonatomic) NSDate *endDate;	// G=0x327679fd; S=0x327679d9; @synthesize=_endDate
@property(copy, nonatomic) NSDate *eventEndDate;	// G=0x327abde9; S=0x327675e1; @synthesize=_eventEndDate
@property(copy, nonatomic) NSDate *eventStartDate;	// G=0x327abdd9; S=0x327675bd; @synthesize=_eventStartDate
@property(copy, nonatomic) NSTimeZone *eventTimeZone;	// G=0x327abdf9; S=0x32767605; @synthesize=_eventTimeZone
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x327abe59; S=0x32767991; @synthesize=_monthsOfTheYear
@property(copy, nonatomic) NSArray *setPositions;	// G=0x327abe69; S=0x327679b5; @synthesize=_setPositions
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x327abe49; S=0x3276796d; @synthesize=_weeksOfTheYear
+ (id)generator;	// 0x327a84e1
- (id)init;	// 0x327a8519
- (id)_computeRecurrenceEndDate:(int)date;	// 0x327aa029
- (double)_convertAbsoluteTime:(double)time fromTimeZone:(id)timeZone toTimeZone:(id)timeZone3;	// 0x327aa1d1
- (id)_copyDailyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x327aa1fd
- (id)_copyMonthlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x32769141
- (id)_copyOccurrenceDatesBetweenStartDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date2 timeZone:(id)zone limit:(int)limit;	// 0x32767af1
- (id)_copySimpleYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x327aafcd
- (id)_copyWeeklyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x327681dd
- (id)_copyYearlyOccurrencesWithInitialDate:(id)initialDate startDate:(id)date endDate:(id)date3 count:(unsigned)count;	// 0x327ab1b5
- (BOOL)_isSimpleYearlyRecurrence;	// 0x327aa121
- (void)_prepareForCalRecurrence:(void *)calRecurrence locked:(BOOL)locked;	// 0x327a98f5
- (void)_prepareForEKRecurrence:(id)ekrecurrence;	// 0x32767639
- (void)_prepareForPersistentRecurrence:(id)persistentRecurrence;	// 0x327a96fd
- (void)_setupForCalEvent:(void *)calEvent locked:(BOOL)locked;	// 0x327a8881
- (void)_setupForEKEvent:(id)ekevent;	// 0x327a8595
- (void)_setupForPersistentEvent:(id)persistentEvent;	// 0x327a8769
- (BOOL)_validateCalDate:(XXStruct_lQVxyC)date pinned:(BOOL)pinned;	// 0x327aaf9d
// declared property getter: - (BOOL)allDay;	// 0x327abe09
- (id)copyOccurrenceDatesWithCalEvent:(void *)calEvent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit locked:(BOOL)locked;	// 0x327a8b7d
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x327a8cd5
- (id)copyOccurrenceDatesWithEKEvent:(id)ekevent startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x327a89e9
- (id)copyOccurrenceDatesWithEvent:(id)event recurrenceRule:(id)rule startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date4 timeZone:(id)zone limit:(int)limit;	// 0x327a8f71
- (id)copyOccurrenceDatesWithEvent:(id)event startDate:(XXStruct_lQVxyC)date endDate:(XXStruct_lQVxyC)date3 timeZone:(id)zone limit:(int)limit;	// 0x327a8ddd
- (id)copyOccurrenceDatesWithInitialDate:(id)initialDate calRecurrences:(id)recurrences rangeStart:(id)start rangeEnd:(id)end timeZone:(id)zone;	// 0x327a9079
// declared property getter: - (id)daysOfTheMonth;	// 0x327abe29
// declared property getter: - (id)daysOfTheWeek;	// 0x327abe19
// declared property getter: - (id)daysOfTheYear;	// 0x327abe39
- (void)dealloc;	// 0x32768f4d
// declared property getter: - (id)endDate;	// 0x327679fd
// declared property getter: - (id)eventEndDate;	// 0x327abde9
// declared property getter: - (id)eventStartDate;	// 0x327abdd9
// declared property getter: - (id)eventTimeZone;	// 0x327abdf9
- (BOOL)isOccurrenceDate:(id)date validForEvent:(id)event;	// 0x327a93b1
// declared property getter: - (id)monthsOfTheYear;	// 0x327abe59
- (id)nextOccurrenceDateWithEKRecurrences:(id)ekrecurrences initialDate:(id)date afterDate:(id)date3;	// 0x327671f5
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x32767629
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x32767925
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x32767901
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x32767949
// declared property setter: - (void)setEndDate:(id)date;	// 0x327679d9
// declared property setter: - (void)setEventEndDate:(id)date;	// 0x327675e1
// declared property setter: - (void)setEventStartDate:(id)date;	// 0x327675bd
// declared property setter: - (void)setEventTimeZone:(id)zone;	// 0x32767605
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x32767991
// declared property getter: - (id)setPositions;	// 0x327abe69
// declared property setter: - (void)setSetPositions:(id)positions;	// 0x327679b5
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x3276796d
// declared property getter: - (id)weeksOfTheYear;	// 0x327abe49
@end
