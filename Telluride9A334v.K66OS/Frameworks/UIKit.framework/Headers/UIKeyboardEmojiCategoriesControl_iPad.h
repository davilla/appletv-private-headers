/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKeyboardEmojiCategoriesControl.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoriesControl_iPad : UIKeyboardEmojiCategoriesControl {
@private
	UIImage *categoryKeyImage;	// 100 = 0x64
	UIImage *categoryKeyHighlightedImage;	// 104 = 0x68
	UIImage *dividerImage;	// 108 = 0x6c
	UIImage *dividerHighlightedImage;	// 112 = 0x70
}
@property(retain) UIImage *categoryKeyHighlightedImage;	// G=0x302c07c9; S=0x302c07dd; @synthesize
@property(retain) UIImage *categoryKeyImage;	// G=0x302c0791; S=0x302c07a5; @synthesize
@property(retain) UIImage *dividerHighlightedImage;	// G=0x302c0839; S=0x302c084d; @synthesize
@property(retain) UIImage *dividerImage;	// G=0x302c0801; S=0x302c0815; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x302bffed
// declared property getter: - (id)categoryKeyHighlightedImage;	// 0x302c07c9
// declared property getter: - (id)categoryKeyImage;	// 0x302c0791
- (void)dealloc;	// 0x302c004d
// declared property getter: - (id)dividerHighlightedImage;	// 0x302c0839
// declared property getter: - (id)dividerImage;	// 0x302c0801
- (void)drawRect:(CGRect)rect;	// 0x302c049d
- (CGRect)frameForDivider:(int)divider;	// 0x302c0305
- (CGRect)frameForSegment:(int)segment;	// 0x302c03e5
- (void)layoutSubviews;	// 0x302c0301
- (void)releaseImagesAndViews;	// 0x302c02a5
// declared property setter: - (void)setCategoryKeyHighlightedImage:(id)image;	// 0x302c07dd
// declared property setter: - (void)setCategoryKeyImage:(id)image;	// 0x302c07a5
// declared property setter: - (void)setDividerHighlightedImage:(id)image;	// 0x302c084d
// declared property setter: - (void)setDividerImage:(id)image;	// 0x302c0815
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302c0659
- (void)updateSegmentAndDividers:(int)dividers;	// 0x302c0295
- (void)updateSegmentImages;	// 0x302c0079
@end

