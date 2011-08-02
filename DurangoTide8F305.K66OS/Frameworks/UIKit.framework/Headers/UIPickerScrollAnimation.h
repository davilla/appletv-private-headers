/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"
#import "UIKit-Structs.h"


__attribute__((visibility("hidden")))
@interface UIPickerScrollAnimation : UIAnimation {
@private
	float _initialDuration;	// 40 = 0x28
	CGPoint _originalOffset;	// 44 = 0x2c
	CGPoint _targetOffset;	// 52 = 0x34
}
@property(assign) float initialDuration;	// G=0x320c9bc1; S=0x320c9bd1; converted property
@property(assign) CGPoint targetOffset;	// G=0x320c9b79; S=0x320c9b91; converted property
// converted property getter: - (float)initialDuration;	// 0x320c9bc1
// converted property setter: - (void)setInitialDuration:(float)duration;	// 0x320c9bd1
- (void)setOriginalOffset:(CGPoint)offset;	// 0x320c9ba9
- (void)setProgress:(float)progress;	// 0x320ca6bd
// converted property setter: - (void)setTargetOffset:(CGPoint)offset;	// 0x320c9b91
// converted property getter: - (CGPoint)targetOffset;	// 0x320c9b79
@end
