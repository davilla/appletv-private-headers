/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVResourceTypeItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem {
	CoreDAVItemWithNoChildren *_calendar;	// 48 = 0x30
	CoreDAVItemWithNoChildren *_scheduleInbox;	// 52 = 0x34
	CoreDAVItemWithNoChildren *_scheduleOutbox;	// 56 = 0x38
	CoreDAVItemWithNoChildren *_notification;	// 60 = 0x3c
	CoreDAVItemWithNoChildren *_subscribed;	// 64 = 0x40
	CoreDAVItemWithNoChildren *_sharedOwner;	// 68 = 0x44
}
@property(retain) CoreDAVItemWithNoChildren *calendar;	// G=0x35160755; S=0x35160731; @synthesize=_calendar
@property(retain) CoreDAVItemWithNoChildren *notification;	// G=0x35160809; S=0x351607e5; @synthesize=_notification
@property(retain) CoreDAVItemWithNoChildren *scheduleInbox;	// G=0x35160791; S=0x3516076d; @synthesize=_scheduleInbox
@property(retain) CoreDAVItemWithNoChildren *scheduleOutbox;	// G=0x351607cd; S=0x351607a9; @synthesize=_scheduleOutbox
@property(retain) CoreDAVItemWithNoChildren *sharedOwner;	// G=0x35160881; S=0x3516085d; @synthesize=_sharedOwner
@property(retain) CoreDAVItemWithNoChildren *subscribed;	// G=0x35160845; S=0x35160821; @synthesize=_subscribed
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x351611d9
// declared property getter: - (id)calendar;	// 0x35160755
- (id)copyParseRules;	// 0x35160bf1
- (void)dealloc;	// 0x35161135
- (id)description;	// 0x35160705
// declared property getter: - (id)notification;	// 0x35160809
// declared property getter: - (id)scheduleInbox;	// 0x35160791
// declared property getter: - (id)scheduleOutbox;	// 0x351607cd
// declared property setter: - (void)setCalendar:(id)calendar;	// 0x35160731
// declared property setter: - (void)setNotification:(id)notification;	// 0x351607e5
// declared property setter: - (void)setScheduleInbox:(id)inbox;	// 0x3516076d
// declared property setter: - (void)setScheduleOutbox:(id)outbox;	// 0x351607a9
// declared property setter: - (void)setSharedOwner:(id)owner;	// 0x3516085d
// declared property setter: - (void)setSubscribed:(id)subscribed;	// 0x35160821
// declared property getter: - (id)sharedOwner;	// 0x35160881
// declared property getter: - (id)subscribed;	// 0x35160845
- (void)write:(id)write;	// 0x35160899
@end

