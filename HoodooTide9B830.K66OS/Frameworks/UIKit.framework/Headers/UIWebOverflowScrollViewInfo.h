/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIWebOverflowScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject {
@private
	UIWebOverflowScrollView *_scrollView;	// 4 = 0x4
	UIView *_oldSuperview;	// 8 = 0x8
}
@property(retain, nonatomic) UIView *oldSuperview;	// G=0x3024ec75; S=0x3024ec85; @synthesize=_oldSuperview
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView;	// G=0x3024ec41; S=0x3024ec51; @synthesize=_scrollView
- (id)initWithScrollView:(id)scrollView;	// 0x3024eb65
- (void)dealloc;	// 0x3024ebe1
// declared property getter: - (id)oldSuperview;	// 0x3024ec75
// declared property getter: - (id)scrollView;	// 0x3024ec41
// declared property setter: - (void)setOldSuperview:(id)superview;	// 0x3024ec85
// declared property setter: - (void)setScrollView:(id)view;	// 0x3024ec51
@end

