/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSNumber;

@interface ICSByDayValue : NSObject <NSCoding> {
	NSNumber *_number;	// 4 = 0x4
	int _weekday;	// 8 = 0x8
}
@property(retain) NSNumber *number;	// G=0x3003f391; S=0x3003f125; @synthesize=_number
@property(assign) int weekday;	// G=0x3003ebd9; S=0x3003ebe9; @synthesize=_weekday
+ (id)byDayValueFromICSString:(id)icsstring;	// 0x30028fc9
+ (int)weekdayFromICSString:(id)icsstring;	// 0x30028efd
- (id)initWithCoder:(id)coder;	// 0x3003f2b1
- (id)initWithWeekday:(int)weekday;	// 0x3003f185
- (id)initWithWeekday:(int)weekday number:(id)number;	// 0x3003f339
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x30020d19
- (void)encodeWithCoder:(id)coder;	// 0x3003f0d1
// declared property getter: - (id)number;	// 0x3003f391
// declared property setter: - (void)setNumber:(id)number;	// 0x3003f125
// declared property setter: - (void)setWeekday:(int)weekday;	// 0x3003ebe9
// declared property getter: - (int)weekday;	// 0x3003ebd9
@end

