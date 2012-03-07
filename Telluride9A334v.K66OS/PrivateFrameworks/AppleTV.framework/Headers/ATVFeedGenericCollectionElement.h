/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedHeaderElement, ATVFeedElement, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 44 = 0x2c
	ATVFeedElement *_preview;	// 48 = 0x30
	ATVFeedMenuElement *_menu;	// 52 = 0x34
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x332fe6fd; S=0x332fe70d; @synthesize=_header
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x332fe765; S=0x332fe775; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x332fe731; S=0x332fe741; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x332fe501
- (void)dealloc;	// 0x332fe689
// declared property getter: - (id)header;	// 0x332fe6fd
// declared property getter: - (id)menu;	// 0x332fe765
// declared property getter: - (id)preview;	// 0x332fe731
// declared property setter: - (void)setHeader:(id)header;	// 0x332fe70d
// declared property setter: - (void)setMenu:(id)menu;	// 0x332fe775
// declared property setter: - (void)setPreview:(id)preview;	// 0x332fe741
@end
