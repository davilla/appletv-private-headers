/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVItemWithRecurrenceChildren.h"

@class CoreDAVLeafItem;

@interface CalDAVCalendarServerReplyItem : CalDAVItemWithRecurrenceChildren {
	CoreDAVLeafItem *_attendee;	// 32 = 0x20
}
@property(retain) CoreDAVLeafItem *attendee;	// G=0x337ff51d; S=0x337ff531; @synthesize=_attendee
// declared property getter: - (id)attendee;	// 0x337ff51d
- (id)copyParseRules;	// 0x337ff38d
- (void)dealloc;	// 0x337ff341
// declared property setter: - (void)setAttendee:(id)attendee;	// 0x337ff531
@end

