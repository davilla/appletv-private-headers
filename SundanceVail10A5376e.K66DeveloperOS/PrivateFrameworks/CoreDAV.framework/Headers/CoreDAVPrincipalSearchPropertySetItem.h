/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVPrincipalSearchPropertySetItem : CoreDAVItem {
	NSMutableSet *_principalSearchProperties;	// 28 = 0x1c
}
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x33a5a685; S=0x33a5a699; @synthesize=_principalSearchProperties
+ (id)copyParseRules;	// 0x33a5a45d
- (id)init;	// 0x33a5a321
- (void)addPrincipalSearchProperty:(id)property;	// 0x33a5a5ed
- (void)dealloc;	// 0x33a5a34d
- (id)description;	// 0x33a5a399
// declared property getter: - (id)principalSearchProperties;	// 0x33a5a685
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x33a5a699
@end
