/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextFieldAtomBackgroundView : UIView {
@private
	int _atomStyle;	// 44 = 0x2c
}
@property(assign) int atomStyle;	// G=0x320c7ae5; S=0x320c7bdd; converted property
+ (id)_blueAtomBackgroundImage;	// 0x320f0f15
+ (id)_purpleAtomBackgroundImage;	// 0x320c9939
- (id)initWithFrame:(CGRect)frame;	// 0x320c7a61
// converted property getter: - (int)atomStyle;	// 0x320c7ae5
- (void)drawRect:(CGRect)rect;	// 0x320c986d
// converted property setter: - (void)setAtomStyle:(int)style;	// 0x320c7bdd
@end

