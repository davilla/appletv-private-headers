/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library
#import "CoreDAVPostTaskDelegate.h"

@class NSURL, CalDAVCalendarServerInviteNotificationItem;
@protocol CoreDAVTaskGroupDelegate;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {
	CalDAVCalendarServerInviteNotificationItem *_invitation;	// 44 = 0x2c
	BOOL _acceptInvitation;	// 48 = 0x30
	NSURL *_calendarHomeURL;	// 52 = 0x34
}
@property(assign) BOOL acceptInvitation;	// G=0x359583e1; S=0x359583f1; @synthesize=_acceptInvitation
@property(retain) NSURL *calendarHomeURL;	// G=0x359588f9; S=0x359588d5; @synthesize=_calendarHomeURL
@property(assign, nonatomic) id<CoreDAVTaskGroupDelegate> delegate;	// @dynamic
@property(retain) CalDAVCalendarServerInviteNotificationItem *invitation;	// G=0x359588bd; S=0x35958899; @synthesize=_invitation
- (id)initWithAccountInfoProvider:(id)accountInfoProvider taskManager:(id)manager;	// 0x359587cd
- (id)initWithInvitation:(id)invitation acceptInvitation:(BOOL)invitation2 atCalendarHomeURL:(id)calendarHomeURL accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x35958815
// declared property getter: - (BOOL)acceptInvitation;	// 0x359583e1
// declared property getter: - (id)calendarHomeURL;	// 0x359588f9
- (void)dealloc;	// 0x3595893d
- (id)description;	// 0x35958911
- (id)generateReply;	// 0x359584f5
// declared property getter: - (id)invitation;	// 0x359588bd
// declared property setter: - (void)setAcceptInvitation:(BOOL)invitation;	// 0x359583f1
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x359588d5
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x35958899
- (void)startTaskGroup;	// 0x35958401
- (void)task:(id)task didFinishWithError:(id)error;	// 0x359587b9
@end

