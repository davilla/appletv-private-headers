/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVLeafItem, CoreDAVErrorItem;

@interface CoreDAVPropStatItem : CoreDAVItem {
	CoreDAVLeafItem *_status;	// 24 = 0x18
	CoreDAVItem *_prop;	// 28 = 0x1c
	CoreDAVErrorItem *_errorItem;	// 32 = 0x20
	CoreDAVLeafItem *_responseDescription;	// 36 = 0x24
}
@property(retain) CoreDAVErrorItem *errorItem;	// G=0x33883511; S=0x33883599; @synthesize=_errorItem
@property(retain) CoreDAVItem *prop;	// G=0x338834f9; S=0x3388356d; @synthesize=_prop
@property(retain) CoreDAVLeafItem *responseDescription;	// G=0x33883529; S=0x338835c5; @synthesize=_responseDescription
@property(retain) CoreDAVLeafItem *status;	// G=0x338834e1; S=0x33883541; @synthesize=_status
- (id)init;	// 0x33883325
- (id)copyParseRules;	// 0x33883101
- (void)dealloc;	// 0x3388346d
- (id)description;	// 0x33883351
// declared property getter: - (id)errorItem;	// 0x33883511
// declared property getter: - (id)prop;	// 0x338834f9
// declared property getter: - (id)responseDescription;	// 0x33883529
// declared property setter: - (void)setErrorItem:(id)item;	// 0x33883599
// declared property setter: - (void)setProp:(id)prop;	// 0x3388356d
// declared property setter: - (void)setResponseDescription:(id)description;	// 0x338835c5
// declared property setter: - (void)setStatus:(id)status;	// 0x33883541
// declared property getter: - (id)status;	// 0x338834e1
@end

