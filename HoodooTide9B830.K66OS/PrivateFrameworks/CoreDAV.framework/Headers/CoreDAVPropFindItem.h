/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren;

@interface CoreDAVPropFindItem : CoreDAVItem {
	CoreDAVItemWithNoChildren *_propName;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_allProp;	// 28 = 0x1c
	CoreDAVItem *_include;	// 32 = 0x20
	CoreDAVItem *_prop;	// 36 = 0x24
}
@property(retain) CoreDAVItemWithNoChildren *allProp;	// G=0x35dd8b41; S=0x35dd8b55; @synthesize=_allProp
@property(retain) CoreDAVItem *include;	// G=0x35dd8b79; S=0x35dd8b8d; @synthesize=_include
@property(retain) CoreDAVItem *prop;	// G=0x35dd8bb1; S=0x35dd8bc5; @synthesize=_prop
@property(retain) CoreDAVItemWithNoChildren *propName;	// G=0x35dd8b09; S=0x35dd8b1d; @synthesize=_propName
- (id)init;	// 0x35dd8635
// declared property getter: - (id)allProp;	// 0x35dd8b41
- (id)copyParseRules;	// 0x35dd880d
- (void)dealloc;	// 0x35dd8661
- (id)description;	// 0x35dd86e9
// declared property getter: - (id)include;	// 0x35dd8b79
// declared property getter: - (id)prop;	// 0x35dd8bb1
// declared property getter: - (id)propName;	// 0x35dd8b09
// declared property setter: - (void)setAllProp:(id)prop;	// 0x35dd8b55
// declared property setter: - (void)setInclude:(id)include;	// 0x35dd8b8d
// declared property setter: - (void)setProp:(id)prop;	// 0x35dd8bc5
// declared property setter: - (void)setPropName:(id)name;	// 0x35dd8b1d
@end

