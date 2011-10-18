/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSDate.h"
#import "CoreFoundation-Structs.h"


__attribute__((visibility("hidden")))
@interface __NSDate : NSDate {
@private
	double _time;	// 4 = 0x4
}
+ (id)__new:(double)aNew;	// 0x33459e15
+ (id)allocWithZone:(NSZone *)zone;	// 0x334a9f05
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x33500b05
- (id)initWithTimeIntervalSinceReferenceDate:(double)timeIntervalSinceReferenceDate;	// 0x33500b09
- (void)dealloc;	// 0x3345b5d9
- (double)timeIntervalSinceReferenceDate;	// 0x33459e35
@end

