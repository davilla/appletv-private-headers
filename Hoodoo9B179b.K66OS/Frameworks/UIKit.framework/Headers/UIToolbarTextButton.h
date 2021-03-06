/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIToolbarButton.h"

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface UIToolbarTextButton : UIToolbarButton {
@private
	NSString *_title;	// 176 = 0xb0
	NSString *_pressedTitle;	// 180 = 0xb4
	NSSet *_possibleTitles;	// 184 = 0xb8
}
- (id)initWithTitle:(id)title pressedTitle:(id)title2 withFont:(id)font withBarStyle:(int)barStyle withStyle:(int)style withTitleWidth:(float)titleWidth possibleTitles:(id)titles withToolbarTintColor:(id)toolbarTintColor;	// 0x32f828b9
- (void)_UIAppearance_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x330b7621
- (id)_scriptingInfo;	// 0x330045ed
- (void)_setPressed:(BOOL)pressed;	// 0x330b756d
- (void)_setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x330b7875
- (void)dealloc;	// 0x330049ed
@end

