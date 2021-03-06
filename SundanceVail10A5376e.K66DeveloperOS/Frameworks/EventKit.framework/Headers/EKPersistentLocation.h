/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "NSCopying.h"
#import "EKPersistentObject.h"

@class NSString, NSNumber;

@interface EKPersistentLocation : EKPersistentObject <NSCopying> {
}
@property(copy, nonatomic) NSString *addressBookEntityID;	// G=0x367b412d; S=0x367b8919; 
@property(retain) id alarmOwner;	// G=0x3681c441; S=0x3681c425; converted property
@property(retain) id calendarItemOwner;	// G=0x3681c409; S=0x3681c3ed; converted property
@property(copy, nonatomic) NSNumber *latitude;	// G=0x367b3fe9; S=0x367b8a15; 
@property(copy, nonatomic) NSNumber *longitude;	// G=0x367b40d9; S=0x367b8a31; 
@property(copy, nonatomic) NSNumber *radius;	// G=0x367b4199; S=0x367b8935; 
@property(copy, nonatomic) NSString *title;	// G=0x367aab39; S=0x367b88fd; 
+ (id)defaultPropertiesToLoad;	// 0x367a7149
+ (id)relations;	// 0x367b4005
- (id)init;	// 0x367b3d81
// declared property getter: - (id)addressBookEntityID;	// 0x367b412d
// converted property getter: - (id)alarmOwner;	// 0x3681c441
// converted property getter: - (id)calendarItemOwner;	// 0x3681c409
- (id)copyWithZone:(NSZone *)zone;	// 0x3681c45d
- (id)description;	// 0x3681c555
- (int)entityType;	// 0x3681c3e9
// declared property getter: - (id)latitude;	// 0x367b3fe9
// declared property getter: - (id)longitude;	// 0x367b40d9
// declared property getter: - (id)radius;	// 0x367b4199
// declared property setter: - (void)setAddressBookEntityID:(id)anId;	// 0x367b8919
// converted property setter: - (void)setAlarmOwner:(id)owner;	// 0x3681c425
// converted property setter: - (void)setCalendarItemOwner:(id)owner;	// 0x3681c3ed
// declared property setter: - (void)setLatitude:(id)latitude;	// 0x367b8a15
// declared property setter: - (void)setLongitude:(id)longitude;	// 0x367b8a31
// declared property setter: - (void)setRadius:(id)radius;	// 0x367b8935
// declared property setter: - (void)setTitle:(id)title;	// 0x367b88fd
// declared property getter: - (id)title;	// 0x367aab39
@end

