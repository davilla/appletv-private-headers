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
@property(retain) NSMutableSet *principalSearchProperties;	// G=0x34c199b5; S=0x34c199c9; @synthesize=_principalSearchProperties
+ (id)copyParseRules;	// 0x34c1978d
- (id)init;	// 0x34c19651
- (void)addPrincipalSearchProperty:(id)property;	// 0x34c1991d
- (void)dealloc;	// 0x34c1967d
- (id)description;	// 0x34c196c9
// declared property getter: - (id)principalSearchProperties;	// 0x34c199b5
// declared property setter: - (void)setPrincipalSearchProperties:(id)properties;	// 0x34c199c9
@end
