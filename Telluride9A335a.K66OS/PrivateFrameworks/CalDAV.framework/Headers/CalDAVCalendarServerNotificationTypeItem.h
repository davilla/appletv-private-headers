/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerNotificationTypeItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_inviteNotification;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_inviteReply;	// 28 = 0x1c
}
@property(retain) CoreDAVItemWithNoChildren *inviteNotification;	// G=0x3325639d; S=0x33256379; @synthesize=_inviteNotification
@property(retain) CoreDAVItemWithNoChildren *inviteReply;	// G=0x332563d9; S=0x332563b5; @synthesize=_inviteReply
@property(readonly, assign) BOOL isInviteNotification;	// G=0x33256411; 
@property(readonly, assign) BOOL isInviteReply;	// G=0x332563f1; 
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33256319
- (id)copyParseRules;	// 0x332564e9
- (void)dealloc;	// 0x332566b5
- (id)description;	// 0x33256431
// declared property getter: - (id)inviteNotification;	// 0x3325639d
// declared property getter: - (id)inviteReply;	// 0x332563d9
// declared property getter: - (BOOL)isInviteNotification;	// 0x33256411
// declared property getter: - (BOOL)isInviteReply;	// 0x332563f1
// declared property setter: - (void)setInviteNotification:(id)notification;	// 0x33256379
// declared property setter: - (void)setInviteReply:(id)reply;	// 0x332563b5
@end

