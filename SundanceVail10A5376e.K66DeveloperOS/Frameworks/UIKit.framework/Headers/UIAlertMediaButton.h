/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAlertButton.h"

@class UIImageView, UIImage;

__attribute__((visibility("hidden")))
@interface UIAlertMediaButton : UIAlertButton {
	UIImageView *_checkmarkView;	// 184 = 0xb8
	UIImage *_tableIcon;	// 188 = 0xbc
	UIImage *_highlightedTableIcon;	// 192 = 0xc0
}
@property(readonly, assign, nonatomic) UIImageView *checkmarkView;	// G=0x3057660d; 
@property(retain, nonatomic) UIImage *highlightedTableIcon;	// G=0x30576a51; S=0x30576a61; @synthesize=_highlightedTableIcon
@property(retain, nonatomic) UIImage *tableIcon;	// G=0x30576a31; S=0x30576a41; @synthesize=_tableIcon
// declared property getter: - (id)checkmarkView;	// 0x3057660d
- (void)dealloc;	// 0x305769b9
// declared property getter: - (id)highlightedTableIcon;	// 0x30576a51
- (void)layoutSubviews;	// 0x305766cd
// declared property setter: - (void)setHighlightedTableIcon:(id)icon;	// 0x30576a61
// declared property setter: - (void)setTableIcon:(id)icon;	// 0x30576a41
// declared property getter: - (id)tableIcon;	// 0x30576a31
@end
