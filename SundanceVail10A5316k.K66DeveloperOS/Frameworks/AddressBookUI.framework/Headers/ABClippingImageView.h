/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UIView.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class UIImage, NSArray;
@protocol ABStyleProvider;

@interface ABClippingImageView : UIView {
@private
	UIImage *_clippingImage;	// 84 = 0x54
	UIImage *_image;	// 88 = 0x58
	NSArray *_labelLines;	// 92 = 0x5c
	id<ABStyleProvider> _styleProvider;	// 96 = 0x60
}
@property(retain, nonatomic) UIImage *image;	// G=0x34c78dcd; S=0x34c7839d; @synthesize=_image
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34c78dbd; S=0x34c783f5; @synthesize=_styleProvider
- (id)initWithImage:(id)image;	// 0x34c7830d
- (BOOL)_canDrawContent;	// 0x34c78385
- (void)dealloc;	// 0x34c81951
- (void)drawRect:(CGRect)rect;	// 0x34c78b15
// declared property getter: - (id)image;	// 0x34c78dcd
- (void)setClippingImage:(id)image;	// 0x34c784d1
// declared property setter: - (void)setImage:(id)image;	// 0x34c7839d
- (void)setLabel:(id)label;	// 0x34c824ed
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c783f5
// declared property getter: - (id)styleProvider;	// 0x34c78dbd
@end

