/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKeyboardLayoutEmoji.h"
#import "UIKit-Structs.h"

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutEmoji_iPad : UIKeyboardLayoutEmoji {
@private
	UIButton *_spaceButton;	// 140 = 0x8c
	UIButton *_dismissButton;	// 144 = 0x90
	CGRect _spaceFrame;	// 148 = 0x94
	CGRect _dismissFrame;	// 164 = 0xa4
}
@property(readonly, assign) CGRect dismissFrame;	// G=0x3218fafd; @synthesize=_dismissFrame
@property(readonly, assign) CGRect spaceFrame;	// G=0x3218fac9; @synthesize=_spaceFrame
- (id)initWithFrame:(CGRect)frame;	// 0x3218ee8d
- (CGRect)categoryFrame;	// 0x32190349
- (void)dealloc;	// 0x3218ee31
- (void)dismiss;	// 0x3218e739
// declared property getter: - (CGRect)dismissFrame;	// 0x3218fafd
- (void)generateControlKeyRects;	// 0x32190399
- (void)layoutSubviews;	// 0x3218fdbd
- (CGSize)leftControlSize;	// 0x3219008d
- (CGSize)rightControlSize;	// 0x32190045
// declared property getter: - (CGRect)spaceFrame;	// 0x3218fac9
- (void)spaceUp;	// 0x3218fd6d
- (void)updateControlButtonImages;	// 0x3218e4f5
@end

