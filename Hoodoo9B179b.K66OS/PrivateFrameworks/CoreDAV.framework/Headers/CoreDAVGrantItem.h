/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVGrantItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x30cb56d1; S=0x30cb56e5; @synthesize=_privileges
- (id)init;	// 0x30cb52c9
- (void)addPrivilege:(id)privilege;	// 0x30cb5635
- (id)copyParseRules;	// 0x30cb5535
- (void)dealloc;	// 0x30cb52f5
- (id)description;	// 0x30cb5341
// declared property getter: - (id)privileges;	// 0x30cb56d1
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x30cb56e5
- (void)write:(id)write;	// 0x30cb5405
@end

