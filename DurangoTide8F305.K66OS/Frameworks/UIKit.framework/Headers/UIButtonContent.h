/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"

@class UIColor, NSString, UIImage;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
@private
	NSString *title;	// 4 = 0x4
	UIImage *image;	// 8 = 0x8
	UIImage *background;	// 12 = 0xc
	UIColor *titleColor;	// 16 = 0x10
	UIColor *shadowColor;	// 20 = 0x14
}
@property(retain, nonatomic) UIImage *background;	// G=0x31fb4a79; S=0x31fb3639; @synthesize
@property(retain, nonatomic) UIImage *image;	// G=0x31f93185; S=0x31fb2b4d; @synthesize
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x31fb3661; @dynamic
@property(retain, nonatomic) UIColor *shadowColor;	// G=0x31fcd159; S=0x31fb0e95; @synthesize
@property(retain, nonatomic) NSString *title;	// G=0x31fb15c9; S=0x31fb857d; @synthesize
@property(retain, nonatomic) UIColor *titleColor;	// G=0x31fcd109; S=0x31fb0d65; @synthesize
- (id)initWithCoder:(id)coder;	// 0x321748a5
// declared property getter: - (id)background;	// 0x31fb4a79
- (id)copyWithZone:(NSZone *)zone;	// 0x32174645
- (void)dealloc;	// 0x31fb36b5
- (id)description;	// 0x321749bd
- (void)encodeWithCoder:(id)coder;	// 0x3217457d
// declared property getter: - (id)image;	// 0x31f93185
// declared property getter: - (BOOL)isEmpty;	// 0x31fb3661
// declared property setter: - (void)setBackground:(id)background;	// 0x31fb3639
// declared property setter: - (void)setImage:(id)image;	// 0x31fb2b4d
// declared property setter: - (void)setShadowColor:(id)color;	// 0x31fb0e95
// declared property setter: - (void)setTitle:(id)title;	// 0x31fb857d
// declared property setter: - (void)setTitleColor:(id)color;	// 0x31fb0d65
// declared property getter: - (id)shadowColor;	// 0x31fcd159
// declared property getter: - (id)title;	// 0x31fb15c9
// declared property getter: - (id)titleColor;	// 0x31fcd109
@end

