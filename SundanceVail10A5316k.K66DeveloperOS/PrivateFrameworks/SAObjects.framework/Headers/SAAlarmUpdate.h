/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SABaseClientBoundCommand.h"

@class NSNumber, NSString, NSArray, NSURL;

@interface SAAlarmUpdate : SABaseClientBoundCommand {
}
@property(copy, nonatomic) NSArray *addedFrequency;	// G=0x32f3699d; S=0x32f369b9; 
@property(copy, nonatomic) NSURL *alarmId;	// G=0x32f36a09; S=0x32f36a85; 
@property(retain, nonatomic) NSNumber *enabled;	// G=0x32f36ae5; S=0x32f36b01; 
@property(retain, nonatomic) NSNumber *hour;	// G=0x32f36b1d; S=0x32f36b39; 
@property(copy, nonatomic) NSString *label;	// G=0x32f36b55; S=0x32f36b71; 
@property(retain, nonatomic) NSNumber *minute;	// G=0x32f36bc1; S=0x32f36bdd; 
@property(copy, nonatomic) NSArray *removedFrequency;	// G=0x32f36bf9; S=0x32f36c15; 
@property(copy, nonatomic) NSURL *targetAppId;	// G=0x32f368c1; S=0x32f3693d; 
+ (id)update;	// 0x32f36831
+ (id)updateWithDictionary:(id)dictionary context:(id)context;	// 0x32f36875
// declared property getter: - (id)addedFrequency;	// 0x32f3699d
// declared property getter: - (id)alarmId;	// 0x32f36a09
// declared property getter: - (id)enabled;	// 0x32f36ae5
- (id)encodedClassName;	// 0x32f36825
- (id)groupIdentifier;	// 0x32f36815
// declared property getter: - (id)hour;	// 0x32f36b1d
// declared property getter: - (id)label;	// 0x32f36b55
// declared property getter: - (id)minute;	// 0x32f36bc1
// declared property getter: - (id)removedFrequency;	// 0x32f36bf9
- (BOOL)requiresResponse;	// 0x32f36c65
// declared property setter: - (void)setAddedFrequency:(id)frequency;	// 0x32f369b9
// declared property setter: - (void)setAlarmId:(id)anId;	// 0x32f36a85
// declared property setter: - (void)setEnabled:(id)enabled;	// 0x32f36b01
// declared property setter: - (void)setHour:(id)hour;	// 0x32f36b39
// declared property setter: - (void)setLabel:(id)label;	// 0x32f36b71
// declared property setter: - (void)setMinute:(id)minute;	// 0x32f36bdd
// declared property setter: - (void)setRemovedFrequency:(id)frequency;	// 0x32f36c15
// declared property setter: - (void)setTargetAppId:(id)anId;	// 0x32f3693d
// declared property getter: - (id)targetAppId;	// 0x32f368c1
@end

