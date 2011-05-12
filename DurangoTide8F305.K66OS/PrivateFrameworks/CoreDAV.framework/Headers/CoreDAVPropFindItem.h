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
@property(retain) CoreDAVItemWithNoChildren *allProp;	// G=0x33883009; S=0x3388307d; @synthesize=_allProp
@property(retain) CoreDAVItem *include;	// G=0x33883021; S=0x338830a9; @synthesize=_include
@property(retain) CoreDAVItem *prop;	// G=0x33883039; S=0x338830d5; @synthesize=_prop
@property(retain) CoreDAVItemWithNoChildren *propName;	// G=0x33882ff1; S=0x33883051; @synthesize=_propName
- (id)init;	// 0x33882e35
// declared property getter: - (id)allProp;	// 0x33883009
- (id)copyParseRules;	// 0x33882c19
- (void)dealloc;	// 0x33882f7d
- (id)description;	// 0x33882e61
// declared property getter: - (id)include;	// 0x33883021
// declared property getter: - (id)prop;	// 0x33883039
// declared property getter: - (id)propName;	// 0x33882ff1
// declared property setter: - (void)setAllProp:(id)prop;	// 0x3388307d
// declared property setter: - (void)setInclude:(id)include;	// 0x338830a9
// declared property setter: - (void)setProp:(id)prop;	// 0x338830d5
// declared property setter: - (void)setPropName:(id)name;	// 0x33883051
@end

