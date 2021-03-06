/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSComponent.h"

@class NSArray, ICSTrigger, NSString, ICSStructuredLocation;

@interface ICSAlarm : ICSComponent {
}
@property(assign) int action;	// G=0x352c8e59; S=0x352c8eb1; 
@property(retain) NSArray *attach;	// @dynamic
@property(retain) NSArray *attendee;	// @dynamic
@property(retain) NSString *description;	// @dynamic
@property(retain) NSString *summary;	// @dynamic
@property(retain) ICSTrigger *trigger;	// @dynamic
@property(retain) NSString *x_apple_proximity;	// G=0x352c8f69; S=0x352c8fb1; 
@property(retain) ICSStructuredLocation *x_apple_structured_location;	// @dynamic
@property(retain) NSString *x_wr_alarmuid;	// G=0x352c8f01; S=0x352c8f49; 
+ (id)ICSStringFromAction:(int)action;	// 0x352c8e19
+ (int)actionFromICSString:(id)icsstring;	// 0x352c8d91
+ (id)name;	// 0x352c8d85
// declared property getter: - (int)action;	// 0x352c8e59
- (void)fixAlarm;	// 0x352a1581
// declared property setter: - (void)setAction:(int)action;	// 0x352c8eb1
// declared property setter: - (void)setX_apple_proximity:(id)proximity;	// 0x352c8fb1
// declared property setter: - (void)setX_wr_alarmuid:(id)alarmuid;	// 0x352c8f49
// declared property getter: - (id)x_apple_proximity;	// 0x352c8f69
// declared property getter: - (id)x_wr_alarmuid;	// 0x352c8f01
@end

