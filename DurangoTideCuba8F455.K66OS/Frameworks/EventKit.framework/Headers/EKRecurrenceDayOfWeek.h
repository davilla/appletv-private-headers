/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"


@interface EKRecurrenceDayOfWeek : NSObject <NSCopying> {
@private
	int _dayOfTheWeek;	// 4 = 0x4
	int _weekNumber;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) int dayOfTheWeek;	// G=0x32e816b1; @synthesize=_dayOfTheWeek
@property(readonly, assign, nonatomic) int weekNumber;	// G=0x32e816a1; @synthesize=_weekNumber
+ (id)dayOfWeek:(int)week;	// 0x32e82811
+ (id)dayOfWeek:(int)week weekNumber:(int)number;	// 0x32e827d9
- (id)initWithCoder:(id)coder;	// 0x32e83071
- (id)initWithDayOfTheWeek:(int)theWeek weekNumber:(int)number;	// 0x32e830ed
- (id)copyWithZone:(NSZone *)zone;	// 0x32e825cd
// declared property getter: - (int)dayOfTheWeek;	// 0x32e816b1
- (id)description;	// 0x32e8268d
- (void)encodeWithCoder:(id)coder;	// 0x32e8278d
- (unsigned)hash;	// 0x32e82661
- (id)iCalendarDescription;	// 0x32e826f1
- (BOOL)isEqual:(id)equal;	// 0x32e825e1
// declared property getter: - (int)weekNumber;	// 0x32e816a1
@end
