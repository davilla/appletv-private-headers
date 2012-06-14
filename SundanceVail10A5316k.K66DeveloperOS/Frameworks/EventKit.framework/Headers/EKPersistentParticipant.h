/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "NSCopying.h"
#import "EKPersistentObject.h"
#import "EventKit-Structs.h"

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying> {
}
@property(readonly, assign, nonatomic) NSString *UUID;	// G=0x30e699d1; 
@property(copy, nonatomic) NSURL *address;	// G=0x30e69a5d; S=0x30e69a79; 
@property(copy, nonatomic) NSString *emailAddress;	// G=0x30e69a25; S=0x30e69a41; 
@property(copy, nonatomic) NSString *name;	// G=0x30e699ed; S=0x30e69a09; 
+ (id)defaultPropertiesToLoad;	// 0x30e69899
- (id)init;	// 0x30e69919
// declared property getter: - (id)UUID;	// 0x30e699d1
// declared property getter: - (id)address;	// 0x30e69a5d
- (id)copyWithZone:(NSZone *)zone;	// 0x30e6996d
// declared property getter: - (id)emailAddress;	// 0x30e69a25
- (unsigned)hash;	// 0x30e699a9
// declared property getter: - (id)name;	// 0x30e699ed
- (id)owner;	// 0x30e69a95
// declared property setter: - (void)setAddress:(id)address;	// 0x30e69a79
// declared property setter: - (void)setEmailAddress:(id)address;	// 0x30e69a41
// declared property setter: - (void)setName:(id)name;	// 0x30e69a09
@end
