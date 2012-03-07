/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIImage;

@interface UIOldSliderControl : UIControl {
	UIImage *_sliderLeftFillCap;	// 72 = 0x48
	XXUnion_a01swB _sliderLeftFill;	// 76 = 0x4c
	XXUnion_a01swB _sliderRightFill;	// 80 = 0x50
@private
	UIImage *_minValueImage;	// 84 = 0x54
	UIImage *_maxValueImage;	// 88 = 0x58
	int _numberOfTickMarks;	// 92 = 0x5c
	float _hitOffset;	// 96 = 0x60
@protected
	UIImage *_sliderRightCap;	// 100 = 0x64
	UIImage *_sliderRightFullCap;	// 104 = 0x68
	UIImage *_sliderLeftCap;	// 108 = 0x6c
	struct {
		unsigned allowsOnlyTickMarks : 1;
		unsigned animating : 1;
		unsigned showValue : 1;
		unsigned layeredFill : 1;
		unsigned continuous : 1;
		unsigned sendActionDuringAnimation : 1;
		unsigned alternateColors : 1;
		unsigned shouldFlipValue : 1;
		unsigned needsNonOpaqueFills : 1;
		unsigned reserved : 24;
	} _sliderFlags;	// 112 = 0x70
	float _value;	// 120 = 0x78
	float _animationEndValue;	// 124 = 0x7c
	float _minValue;	// 128 = 0x80
	float _maxValue;	// 132 = 0x84
	UIView *_knob;	// 136 = 0x88
	double _lastTrackingTime;	// 140 = 0x8c
	double _idleTrackingTime;	// 148 = 0x94
	CGPoint _lastTrackingPoint;	// 156 = 0x9c
	CGPoint _idleTrackingPoint;	// 164 = 0xa4
}
@property(assign) float value;	// G=0x3531880d; S=0x353181f1; converted property
- (id)init;	// 0x35316ef5
- (id)initWithFrame:(CGRect)frame;	// 0x35316f29
- (id)initWithFrame:(CGRect)frame layeredFill:(BOOL)fill;	// 0x35316f55
- (void)_controlMouseDown:(GSEventRef)down;	// 0x35319831
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x35319839
- (void)_controlMouseUp:(GSEventRef)up;	// 0x35319835
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x35319d91
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x35319d99
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x35319d95
- (void)_resetFillFrames;	// 0x3531722d
- (id)_scriptingInfo;	// 0x35319e39
- (void)_sendDelayedActions;	// 0x3531818d
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x35318205
- (void)_sliderBounds:(CGRect)bounds getLeftCapRect:(CGRect *)rect rightCapRect:(CGRect *)rect3 left:(CGRect *)left right:(CGRect *)right;	// 0x35317c21
- (float)_validatedValue:(float)value;	// 0x35319235
- (float)_validatedValueForPoint:(CGPoint)point includeTickMarks:(BOOL)marks;	// 0x35319281
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x35318149
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x35319465
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x3531983d
- (BOOL)cancelMouseTracking;	// 0x353197a9
- (BOOL)cancelTouchTracking;	// 0x35319d9d
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x35319595
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x353199c9
- (id)createSliderKnobView;	// 0x353171ad
- (void)dealloc;	// 0x35317959
- (void)drawRect:(CGRect)rect;	// 0x35318cb9
- (void)drawSliderInRect:(CGRect)rect;	// 0x35318119
- (void)drawSliderInRect:(CGRect)rect dirtyRect:(CGRect)rect2;	// 0x35317e91
- (void)drawSliderPiece:(int)piece inRect:(CGRect)rect;	// 0x35317ad5
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x353195fd
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35319b89
- (CGRect)fillBounds;	// 0x353172ed
- (id)imageForSliderPiece:(int)sliderPiece;	// 0x35317a6d
- (BOOL)isAnimatingValueChange;	// 0x3531857d
- (CGRect)maxValueImageBounds;	// 0x35318a15
- (CGRect)minValueImageBounds;	// 0x35318945
- (void)refreshImages;	// 0x35317485
- (void)setAllowsTickMarkValuesOnly:(BOOL)only;	// 0x35318fe1
- (void)setContinuous:(BOOL)continuous;	// 0x35319e09
- (void)setEnabled:(BOOL)enabled;	// 0x3531918d
- (void)setHighlighted:(BOOL)highlighted;	// 0x353193f5
- (void)setMaxValue:(float)value;	// 0x35318c45
- (void)setMaxValueImage:(id)image;	// 0x35319101
- (void)setMinValue:(float)value;	// 0x35318bd1
- (void)setMinValueImage:(id)image;	// 0x35319075
- (void)setNumberOfTickMarks:(int)tickMarks;	// 0x35318fd1
- (void)setSendActionDuringAnimation:(BOOL)animation;	// 0x35319e21
- (void)setShowValue:(BOOL)value;	// 0x35318ff9
// converted property setter: - (void)setValue:(float)value;	// 0x353181f1
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x353187e9
- (void)setValue:(float)value animated:(BOOL)animated animationCurve:(int)curve;	// 0x35318591
- (CGRect)sliderBounds;	// 0x3531881d
- (void)sliderBoundsChanged;	// 0x35317441
// converted property getter: - (float)value;	// 0x3531880d
- (CGRect)valueTextBounds;	// 0x35318b31
@end
