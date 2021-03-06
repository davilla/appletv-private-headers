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
@property(assign, nonatomic) CGSize titleOffset;	// G=0x33b6f341; S=0x33b6f2ed; @synthesize=_titleOffset
+ (id)defaultFont;	// 0x33b6f2c9
- (id)initWithFrame:(CGRect)frame;	// 0x339fb5a1
- (XXStruct_UUz0SD)_backgroundSlices:(CGSize)slices;	// 0x33a03ab1
- (id)background;	// 0x33abce7d
- (void)drawTitleAtPoint:(CGPoint)point width:(float)width;	// 0x33a04555
- (float)minTitleMargin;	// 0x33a04639
- (void)setBackgroundImage:(id)image;	// 0x339fba89
- (void)setBackgroundSlices:(XXStruct_UUz0SD)slices;	// 0x339fba3d
- (void)setPressedBackgroundImage:(id)image;	// 0x339fbbc1
// declared property setter: - (void)setTitleOffset:(CGSize)offset;	// 0x33b6f2ed
// declared property getter: - (CGSize)titleOffset;	// 0x33b6f341
@end

