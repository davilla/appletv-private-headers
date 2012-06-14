/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIGestureRecognizer.h"

@class UITouch, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface UIDragRecognizer : UIGestureRecognizer {
@private
	double _maximumDeviation;	// 56 = 0x38
	double _minimumDistance;	// 64 = 0x40
	CGPoint _startPosition;	// 72 = 0x48
	BOOL _restrictsToAngle;	// 80 = 0x50
	double _angle;	// 84 = 0x54
	UITouch *_touch;	// 92 = 0x5c
	UIDelayedAction *_tooSlow;	// 96 = 0x60
	double _startAngle;	// 100 = 0x64
}
@property(assign, nonatomic) double angle;	// G=0x30340945; S=0x3034095d; @synthesize=_angle
@property(assign, nonatomic) double maximumDeviation;	// G=0x30340881; S=0x30340899; @synthesize=_maximumDeviation
@property(assign, nonatomic) double minimumDistance;	// G=0x303408d9; S=0x303408f1; @synthesize=_minimumDistance
@property(assign, nonatomic) BOOL restrictsToAngle;	// G=0x30340925; S=0x30340935; @synthesize=_restrictsToAngle
@property(assign, nonatomic) double startAngle;	// G=0x30340971; S=0x30340989; @synthesize=_startAngle
@property(assign, nonatomic) CGPoint startPosition;	// G=0x303408ad; S=0x303408c5; @synthesize=_startPosition
@property(retain, nonatomic) UITouch *touch;	// G=0x30340905; S=0x30340915; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x303401a9
- (void)_resetGestureRecognizer;	// 0x303402bd
// declared property getter: - (double)angle;	// 0x30340945
- (void)clearTimer;	// 0x30340311
- (void)dealloc;	// 0x30340269
// declared property getter: - (double)maximumDeviation;	// 0x30340881
// declared property getter: - (double)minimumDistance;	// 0x303408d9
// declared property getter: - (BOOL)restrictsToAngle;	// 0x30340925
// declared property setter: - (void)setAngle:(double)angle;	// 0x3034095d
// declared property setter: - (void)setMaximumDeviation:(double)deviation;	// 0x30340899
// declared property setter: - (void)setMinimumDistance:(double)distance;	// 0x303408f1
// declared property setter: - (void)setRestrictsToAngle:(BOOL)angle;	// 0x30340935
// declared property setter: - (void)setStartAngle:(double)angle;	// 0x30340989
// declared property setter: - (void)setStartPosition:(CGPoint)position;	// 0x303408c5
// declared property setter: - (void)setTouch:(id)touch;	// 0x30340915
// declared property getter: - (double)startAngle;	// 0x30340971
// declared property getter: - (CGPoint)startPosition;	// 0x303408ad
- (void)tooSlow:(id)slow;	// 0x3034034d
// declared property getter: - (id)touch;	// 0x30340905
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3034037d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x30340851
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x303407c1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x30340489
@end
