/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSDate;

@interface SACalendarRecurrence : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int endCount;	// G=0x34224811; S=0x34224881; 
@property(copy, nonatomic) NSDate *endDate;	// G=0x342248c5; S=0x342248e1; 
@property(assign, nonatomic) int frequency;	// G=0x34224931; S=0x34224959; 
@property(assign, nonatomic) int interval;	// G=0x34224989; S=0x342249f9; 
+ (id)recurrence;	// 0x34224781
+ (id)recurrenceWithDictionary:(id)dictionary context:(id)context;	// 0x342247c5
- (id)encodedClassName;	// 0x34224775
// declared property getter: - (int)endCount;	// 0x34224811
// declared property getter: - (id)endDate;	// 0x342248c5
// declared property getter: - (int)frequency;	// 0x34224931
- (id)groupIdentifier;	// 0x34224765
// declared property getter: - (int)interval;	// 0x34224989
// declared property setter: - (void)setEndCount:(int)count;	// 0x34224881
// declared property setter: - (void)setEndDate:(id)date;	// 0x342248e1
// declared property setter: - (void)setFrequency:(int)frequency;	// 0x34224959
// declared property setter: - (void)setInterval:(int)interval;	// 0x342249f9
@end

