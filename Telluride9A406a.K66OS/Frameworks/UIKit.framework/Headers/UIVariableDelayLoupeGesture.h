/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIView;
@protocol UITextSelectingContainer;

__attribute__((visibility("hidden")))
@interface UIVariableDelayLoupeGesture : UILongPressGestureRecognizer {
@private
	UIView<UITextSelectingContainer> *_textView;	// 104 = 0x68
}
@property(assign) UIView<UITextSelectingContainer> *textView;	// G=0x3577348d; S=0x356c08a5; @synthesize=_textView
- (void)invalidate;	// 0x3575dd89
- (BOOL)isCloseToCaret;	// 0x35773381
// declared property setter: - (void)setTextView:(id)view;	// 0x356c08a5
- (void)startTimer;	// 0x35773319
// declared property getter: - (id)textView;	// 0x3577348d
@end

