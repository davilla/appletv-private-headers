/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {
	NSString *_displayName;	// 4 = 0x4
	NSSet *_addresses;	// 8 = 0x8
	NSURL *_principalURL;	// 12 = 0xc
}
@property(retain) NSSet *addresses;	// G=0x35fc2e35; S=0x35fc2e11; @synthesize=_addresses
@property(retain) NSString *displayName;	// G=0x35fc2df9; S=0x35fc2dd5; @synthesize=_displayName
@property(retain) NSURL *principalURL;	// G=0x35fc2e71; S=0x35fc2e4d; @synthesize=_principalURL
+ (id)resultFromResponseItem:(id)responseItem;	// 0x35fc2a11
// declared property getter: - (id)addresses;	// 0x35fc2e35
- (void)dealloc;	// 0x35fc2e89
- (id)description;	// 0x35fc2efd
// declared property getter: - (id)displayName;	// 0x35fc2df9
// declared property getter: - (id)principalURL;	// 0x35fc2e71
// declared property setter: - (void)setAddresses:(id)addresses;	// 0x35fc2e11
// declared property setter: - (void)setDisplayName:(id)name;	// 0x35fc2dd5
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x35fc2e4d
@end

