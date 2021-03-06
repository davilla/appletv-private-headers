/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
	NSMutableSet *_hrefs;	// 24 = 0x18
	CoreDAVItemWithNoChildren *_unauthenticated;	// 28 = 0x1c
}
@property(retain) NSMutableSet *hrefs;	// G=0x35ddc641; S=0x35ddc655; @synthesize=_hrefs
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x35ddc679; S=0x35ddc68d; @synthesize=_unauthenticated
- (void)addHref:(id)href;	// 0x35ddc241
- (id)copyParseRules;	// 0x35ddc0a1
- (void)dealloc;	// 0x35ddbf59
- (id)description;	// 0x35ddbfb9
// declared property getter: - (id)hrefs;	// 0x35ddc641
- (id)hrefsAsFullURLs;	// 0x35ddc2dd
- (id)hrefsAsOriginalURLs;	// 0x35ddc411
- (id)hrefsAsStrings;	// 0x35ddc529
// declared property setter: - (void)setHrefs:(id)hrefs;	// 0x35ddc655
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x35ddc68d
// declared property getter: - (id)unauthenticated;	// 0x35ddc679
@end

