/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import "EKObject.h"

@class NSSet, NSString;

@interface EKSource : EKObject {
}
@property(readonly, assign, nonatomic) NSSet *calendars;	// G=0x30c44db5; 
@property(retain) id defaultAlarmOffset;	// G=0x30c089ad; S=0x30c44d99; converted property
@property(readonly, assign, nonatomic) NSString *sourceIdentifier;	// G=0x30bff9ad; 
@property(readonly, assign, nonatomic) int sourceType;	// G=0x30bf770d; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x30c44d7d; 
- (id)init;	// 0x30c44ce1
- (id)_persistentItem;	// 0x30bf77a9
- (id)allCalendars;	// 0x30c44ead
// declared property getter: - (id)calendars;	// 0x30c44db5
- (BOOL)commit:(id *)commit;	// 0x30c4505d
- (id)constraints;	// 0x30c00411
// converted property getter: - (id)defaultAlarmOffset;	// 0x30c089ad
- (id)description;	// 0x30c44fa5
- (id)externalID;	// 0x30bf79cd
- (BOOL)isEnabled;	// 0x30bf6d61
- (BOOL)remove:(id *)remove;	// 0x30c45095
// converted property setter: - (void)setDefaultAlarmOffset:(id)offset;	// 0x30c44d99
// declared property getter: - (id)sourceIdentifier;	// 0x30bff9ad
// declared property getter: - (int)sourceType;	// 0x30bf770d
// declared property getter: - (id)title;	// 0x30c44d7d
@end
