/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EventKit-Structs.h"
#import "EKPersistentParticipant.h"


@interface EKPersistentOrganizer : EKPersistentParticipant {
}
@property(assign, nonatomic, getter=isCurrentUser) BOOL currentUser;	// G=0x367aac99; S=0x3681d785; 
@property(retain) id owner;	// G=0x3681d7bd; S=0x3681d7a1; converted property
+ (id)defaultPropertiesToLoad;	// 0x367a7061
+ (id)organizerWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x3681d509
+ (id)relations;	// 0x367aacb9
- (id)initWithName:(id)name emailAddress:(id)address address:(id)address3 isCurrentUser:(BOOL)user;	// 0x3681d555
- (id)copyWithZone:(NSZone *)zone;	// 0x3681d5d5
- (id)description;	// 0x3681d6a9
- (int)entityType;	// 0x3681d781
// declared property getter: - (BOOL)isCurrentUser;	// 0x367aac99
// converted property getter: - (id)owner;	// 0x3681d7bd
// declared property setter: - (void)setCurrentUser:(BOOL)user;	// 0x3681d785
// converted property setter: - (void)setOwner:(id)owner;	// 0x3681d7a1
@end
