/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "DAVResponseBodyReader.h"

@class NSMutableData, NSDictionary, NSMutableDictionary;

@interface CalDAVMultiGetResponseReader : NSObject <DAVResponseBodyReader> {
	NSMutableData *_readData;	// 4 = 0x4
	NSMutableDictionary *_etags;	// 8 = 0x8
	NSMutableDictionary *_scheduleTags;	// 12 = 0xc
	NSMutableDictionary *_calendarData;	// 16 = 0x10
	NSMutableDictionary *_scheduleChanges;	// 20 = 0x14
}
@property(readonly, assign) NSDictionary *calendarData;	// G=0x3409c0fd; @synthesize=_calendarData
@property(readonly, assign) NSDictionary *etags;	// G=0x3409c11d; @synthesize=_etags
@property(readonly, assign) NSDictionary *scheduleChanges;	// G=0x3409c0ed; @synthesize=_scheduleChanges
@property(readonly, assign) NSDictionary *scheduleTags;	// G=0x3409c10d; @synthesize=_scheduleTags
- (id)init;	// 0x3409c251
- (void)_calculateResponses;	// 0x3409c4d9
- (void)_processResponse:(id)response;	// 0x3409cd3d
// declared property getter: - (id)calendarData;	// 0x3409c0fd
- (void)dealloc;	// 0x3409c1c1
// declared property getter: - (id)etags;	// 0x3409c11d
- (BOOL)request:(id)request acceptResponseWithHTTPStatusCode:(int)httpstatusCode;	// 0x3409c0e1
- (void)request:(id)request readResponseBody:(id)body;	// 0x3409c12d
// declared property getter: - (id)scheduleChanges;	// 0x3409c0ed
// declared property getter: - (id)scheduleTags;	// 0x3409c10d
@end

