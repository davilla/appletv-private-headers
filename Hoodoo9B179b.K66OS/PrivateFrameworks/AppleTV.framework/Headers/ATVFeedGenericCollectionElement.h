/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSString, ATVFeedElement, ATVFeedHeaderElement, ATVFeedMenuElement;

__attribute__((visibility("hidden")))
@interface ATVFeedGenericCollectionElement : ATVFeedRootElement {
@private
	ATVFeedHeaderElement *_header;	// 52 = 0x34
	ATVFeedElement *_preview;	// 56 = 0x38
	ATVFeedMenuElement *_menu;	// 60 = 0x3c
	NSString *_listDescription;	// 64 = 0x40
}
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x30392af9; S=0x30392b09; @synthesize=_header
@property(retain, nonatomic) NSString *listDescription;	// G=0x30392b95; S=0x30392ba5; @synthesize=_listDescription
@property(retain, nonatomic) ATVFeedMenuElement *menu;	// G=0x30392b61; S=0x30392b71; @synthesize=_menu
@property(retain, nonatomic) ATVFeedElement *preview;	// G=0x30392b2d; S=0x30392b3d; @synthesize=_preview
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303928c1
- (void)dealloc;	// 0x30392a85
// declared property getter: - (id)header;	// 0x30392af9
// declared property getter: - (id)listDescription;	// 0x30392b95
// declared property getter: - (id)menu;	// 0x30392b61
// declared property getter: - (id)preview;	// 0x30392b2d
// declared property setter: - (void)setHeader:(id)header;	// 0x30392b09
// declared property setter: - (void)setListDescription:(id)description;	// 0x30392ba5
// declared property setter: - (void)setMenu:(id)menu;	// 0x30392b71
// declared property setter: - (void)setPreview:(id)preview;	// 0x30392b3d
@end
