/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
@private
	NSDate *_endDate;	// 4 = 0x4
	unsigned _occurrenceCount;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x334aa691; @synthesize=_endDate
@property(readonly, assign, nonatomic) unsigned occurrenceCount;	// G=0x334aa681; @synthesize=_occurrenceCount
+ (id)recurrenceEndWithEndDate:(id)endDate;	// 0x334abac1
+ (id)recurrenceEndWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x334aba81
- (id)initWithCoder:(id)coder;	// 0x334ac1c1
- (id)initWithEndDate:(id)endDate;	// 0x334ac2b5
- (id)initWithOccurrenceCount:(unsigned)occurrenceCount;	// 0x334ac249
- (id)copyWithZone:(NSZone *)zone;	// 0x334ab849
- (void)dealloc;	// 0x334ac179
- (id)description;	// 0x334ab941
- (void)encodeWithCoder:(id)coder;	// 0x334aba2d
// declared property getter: - (id)endDate;	// 0x334aa691
- (unsigned)hash;	// 0x334ab909
- (BOOL)isEqual:(id)equal;	// 0x334ab85d
// declared property getter: - (unsigned)occurrenceCount;	// 0x334aa681
- (BOOL)usesEndDate;	// 0x334aa66d
@end

