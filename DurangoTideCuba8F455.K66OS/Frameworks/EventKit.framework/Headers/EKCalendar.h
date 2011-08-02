/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSString, EKEventStore, NSNumber;

@interface EKCalendar : NSObject {
@private
	EKEventStore *_store;	// 4 = 0x4
	void *_record;	// 8 = 0x8
	NSNumber *_calendarId;	// 12 = 0xc
	id _source;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	CGColorRef _color;	// 24 = 0x18
	int _type;	// 28 = 0x1c
	BOOL _editable;	// 32 = 0x20
	int _maxAlarms;	// 36 = 0x24
	int _maxRecurrences;	// 40 = 0x28
	unsigned _constraints;	// 44 = 0x2c
	BOOL _isMain;	// 48 = 0x30
	unsigned _loadFlags;	// 52 = 0x34
	unsigned _dirtyFlags;	// 56 = 0x38
	int _order;	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) CGColorRef CGColor;	// G=0x32e4a1dd; 
@property(assign) BOOL alarmTriggerIntervalConstrainedToRecurrenceInterval;	// G=0x32e7a399; S=0x32e7a561; converted property
@property(readonly, assign, nonatomic) BOOL allowsContentModifications;	// G=0x32e4c251; 
@property(readonly, assign) unsigned constraints;	// G=0x32e4c495; 
@property(assign) BOOL occurrencesMustOccurOnSeparateDays;	// G=0x32e7a37d; S=0x32e7a515; converted property
@property(readonly, retain) id source;	// G=0x32e48785; converted property
@property(readonly, retain) EKEventStore *store;	// G=0x32e7a251; converted property
@property(readonly, assign, nonatomic) unsigned supportedEventAvailabilities;	// G=0x32e4c621; 
@property(assign) BOOL supportsOutgoingInvitations;	// G=0x32e4c479; S=0x32e7a4c9; converted property
@property(readonly, assign, nonatomic) NSString *title;	// G=0x32e49195; 
@property(readonly, assign, nonatomic) int type;	// G=0x32e49e99; 
+ (id)calendar;	// 0x32e7a61d
+ (id)typeDescription:(int)description;	// 0x32e7a275
- (id)init;	// 0x32e7a2b9
- (id)initWithStore:(id)store object:(void *)object recordId:(id)anId;	// 0x32e48625
// declared property getter: - (CGColorRef)CGColor;	// 0x32e4a1dd
- (id)accountName;	// 0x32e7a8bd
- (id)accountTypeName;	// 0x32e7a925
// converted property getter: - (BOOL)alarmTriggerIntervalConstrainedToRecurrenceInterval;	// 0x32e7a399
// declared property getter: - (BOOL)allowsContentModifications;	// 0x32e4c251
- (BOOL)commitToStore:(id)store error:(id *)error;	// 0x32e7ab91
// declared property getter: - (unsigned)constraints;	// 0x32e4c495
- (void)dealloc;	// 0x32e7a785
- (BOOL)declinedStatusChangeRequiresNoPendingStatus;	// 0x32e7a3d1
- (BOOL)deliverySourceOrExternalIDRequiredForResponse;	// 0x32e7a409
- (id)description;	// 0x32e7aa19
- (int)displayOrder;	// 0x32e49019
- (BOOL)eventDurationConstrainedToRecurrenceInterval;	// 0x32e7a3b5
- (BOOL)futureStartDateLimitedToOccurrenceCacheBounds;	// 0x32e4c825
- (BOOL)hasEvents;	// 0x32e4ddf1
- (BOOL)hasTasks;	// 0x32e4df3d
- (BOOL)inviteesCanSeeAttendeeStatuses;	// 0x32e50165
- (BOOL)isDefaultCalendarForSource;	// 0x32e7adf9
- (BOOL)isEqual:(id)equal;	// 0x32e4dd79
- (BOOL)isHidden;	// 0x32e7ae89
- (BOOL)isSubscribed;	// 0x32e49f8d
- (int)maxAlarmsAllowed;	// 0x32e4d2fd
- (int)maxRecurrencesAllowed;	// 0x32e4c841
- (BOOL)mustAcknowledgeMasterEvent;	// 0x32e7a329
- (void *)object;	// 0x32e7a261
// converted property getter: - (BOOL)occurrencesMustOccurOnSeparateDays;	// 0x32e7a37d
- (BOOL)organizerCanSeeAttendeeStatuses;	// 0x32e7a45d
- (BOOL)proposedStatusRequiredForResponse;	// 0x32e7a3ed
- (void)reconnectToServer;	// 0x32e7a835
- (id)recordId;	// 0x32e4c3e5
- (BOOL)recurrencesShouldPinToMonthDays;	// 0x32e7a345
- (void)refresh;	// 0x32e7a64d
- (BOOL)requiresAttendeeSearchInSingleAccount;	// 0x32e4cb11
- (BOOL)requiresOutgoingInvitationsInDefaultCalendar;	// 0x32e7a425
- (void)revert;	// 0x32e7a71d
// converted property setter: - (void)setAlarmTriggerIntervalConstrainedToRecurrenceInterval:(BOOL)recurrenceInterval;	// 0x32e7a561
- (void)setCGColor:(CGColorRef)color;	// 0x32e7a98d
// converted property setter: - (void)setOccurrencesMustOccurOnSeparateDays:(BOOL)days;	// 0x32e7a515
- (void)setStore:(id)store object:(void *)object;	// 0x32e7a235
// converted property setter: - (void)setSupportsOutgoingInvitations:(BOOL)invitations;	// 0x32e7a4c9
- (void)setTitle:(id)title;	// 0x32e7a5ad
// converted property getter: - (id)source;	// 0x32e48785
- (BOOL)statusesAreAccurate;	// 0x32e50685
// converted property getter: - (id)store;	// 0x32e7a251
// declared property getter: - (unsigned)supportedEventAvailabilities;	// 0x32e4c621
- (BOOL)supportsIncomingInvitations;	// 0x32e7a441
- (BOOL)supportsInvitationModifications;	// 0x32e7a495
// converted property getter: - (BOOL)supportsOutgoingInvitations;	// 0x32e4c479
- (BOOL)supportsRecurrencesOnDetachedEvents;	// 0x32e7a361
- (BOOL)supportsResponseComments;	// 0x32e7a479
- (BOOL)supportsTriggerIntervals;	// 0x32e7a4b1
// declared property getter: - (id)title;	// 0x32e49195
// declared property getter: - (int)type;	// 0x32e49e99
- (id)uid;	// 0x32e7a271
@end

