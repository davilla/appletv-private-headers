/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedOptionListElement : ATVFeedRootElement {
@private
	NSString *_title;	// 52 = 0x34
	NSString *_footnote;	// 56 = 0x38
	BOOL _autoSelectSingleItem;	// 60 = 0x3c
	NSArray *_items;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL autoSelectSingleItem;	// G=0x32b0b009; S=0x32b0b019; @synthesize=_autoSelectSingleItem
@property(copy, nonatomic) NSString *footnote;	// G=0x32b0afd5; S=0x32b0afe5; @synthesize=_footnote
@property(retain, nonatomic) NSArray *items;	// G=0x32b0b029; S=0x32b0b039; @synthesize=_items
@property(copy, nonatomic) NSString *title;	// G=0x32b0afa1; S=0x32b0afb1; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32b0ad19
// declared property getter: - (BOOL)autoSelectSingleItem;	// 0x32b0b009
- (void)dealloc;	// 0x32b0af2d
// declared property getter: - (id)footnote;	// 0x32b0afd5
// declared property getter: - (id)items;	// 0x32b0b029
// declared property setter: - (void)setAutoSelectSingleItem:(BOOL)item;	// 0x32b0b019
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x32b0afe5
// declared property setter: - (void)setItems:(id)items;	// 0x32b0b039
// declared property setter: - (void)setTitle:(id)title;	// 0x32b0afb1
// declared property getter: - (id)title;	// 0x32b0afa1
@end

