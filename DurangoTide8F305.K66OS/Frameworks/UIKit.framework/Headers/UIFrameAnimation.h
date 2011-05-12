/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIAnimation.h"


@interface UIFrameAnimation : UIAnimation {
	CGRect _startFrame;	// 40 = 0x28
	CGRect _endFrame;	// 56 = 0x38
	int _fieldsToChange;	// 72 = 0x48
}
@property(assign) CGRect endFrame;	// G=0x320f510d; S=0x320f50e1; converted property
- (id)initWithTarget:(id)target;	// 0x320f52e9
// converted property getter: - (CGRect)endFrame;	// 0x320f510d
// converted property setter: - (void)setEndFrame:(CGRect)frame;	// 0x320f50e1
- (void)setProgress:(float)progress;	// 0x320f5611
- (void)setSignificantRectFields:(int)fields;	// 0x320f5129
- (void)setStartFrame:(CGRect)frame;	// 0x320f50b5
@end

