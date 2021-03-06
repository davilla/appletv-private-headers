/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSArray, EKRecurrenceEnd, NSString;

@interface EKRecurrenceRule : EKObject <NSCopying> {
@private
	EKRecurrenceEnd *_cachedEnd;	// 36 = 0x24
}
@property(retain, nonatomic) EKRecurrenceEnd *cachedEnd;	// G=0x31eff03d; S=0x31f329e5; @synthesize=_cachedEnd
@property(readonly, assign, nonatomic) NSString *calendarIdentifier;	// G=0x31f32079; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheMonth;	// G=0x31eff31d; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheWeek;	// G=0x31eff091; 
@property(readonly, assign, nonatomic) NSArray *daysOfTheYear;	// G=0x31eff251; 
@property(readonly, assign, nonatomic) int firstDayOfTheWeek;	// G=0x31eff1ed; 
@property(readonly, assign, nonatomic) int frequency;	// G=0x31eff151; 
@property(readonly, assign, nonatomic) int interval;	// G=0x31eff0d5; 
@property(readonly, assign, nonatomic) NSArray *monthsOfTheYear;	// G=0x31eff04d; 
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd;	// G=0x31efef31; S=0x31ef771d; 
@property(readonly, assign, nonatomic) NSArray *setPositions;	// G=0x31eff295; 
@property(readonly, assign, nonatomic) NSArray *weeksOfTheYear;	// G=0x31eff2d9; 
+ (id)iCalendarValueFromDate:(id)date isDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x31f32369
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned)theWeek;	// 0x31f322f9
+ (id)iCalendarValueFromRecurrenceType:(int)recurrenceType;	// 0x31f322b1
+ (id)recurrenceRuleWithType:(int)type interval:(unsigned)interval end:(id)end;	// 0x31f31d45
- (id)init;	// 0x31ef7345
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval daysOfTheWeek:(id)theWeek daysOfTheMonth:(id)theMonth monthsOfTheYear:(id)theYear weeksOfTheYear:(id)theYear6 daysOfTheYear:(id)theYear7 setPositions:(id)positions end:(id)end;	// 0x31ef720d
- (id)initRecurrenceWithFrequency:(int)frequency interval:(int)interval end:(id)end;	// 0x31ef71d9
- (id)UUID;	// 0x31f31d8d
- (id)_persistentRule;	// 0x31efeff5
// declared property getter: - (id)cachedEnd;	// 0x31eff03d
- (id)cachedEndDate;	// 0x31f320b1
// declared property getter: - (id)calendarIdentifier;	// 0x31f32079
- (id)copyWithZone:(NSZone *)zone;	// 0x31f31e19
// declared property getter: - (id)daysOfTheMonth;	// 0x31eff31d
// declared property getter: - (id)daysOfTheWeek;	// 0x31eff091
// declared property getter: - (id)daysOfTheYear;	// 0x31eff251
- (void)dealloc;	// 0x31efeac1
- (id)description;	// 0x31f31db5
- (BOOL)dirtyStateMayAffectExceptionDates;	// 0x31f321cd
// declared property getter: - (int)firstDayOfTheWeek;	// 0x31eff1ed
// declared property getter: - (int)frequency;	// 0x31eff151
- (XXStruct_mY3THC)gregorianUnits;	// 0x31f31fe9
// declared property getter: - (int)interval;	// 0x31eff0d5
- (id)lazyLoadRelationForKey:(id)key;	// 0x31ef7b7d
// declared property getter: - (id)monthsOfTheYear;	// 0x31eff04d
- (id)owner;	// 0x31f02ead
// declared property getter: - (id)recurrenceEnd;	// 0x31efef31
- (void)reset;	// 0x31f32189
// declared property setter: - (void)setCachedEnd:(id)end;	// 0x31f329e5
- (void)setDaysOfTheMonth:(id)theMonth;	// 0x31ef78c5
- (void)setDaysOfTheWeek:(id)theWeek;	// 0x31ef78a9
- (void)setDaysOfTheYear:(id)theYear;	// 0x31ef7919
- (void)setFirstDayOfTheWeek:(unsigned)theWeek;	// 0x31f320b5
- (void)setFrequency:(int)frequency;	// 0x31ef7611
- (void)setInterval:(int)interval;	// 0x31ef7655
- (void)setMonthsOfTheYear:(id)theYear;	// 0x31ef78fd
// declared property getter: - (id)setPositions;	// 0x31eff295
// declared property setter: - (void)setRecurrenceEnd:(id)end;	// 0x31ef771d
- (void)setSetPositions:(id)positions;	// 0x31ef78e1
- (void)setWeeksOfTheYear:(id)theYear;	// 0x31ef7935
- (BOOL)shouldPinMonthDays;	// 0x31f02e55
- (id)stringValueAsDateOnly:(BOOL)only isFloating:(BOOL)floating;	// 0x31f32465
// declared property getter: - (id)weeksOfTheYear;	// 0x31eff2d9
@end

