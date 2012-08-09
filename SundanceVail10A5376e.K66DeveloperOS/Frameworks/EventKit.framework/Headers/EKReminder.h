/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKCalendarItem.h"

@class NSDate, NSDateComponents;

@interface EKReminder : EKCalendarItem {
}
@property(assign, nonatomic, getter=isCompleted) BOOL completed;	// G=0x3680227d; S=0x36802239; 
@property(copy, nonatomic) NSDate *completionDate;	// G=0x36801f39; S=0x36801fd5; 
@property(assign) unsigned displayOrder;	// G=0x3680203d; S=0x368020d9; converted property
@property(copy, nonatomic) NSDateComponents *dueDateComponents;	// G=0x36801add; S=0x36801c45; 
@property(assign, nonatomic) int priority;	// G=0x3680211d; S=0x36802149; 
@property(copy, nonatomic) NSDateComponents *startDateComponents;	// G=0x36801789; S=0x368018e5; 
+ (id)reminderWithEventStore:(id)eventStore;	// 0x3680155d
- (id)initWithPersistentObject:(id)persistentObject;	// 0x368015f1
- (id)_persistentReminder;	// 0x368016a1
- (void)_sendModifiedNote;	// 0x368016b1
- (void)clearParentID;	// 0x368022c1
- (BOOL)commit:(id *)commit;	// 0x36802555
// declared property getter: - (id)completionDate;	// 0x36801f39
- (void)dealloc;	// 0x36801675
- (id)description;	// 0x36802175
// converted property getter: - (unsigned)displayOrder;	// 0x3680203d
- (id)dueDate;	// 0x36801a95
// declared property getter: - (id)dueDateComponents;	// 0x36801add
- (id)externalURI;	// 0x36801705
// declared property getter: - (BOOL)isCompleted;	// 0x3680227d
- (id)parentID;	// 0x36802299
// declared property getter: - (int)priority;	// 0x3680211d
- (id)reminderIdentifier;	// 0x368016f5
// declared property setter: - (void)setCompleted:(BOOL)completed;	// 0x36802239
// declared property setter: - (void)setCompletionDate:(id)date;	// 0x36801fd5
// converted property setter: - (void)setDisplayOrder:(unsigned)order;	// 0x368020d9
// declared property setter: - (void)setDueDateComponents:(id)components;	// 0x36801c45
// declared property setter: - (void)setPriority:(int)priority;	// 0x36802149
// declared property setter: - (void)setStartDateComponents:(id)components;	// 0x368018e5
- (void)setTimeZone:(id)zone;	// 0x36801ef1
// declared property getter: - (id)startDateComponents;	// 0x36801789
- (BOOL)validate:(id *)validate;	// 0x368022ed
@end
