/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "ICSPredefinedValue.h"


@interface ICSScheduleStatusParameter : ICSPredefinedValue {
}
+ (id)scheduleStatusParameterFromCode:(int)code;	// 0x327fb045
+ (id)scheduleStatusParameterFromICSString:(id)icsstring;	// 0x3280ef45
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x327fe015
@end
