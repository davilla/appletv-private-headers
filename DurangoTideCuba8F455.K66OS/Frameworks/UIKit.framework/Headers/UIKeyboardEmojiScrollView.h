/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UIScrollViewDelegate.h"

@class UIKeyboardEmojiCategory, UIPageControl, NSMutableArray, UILabel, UIScrollView;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiScrollView : UIView <UIScrollViewDelegate> {
@private
	UIKeyboardEmojiCategory *_category;	// 44 = 0x2c
	UIPageControl *_pageControl;	// 48 = 0x30
	UIScrollView *_scrollView;	// 52 = 0x34
	UILabel *_categoryLabel;	// 56 = 0x38
	NSMutableArray *_pages;	// 60 = 0x3c
	int _currentPage;	// 64 = 0x40
	id<UIKeyboardEmojiController> _controller;	// 68 = 0x44
}
@property(assign) id<UIKeyboardEmojiController> controller;	// G=0x30295a55; S=0x30295a65; @synthesize=_controller
@property(readonly, assign) int currentPage;	// G=0x30295a45; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x302969d5
- (void)clearPages;	// 0x3029686d
// declared property getter: - (id)controller;	// 0x30295a55
// converted property getter: - (int)currentPage;	// 0x30295a45
- (void)dealloc;	// 0x30295e2d
- (void)delayedLayout:(id)layout;	// 0x30295df9
- (void)doLayout;	// 0x302966c5
- (void)ensureSurrounded:(int)surrounded;	// 0x30295bc5
- (void)forceLayout;	// 0x30295e19
- (void)goToFirstPage;	// 0x30295aa1
- (void)interruptScrolling;	// 0x30295d99
- (void)layoutPages;	// 0x30296d91
- (void)layoutRecents;	// 0x30296429
- (void)pageChanged;	// 0x30296285
- (void)scrollViewDidEndScrollingAnimation:(id)scrollView;	// 0x30295c99
- (void)scrollViewWillBeginDecelerating:(id)scrollView;	// 0x30296179
- (void)setCategory:(id)category;	// 0x30295cd9
// declared property setter: - (void)setController:(id)controller;	// 0x30295a65
- (void)setFrame:(CGRect)frame;	// 0x3029638d
- (void)setScrollDelay:(double)delay;	// 0x30295ba5
@end

