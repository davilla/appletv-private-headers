/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UIScrollViewScrollAnimation : UIAnimation {
@private
	CGPoint _originalOffset;	// 44 = 0x2c
	CGPoint _targetOffset;	// 52 = 0x34
	float _accuracy;	// 60 = 0x3c
}
- (void)adjustForContentOffsetDelta:(CGPoint)contentOffsetDelta;	// 0x33b3ea49
- (void)dealloc;	// 0x33b11071
- (void)setProgress:(float)progress;	// 0x33b10a21
@end

