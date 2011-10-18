/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


@interface UITransformAnimation : UIAnimation {
	CGAffineTransform _startTransform;	// 44 = 0x2c
	CGAffineTransform _endTransform;	// 68 = 0x44
}
- (CGAffineTransform)_transformWithMultiplier:(float)multiplier;	// 0x33b5d689
- (void)setEndTransform:(CGAffineTransform)transform;	// 0x33b5d655
- (void)setProgress:(float)progress;	// 0x33b5d755
- (void)setStartTransform:(CGAffineTransform)transform;	// 0x33b5d621
- (CGAffineTransform)transformForFraction:(float)fraction;	// 0x33b5d7c9
@end

