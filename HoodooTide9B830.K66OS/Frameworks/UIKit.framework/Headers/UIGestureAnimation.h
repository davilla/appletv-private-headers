/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAnimation.h"


__attribute__((visibility("hidden")))
@interface UIGestureAnimation : UIAnimation {
@private
	SEL _progressSelector;	// 44 = 0x2c
	int _gestureType;	// 48 = 0x30
}
@property(readonly, assign) int gestureType;	// G=0x3021ed4d; converted property
- (id)initWithTarget:(id)target progressSelector:(SEL)selector gestureType:(int)type;	// 0x3021eca1
// converted property getter: - (int)gestureType;	// 0x3021ed4d
- (void)setProgress:(float)progress;	// 0x3021ecf1
@end

