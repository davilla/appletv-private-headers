/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerElement : ATVFeedRootElement {
	BOOL _fixedHeader;	// 8 = 0x8
	ATVFeedHeaderElement *_header;	// 12 = 0xc
	NSArray *_scrollerItems;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL fixedHeader;	// G=0x148fa9; S=0x148fb9; @synthesize=_fixedHeader
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x148fc9; S=0x148fd9; @synthesize=_header
@property(retain, nonatomic) NSArray *scrollerItems;	// G=0x148fe9; S=0x148ff9; @synthesize=_scrollerItems
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x148d0d
- (void)dealloc;	// 0x148f45
// declared property getter: - (BOOL)fixedHeader;	// 0x148fa9
// declared property getter: - (id)header;	// 0x148fc9
// declared property getter: - (id)scrollerItems;	// 0x148fe9
// declared property setter: - (void)setFixedHeader:(BOOL)header;	// 0x148fb9
// declared property setter: - (void)setHeader:(id)header;	// 0x148fd9
// declared property setter: - (void)setScrollerItems:(id)items;	// 0x148ff9
@end

