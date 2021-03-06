/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UICalloutBarOverlay : UIView {
	CGRect m_arrowRect;	// 84 = 0x54
	float m_dividerOffsets[20];	// 100 = 0x64
	BOOL highlighted;	// 180 = 0xb4
	CGRect highlightRect;	// 184 = 0xb8
}
@property(assign, nonatomic) CGRect highlightRect;	// G=0x30ec4795; S=0x30d06381; @synthesize
@property(assign, nonatomic) BOOL highlighted;	// G=0x30ec4785; S=0x30d08885; @synthesize
- (id)initWithFrame:(CGRect)frame;	// 0x30d062ed
- (void)dealloc;	// 0x30ec4071
- (void)drawRect:(CGRect)rect;	// 0x30ec40a1
// declared property getter: - (CGRect)highlightRect;	// 0x30ec4795
// declared property getter: - (BOOL)highlighted;	// 0x30ec4785
- (void)setDividerOffsets:(float *)offsets;	// 0x30d5f7c5
// declared property setter: - (void)setHighlightRect:(CGRect)rect;	// 0x30d06381
// declared property setter: - (void)setHighlighted:(BOOL)highlighted;	// 0x30d08885
- (void)setHighlighted:(BOOL)highlighted forFrame:(CGRect)frame;	// 0x30d08831
@end

