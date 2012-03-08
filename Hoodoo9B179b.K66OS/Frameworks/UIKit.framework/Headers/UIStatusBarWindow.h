/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIWindow.h"

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow {
	UIStatusBar *_statusBar;	// 132 = 0x84
	int _orientation;	// 136 = 0x88
	UIStatusBarCorners *_topCorners;	// 140 = 0x8c
	UIStatusBarCorners *_bottomCorners;	// 144 = 0x90
	BOOL _cornersHidden;	// 148 = 0x94
}
@property(readonly, assign) int orientation;	// G=0x32ec78b1; converted property
+ (CGRect)statusBarWindowFrame;	// 0x32eed86d
- (id)initWithFrame:(CGRect)frame;	// 0x32eed7f9
- (BOOL)_disableGroupOpacity;	// 0x32eee559
- (BOOL)_disableViewScaling;	// 0x331cb969
- (void)_fadeAnimationStopped:(id)stopped finished:(id)finished context:(void *)context;	// 0x331cb6a9
- (BOOL)_isStatusBarWindow;	// 0x331cb96d
- (void)_rotate;	// 0x32ef2351
- (void)_updateTransformLayerForClassicPresentation;	// 0x331cb971
- (void)dealloc;	// 0x331cb61d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32ed2209
// converted property getter: - (int)orientation;	// 0x32ec78b1
- (void)setCornersHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x33029941
- (void)setOrientation:(int)orientation animationParameters:(id)parameters;	// 0x32ef20ed
- (void)setStatusBar:(id)bar;	// 0x32eee775
- (void)setTopCornerStyle:(int)style bottomCornerStyle:(int)style2 animationParameters:(id)parameters;	// 0x32ede70d
@end
