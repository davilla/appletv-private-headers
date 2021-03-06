/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIToolbarButtonBadge : UIView {
	UIView *_value;	// 84 = 0x54
	UIView *_background;	// 88 = 0x58
	UIView *_alternate;	// 92 = 0x5c
}
- (id)initWithValue:(id)value blinks:(BOOL)blinks;	// 0x30e00499
- (void)dealloc;	// 0x30e004f9
- (void)layoutSubviews;	// 0x30e00a19
- (void)setBlinks:(BOOL)blinks;	// 0x30e00b81
- (void)setValue:(id)value;	// 0x30e00779
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30e00571
@end

