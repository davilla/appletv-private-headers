/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIGestureRecognizer.h"
#import "UIKit-Structs.h"

@class NSMutableSet, NSArray;

@interface UILongPressGestureRecognizer : UIGestureRecognizer {
	NSArray *_touches;	// 56 = 0x38
	NSMutableSet *_activeTouches;	// 60 = 0x3c
	unsigned _numberOfTouchesRequired;	// 64 = 0x40
	double _minimumPressDuration;	// 68 = 0x44
	float _allowableMovement;	// 76 = 0x4c
	CGPoint _startPointScreen;	// 80 = 0x50
	id _enoughTimeElapsed;	// 88 = 0x58
	id _tooMuchTimeElapsed;	// 92 = 0x5c
	id _imp;	// 96 = 0x60
	unsigned _gotTouchEnd : 1;	// 100 = 0x64
	unsigned _gotTooMany : 1;	// 100 = 0x64
	unsigned _gotEnoughTaps : 1;	// 100 = 0x64
	unsigned _cancelPastAllowableMovement : 1;	// 100 = 0x64
}
@property(assign, nonatomic) float allowableMovement;	// G=0x33c9fc19; S=0x33a392d1; @synthesize=_allowableMovement
@property(assign, nonatomic) BOOL cancelPastAllowableMovement;	// G=0x33c9f961; S=0x33c9f975; 
@property(readonly, assign, nonatomic) CGPoint centroid;	// G=0x33ae051d; 
@property(assign, nonatomic) double delay;	// G=0x33ae091d; S=0x33a738a9; @synthesize=_minimumPressDuration
@property(assign, nonatomic) double minimumPressDuration;	// G=0x33c9f949; S=0x33a4d1a5; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x33ae2fad; S=0x33c9f8f9; 
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x33ae2f9d; S=0x33a39299; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) CGPoint startPoint;	// G=0x33b322c1; 
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x33ae06b9; @synthesize=_touches
- (id)initWithCoder:(id)coder;	// 0x33c9f67d
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x33a39169
- (void)_resetGestureRecognizer;	// 0x33ae76ad
- (void)_startTapFinishedTimer;	// 0x33c9f9a1
// declared property getter: - (float)allowableMovement;	// 0x33c9fc19
- (BOOL)canPreventGestureRecognizer:(id)recognizer;	// 0x33b31b85
// declared property getter: - (BOOL)cancelPastAllowableMovement;	// 0x33c9f961
// declared property getter: - (CGPoint)centroid;	// 0x33ae051d
- (CGPoint)centroidScreen;	// 0x33ae04b5
- (void)clearTimer;	// 0x33a17df5
- (void)dealloc;	// 0x33a17d59
// declared property getter: - (double)delay;	// 0x33ae091d
- (void)encodeWithCoder:(id)coder;	// 0x33c9f7ed
- (void)enoughTimeElapsed:(id)elapsed;	// 0x33b30fcd
- (void)invalidate;	// 0x33b6f6d1
- (CGPoint)locationInView:(id)view;	// 0x33b31131
- (CGPoint)locationOfTouch:(unsigned)touch inView:(id)view;	// 0x33c9faed
// declared property getter: - (double)minimumPressDuration;	// 0x33c9f949
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x33ae2fad
- (unsigned)numberOfTouches;	// 0x33c9facd
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x33ae2f9d
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x33a392d1
// declared property setter: - (void)setCancelPastAllowableMovement:(BOOL)movement;	// 0x33c9f975
// declared property setter: - (void)setDelay:(double)delay;	// 0x33a738a9
// declared property setter: - (void)setMinimumPressDuration:(double)duration;	// 0x33a4d1a5
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x33c9f8f9
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x33a39299
- (void)setTouches:(id)touches;	// 0x33a17e6d
- (void)setView:(id)view;	// 0x33a392e1
// declared property getter: - (CGPoint)startPoint;	// 0x33b322c1
- (void)startTimer;	// 0x33ae0881
- (BOOL)tapIsPossibleForTapRecognizer:(id)tapRecognizer;	// 0x33c9fa49
- (void)tapRecognizerFailedToRecognizeTap:(id)recognizeTap;	// 0x33c9fab9
- (void)tapRecognizerRecognizedTap:(id)tap;	// 0x33c9fa69
- (void)tooMuchElapsed:(id)elapsed;	// 0x33c9f98d
// declared property getter: - (id)touches;	// 0x33ae06b9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x33ae019d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x33b345b1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x33ae289d
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x33b0fd25
@end

