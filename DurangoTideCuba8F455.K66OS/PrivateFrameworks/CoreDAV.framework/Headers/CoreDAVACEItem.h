/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVInvertItem, CoreDAVPrincipalItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
	CoreDAVInvertItem *_invert;	// 28 = 0x1c
	CoreDAVGrantItem *_grant;	// 32 = 0x20
	CoreDAVDenyItem *_deny;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_protectedItem;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_inherited;	// 44 = 0x2c
}
@property(retain) CoreDAVDenyItem *deny;	// G=0x3318b819; S=0x3318b8e5; @synthesize=_deny
@property(retain) CoreDAVGrantItem *grant;	// G=0x3318b801; S=0x3318b8b9; @synthesize=_grant
@property(retain) CoreDAVItemWithHrefChildItem *inherited;	// G=0x3318b849; S=0x3318b93d; @synthesize=_inherited
@property(retain) CoreDAVInvertItem *invert;	// G=0x3318b7e9; S=0x3318b88d; @synthesize=_invert
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x3318b7d1; S=0x3318b861; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *protectedItem;	// G=0x3318b831; S=0x3318b911; @synthesize=_protectedItem
+ (id)privilegeItemWithNameSpace:(id)nameSpace andName:(id)name;	// 0x3318aef9
- (id)init;	// 0x3318b5a9
- (id)initWithPrincipal:(id)principal shouldInvert:(BOOL)invert action:(int)action withPrivileges:(id)privileges;	// 0x3318b3a9
- (id)copyParseRules;	// 0x3318afa9
- (void)dealloc;	// 0x3318b739
// declared property getter: - (id)deny;	// 0x3318b819
- (id)description;	// 0x3318b5d5
// declared property getter: - (id)grant;	// 0x3318b801
// declared property getter: - (id)inherited;	// 0x3318b849
// declared property getter: - (id)invert;	// 0x3318b7e9
// declared property getter: - (id)principal;	// 0x3318b7d1
// declared property getter: - (id)protectedItem;	// 0x3318b831
// declared property setter: - (void)setDeny:(id)deny;	// 0x3318b8e5
// declared property setter: - (void)setGrant:(id)grant;	// 0x3318b8b9
// declared property setter: - (void)setInherited:(id)inherited;	// 0x3318b93d
// declared property setter: - (void)setInvert:(id)invert;	// 0x3318b88d
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x3318b861
// declared property setter: - (void)setProtectedItem:(id)item;	// 0x3318b911
- (void)write:(id)write;	// 0x3318b299
@end

