/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSDate.h> // Unknown library


@interface NSDate (ISO8601)
- (id)stringForISO8601CombinedDateAndTime;	// 0x32fccb65
@end

@interface NSDate (BRDateDisplay)
- (id)expiryDescription;	// 0x32fccb95
- (id)stringForDisplayingMonthDayYear;	// 0x32f3bea5
- (id)stringForGeneralDisplay;	// 0x32f3e7a5
- (id)stringForMonthDayFormat;	// 0x32f3e98d
- (id)stringForReleaseDateDisplay;	// 0x32f298f1
- (id)stringFromDateForTVShows;	// 0x32f3e715
@end

@interface NSDate (BRDateHelpers)
+ (id)dateFromYear:(int)year month:(int)month day:(int)day hour:(int)hour minute:(int)minute second:(int)second timeZone:(id)zone;	// 0x32fcd03d
- (id)dateCeiledToNearestMinutes:(int)nearestMinutes;	// 0x32fccdd5
- (id)dateFlooredToNearestMinutes:(int)nearestMinutes;	// 0x32fcced5
- (BOOL)isToday;	// 0x32f3e8a1
- (BOOL)isTomorrow;	// 0x32fccfc5
- (BOOL)isYesterday;	// 0x32f3e915
@end

@interface NSDate (BRDisplayString)
- (id)displayString;	// 0x32fcdffd
@end

