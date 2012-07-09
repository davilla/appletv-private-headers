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
@property(readonly, assign, nonatomic) NSSet *calendars;	// G=0x34b79305; 
@property(retain) id defaultAlarmOffset;	// G=0x34b33f05; S=0x34b792c1; converted property
@property(readonly, assign, nonatomic) NSString *sourceIdentifier;	// G=0x34b2b66d; 
@property(readonly, assign, nonatomic) int sourceType;	// G=0x34b230e1; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x34b79275; 
- (id)init;	// 0x34b791d9
- (id)_persistentItem;	// 0x34b2317d
- (id)allCalendars;	// 0x34b7941d
// declared property getter: - (id)calendars;	// 0x34b79305
- (id)calendarsForEntityType:(unsigned)entityType;	// 0x34b79535
- (BOOL)commit:(id *)commit;	// 0x34b7991d
- (id)constraints;	// 0x34b2c0d1
// converted property getter: - (id)defaultAlarmOffset;	// 0x34b33f05
- (id)description;	// 0x34b79865
- (int)displayOrderForNewCalendar;	// 0x34b79789
- (id)externalID;	// 0x34b233b5
- (BOOL)isEnabled;	// 0x34b22711
- (BOOL)isFacebookSource;	// 0x34b792dd
- (id)readWriteCalendarsForEntityType:(unsigned)entityType;	// 0x34b79651
- (BOOL)remove:(id *)remove;	// 0x34b79955
// converted property setter: - (void)setDefaultAlarmOffset:(id)offset;	// 0x34b792c1
// declared property getter: - (id)sourceIdentifier;	// 0x34b2b66d
// declared property getter: - (int)sourceType;	// 0x34b230e1
// declared property getter: - (id)title;	// 0x34b79275
@end
