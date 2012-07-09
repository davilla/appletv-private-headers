/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSTimeZone.h"


__attribute__((visibility("hidden")))
@interface __NSPlaceholderTimeZone : NSTimeZone {
}
+ (id)immutablePlaceholder;	// 0x3699ae1d
+ (void)initialize;	// 0x3699add1
- (id)init;	// 0x36a46b91
- (id)initWithName:(id)name;	// 0x3699ae2d
- (id)initWithName:(id)name data:(id)data;	// 0x36a46975
- (id)__initWithName:(id)name cache:(BOOL)cache;	// 0x3699ae41
- (id)__initWithName:(id)name data:(id)data cache:(BOOL)cache;	// 0x369cb59d
- (id)abbreviationForDate:(id)date;	// 0x36a46d3d
- (id)data;	// 0x36a46c3d
- (double)daylightSavingTimeOffsetForDate:(id)date;	// 0x36a46e3d
- (void)dealloc;	// 0x36a46bb9
- (BOOL)isDaylightSavingTimeForDate:(id)date;	// 0x36a46dbd
- (id)name;	// 0x36a46bbd
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)date;	// 0x36a46ebd
- (oneway void)release;	// 0x36a46bad
- (id)retain;	// 0x36a46ba9
- (unsigned)retainCount;	// 0x36a46bb1
- (int)secondsFromGMTForDate:(id)date;	// 0x36a46cbd
@end
