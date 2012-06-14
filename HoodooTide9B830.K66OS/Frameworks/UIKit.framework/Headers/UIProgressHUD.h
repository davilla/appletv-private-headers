/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIProgressIndicator, UILabel, UIWindow;

@interface UIProgressHUD : UIView {
	UIProgressIndicator *_progressIndicator;	// 48 = 0x30
	UILabel *_progressMessage;	// 52 = 0x34
	UIImageView *_doneView;	// 56 = 0x38
	UIWindow *_parentWindow;	// 60 = 0x3c
	struct {
		unsigned isShowing : 1;
		unsigned isShowingText : 1;
		unsigned fixedFrame : 1;
		unsigned reserved : 30;
	} _progressHUDFlags;	// 64 = 0x40
}
- (id)initWithFrame:(CGRect)frame;	// 0x3022fcbd
- (id)initWithWindow:(id)window;	// 0x30230791
- (id)_progressIndicator;	// 0x3022fcad
- (void)dealloc;	// 0x302306ad
- (void)done;	// 0x302305e1
- (void)drawRect:(CGRect)rect;	// 0x3023004d
- (void)hide;	// 0x30230591
- (void)layoutSubviews;	// 0x30230101
- (void)setFontSize:(int)size;	// 0x3022ffed
- (void)setShowsText:(BOOL)text;	// 0x3022ff91
- (void)setText:(id)text;	// 0x3022ff35
- (void)show:(BOOL)show;	// 0x302307d1
- (void)showInView:(id)view;	// 0x30230541
@end
