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
@interface UISelectionIndicatorView : UIView {
@private
	UIImage *_image;	// 44 = 0x2c
	XXStruct_4cr1oD _slices;	// 48 = 0x30
}
- (id)initWithFrame:(CGRect)frame withImageName:(id)imageName;	// 0x30210c69
- (void)dealloc;	// 0x3020b5ed
- (void)drawRect:(CGRect)rect;	// 0x3020bcf1
- (void)setFrame:(CGRect)frame;	// 0x3021024d
@end

