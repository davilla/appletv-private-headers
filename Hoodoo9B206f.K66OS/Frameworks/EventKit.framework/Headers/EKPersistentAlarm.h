/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKPersistentObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSString, NSDate, NSTimeZone, EKPersistentLocation, NSData;

@interface EKPersistentAlarm : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x31f53e89; 
@property(copy, nonatomic) NSDate *absoluteDate;	// G=0x31ef80d5; S=0x31f01b1d; 
@property(assign, nonatomic) int alarmType;	// G=0x31f53f8d; S=0x31f53fa9; 
@property(copy, nonatomic) NSData *externalData;	// G=0x31f53fe9; S=0x31f54005; 
@property(copy, nonatomic) NSString *externalID;	// G=0x31f54021; S=0x31f5403d; 
@property(readonly, assign, nonatomic) BOOL isAbsolute;	// G=0x31f53ea5; 
@property(copy, nonatomic) EKPersistentLocation *location;	// G=0x31f00d69; S=0x31f02345; 
@property(retain) id owner;	// G=0x31efd275; S=0x31efaf89; converted property
@property(assign, nonatomic) int proximity;	// G=0x31ef8151; S=0x31f02361; 
@property(assign, nonatomic) double relativeOffset;	// G=0x31efef05; S=0x31efae81; 
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x31f53ec5; S=0x31f53f31; 
+ (id)relations;	// 0x31efafa5
- (id)init;	// 0x31ef7e31
// declared property getter: - (id)UUID;	// 0x31f53e89
// declared property getter: - (id)absoluteDate;	// 0x31ef80d5
// declared property getter: - (int)alarmType;	// 0x31f53f8d
- (id)copyWithZone:(NSZone *)zone;	// 0x31f54059
- (id)description;	// 0x31f54195
- (int)entityType;	// 0x31efad5d
// declared property getter: - (id)externalData;	// 0x31f53fe9
// declared property getter: - (id)externalID;	// 0x31f54021
// declared property getter: - (BOOL)isAbsolute;	// 0x31f53ea5
// declared property getter: - (id)location;	// 0x31f00d69
// converted property getter: - (id)owner;	// 0x31efd275
// declared property getter: - (int)proximity;	// 0x31ef8151
// declared property getter: - (double)relativeOffset;	// 0x31efef05
// declared property setter: - (void)setAbsoluteDate:(id)date;	// 0x31f01b1d
// declared property setter: - (void)setAlarmType:(int)type;	// 0x31f53fa9
// declared property setter: - (void)setExternalData:(id)data;	// 0x31f54005
// declared property setter: - (void)setExternalID:(id)anId;	// 0x31f5403d
// declared property setter: - (void)setLocation:(id)location;	// 0x31f02345
// converted property setter: - (void)setOwner:(id)owner;	// 0x31efaf89
// declared property setter: - (void)setProximity:(int)proximity;	// 0x31f02361
// declared property setter: - (void)setRelativeOffset:(double)offset;	// 0x31efae81
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x31f53f31
// declared property getter: - (id)timeZone;	// 0x31f53ec5
- (BOOL)validate:(id *)validate;	// 0x31efd22d
@end

