/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIDictationView.h"
#import "UIKit-Structs.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink;

__attribute__((visibility("hidden")))
@interface UIDictationFloatingView : UIDictationView <UIGestureRecognizerDelegate> {
	CADisplayLink *_displayLink;	// 108 = 0x6c
	CGPoint _velocity;	// 112 = 0x70
	CGPoint _target;	// 120 = 0x78
	BOOL _startedThrowAnimation;	// 128 = 0x80
	int _targetZone;	// 132 = 0x84
}
- (id)initWithFrame:(CGRect)frame;	// 0x30fb2f61
- (BOOL)allowsHorizontalTranslation;	// 0x30fb4ab9
- (void)applicationEnteredBackground;	// 0x30fb3229
- (void)endpointButtonPressed;	// 0x30fb4a71
- (void)finishedThrowAnimation;	// 0x30fb3f9d
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x30fb4a01
- (void)handlePanDetected:(id)detected;	// 0x30fb4815
- (void)handlePanGestureFinished:(id)finished;	// 0x30fb43b1
- (CGPoint)middleZonePosition;	// 0x30fb38c1
- (CGPoint)positionForShow;	// 0x30fb3959
- (void)returnToKeyboard;	// 0x30fb3741
- (void)setInputViewsHiddenForDictation:(BOOL)dictation;	// 0x30fb30a5
- (void)setTargetZone:(int)zone;	// 0x30fb345d
- (void)setTransformForNewCenter:(CGPoint)newCenter;	// 0x30fb4095
- (void)show;	// 0x30fb3ab9
- (void)snapToTargetZone:(int)targetZone;	// 0x30fb3701
- (void)startThrowAnimation;	// 0x30fb4319
- (CGPoint)transformedCenter;	// 0x30fb3255
- (CGPoint)transformedCenterOnscreen;	// 0x30fb3321
- (void)updateThrowAnimation:(id)animation;	// 0x30fb4149
@end

