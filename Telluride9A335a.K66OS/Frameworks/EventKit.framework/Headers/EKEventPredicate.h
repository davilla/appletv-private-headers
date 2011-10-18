/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPredicate.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone;

@interface EKEventPredicate : EKPredicate {
	NSDate *_startDate;	// 12 = 0xc
	NSDate *_endDate;	// 16 = 0x10
	NSString *_uuid;	// 20 = 0x14
	NSTimeZone *_timeZone;	// 24 = 0x18
}
@property(readonly, assign, nonatomic) NSDate *endDate;	// G=0x3101ba79; 
@property(readonly, assign, nonatomic) NSString *eventUUID;	// G=0x3101ba89; 
@property(readonly, assign, nonatomic) NSDate *startDate;	// G=0x3101ba69; 
@property(readonly, assign, nonatomic) NSTimeZone *timeZone;	// G=0x3101ba99; 
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x30fd7e01
+ (id)predicateWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x3101b911
- (id)initWithCoder:(id)coder;	// 0x3101b975
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone calendars:(id)calendars;	// 0x30fd7e5d
- (id)initWithStartDate:(id)startDate endDate:(id)date timeZone:(id)zone eventUUID:(id)uuid calendars:(id)calendars;	// 0x30fd7e8d
- (id)copyWithZone:(NSZone *)zone;	// 0x3101bc2d
- (void)dealloc;	// 0x30fd88c9
- (void)encodeWithCoder:(id)coder;	// 0x30fd7fe5
// declared property getter: - (id)endDate;	// 0x3101ba79
- (BOOL)evaluateWithObject:(id)object;	// 0x3101baa9
// declared property getter: - (id)eventUUID;	// 0x3101ba89
- (BOOL)isEqual:(id)equal;	// 0x3101bd45
- (id)predicateFormat;	// 0x3101bc3d
// declared property getter: - (id)startDate;	// 0x3101ba69
// declared property getter: - (id)timeZone;	// 0x3101ba99
@end

