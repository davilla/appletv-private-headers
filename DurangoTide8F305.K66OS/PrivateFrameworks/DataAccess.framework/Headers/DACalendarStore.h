/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "DACalendarObject.h"

@class NSString, NSArray;

@interface DACalendarStore : DACalendarObject {
}
@property(readonly, assign, nonatomic) NSArray *calendars;	// G=0x3023e42d; 
@property(readonly, assign, nonatomic) NSArray *events;	// G=0x3023e4c5; 
@property(readonly, assign, nonatomic) NSString *externalID;	// G=0x3023e405; 
@property(readonly, assign, nonatomic) int uid;	// G=0x3023e3ed; 
// declared property getter: - (id)calendars;	// 0x3023e42d
// declared property getter: - (id)events;	// 0x3023e4c5
// declared property getter: - (id)externalID;	// 0x3023e405
- (unsigned)hash;	// 0x3023e3d9
- (BOOL)isEqual:(id)equal;	// 0x3023e379
// declared property getter: - (int)uid;	// 0x3023e3ed
@end

