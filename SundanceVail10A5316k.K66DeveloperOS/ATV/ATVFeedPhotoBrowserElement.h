/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class ATVFeedPhotoGridElement, ATVFeedHeaderElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedPhotoBrowserElement : ATVFeedRootElement {
	ATVFeedHeaderElement *_header;	// 8 = 0x8
	NSArray *_buttons;	// 12 = 0xc
	ATVFeedPhotoGridElement *_photoGrid;	// 16 = 0x10
}
@property(retain, nonatomic) NSArray *buttons;	// G=0x39c245; S=0x39c255; @synthesize=_buttons
@property(retain, nonatomic) ATVFeedHeaderElement *header;	// G=0x39c20d; S=0x39c21d; @synthesize=_header
@property(retain, nonatomic) ATVFeedPhotoGridElement *photoGrid;	// G=0x39c27d; S=0x39c28d; @synthesize=_photoGrid
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x39bf35
- (void).cxx_destruct;	// 0x39c2b5
// declared property getter: - (id)buttons;	// 0x39c245
// declared property getter: - (id)header;	// 0x39c20d
// declared property getter: - (id)photoGrid;	// 0x39c27d
// declared property setter: - (void)setButtons:(id)buttons;	// 0x39c255
// declared property setter: - (void)setHeader:(id)header;	// 0x39c21d
// declared property setter: - (void)setPhotoGrid:(id)grid;	// 0x39c28d
@end
