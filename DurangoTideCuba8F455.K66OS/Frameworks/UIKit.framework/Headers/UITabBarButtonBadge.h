/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITabBarButtonBadge : UIView {
@private
	UIView *_value;	// 44 = 0x2c
	UIView *_background;	// 48 = 0x30
	UIView *_alternate;	// 52 = 0x34
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x30287095
- (void)dealloc;	// 0x30283c01
- (void)layoutSubviews;	// 0x30285ef1
- (void)setBlinks:(BOOL)blinks;	// 0x302845f1
- (void)setValue:(id)value;	// 0x30283985
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30286071
@end
