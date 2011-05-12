/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIPinchGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIScrollView;

__attribute__((visibility("hidden")))
@interface UIScrollViewPinchGestureRecognizer : UIPinchGestureRecognizer {
@private
	UIScrollView *_scrollView;	// 136 = 0x88
	unsigned _hasParentScrollView : 1;	// 140 = 0x8c
}
@property(assign, nonatomic) UIScrollView *scrollView;	// G=0x320c8295; S=0x31ffcc1d; @synthesize=_scrollView
- (float)_hysteresis;	// 0x320c86d1
// declared property getter: - (id)scrollView;	// 0x320c8295
// declared property setter: - (void)setScrollView:(id)view;	// 0x31ffcc1d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x320812d9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x320c8361
@end

