/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"
#import "NSCopying.h"
#import "EventKit-Structs.h"

@class NSURL, NSString;

@interface EKParticipant : EKObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3279742d; 
@property(retain) id emailAddress;	// G=0x327973ad; S=0x327973c9; converted property
@property(retain) id externalID;	// G=0x327973e5; S=0x32797401; converted property
@property(readonly, assign, nonatomic) NSString *name;	// G=0x32797375; 
@property(readonly, assign, nonatomic) int participantRole;	// G=0x32797425; 
@property(readonly, assign, nonatomic) int participantStatus;	// G=0x32797421; 
@property(readonly, assign, nonatomic) int participantType;	// G=0x3279741d; 
- (void *)ABRecordWithAddressBook:(void *)addressBook;	// 0x32797559
// declared property getter: - (id)URL;	// 0x3279742d
- (id)UUID;	// 0x3279734d
- (id)_persistentItem;	// 0x3279733d
- (id)copyWithZone:(NSZone *)zone;	// 0x32797301
// converted property getter: - (id)emailAddress;	// 0x327973ad
// converted property getter: - (id)externalID;	// 0x327973e5
- (BOOL)isCurrentUser;	// 0x32797429
- (BOOL)isEqualToParticipant:(id)participant;	// 0x327974d5
// declared property getter: - (id)name;	// 0x32797375
// declared property getter: - (int)participantRole;	// 0x32797425
// declared property getter: - (int)participantStatus;	// 0x32797421
// declared property getter: - (int)participantType;	// 0x3279741d
// converted property setter: - (void)setEmailAddress:(id)address;	// 0x327973c9
// converted property setter: - (void)setExternalID:(id)anId;	// 0x32797401
- (void)setName:(id)name;	// 0x32797391
@end

