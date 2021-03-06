/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UIWindow, UILabel;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 84 = 0x54
	UILabel *_progressMessage;	// 88 = 0x58
	UIImageView *_doneView;	// 92 = 0x5c
	UIWindow *_parentWindow;	// 96 = 0x60
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 100 = 0x64
}
- (id)initWithFrame:(CGRect)frame;	// 0x3044b7d9
- (id)initWithWindow:(id)window;	// 0x3044c289
- (id)_progressIndicator;	// 0x3044b7c9
- (void)dealloc;	// 0x3044c1a9
- (void)done;	// 0x3044c0e1
- (void)drawRect:(CGRect)rect;	// 0x3044bb31
- (void)hide;	// 0x3044c091
- (void)layoutSubviews;	// 0x3044bbe9
- (void)setFontSize:(int)size;	// 0x3044bad1
- (void)setShowsText:(BOOL)text;	// 0x3044ba75
- (void)setText:(id)text;	// 0x3044ba19
- (void)show:(BOOL)show;	// 0x3044c2c9
- (void)showInView:(id)view;	// 0x3044c041
@end

