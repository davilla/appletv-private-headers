/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIStatusBarAdornmentWindow.h"
#import "UIKit-Structs.h"

@class NSArray, UIView;

__attribute__((visibility("hidden")))
@interface _UIClassicCornersWindow : UIStatusBarAdornmentWindow {
	int _visibleCorners;	// 144 = 0x90
	UIView *_contentView;	// 148 = 0x94
	unsigned _hiddenStatusBarStyles;	// 152 = 0x98
	NSArray *_cornerViews;	// 156 = 0x9c
	BOOL _hidesWithStatusBar;	// 160 = 0xa0
	CGRect _cornerFrame;	// 164 = 0xa4
}
@property(assign, nonatomic) CGRect cornerFrame;	// G=0x30efb451; S=0x30efac25; @synthesize=_cornerFrame
@property(assign, nonatomic) BOOL hidesWithStatusBar;	// G=0x30efb431; S=0x30efb441; @synthesize=_hidesWithStatusBar
@property(readonly, assign, nonatomic) int visibleCorners;	// G=0x30efb421; @synthesize=_visibleCorners
- (id)initWithFrame:(CGRect)frame andVisibleCorners:(int)corners;	// 0x30efaae5
- (id)_cornerViewWithImage:(id)image forCorner:(int)corner;	// 0x30efad19
- (BOOL)_hidesWithStatusBarStyle:(int)statusBarStyle;	// 0x30efacfd
- (void)_setCorners:(unsigned)corners visible:(BOOL)visible;	// 0x30efb0a1
- (void)_updateForRotationFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2 withStatusBarStyle:(int)statusBarStyle statusBarShouldHide:(BOOL)statusBar;	// 0x30efb151
// declared property getter: - (CGRect)cornerFrame;	// 0x30efb451
- (void)dealloc;	// 0x30efabc1
// declared property getter: - (BOOL)hidesWithStatusBar;	// 0x30efb431
- (void)layoutSubviews;	// 0x30efae85
// declared property setter: - (void)setCornerFrame:(CGRect)frame;	// 0x30efac25
// declared property setter: - (void)setHidesWithStatusBar:(BOOL)statusBar;	// 0x30efb441
- (void)setHidesWithStatusBarStyle:(int)statusBarStyle;	// 0x30eface1
// declared property getter: - (int)visibleCorners;	// 0x30efb421
@end

