/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface UIClippedImageView : UIView {
@private
	UIImageView *m_imageView;	// 48 = 0x30
	CGRect m_originalFrame;	// 52 = 0x34
	CGRect m_baseFrame;	// 68 = 0x44
}
@property(assign) CGRect baseFrame;	// G=0x330e2bc1; S=0x330e2ba5; converted property
@property(retain) id image;	// G=0x330e29d9; S=0x330e29f9; converted property
- (id)initWithFrame:(CGRect)frame image:(id)image;	// 0x330e2891
// converted property getter: - (CGRect)baseFrame;	// 0x330e2bc1
- (void)dealloc;	// 0x330e298d
// converted property getter: - (id)image;	// 0x330e29d9
// converted property setter: - (void)setBaseFrame:(CGRect)frame;	// 0x330e2ba5
- (void)setFrame:(CGRect)frame;	// 0x330e2a61
// converted property setter: - (void)setImage:(id)image;	// 0x330e29f9
- (void)setImageOrigin:(CGPoint)origin;	// 0x330e2be5
- (void)setOpaque:(BOOL)opaque;	// 0x330e2a19
- (void)setOriginAdjustingImage:(CGPoint)image;	// 0x330e2c05
@end

