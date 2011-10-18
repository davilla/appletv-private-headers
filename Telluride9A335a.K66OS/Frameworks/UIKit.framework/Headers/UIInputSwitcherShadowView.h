/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIInputSwitcherShadowView : UIView {
@private
	int m_mode;	// 48 = 0x30
	float m_pointerOffset;	// 52 = 0x34
}
@property(assign, nonatomic) int mode;	// G=0x33d34e09; S=0x33d34e19; @synthesize=m_mode
@property(assign, nonatomic) float pointerOffset;	// G=0x33d34e29; S=0x33d34e39; @synthesize=m_pointerOffset
- (id)initWithFrame:(CGRect)frame;	// 0x33d34781
- (void)drawRect:(CGRect)rect;	// 0x33d34859
// declared property getter: - (int)mode;	// 0x33d34e09
// declared property getter: - (float)pointerOffset;	// 0x33d34e29
- (void)setFrame:(CGRect)frame;	// 0x33d347d1
// declared property setter: - (void)setMode:(int)mode;	// 0x33d34e19
// declared property setter: - (void)setPointerOffset:(float)offset;	// 0x33d34e39
@end

