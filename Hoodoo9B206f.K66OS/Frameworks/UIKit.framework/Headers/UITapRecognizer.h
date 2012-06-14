/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableArray, NSMutableSet, NSArray;
@protocol UITapRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UITapRecognizer : NSObject <NSCoding> {
@private
	unsigned _numberOfTouchesRequired;	// 4 = 0x4
	unsigned _numberOfTapsRequired;	// 8 = 0x8
	NSMutableSet *_activeTouches;	// 12 = 0xc
	int _currentNumberOfTouches;	// 16 = 0x10
	int _currentNumberOfTaps;	// 20 = 0x14
	CGPoint _location;	// 24 = 0x18
	CGPoint _startPoint;	// 32 = 0x20
	float _allowableMovement;	// 40 = 0x28
	double _maximumSingleTapDuration;	// 44 = 0x2c
	double _maximumIntervalBetweenSuccessiveTaps;	// 52 = 0x34
	NSMutableArray *_touches;	// 60 = 0x3c
	id _delegate;	// 64 = 0x40
	unsigned _timerOn : 1;	// 68 = 0x44
	unsigned _noNewTouches : 1;	// 68 = 0x44
}
@property(assign, nonatomic) float allowableMovement;	// G=0x355ced29; S=0x3535247d; 
@property(assign, nonatomic) id<UITapRecognizerDelegate> delegate;	// G=0x355ced61; S=0x35330985; @synthesize=_delegate
@property(assign, nonatomic) double maximumIntervalBetweenSuccessiveTaps;	// G=0x3547d8fd; S=0x35352449; 
@property(assign, nonatomic) double maximumSingleTapDuration;	// G=0x355ced39; S=0x35352415; 
@property(assign, nonatomic) unsigned numberOfTapsRequired;	// G=0x3540852d; S=0x353524ad; @synthesize=_numberOfTapsRequired
@property(assign, nonatomic) unsigned numberOfTouchesRequired;	// G=0x35408359; S=0x353524dd; @synthesize=_numberOfTouchesRequired
@property(readonly, assign, nonatomic) NSArray *touches;	// G=0x355ced51; @synthesize=_touches
- (id)init;	// 0x353522d1
- (id)initWithCoder:(id)coder;	// 0x355ce9f9
- (CGPoint)_locationOnScreen;	// 0x35404edd
- (void)_reset;	// 0x3540e5e5
// declared property getter: - (float)allowableMovement;	// 0x355ced29
- (void)clearTapTimer;	// 0x35330a09
- (void)dealloc;	// 0x35330995
// declared property getter: - (id)delegate;	// 0x355ced61
- (void)encodeWithCoder:(id)coder;	// 0x355ceba5
- (CGPoint)locationInView:(id)view;	// 0x35407445
// declared property getter: - (double)maximumIntervalBetweenSuccessiveTaps;	// 0x3547d8fd
// declared property getter: - (double)maximumSingleTapDuration;	// 0x355ced39
// declared property getter: - (unsigned)numberOfTapsRequired;	// 0x3540852d
// declared property getter: - (unsigned)numberOfTouchesRequired;	// 0x35408359
// declared property setter: - (void)setAllowableMovement:(float)movement;	// 0x3535247d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35330985
// declared property setter: - (void)setMaximumIntervalBetweenSuccessiveTaps:(double)taps;	// 0x35352449
// declared property setter: - (void)setMaximumSingleTapDuration:(double)duration;	// 0x35352415
// declared property setter: - (void)setNumberOfTapsRequired:(unsigned)tapsRequired;	// 0x353524ad
// declared property setter: - (void)setNumberOfTouchesRequired:(unsigned)touchesRequired;	// 0x353524dd
- (void)startTapTimer:(double)timer;	// 0x35404e81
- (void)tooSlow:(id)slow;	// 0x3540ed1d
// declared property getter: - (id)touches;	// 0x355ced51
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x35404b31
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x355cece1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x354072b1
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x35438539
@end
