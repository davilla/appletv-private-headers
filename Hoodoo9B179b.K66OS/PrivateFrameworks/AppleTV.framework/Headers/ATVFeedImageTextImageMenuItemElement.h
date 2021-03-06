/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMenuItemElement.h"

@class NSString, ATVFeedImageElement;

__attribute__((visibility("hidden")))
@interface ATVFeedImageTextImageMenuItemElement : ATVFeedMenuItemElement {
@private
	NSString *_imageSeparatorText;	// 64 = 0x40
	ATVFeedImageElement *_leftImage;	// 68 = 0x44
	ATVFeedImageElement *_rightImage;	// 72 = 0x48
	BOOL _dimmed;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL dimmed;	// G=0x303a80a9; S=0x303a80b9; @synthesize=_dimmed
@property(copy, nonatomic) NSString *imageSeparatorText;	// G=0x303a800d; S=0x303a801d; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x303a8041; S=0x303a8051; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x303a8075; S=0x303a8085; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303a7e21
- (void)dealloc;	// 0x303a7f99
// declared property getter: - (BOOL)dimmed;	// 0x303a80a9
// declared property getter: - (id)imageSeparatorText;	// 0x303a800d
// declared property getter: - (id)leftImage;	// 0x303a8041
// declared property getter: - (id)rightImage;	// 0x303a8075
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x303a80b9
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x303a801d
// declared property setter: - (void)setLeftImage:(id)image;	// 0x303a8051
// declared property setter: - (void)setRightImage:(id)image;	// 0x303a8085
@end

