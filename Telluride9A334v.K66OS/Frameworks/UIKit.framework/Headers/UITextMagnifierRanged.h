/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextMagnifier.h"
#import "UIKit-Structs.h"
#import "UIView.h"

@class UITextMagnifierTimeWeightedPoint;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextMagnifierRanged : UIView <UITextMagnifier> {
@private
	UIResponder<UITextInput> *_text;	// 48 = 0x30
	UIView *_target;	// 52 = 0x34
	CGPoint _magnificationPoint;	// 56 = 0x38
	CGPoint _animationPoint;	// 64 = 0x40
	UITextMagnifierTimeWeightedPoint *_weightedPoint;	// 72 = 0x48
	UIView *_magnifierRenderer;	// 76 = 0x4c
	UIView *_autoscrollRenderer;	// 80 = 0x50
	int _autoscrollDirections;	// 84 = 0x54
	float _touchOffsetFromMagnificationPoint;	// 88 = 0x58
	float _magnifierOffsetFromTouch;	// 92 = 0x5c
}
@property(assign, nonatomic) CGPoint animationPoint;	// G=0x302fc5c9; S=0x302fc5e5; @synthesize=_animationPoint
@property(assign, nonatomic) CGPoint magnificationPoint;	// G=0x302fb355; S=0x302fb371; 
@property(retain, nonatomic) UIView *target;	// G=0x3015c831; S=0x302fc5a5; @synthesize=_target
@property(readonly, assign, nonatomic) CGPoint terminalPoint;	// G=0x302fb485; 
@property(readonly, assign, nonatomic) BOOL terminalPointPlacedCarefully;	// G=0x302fb5fd; 
@property(retain, nonatomic) UIResponder<UITextInput> *text;	// G=0x302fc571; S=0x302fc581; @synthesize=_text
+ (id)sharedRangedMagnifier;	// 0x3015c5cd
- (id)initWithDefaultFrame;	// 0x3015c615
- (void)animateToAutoscrollRenderer;	// 0x302fb789
- (void)animateToMagnifierRenderer;	// 0x302fb885
// declared property getter: - (CGPoint)animationPoint;	// 0x302fc5c9
- (void)autoscrollWillNotStart;	// 0x302fbaa5
- (void)beginMagnifyingTarget:(id)target text:(id)text magnificationPoint:(CGPoint)point offset:(CGPoint)offset animated:(BOOL)animated;	// 0x302fc185
- (void)dealloc;	// 0x302fb2e1
- (void)detectLostTouches:(id)touches;	// 0x302fc0cd
- (int)horizontalMovement;	// 0x302fb675
- (int)horizontalMovementAtTime:(double)time;	// 0x302fb4b5
// declared property getter: - (CGPoint)magnificationPoint;	// 0x302fb355
- (float)offsetFromMagnificationPoint;	// 0x302fbea1
- (void)postAutoscrollPoint:(CGPoint)point;	// 0x302fb769
- (void)remove;	// 0x302fbe49
// declared property setter: - (void)setAnimationPoint:(CGPoint)point;	// 0x302fc5e5
- (void)setAutoscrollDirections:(int)directions;	// 0x302fb8fd
- (void)setFrame:(CGRect)frame;	// 0x3015c719
// declared property setter: - (void)setMagnificationPoint:(CGPoint)point;	// 0x302fb371
- (void)setNeedsDisplay;	// 0x3015c7ed
// declared property setter: - (void)setTarget:(id)target;	// 0x302fc5a5
// declared property setter: - (void)setText:(id)text;	// 0x302fc581
- (void)setToMagnifierRenderer;	// 0x302fb82d
- (CGPoint)snappedPoint:(CGPoint)point;	// 0x302fc405
- (void)stopMagnifying:(BOOL)magnifying;	// 0x302fc339
// declared property getter: - (id)target;	// 0x3015c831
// declared property getter: - (CGPoint)terminalPoint;	// 0x302fb485
// declared property getter: - (BOOL)terminalPointPlacedCarefully;	// 0x302fb5fd
// declared property getter: - (id)text;	// 0x302fc571
- (void)updateFrame;	// 0x302fbed1
- (BOOL)wasPlacedCarefullyAtTime:(double)time;	// 0x302fb5a9
- (void)windowWillRotate:(id)window;	// 0x302fc171
- (void)zoomDownAnimation;	// 0x302fbc49
- (void)zoomDownAnimationDidStop:(id)zoomDownAnimation finished:(id)finished;	// 0x302fbe15
- (void)zoomUpAnimation;	// 0x302fbac5
- (void)zoomUpAnimationDidStop:(id)zoomUpAnimation finished:(id)finished;	// 0x302fbc39
@end
