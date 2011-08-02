/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIAutocorrectImageView : UIView {
@private
	UIImage *m_image;	// 44 = 0x2c
}
+ (id)imageWithMaskingView:(id)maskingView maskingRect:(CGRect)rect;	// 0x30238ef1
- (id)initWithFrame:(CGRect)frame image:(id)image;	// 0x30238b15
- (id)initWithFrame:(CGRect)frame string:(id)string font:(id)font;	// 0x30238d05
- (void)dealloc;	// 0x30238acd
- (void)drawRect:(CGRect)rect;	// 0x30238c69
@end

