/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {
	id _badgeValue;	// 60 = 0x3c
	NSString *_bundleIdentifier;	// 64 = 0x40
}
@property(retain) id badgeValue;	// G=0x33db963d; S=0x33db9651; @synthesize=_badgeValue
@property(retain) NSString *bundleIdentifier;	// G=0x33db9675; S=0x33db9689; @synthesize=_bundleIdentifier
// declared property getter: - (id)badgeValue;	// 0x33db963d
// declared property getter: - (id)bundleIdentifier;	// 0x33db9675
- (void)dealloc;	// 0x33db9475
- (void)run;	// 0x33db94d5
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x33db9651
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x33db9689
- (id)uniqueKey;	// 0x33db9631
@end
