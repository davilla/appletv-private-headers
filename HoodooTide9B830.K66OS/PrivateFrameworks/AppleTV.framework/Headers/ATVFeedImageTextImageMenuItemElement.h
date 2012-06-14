/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedMenuItemElement.h"

@class ATVFeedImageElement, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedImageTextImageMenuItemElement : ATVFeedMenuItemElement {
@private
	NSString *_imageSeparatorText;	// 64 = 0x40
	ATVFeedImageElement *_leftImage;	// 68 = 0x44
	ATVFeedImageElement *_rightImage;	// 72 = 0x48
	BOOL _dimmed;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL dimmed;	// G=0x32aeb851; S=0x32aeb861; @synthesize=_dimmed
@property(copy, nonatomic) NSString *imageSeparatorText;	// G=0x32aeb7b5; S=0x32aeb7c5; @synthesize=_imageSeparatorText
@property(retain, nonatomic) ATVFeedImageElement *leftImage;	// G=0x32aeb7e9; S=0x32aeb7f9; @synthesize=_leftImage
@property(retain, nonatomic) ATVFeedImageElement *rightImage;	// G=0x32aeb81d; S=0x32aeb82d; @synthesize=_rightImage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x32aeb5c9
- (void)dealloc;	// 0x32aeb741
// declared property getter: - (BOOL)dimmed;	// 0x32aeb851
// declared property getter: - (id)imageSeparatorText;	// 0x32aeb7b5
// declared property getter: - (id)leftImage;	// 0x32aeb7e9
// declared property getter: - (id)rightImage;	// 0x32aeb81d
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x32aeb861
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x32aeb7c5
// declared property setter: - (void)setLeftImage:(id)image;	// 0x32aeb7f9
// declared property setter: - (void)setRightImage:(id)image;	// 0x32aeb82d
@end
