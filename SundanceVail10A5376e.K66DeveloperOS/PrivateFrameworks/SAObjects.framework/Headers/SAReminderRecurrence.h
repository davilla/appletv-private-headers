/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSString, NSArray;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *daysOfTheMonth;	// G=0x3423a7c1; S=0x3423a7dd; 
@property(copy, nonatomic) NSArray *daysOfTheWeek;	// G=0x3423a82d; S=0x3423a849; 
@property(copy, nonatomic) NSArray *daysOfTheYear;	// G=0x3423a899; S=0x3423a8b5; 
@property(copy, nonatomic) NSString *frequencyTimeUnit;	// G=0x3423a905; S=0x3423a921; 
@property(assign, nonatomic) int interval;	// G=0x3423a971; S=0x3423a9e1; 
@property(copy, nonatomic) NSArray *monthsOfTheYear;	// G=0x3423aa25; S=0x3423aa41; 
@property(copy, nonatomic) NSArray *weeksOfTheYear;	// G=0x3423aa91; S=0x3423aaad; 
+ (id)recurrence;	// 0x3423a731
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x3423a775
// declared property getter: - (id)daysOfTheMonth;	// 0x3423a7c1
// declared property getter: - (id)daysOfTheWeek;	// 0x3423a82d
// declared property getter: - (id)daysOfTheYear;	// 0x3423a899
- (id)encodedClassName;	// 0x3423a725
// declared property getter: - (id)frequencyTimeUnit;	// 0x3423a905
- (id)groupIdentifier;	// 0x3423a715
// declared property getter: - (int)interval;	// 0x3423a971
// declared property getter: - (id)monthsOfTheYear;	// 0x3423aa25
// declared property setter: - (void)setDaysOfTheMonth:(id)theMonth;	// 0x3423a7dd
// declared property setter: - (void)setDaysOfTheWeek:(id)theWeek;	// 0x3423a849
// declared property setter: - (void)setDaysOfTheYear:(id)theYear;	// 0x3423a8b5
// declared property setter: - (void)setFrequencyTimeUnit:(id)unit;	// 0x3423a921
// declared property setter: - (void)setInterval:(int)interval;	// 0x3423a9e1
// declared property setter: - (void)setMonthsOfTheYear:(id)theYear;	// 0x3423aa41
// declared property setter: - (void)setWeeksOfTheYear:(id)theYear;	// 0x3423aaad
// declared property getter: - (id)weeksOfTheYear;	// 0x3423aa91
@end
