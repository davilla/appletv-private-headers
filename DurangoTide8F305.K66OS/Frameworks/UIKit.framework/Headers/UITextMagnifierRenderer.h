/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UITextMagnifierRenderer : UIView {
@private
	int m_autoscrollDirections;	// 44 = 0x2c
	int m_magnifierMethod;	// 48 = 0x30
}
@property(assign, nonatomic) int autoscrollDirections;	// G=0x321d6705; S=0x321d6715; @synthesize=m_autoscrollDirections
@property(assign, nonatomic) int magnifierMethod;	// G=0x321d66e5; S=0x321d66f5; @synthesize=m_magnifierMethod
- (id)initWithFrame:(CGRect)frame;	// 0x320a1005
// declared property getter: - (int)autoscrollDirections;	// 0x321d6705
- (void)drawAutoscroller:(CGRect)autoscroller;	// 0x321d677d
- (void)drawMagnifier:(CGRect)magnifier;	// 0x321d66d9
- (void)drawRect:(CGRect)rect;	// 0x321d6725
// declared property getter: - (int)magnifierMethod;	// 0x321d66e5
// declared property setter: - (void)setAutoscrollDirections:(int)directions;	// 0x321d6715
// declared property setter: - (void)setMagnifierMethod:(int)method;	// 0x321d66f5
@end

