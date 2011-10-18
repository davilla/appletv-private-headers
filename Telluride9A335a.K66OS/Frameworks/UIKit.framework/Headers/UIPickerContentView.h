/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPickerContentView : UIView {
@private
	UILabel *_titleLabel;	// 48 = 0x30
	UIImageView *_checkView;	// 52 = 0x34
	struct {
		unsigned hideForSinglePage : 1;
		unsigned defersCurrentPageDisplay : 1;
	} _pickerContentViewFlags;	// 56 = 0x38
}
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x33ce9b15; S=0x33ce9b29; 
@property(assign, getter=isHighlighted) BOOL highlighted;	// G=0x33cea0bd; S=0x33cea0d1; converted property
@property(readonly, assign, nonatomic) UILabel *titleLabel;	// G=0x33ce9d25; 
+ (float)_checkmarkOffset;	// 0x33ce9aad
- (BOOL)_isSelectable;	// 0x33cea11d
- (void)dealloc;	// 0x33ce9ab5
// declared property getter: - (BOOL)isChecked;	// 0x33ce9b15
// converted property getter: - (BOOL)isHighlighted;	// 0x33cea0bd
- (float)labelWidthForBounds:(CGRect)bounds;	// 0x33cea0f1
- (void)layoutSubviews;	// 0x33ce9f65
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x33ce9b29
// converted property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x33cea0d1
// declared property getter: - (id)titleLabel;	// 0x33ce9d25
@end

