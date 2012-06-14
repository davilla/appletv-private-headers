/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKParticipant.h"
#import "EventKit-Structs.h"


@interface EKAttendee : EKParticipant {
}
@property(assign) int participantRole;	// G=0x30e6a0d9; S=0x30e6a155; converted property
@property(assign) int participantStatus;	// G=0x30e69fe9; S=0x30e6a065; converted property
@property(assign) int participantType;	// G=0x30e6a259; S=0x30e6a2d5; converted property
@property(assign) int pendingStatus;	// G=0x30e6a199; S=0x30e6a215; converted property
+ (id)attendeeWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30e69af9
+ (id)attendeeWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x30e69ab1
- (id)init;	// 0x30e69be9
- (id)initWithEmailAddress:(id)emailAddress name:(id)name;	// 0x30e69ba1
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3;	// 0x30e69b39
- (id)_persistentAttendee;	// 0x30e69fd9
- (id)copyWithZone:(NSZone *)zone;	// 0x30e69c55
- (id)description;	// 0x30e69d9d
- (unsigned)hash;	// 0x30e69eed
- (BOOL)isEqual:(id)equal;	// 0x30e69e75
- (id)lazyLoadRelationForKey:(id)key;	// 0x30e69f15
- (id)owner;	// 0x30e69fa5
// converted property getter: - (int)participantRole;	// 0x30e6a0d9
// converted property getter: - (int)participantStatus;	// 0x30e69fe9
// converted property getter: - (int)participantType;	// 0x30e6a259
// converted property getter: - (int)pendingStatus;	// 0x30e6a199
// converted property setter: - (void)setParticipantRole:(int)role;	// 0x30e6a155
// converted property setter: - (void)setParticipantStatus:(int)status;	// 0x30e6a065
// converted property setter: - (void)setParticipantType:(int)type;	// 0x30e6a2d5
// converted property setter: - (void)setPendingStatus:(int)status;	// 0x30e6a215
@end
