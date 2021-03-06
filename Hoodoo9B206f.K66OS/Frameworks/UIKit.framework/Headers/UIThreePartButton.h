/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPushButton.h"


@interface UIThreePartButton : UIPushButton {
	XXStruct_UUz0SD _bkgndSlices;	// 116 = 0x74
	CGSize _titleOffset;	// 164 = 0xa4
}
@property(assign, nonatomic) CGSize titleOffset;	// G=0x354fd57d; S=0x354fd529; @synthesize=_titleOffset
+ (id)defaultFont;	// 0x354fd505
- (id)initWithFrame:(CGRect)frame;	// 0x35385915
- (XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;	// 0x3538daf5
- (id)background;	// 0x354487b1
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x3538e599
- (float)minTitleMargin;	// 0x3538e67d
- (void)setBackgroundImage:(id)image;	// 0x35385dfd
- (void)setBackgroundSlices:(XXStruct_UUz0SD)slices;	// 0x35385db1
- (void)setPressedBackgroundImage:(id)image;	// 0x35385f35
// declared property setter: - (void)setTitleOffset:(CGSize)offset;	// 0x354fd529
// declared property getter: - (CGSize)titleOffset;	// 0x354fd57d
@end

