/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {
	NSMutableSet *_emailAddresses;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 32 = 0x20
}
@property(retain) NSMutableSet *emailAddresses;	// G=0x3049b40d; S=0x3049b421; @synthesize=_emailAddresses
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x3049b431; S=0x3049b445; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x3049b14d
- (id)init;	// 0x3049afd1
- (void)addEmailAddress:(id)address;	// 0x3049b375
- (void)dealloc;	// 0x3049affd
- (id)description;	// 0x3049b061
// declared property getter: - (id)emailAddresses;	// 0x3049b40d
// declared property setter: - (void)setEmailAddresses:(id)addresses;	// 0x3049b421
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x3049b445
// declared property getter: - (id)unauthenticated;	// 0x3049b431
@end

