/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextMagnifier.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UIView <UITextMagnifier> {
	UIResponder<UITextInput> *_text;	// 84 = 0x54
	UIView *_target;	// 88 = 0x58
	CGPoint _magnificationPoint;	// 92 = 0x5c
	CGPoint _offset;	// 100 = 0x64
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 108 = 0x6c
	float _yOffset;	// 112 = 0x70
	UIView *_magnifierRenderer;	// 116 = 0x74
	UIView *_autoscrollRenderer;	// 120 = 0x78
	int _autoscrollDirections;	// 124 = 0x7c
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x304f44f1; S=0x304f5271; @synthesize=_magnificationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x304f43ad; S=0x304f43c5; 
@property(assign, nonatomic) CGPoint offset;	// G=0x304f5225; S=0x304f523d; @synthesize=_offset
@property(retain, nonatomic) UIView *target;	// G=0x3035c915; S=0x304f5215; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x304f4451; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x304f4481; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x304f51f5; S=0x304f5205; @synthesize=_text
@property(assign, nonatomic) float yOffset;	// G=0x304f5251; S=0x304f5261; @synthesize=_yOffset
+ (id)sharedCaretMagnifier;	// 0x3035c5a5
- (id)initWithDefaultFrame;	// 0x3035c631
- (void)animateToAutoscrollRenderer;	// 0x304f4529
- (void)animateToMagnifierRenderer;	// 0x304f4619
// declared property getter: - (CGPoint)animationPoint;	// 0x304f44f1
- (void)autoscrollWillNotStart;	// 0x304f480d
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x304f4f8d
- (void)dealloc;	// 0x304f4335
- (void)detectLostTouches:(id)touches;	// 0x304f4ed5
// declared property getter: - (CGPoint)magnificationPoint;	// 0x304f43ad
// declared property getter: - (CGPoint)offset;	// 0x304f5225
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x304f4509
- (void)remove;	// 0x304f4c25
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x304f5271
- (void)setAutoscrollDirections:(int)directions;	// 0x304f4691
- (void)setFrame:(CGRect)frame;	// 0x3035c739
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x304f43c5
- (void)setNeedsDisplay;	// 0x3035c7fd
// declared property setter: - (void)setOffset:(CGPoint)offset;	// 0x304f523d
// declared property setter: - (void)setTarget:(id)target;	// 0x304f5215
// declared property setter: - (void)setText:(id)text;	// 0x304f5205
- (void)setToMagnifierRenderer;	// 0x304f45d1
// declared property setter: - (void)setYOffset:(float)offset;	// 0x304f5261
- (void)stopMagnifying:(BOOL)magnifying;	// 0x304f5139
// declared property getter: - (id)target;	// 0x3035c915
// declared property getter: - (CGPoint)terminalPoint;	// 0x304f4451
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x304f4481
// declared property getter: - (id)text;	// 0x304f51f5
- (void)updateFrameAndOffset;	// 0x304f4c9d
- (void)windowWillRotate:(id)window;	// 0x304f4f79
// declared property getter: - (float)yOffset;	// 0x304f5251
- (void)zoomDownAnimation;	// 0x304f49a1
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x304f4bf1
- (void)zoomUpAnimation;	// 0x304f4831
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x304f4991
@end

