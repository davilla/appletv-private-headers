/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIColor, UIFont, UIImage;

__attribute__((visibility("hidden")))
@interface _UITabBarAppearance : NSObject {
@private
	UIImage *backgroundImage;	// 4 = 0x4
	UIImage *selectionIndicatorImage;	// 8 = 0x8
	UIFont *labelFont;	// 12 = 0xc
	UIColor *labelTextColor;	// 16 = 0x10
	UIColor *labelSelectedTextColor;	// 20 = 0x14
	UIColor *labelShadowColor;	// 24 = 0x18
	CGSize labelShadowOffset;	// 28 = 0x1c
}
- (id)init;	// 0x30281fa5
- (void)dealloc;	// 0x30283f41
@end

