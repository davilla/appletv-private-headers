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
@property(retain) UIImage *categoryKeyHighlightedImage;	// G=0x3315450d; S=0x33154521; @synthesize
@property(retain) UIImage *categoryKeyImage;	// G=0x331544d5; S=0x331544e9; @synthesize
@property(retain) UIImage *dividerHighlightedImage;	// G=0x3315457d; S=0x33154591; @synthesize
@property(retain) UIImage *dividerImage;	// G=0x33154545; S=0x33154559; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x33153d31
// declared property getter: - (id)categoryKeyHighlightedImage;	// 0x3315450d
// declared property getter: - (id)categoryKeyImage;	// 0x331544d5
- (void)dealloc;	// 0x33153d91
// declared property getter: - (id)dividerHighlightedImage;	// 0x3315457d
// declared property getter: - (id)dividerImage;	// 0x33154545
- (void)drawRect:(CGRect)rect;	// 0x331541e1
- (CGRect)frameForDivider:(int)divider;	// 0x33154049
- (CGRect)frameForSegment:(int)segment;	// 0x33154129
- (void)layoutSubviews;	// 0x33154045
- (void)releaseImagesAndViews;	// 0x33153fe9
// declared property setter: - (void)setCategoryKeyHighlightedImage:(id)image;	// 0x33154521
// declared property setter: - (void)setCategoryKeyImage:(id)image;	// 0x331544e9
// declared property setter: - (void)setDividerHighlightedImage:(id)image;	// 0x33154591
// declared property setter: - (void)setDividerImage:(id)image;	// 0x33154559
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3315439d
- (void)updateSegmentAndDividers:(int)dividers;	// 0x33153fd9
- (void)updateSegmentImages;	// 0x33153dbd
@end
