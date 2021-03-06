/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIButton;
@protocol UIKeyboardMinimizedViewDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardMinimizedView : UIView {
@private
	UIButton *_tabButton;	// 44 = 0x2c
	id<UIKeyboardMinimizedViewDelegate> _delegate;	// 48 = 0x30
}
@property(assign, nonatomic) id<UIKeyboardMinimizedViewDelegate> delegate;	// G=0x322045c1; S=0x322045d1; @synthesize=_delegate
- (id)initWithDefaultSize;	// 0x32204631
- (void)dealloc;	// 0x322045e1
// declared property getter: - (id)delegate;	// 0x322045c1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x322045d1
- (void)tabPressed;	// 0x3220460d
@end

