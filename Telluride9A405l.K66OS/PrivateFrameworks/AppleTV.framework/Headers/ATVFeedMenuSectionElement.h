/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray, ATVFeedHeaderElement;

__attribute__((visibility("hidden")))
@interface ATVFeedMenuSectionElement : ATVFeedElement {
@private
	ATVFeedHeaderElement *_header;	// 28 = 0x1c
	NSArray *_menuItems;	// 32 = 0x20
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x35efa625; S=0x35efa635; @synthesize=_header
@property(retain, nonatomic) NSArray *menuItems;	// G=0x35efa659; S=0x35efa669; @synthesize=_menuItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35efa3f1
- (void)dealloc;	// 0x35efa5c5
// declared property getter: - (id)header;	// 0x35efa625
// declared property getter: - (id)menuItems;	// 0x35efa659
// declared property setter: - (void)setHeader:(id)header;	// 0x35efa635
// declared property setter: - (void)setMenuItems:(id)items;	// 0x35efa669
@end

