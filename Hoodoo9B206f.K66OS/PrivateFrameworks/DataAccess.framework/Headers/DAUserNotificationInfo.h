/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAUserNotificationInfo : NSObject {
	id _handler;	// 4 = 0x4
	NSString *_groupIdentifier;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *groupIdentifier;	// G=0x31ecd7bd; S=0x31ecd7cd; @synthesize=_groupIdentifier
@property(retain) id handler;	// G=0x31ecd7ad; S=0x31ecd77d; converted property
- (void)dealloc;	// 0x31ecd719
// declared property getter: - (id)groupIdentifier;	// 0x31ecd7bd
// converted property getter: - (id)handler;	// 0x31ecd7ad
// declared property setter: - (void)setGroupIdentifier:(id)identifier;	// 0x31ecd7cd
// converted property setter: - (void)setHandler:(id)handler;	// 0x31ecd77d
@end
