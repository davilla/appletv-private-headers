/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UIWebSelectionView, UITouch;

__attribute__((visibility("hidden")))
@interface UIWebSelectionHandle : UIView {
	UITouch *_touch;	// 84 = 0x54
	UIImageView *_dragDotView;	// 88 = 0x58
	int _position;	// 92 = 0x5c
	int _textPosition;	// 96 = 0x60
	UIWebSelectionView *_selectionView;	// 100 = 0x64
	CGSize _touchToCenterOffset;	// 104 = 0x68
	CGSize _centerToSelectionPointOffset;	// 112 = 0x70
}
@property(assign, nonatomic) CGSize centerToSelectionPointOffset;	// G=0x305004dd; S=0x305004f5; @synthesize=_centerToSelectionPointOffset
@property(readonly, assign, nonatomic) BOOL hasTextPosition;	// G=0x304fffdd; 
@property(assign, nonatomic) int position;	// G=0x30500485; S=0x30500495; @synthesize=_position
@property(assign, nonatomic) int textPosition;	// G=0x3050003d; S=0x304ffff9; 
@property(retain, nonatomic) UITouch *touch;	// G=0x305004a5; S=0x305004b5; @synthesize=_touch
@property(readonly, assign, nonatomic) CGSize touchToCenterOffset;	// G=0x305004c5; @synthesize=_touchToCenterOffset
- (id)initWithPosition:(int)position selectionView:(id)view;	// 0x302ca1c1
- (CGPoint)applyCenterToSelectionPointOffset:(CGPoint)selectionPointOffset;	// 0x30500081
- (CGPoint)applyOffsetInDirectionOfHandle:(float)handle toPoint:(CGPoint)point;	// 0x30500105
- (CGPoint)applyTouchToCenterOffset:(CGPoint)centerOffset;	// 0x3050004d
// declared property getter: - (CGSize)centerToSelectionPointOffset;	// 0x305004dd
- (void)dealloc;	// 0x304ffc05
- (void)dropActiveTouch;	// 0x304fff6d
// declared property getter: - (BOOL)hasTextPosition;	// 0x304fffdd
- (float)offsetInDirectionOfHandleFromFirstPoint:(CGPoint)firstPoint toSecondPoint:(CGPoint)secondPoint;	// 0x30500175
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x304fff81
// declared property getter: - (int)position;	// 0x30500485
// declared property setter: - (void)setCenterToSelectionPointOffset:(CGSize)selectionPointOffset;	// 0x305004f5
// declared property setter: - (void)setPosition:(int)position;	// 0x30500495
// declared property setter: - (void)setTextPosition:(int)position;	// 0x304ffff9
// declared property setter: - (void)setTouch:(id)touch;	// 0x305004b5
- (void)snapToCornerOfRange:(id)range atStart:(BOOL)start;	// 0x305001d1
- (CGPoint)suggestedHandlePositionOnRect:(CGRect)rect;	// 0x305003bd
// declared property getter: - (int)textPosition;	// 0x3050003d
// declared property getter: - (id)touch;	// 0x305004a5
// declared property getter: - (CGSize)touchToCenterOffset;	// 0x305004c5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x304ffc65
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x304fff1d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x304ffe6d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x304ffdd1
@end

