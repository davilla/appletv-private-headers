/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class UIImage, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
@private
	NSString *title;	// 4 = 0x4
	UIImage *image;	// 8 = 0x8
	UIImage *background;	// 12 = 0xc
	UIColor *titleColor;	// 16 = 0x10
	UIColor *shadowColor;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *background;	// G=0x33998abd; S=0x339d1605; @synthesize
@property(retain, nonatomic) UIImage *image;	// G=0x33998b25; S=0x33997e69; @synthesize
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x339a2959; @dynamic
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x339a2cfd; S=0x339c846d; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x33999035; S=0x33997d01; @synthesize
@property(retain, nonatomic) UIColor *titleColor;	// G=0x339a2c35; S=0x339c8295; @synthesize
- (id)initWithCoder:(id)coder;	// 0x33be61dd
// declared property getter: - (id)background;	// 0x33998abd
- (id)copyWithZone:(NSZone *)zone;	// 0x33be60e1
- (void)dealloc;	// 0x339d1629
- (id)description;	// 0x33be640d
- (void)encodeWithCoder:(id)coder;	// 0x33be6321
// declared property getter: - (id)image;	// 0x33998b25
// declared property getter: - (BOOL)isEmpty;	// 0x339a2959
// declared property setter: - (void)setBackground:(id)background;	// 0x339d1605
// declared property setter: - (void)setImage:(id)image;	// 0x33997e69
// declared property setter: - (void)setShadowColor:(id)color;	// 0x339c846d
// declared property setter: - (void)setTitle:(id)title;	// 0x33997d01
// declared property setter: - (void)setTitleColor:(id)color;	// 0x339c8295
// declared property getter: - (id)shadowColor;	// 0x339a2cfd
// declared property getter: - (id)title;	// 0x33999035
// declared property getter: - (id)titleColor;	// 0x339a2c35
@end

