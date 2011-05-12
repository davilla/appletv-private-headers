/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import "NSCoding.h"
#import "ICSDateValue.h"


@interface ICSDateTimeValue : ICSDateValue <NSCoding> {
	int _hour;	// 16 = 0x10
	int _minute;	// 20 = 0x14
	int _second;	// 24 = 0x18
}
@property(readonly, assign) int hour;	// G=0x304f6c85; @synthesize=_hour
@property(readonly, assign) int minute;	// G=0x304f6c75; @synthesize=_minute
@property(readonly, assign) int second;	// G=0x304f6c65; @synthesize=_second
- (id)initWithCoder:(id)coder;	// 0x304f6d51
- (id)initWithYear:(int)year month:(int)month day:(int)day;	// 0x304f6f05
- (id)initWithYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second;	// 0x304f6c9d
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0x304d7cb1
- (id)components;	// 0x304f6e81
- (int)dateType;	// 0x304f6c95
- (void)encodeWithCoder:(id)coder;	// 0x304f6df5
// declared property getter: - (int)hour;	// 0x304f6c85
// declared property getter: - (int)minute;	// 0x304f6c75
// declared property getter: - (int)second;	// 0x304f6c65
@end

