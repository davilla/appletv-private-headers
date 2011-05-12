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
@interface UIPrintingMessageView : UIView {
@private
	UILabel *_title;	// 44 = 0x2c
	UILabel *_message;	// 48 = 0x30
	UIImageView *_icon;	// 52 = 0x34
}
- (id)initInView:(id)view title:(id)title;	// 0x32252cd9
- (void)dealloc;	// 0x32252c6d
- (void)layoutSubviews;	// 0x32253011
- (void)setMessage:(id)message;	// 0x32252c29
@end

