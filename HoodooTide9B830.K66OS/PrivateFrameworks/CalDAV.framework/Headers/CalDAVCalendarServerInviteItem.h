/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVItem.h> // Unknown library

@class NSMutableSet;

@interface CalDAVCalendarServerInviteItem : CoreDAVItem {
	NSMutableSet *_users;	// 24 = 0x18
}
@property(retain) NSMutableSet *users;	// G=0x314812a9; S=0x31481285; @synthesize=_users
- (id)init;	// 0x314810a5
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x31481215
- (void)addUser:(id)user;	// 0x314811e9
- (id)copyParseRules;	// 0x314810e1
- (void)dealloc;	// 0x314812ed
- (id)description;	// 0x314812c1
// declared property setter: - (void)setUsers:(id)users;	// 0x31481285
// declared property getter: - (id)users;	// 0x314812a9
@end
