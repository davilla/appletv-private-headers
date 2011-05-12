/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import "NSObject.h"


@interface NSDateComponents : NSObject <NSCopying, NSCoding> {
}
@property(retain) id calendar;	// G=0x32e606e1; S=0x32e606ed; converted property
@property(assign) int day;	// G=0x32e5cf8d; S=0x32e5e0b5; converted property
@property(assign) int era;	// G=0x32e5cf39; S=0x32e5e095; converted property
@property(assign) int hour;	// G=0x32e59111; S=0x32e590e1; converted property
@property(assign) int minute;	// G=0x32e5cf99; S=0x32e590f1; converted property
@property(assign) int month;	// G=0x32e5cf81; S=0x32e5e0a5; converted property
@property(assign) int nanosecond;	// G=0x32e5cfb1; S=0x32e607f9; converted property
@property(assign) int quarter;	// G=0x32e5cf51; S=0x32e607e9; converted property
@property(assign) int second;	// G=0x32e5cfa5; S=0x32e59101; converted property
@property(retain) id timeZone;	// G=0x32e5cfbd; S=0x32e60769; converted property
@property(assign) int week;	// G=0x32e5cf5d; S=0x32e60809; converted property
@property(assign) int weekday;	// G=0x32e5cf69; S=0x32e5e0c5; converted property
@property(assign) int weekdayOrdinal;	// G=0x32e5cf75; S=0x32e60819; converted property
@property(assign) int year;	// G=0x32e5cf45; S=0x32e5cab9; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32e590a1
- (id)init;	// 0x32e590ad
- (id)initWithCoder:(id)coder;	// 0x32eb7395
// converted property getter: - (id)calendar;	// 0x32e606e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32e604ad
- (id)date;	// 0x32eb7525
// converted property getter: - (int)day;	// 0x32e5cf8d
- (void)dealloc;	// 0x32e5911d
- (void)encodeWithCoder:(id)coder;	// 0x32eb7399
// converted property getter: - (int)era;	// 0x32e5cf39
- (unsigned)hash;	// 0x32eb7809
// converted property getter: - (int)hour;	// 0x32e59111
- (BOOL)isEqual:(id)equal;	// 0x32eb7581
// converted property getter: - (int)minute;	// 0x32e5cf99
// converted property getter: - (int)month;	// 0x32e5cf81
// converted property getter: - (int)nanosecond;	// 0x32e5cfb1
// converted property getter: - (int)quarter;	// 0x32e5cf51
// converted property getter: - (int)second;	// 0x32e5cfa5
// converted property setter: - (void)setCalendar:(id)calendar;	// 0x32e606ed
// converted property setter: - (void)setDay:(int)day;	// 0x32e5e0b5
// converted property setter: - (void)setEra:(int)era;	// 0x32e5e095
// converted property setter: - (void)setHour:(int)hour;	// 0x32e590e1
// converted property setter: - (void)setMinute:(int)minute;	// 0x32e590f1
// converted property setter: - (void)setMonth:(int)month;	// 0x32e5e0a5
// converted property setter: - (void)setNanosecond:(int)nanosecond;	// 0x32e607f9
// converted property setter: - (void)setQuarter:(int)quarter;	// 0x32e607e9
// converted property setter: - (void)setSecond:(int)second;	// 0x32e59101
// converted property setter: - (void)setTimeZone:(id)zone;	// 0x32e60769
// converted property setter: - (void)setWeek:(int)week;	// 0x32e60809
// converted property setter: - (void)setWeekday:(int)weekday;	// 0x32e5e0c5
// converted property setter: - (void)setWeekdayOrdinal:(int)ordinal;	// 0x32e60819
// converted property setter: - (void)setYear:(int)year;	// 0x32e5cab9
// converted property getter: - (id)timeZone;	// 0x32e5cfbd
// converted property getter: - (int)week;	// 0x32e5cf5d
// converted property getter: - (int)weekday;	// 0x32e5cf69
// converted property getter: - (int)weekdayOrdinal;	// 0x32e5cf75
// converted property getter: - (int)year;	// 0x32e5cf45
@end

