/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
@private
	double _maximumDeviation;	// 60 = 0x3c
	double _minimumDistance;	// 68 = 0x44
	CGPoint _startPosition;	// 76 = 0x4c
	BOOL _restrictsToAngle;	// 84 = 0x54
	double _angle;	// 88 = 0x58
	UITouch *_touch;	// 96 = 0x60
	UIDelayedAction *_tooSlow;	// 100 = 0x64
	double _startAngle;	// 104 = 0x68
}
@property(assign, nonatomic) double angle;	// G=0x302cc609; S=0x302cc619; @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// G=0x302cc6b1; S=0x302cc6c1; @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// G=0x302cc65d; S=0x302cc66d; @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// G=0x302cc62d; S=0x302cc63d; @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// G=0x302cc5e5; S=0x302cc5f5; @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// G=0x302cc681; S=0x302cc699; @synthesize=_startPosition
@property(retain, nonatomic) UITouch *touch;	// G=0x302cc64d; S=0x302cccbd; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x302cc875
- (void)_resetGestureRecognizer;	// 0x302cc7dd
// declared property getter: - (double)angle;	// 0x302cc609
- (void)clearTimer;	// 0x302cc7a1
- (void)dealloc;	// 0x302cc829
// declared property getter: - (double)maximumDeviation;	// 0x302cc6b1
// declared property getter: - (double)minimumDistance;	// 0x302cc65d
// declared property getter: - (BOOL)restrictsToAngle;	// 0x302cc62d
// declared property setter: - (void)setAngle:(double)angle;	// 0x302cc619
// declared property setter: - (void)setMaximumDeviation:(double)deviation;	// 0x302cc6c1
// declared property setter: - (void)setMinimumDistance:(double)distance;	// 0x302cc66d
// declared property setter: - (void)setRestrictsToAngle:(BOOL)angle;	// 0x302cc63d
// declared property setter: - (void)setStartAngle:(double)angle;	// 0x302cc5f5
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x302cc699
// declared property setter: - (void)setTouch:(id)touch;	// 0x302cccbd
// declared property getter: - (double)startAngle;	// 0x302cc5e5
// declared property getter: - (CGPoint)startPosition;	// 0x302cc681
- (void)tooSlow:(id)slow;	// 0x302cc779
// declared property getter: - (id)touch;	// 0x302cc64d
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x302cc90d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x302cc6d5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x302cc6fd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x302cca01
@end

