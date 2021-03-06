/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class UIImageView, UIButton, UIColor, NSMutableDictionary, NSTimer;

@interface UIStepper : UIControl {
	BOOL _isRtoL;	// 110 = 0x6e
	UIImageView *_middleView;	// 112 = 0x70
	UIButton *_plusButton;	// 116 = 0x74
	UIButton *_minusButton;	// 120 = 0x78
	NSTimer *_repeatTimer;	// 124 = 0x7c
	int _repeatCount;	// 128 = 0x80
	NSMutableDictionary *_dividerImages;	// 132 = 0x84
	UIColor *_tintColor;	// 136 = 0x88
	double _value;	// 140 = 0x8c
	double _minimumValue;	// 148 = 0x94
	double _maximumValue;	// 156 = 0x9c
	double _stepValue;	// 164 = 0xa4
	BOOL _continuous;	// 172 = 0xac
	BOOL _autorepeat;	// 173 = 0xad
	BOOL _wraps;	// 174 = 0xae
}
@property(assign, nonatomic) BOOL autorepeat;	// G=0x33d46bb9; S=0x33d46bc9; @synthesize=_autorepeat
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x33d46b99; S=0x33d46ba9; @synthesize=_continuous
@property(assign, nonatomic) double maximumValue;	// G=0x33d46b69; S=0x33d44dd1; @synthesize=_maximumValue
@property(assign, nonatomic) double minimumValue;	// G=0x33d46b51; S=0x33d44d15; @synthesize=_minimumValue
@property(assign, nonatomic) double stepValue;	// G=0x33d46b81; S=0x33d44e8d; @synthesize=_stepValue
@property(retain, nonatomic) UIColor *tintColor;	// G=0x33d46b29; S=0x33d46811; 
@property(assign, nonatomic) double value;	// G=0x33d46b39; S=0x33d44c9d; @synthesize=_value
@property(assign, nonatomic) BOOL wraps;	// G=0x33d46bd9; S=0x33d450bd; @synthesize=_wraps
- (id)initWithCoder:(id)coder;	// 0x33d450e9
- (id)initWithFrame:(CGRect)frame;	// 0x33d44b11
- (void)_commonStepperInit;	// 0x33d454f9
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x33d44fbd
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x33d44fb9
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x33d44fc1
- (void)_populateArchivedSubviews:(id)subviews;	// 0x33d44ba1
- (void)_setBackgroundImage:(id)image forState:(unsigned)state;	// 0x33d461bd
- (void)_setDecrementImage:(id)image forState:(unsigned)state;	// 0x33d46765
- (void)_setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x33d464a9
- (void)_setIncrementImage:(id)image forState:(unsigned)state;	// 0x33d466b9
- (void)_startTimer;	// 0x33d45c41
- (void)_stopTimer;	// 0x33d45cbd
- (void)_updateButtonEnabled;	// 0x33d45769
- (void)_updateCount:(id)count;	// 0x33d45ce9
- (void)_updateDividerImageForButtonState;	// 0x33d459c9
- (void)_updateHighlightingAtPoint:(CGPoint)point withEvent:(id)event;	// 0x33d458a1
// declared property getter: - (BOOL)autorepeat;	// 0x33d46bb9
- (id)backgroundImageForState:(unsigned)state;	// 0x33d46489
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33d45ac9
- (void)cancelTrackingWithEvent:(id)event;	// 0x33d45bed
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33d45b25
- (void)dealloc;	// 0x33d44f05
- (id)decrementImageForState:(unsigned)state;	// 0x33d467f1
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x33d46605
- (void)encodeWithCoder:(id)coder;	// 0x33d45331
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x33d45b71
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;	// 0x33d45f51
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x33d45a69
- (id)incrementImageForState:(unsigned)state;	// 0x33d46745
// declared property getter: - (BOOL)isContinuous;	// 0x33d46b99
- (void)layoutSubviews;	// 0x33d45fe9
// declared property getter: - (double)maximumValue;	// 0x33d46b69
// declared property getter: - (double)minimumValue;	// 0x33d46b51
// declared property setter: - (void)setAutorepeat:(BOOL)autorepeat;	// 0x33d46bc9
- (void)setBackgroundImage:(id)image forState:(unsigned)state;	// 0x33d46479
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x33d46ba9
- (void)setDecrementImage:(id)image forState:(unsigned)state;	// 0x33d467e1
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x33d465f5
- (void)setFrame:(CGRect)frame;	// 0x33d44c39
- (void)setIncrementImage:(id)image forState:(unsigned)state;	// 0x33d46735
// declared property setter: - (void)setMaximumValue:(double)value;	// 0x33d44dd1
// declared property setter: - (void)setMinimumValue:(double)value;	// 0x33d44d15
// declared property setter: - (void)setStepValue:(double)value;	// 0x33d44e8d
// declared property setter: - (void)setTintColor:(id)color;	// 0x33d46811
// declared property setter: - (void)setValue:(double)value;	// 0x33d44c9d
// declared property setter: - (void)setWraps:(BOOL)wraps;	// 0x33d450bd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x33d45091
// declared property getter: - (double)stepValue;	// 0x33d46b81
// declared property getter: - (id)tintColor;	// 0x33d46b29
// declared property getter: - (double)value;	// 0x33d46b39
// declared property getter: - (BOOL)wraps;	// 0x33d46bd9
@end

