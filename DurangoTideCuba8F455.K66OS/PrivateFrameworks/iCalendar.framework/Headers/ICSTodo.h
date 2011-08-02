/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, NSString, NSURL, ICSDate, ICSUserAddress, ICSDuration;

@interface ICSTodo : ICSComponent {
}
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(assign) int classification;	// @dynamic
@property(retain) ICSDate *completed;	// G=0x3264b8e9; S=0x3264b8c9; 
@property(retain) ICSDate *created;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) ICSDate *dtstamp;	// @dynamic
@property(retain) ICSDate *dtstart;	// @dynamic
@property(retain) ICSDate *due;	// G=0x3264b899; S=0x3264b879; 
@property(retain) ICSDuration *duration;	// @dynamic
@property(retain) NSArray *exdate;	// @dynamic
@property(retain) NSArray *exrule;	// @dynamic
@property(retain) ICSDate *last_modified;	// @dynamic
@property(retain) NSString *location;	// @dynamic
@property(retain) ICSUserAddress *organizer;	// @dynamic
@property(assign) unsigned priority;	// G=0x3264b81d; S=0x3264b7d1; @dynamic
@property(retain) NSArray *rdate;	// @dynamic
@property(retain) ICSDate *recurrence_id;	// @dynamic
@property(retain) NSArray *rrule;	// @dynamic
@property(assign) unsigned sequence;	// @dynamic
@property(assign) int status;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) NSString *uid;	// @dynamic
@property(retain) NSURL *url;	// @dynamic
@property(retain) NSString *x_apple_ews_changekey;	// @dynamic
@property(retain) NSString *x_apple_ews_itemid;	// @dynamic
@property(assign) BOOL x_apple_ews_needsserverconfirmation;	// @dynamic
@property(retain) NSString *x_apple_ews_permission;	// @dynamic
@property(assign) unsigned x_apple_sort_order;	// G=0x3264b785; S=0x3264b739; 
+ (id)name;	// 0x3264b72d
// declared property getter: - (id)completed;	// 0x3264b8e9
// declared property getter: - (id)due;	// 0x3264b899
- (void)fixComponent;	// 0x3264a7cd
// declared property getter: - (unsigned)priority;	// 0x3264b81d
// declared property setter: - (void)setCompleted:(id)completed;	// 0x3264b8c9
// declared property setter: - (void)setDue:(id)due;	// 0x3264b879
// declared property setter: - (void)setPriority:(unsigned)priority;	// 0x3264b7d1
// declared property setter: - (void)setX_apple_sort_order:(unsigned)order;	// 0x3264b739
- (BOOL)validate:(id *)validate;	// 0x3264b919
// declared property getter: - (unsigned)x_apple_sort_order;	// 0x3264b785
@end

