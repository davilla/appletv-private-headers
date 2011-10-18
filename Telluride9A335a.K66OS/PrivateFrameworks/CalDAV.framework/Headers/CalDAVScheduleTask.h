/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVPostTask.h> // Unknown library

@class NSString, NSArray, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask {
	NSArray *_attendees;	// 148 = 0x94
	NSString *_originator;	// 152 = 0x98
	CalDAVScheduleResponseItem *_scheduleResponse;	// 156 = 0x9c
}
@property(retain) NSArray *attendees;	// G=0x3326701d; S=0x33266ff9; @synthesize=_attendees
@property(retain) NSString *originator;	// G=0x33266fe1; S=0x33266fbd; @synthesize=_originator
@property(retain) CalDAVScheduleResponseItem *scheduleResponse;	// G=0x33266fa5; S=0x33266f81; @synthesize=_scheduleResponse
- (id)initWithOriginator:(id)originator attendees:(id)attendees outboxURL:(id)url payload:(id)payload;	// 0x33267209
- (id)additionalHeaderValues;	// 0x33267109
// declared property getter: - (id)attendees;	// 0x3326701d
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x33266e75
- (void)dealloc;	// 0x33266f0d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33267035
// declared property getter: - (id)originator;	// 0x33266fe1
// declared property getter: - (id)scheduleResponse;	// 0x33266fa5
// declared property setter: - (void)setAttendees:(id)attendees;	// 0x33266ff9
// declared property setter: - (void)setOriginator:(id)originator;	// 0x33266fbd
// declared property setter: - (void)setScheduleResponse:(id)response;	// 0x33266f81
@end

