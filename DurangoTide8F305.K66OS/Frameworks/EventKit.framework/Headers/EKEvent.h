/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSNumber, EKRecurrenceRule, NSDate, EKParticipant, NSURL, EKEventStore, NSMutableArray, EKCalendar, NSTimeZone, NSArray, NSString;

@interface EKEvent : NSObject {
@private
	EKEventStore *_store;	// 4 = 0x4
	void *_event;	// 8 = 0x8
	NSDate *_occurrenceDate;	// 12 = 0xc
	NSString *_eventId;	// 16 = 0x10
	NSNumber *_calendarId;	// 20 = 0x14
	NSDate *_dateStamp;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
	BOOL _allDay;	// 32 = 0x20
	BOOL _detached;	// 33 = 0x21
	BOOL _unread;	// 34 = 0x22
	NSString *_title;	// 36 = 0x24
	NSString *_location;	// 40 = 0x28
	NSString *_notes;	// 44 = 0x2c
	NSMutableArray *_alarms;	// 48 = 0x30
	NSMutableArray *_attendees;	// 52 = 0x34
	EKParticipant *_organizer;	// 56 = 0x38
	NSDate *_startDate;	// 60 = 0x3c
	NSDate *_endDate;	// 64 = 0x40
	double _duration;	// 68 = 0x44
	EKCalendar *_calendar;	// 76 = 0x4c
	int _status;	// 80 = 0x50
	int _partStatus;	// 84 = 0x54
	int _availability;	// 88 = 0x58
	NSString *_responseComment;	// 92 = 0x5c
	NSTimeZone *_timeZone;	// 96 = 0x60
	NSDate *_originalStartDate;	// 100 = 0x64
	NSArray *_exceptionDates;	// 104 = 0x68
	NSArray *_recurrenceRules;	// 108 = 0x6c
	int _birthdayId;	// 112 = 0x70
	unsigned long long _loadFlags;	// 116 = 0x74
	unsigned long long _dirtyFlags;	// 124 = 0x7c
}
@property(retain) id URL;	// G=0x334a5f01; S=0x334a4f69; converted property
@property(readonly, assign, nonatomic) NSDate *_startDate;	// G=0x33470d29; 
@property(copy, nonatomic) NSArray *alarms;	// G=0x334760ed; S=0x334a4a59; 
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;	// G=0x33470b21; S=0x33476745; 
@property(readonly, assign, nonatomic) NSArray *attendees;	// G=0x33479181; 
@property(assign, nonatomic) int availability;	// G=0x334a673d; S=0x334a4721; 
@property(readonly, assign) int birthdayId;	// G=0x334a665d; converted property
@property(retain, nonatomic) EKCalendar *calendar;	// G=0x334711e1; S=0x334750c9; 
@property(readonly, assign) double duration;	// G=0x33471001; converted property
@property(copy, nonatomic) NSDate *endDate;	// G=0x33470edd; S=0x33474cf1; 
@property(readonly, assign, nonatomic) NSString *eventIdentifier;	// G=0x33474a51; 
@property(readonly, retain) NSArray *exceptionDates;	// G=0x334a68f9; converted property
@property(readonly, assign, nonatomic) BOOL isDetached;	// G=0x33475a51; 
@property(readonly, assign, nonatomic) NSDate *lastModifiedDate;	// G=0x334a4dd9; 
@property(copy, nonatomic) NSString *location;	// G=0x334725fd; S=0x334a4d39; 
@property(copy, nonatomic) NSString *notes;	// G=0x33475fa1; S=0x334a5009; 
@property(readonly, retain) NSDate *occurrenceDate;	// G=0x334757f5; converted property
@property(readonly, assign, nonatomic) EKParticipant *organizer;	// G=0x33472a1d; 
@property(assign) int participationStatus;	// G=0x3347280d; S=0x334a47f5; converted property
@property(retain, nonatomic) EKRecurrenceRule *recurrenceRule;	// G=0x334759d1; S=0x334a4895; 
@property(retain) NSString *responseComment;	// G=0x334a6815; S=0x334a4695; converted property
@property(copy, nonatomic) NSDate *startDate;	// G=0x334711b1; S=0x33474ba5; 
@property(readonly, assign, nonatomic) int status;	// G=0x33472cf9; 
@property(retain) EKEventStore *store;	// G=0x33474e11; S=0x334a5489; converted property
@property(retain) NSTimeZone *timeZone;	// G=0x33474a81; S=0x33474881; converted property
@property(copy, nonatomic) NSString *title;	// G=0x334723c5; S=0x334a4e51; 
@property(assign, getter=isUnread) BOOL unread;	// G=0x334796a1; S=0x334a4799; converted property
+ (void)addEvent:(id)event toStore:(id)store;	// 0x334708e5
+ (void)daemonRestarted;	// 0x334a9f21
+ (id)eventWithEventStore:(id)eventStore;	// 0x33474815
+ (void)removeEvent:(id)event fromStore:(id)store;	// 0x334736e9
+ (void)storeClosed:(id)closed;	// 0x334a9e31
+ (void)storeOpened:(id)opened;	// 0x3346e3b9
- (id)init;	// 0x334a5909
- (id)initWithCoder:(id)coder;	// 0x334a593d
- (id)initWithEventStore:(id)eventStore;	// 0x33476701
- (id)initWithEventStore:(id)eventStore event:(void *)event occurrenceDate:(id)date;	// 0x33474855
- (id)initWithEventStore:(id)eventStore event:(void *)event occurrenceDate:(id)date eventIdentifier:(id)identifier;	// 0x33470609
// converted property getter: - (id)URL;	// 0x334a5f01
- (id)_alarms;	// 0x3347611d
- (BOOL)_areAlarmsDirty;	// 0x334a6499
- (BOOL)_areRecurrenceRulesDirty;	// 0x334a63b9
- (id)_attendees;	// 0x33475b51
- (id)_canMoveToCalendar:(id)calendar;	// 0x334a50ad
- (BOOL)_checkStartDateConstraintAgainstDate:(XXStruct_fhKmAA)date error:(id *)error;	// 0x334a9d5d
- (void)_clearCachedData;	// 0x33473521
- (BOOL)_commitAlarms:(id *)alarms;	// 0x334a8909
- (BOOL)_commitAttendees:(id *)attendees;	// 0x334a8a95
- (BOOL)_commitRecurrenceRule:(id *)rule;	// 0x334a87b1
- (void)_disassociate;	// 0x334a5c45
- (void)_loadPropertyIfNeeded:(int)needed loader:(id)loader;	// 0x3347243d
- (BOOL)_occurrenceExistsOnDate:(double)date;	// 0x334a8ff5
- (void)_reconnectCalendar;	// 0x334a5425
- (void)_reconnectEvent;	// 0x334a5e99
- (void)_reconnectToServer;	// 0x334a5375
- (id)_recurrenceRules;	// 0x334756a9
- (void)_sendModifiedNote;	// 0x33474b6d
- (void)_setStoreInternal:(id)internal;	// 0x33470811
// declared property getter: - (id)_startDate;	// 0x33470d29
- (void)_storeClosed;	// 0x334a53ad
- (BOOL)_validateAlarmIntervalConstrainedToRecurrenceInterval:(int)recurrenceInterval;	// 0x334a91e9
- (BOOL)_validateDatesAndRecurrencesGivenSpan:(int)span error:(id *)error;	// 0x334a8b69
- (BOOL)_validateDurationConstrainedToRecurrenceInterval;	// 0x334a8e75
- (void)addAlarm:(id)alarm;	// 0x334a49d5
- (int)alarmCount;	// 0x33476721
// declared property getter: - (id)alarms;	// 0x334760ed
- (id)allRecurrenceRules;	// 0x334a4865
- (int)attendeeCount;	// 0x33475b2d
// declared property getter: - (id)attendees;	// 0x33479181
// declared property getter: - (int)availability;	// 0x334a673d
// converted property getter: - (int)birthdayId;	// 0x334a665d
- (id)birthdayTitleWithAddressBook:(void *)addressBook;	// 0x334a4ef1
// declared property getter: - (id)calendar;	// 0x334711e1
- (BOOL)canAddAttendees;	// 0x33475415
- (BOOL)canAddRecurrence;	// 0x33475a11
- (BOOL)canBeRespondedTo;	// 0x33479551
- (BOOL)canDetachSingleOccurrence;	// 0x334a4611
- (BOOL)canSetAlarms;	// 0x334a4521
- (BOOL)canSetAvailability;	// 0x334a45cd
- (void)clearUnreadState;	// 0x334a4331
- (BOOL)commit:(int)commit error:(id *)error;	// 0x334a781d
- (int)compareStartDateWithEvent:(id)event;	// 0x33470ced
- (id)copyState;	// 0x33476489
- (void)dealloc;	// 0x33473475
- (id)description;	// 0x334a43a5
- (id)detachedEvents;	// 0x334a6ae5
// converted property getter: - (double)duration;	// 0x33471001
- (void)encodeWithCoder:(id)coder;	// 0x334a54e1
// declared property getter: - (id)endDate;	// 0x33470edd
- (XXStruct_fhKmAA)endDateGr;	// 0x334a6251
- (XXStruct_fhKmAA)endDatePinnedForAllDay;	// 0x334a6309
// declared property getter: - (id)eventIdentifier;	// 0x33474a51
// converted property getter: - (id)exceptionDates;	// 0x334a68f9
- (id)exportToICS;	// 0x334a5e15
- (id)externalId;	// 0x334a6c3d
- (id)externalURL;	// 0x334a5cb5
- (BOOL)hasActionWithExternalAndFolderID;	// 0x334a6cd5
- (BOOL)hasAlarm;	// 0x334a4be5
- (BOOL)hasSelfAttendee;	// 0x334a6d19
- (id)initialEndDate;	// 0x334a4ca9
- (id)initialStartDate;	// 0x334a61dd
// declared property getter: - (BOOL)isAllDay;	// 0x33470b21
// declared property getter: - (BOOL)isDetached;	// 0x33475a51
- (BOOL)isDirty;	// 0x33476965
- (BOOL)isDirtyIgnoringCalendar;	// 0x334a522d
- (BOOL)isEditable;	// 0x33474989
- (BOOL)isEqual:(id)equal;	// 0x334a5299
- (BOOL)isFloating;	// 0x334a4d1d
- (BOOL)isInvite;	// 0x334729cd
- (BOOL)isRecurring;	// 0x334a4955
- (BOOL)isStatusDirty;	// 0x334a4311
// converted property getter: - (BOOL)isUnread;	// 0x334796a1
// declared property getter: - (id)lastModifiedDate;	// 0x334a4dd9
// declared property getter: - (id)location;	// 0x334725fd
- (id)nextAlarmDate;	// 0x334a4b09
// declared property getter: - (id)notes;	// 0x33475fa1
- (void *)objectRef;	// 0x334a4301
// converted property getter: - (id)occurrenceDate;	// 0x334757f5
// declared property getter: - (id)organizer;	// 0x33472a1d
- (id)originalEvent;	// 0x334a6a5d
// converted property getter: - (int)participationStatus;	// 0x3347280d
- (int)pendingParticipationStatus;	// 0x334a6bf9
// declared property getter: - (id)recurrenceRule;	// 0x334759d1
- (int)recurrenceRuleCount;	// 0x33475685
- (int)recurrenceRuleCountInDB;	// 0x334a6611
- (BOOL)refresh;	// 0x334a6d61
- (BOOL)remove:(int)remove error:(id *)error;	// 0x334a8699
- (void)removeAlarm:(id)alarm;	// 0x334a4971
- (BOOL)requiresDetach;	// 0x334a464d
// converted property getter: - (id)responseComment;	// 0x334a6815
- (BOOL)responseMustApplyToAll;	// 0x334a66f5
- (void)restoreState:(id)state;	// 0x334769c5
- (void)revert;	// 0x334a4369
- (id)rowId;	// 0x334a5db9
// declared property setter: - (void)setAlarms:(id)alarms;	// 0x334a4a59
// declared property setter: - (void)setAllDay:(BOOL)day;	// 0x33476745
- (void)setAttendees:(id)attendees;	// 0x334a4c01
// declared property setter: - (void)setAvailability:(int)availability;	// 0x334a4721
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x334750c9
// declared property setter: - (void)setEndDate:(id)date;	// 0x33474cf1
// declared property setter: - (void)setLocation:(id)location;	// 0x334a4d39
// declared property setter: - (void)setNotes:(id)notes;	// 0x334a5009
// converted property setter: - (void)setParticipationStatus:(int)status;	// 0x334a47f5
// declared property setter: - (void)setRecurrenceRule:(id)rule;	// 0x334a4895
// converted property setter: - (void)setResponseComment:(id)comment;	// 0x334a4695
// declared property setter: - (void)setStartDate:(id)date;	// 0x33474ba5
// converted property setter: - (void)setStore:(id)store;	// 0x334a5489
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x33474881
// declared property setter: - (void)setTitle:(id)title;	// 0x334a4e51
// converted property setter: - (void)setURL:(id)url;	// 0x334a4f69
// converted property setter: - (void)setUnread:(BOOL)unread;	// 0x334a4799
// declared property getter: - (id)startDate;	// 0x334711b1
- (XXStruct_fhKmAA)startDateGr;	// 0x334a62ad
- (XXStruct_fhKmAA)startDatePinnedForAllDay;	// 0x334a6361
// declared property getter: - (int)status;	// 0x33472cf9
// converted property getter: - (id)store;	// 0x33474e11
// converted property getter: - (id)timeZone;	// 0x33474a81
// declared property getter: - (id)title;	// 0x334723c5
- (id)uniqueId;	// 0x334a6c89
@end

