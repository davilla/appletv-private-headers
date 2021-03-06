/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x30fedb45; S=0x30ff0149; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x30fedb65; S=0x30ff018d; 
@property(readonly, assign, nonatomic) NSDate *dueDate;	// G=0x30feda29; 
@property(retain) id dueDateComponents;	// G=0x30fdeb19; S=0x30fedf35; converted property
@property(retain) id startDateComponents;	// G=0x30fee179; S=0x30fee2e9; converted property
+ (id)reminderWithEventStore:(id)eventStore;	// 0x30fee515
- (id)initWithPersistentObject:(id)persistentObject;	// 0x30fde985
- (id)_persistentReminder;	// 0x30fedbc1
- (void)_sendModifiedNote;	// 0x310286d1
- (void)clearParentUUID;	// 0x30ff28ed
- (BOOL)commit:(id *)commit;	// 0x30feebc1
- (int)compareDueDateWithReminder:(id)reminder;	// 0x31028799
// declared property getter: - (id)completionDate;	// 0x30fedb65
- (void)dealloc;	// 0x30fedcc9
- (id)description;	// 0x31028879
// declared property getter: - (id)dueDate;	// 0x30feda29
// converted property getter: - (id)dueDateComponents;	// 0x30fdeb19
- (id)externalURI;	// 0x31028715
// declared property getter: - (BOOL)isCompleted;	// 0x30fedb45
- (id)parentUUID;	// 0x30ff20bd
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x30ff0149
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x30ff018d
// converted property setter: - (void)setDueDateComponents:(id)components;	// 0x30fedf35
// converted property setter: - (void)setStartDateComponents:(id)components;	// 0x30fee2e9
// converted property getter: - (id)startDateComponents;	// 0x30fee179
- (BOOL)validate:(id *)validate;	// 0x30fee955
@end

