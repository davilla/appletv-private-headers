/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateShadowView : UIView {
@private
	BOOL _landscape;	// 41 = 0x29
	int _windowType;	// 44 = 0x2c
}
@property(assign, nonatomic) int windowType;	// G=0x3027a535; S=0x3027a545; @synthesize=_windowType
- (id)initWithFrame:(CGRect)frame;	// 0x3027b63d
- (void)drawRect:(CGRect)rect;	// 0x3027d625
- (void)setLandscape:(BOOL)landscape;	// 0x3027a525
// declared property setter: - (void)setWindowType:(int)type;	// 0x3027a545
// declared property getter: - (int)windowType;	// 0x3027a535
@end

