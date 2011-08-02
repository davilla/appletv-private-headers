/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UITouch, UIDelayedAction, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UITapAndAHalfRecognizer : UIGestureRecognizer {
@private
	CGPoint _startPoint;	// 60 = 0x3c
	float _allowableMovement;	// 68 = 0x44
	int _numberOfFullTaps;	// 72 = 0x48
	double _minimumFinalPressDuration;	// 76 = 0x4c
	NSMutableSet *_activeTouches;	// 84 = 0x54
	int _currentNumberOfTaps;	// 88 = 0x58
	UITouch *_touch;	// 92 = 0x5c
	UIDelayedAction *_tapTimer;	// 96 = 0x60
}
@property(assign, nonatomic) float allowableMovement;	// G=0x302cc51d; S=0x300ed4a1; @synthesize=_allowableMovement
@property(assign, nonatomic) double minimumFinalPressDuration;	// G=0x302cc50d; S=0x300fe251; @synthesize=_minimumFinalPressDuration
@property(assign, nonatomic) int numberOfFullTaps;	// G=0x3014ecbd; S=0x302cc52d; @synthesize=_numberOfFullTaps
@property(retain, nonatomic) UITouch *touch;	// G=0x3014ecad; S=0x3014ec85; @synthesize=_touch
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x300ed3ed
- (void)_resetGestureRecognizer;	// 0x30184ee9
- (void)_verifyMovementInAllowableRange;	// 0x3014f0c9
// declared property getter: - (float)allowableMovement;	// 0x302cc51d
- (void)clearTapTimer;	// 0x3014ed4d
- (void)dealloc;	// 0x301540b9
// declared property getter: - (double)minimumFinalPressDuration;	// 0x302cc50d
// declared property getter: - (int)numberOfFullTaps;	// 0x3014ecbd
- (void)recognized:(id)recognized;	// 0x302cc53d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x300ed4a1
// declared property setter: - (void)setMinimumFinalPressDuration:(double)duration;	// 0x300fe251
// declared property setter: - (void)setNumberOfFullTaps:(int)fullTaps;	// 0x302cc52d
// declared property setter: - (void)setTouch:(id)touch;	// 0x3014ec85
- (void)startRecognitionTimer:(double)timer;	// 0x302cc565
- (void)startTapTimer:(double)timer;	// 0x3014eccd
- (void)tooSlow:(id)slow;	// 0x3015cce9
// declared property getter: - (id)touch;	// 0x3014ecad
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3014e9b5
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3019ace1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3014ef95
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x301c39a1
@end

