/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UICompositeImageElement : NSObject {
@private
	UIImage *m_image;	// 4 = 0x4
	CGRect m_fromRect;	// 8 = 0x8
	CGRect m_toRect;	// 24 = 0x18
	int m_operation;	// 40 = 0x28
	float m_fraction;	// 44 = 0x2c
}
+ (id)elementWithImage:(id)image toRect:(CGRect)rect fromRect:(CGRect)rect3 operation:(int)operation fraction:(float)fraction;	// 0x3022735d
- (id)initWithImage:(id)image toRect:(CGRect)rect fromRect:(CGRect)rect3 operation:(int)operation fraction:(float)fraction;	// 0x30227419
- (void)dealloc;	// 0x302273d1
- (void)draw;	// 0x302272dd
@end

