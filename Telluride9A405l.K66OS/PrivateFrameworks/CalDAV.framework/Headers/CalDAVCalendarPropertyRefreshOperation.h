/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSMutableDictionary, NSError;
@protocol CalDAVCalendarPropertyRefreshDelegate;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation {
	NSError *_savedError;	// 56 = 0x38
	NSMutableDictionary *_ctags;	// 60 = 0x3c
	BOOL _didFinish;	// 64 = 0x40
	BOOL _didMakeCalendars;	// 65 = 0x41
	BOOL _isSecondRefresh;	// 66 = 0x42
	int _nextCalendarOrder;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarPropertyRefreshDelegate> delegate;	// @dynamic
- (void)_continueHandleContainerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x3516a599
- (void)_createDefaultCalendarForPrincipal:(id)principal isEventCalendar:(BOOL)calendar;	// 0x3516a375
- (void)_createDefaultCalendarsIfNeededForPrincipal:(id)principal;	// 0x3516a219
- (void)_finishRefresh;	// 0x35168c55
- (id)_generateTimeZoneString:(id)string;	// 0x351691f9
- (void)_scheduleMkcalendarTaskForCalendar:(id)calendar;	// 0x351693d1
- (void)_setPropertyString:(id)string forName:(id)name andNamespace:(id)aNamespace atURL:(id)url;	// 0x35168fb1
- (int)_sharingStatusForContainer:(id)container;	// 0x35168f59
- (void)containerInfoTask:(id)task completedWithContainers:(id)containers error:(id)error;	// 0x35169ee1
- (void)dealloc;	// 0x35169e81
- (void)refreshCalendarProperties;	// 0x35168dc5
@end

