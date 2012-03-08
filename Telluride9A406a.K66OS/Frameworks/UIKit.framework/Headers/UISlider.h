/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIControl.h"

@class UIImageView, UIColor, UIImage;

@interface UISlider : UIControl <NSCoding> {
@private
	float _value;	// 72 = 0x48
	float _minValue;	// 76 = 0x4c
	float _maxValue;	// 80 = 0x50
	float _alpha;	// 84 = 0x54
	CFDictionaryRef _contentLookup;	// 88 = 0x58
	UIImageView *_minValueImageView;	// 92 = 0x5c
	UIImageView *_maxValueImageView;	// 96 = 0x60
	UIImageView *_thumbView;	// 100 = 0x64
	UIImageView *_minTrackView;	// 104 = 0x68
	UIImageView *_maxTrackView;	// 108 = 0x6c
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	} _sliderFlags;	// 112 = 0x70
	float _hitOffset;	// 116 = 0x74
	UIColor *_minTintColor;	// 120 = 0x78
	UIColor *_maxTintColor;	// 124 = 0x7c
	UIColor *_thumbTintColor;	// 128 = 0x80
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x3588239d; S=0x35882381; 
@property(readonly, assign, nonatomic) UIImage *currentMaximumTrackImage;	// G=0x357ddc69; 
@property(readonly, assign, nonatomic) UIImage *currentMinimumTrackImage;	// G=0x357ddcb9; 
@property(readonly, assign, nonatomic) UIImage *currentThumbImage;	// G=0x357ddbc9; 
@property(retain, nonatomic) UIColor *maximumTrackTintColor;	// G=0x35882fc9; S=0x35881cfd; @synthesize=_maxTintColor
@property(assign, nonatomic) float maximumValue;	// G=0x3581e581; S=0x3581e605; @dynamic
@property(retain, nonatomic) UIImage *maximumValueImage;	// G=0x35881df5; S=0x3581e681; 
@property(retain, nonatomic) UIColor *minimumTrackTintColor;	// G=0x35882fb9; S=0x35881c4d; @synthesize=_minTintColor
@property(assign, nonatomic) float minimumValue;	// G=0x3581e571; S=0x3581e591; @dynamic
@property(retain, nonatomic) UIImage *minimumValueImage;	// G=0x35881dad; S=0x3581e769; 
@property(retain, nonatomic) UIColor *thumbTintColor;	// G=0x35882fd9; S=0x35881a3d; @synthesize=_thumbTintColor
@property(assign, nonatomic) float value;	// G=0x357dda19; S=0x3581e851; @dynamic
- (id)init;	// 0x35881381
- (id)initWithCoder:(id)coder;	// 0x358813b1
- (id)initWithFrame:(CGRect)frame;	// 0x357dc9ad
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x35882fe9
- (id)_contentForState:(unsigned)state;	// 0x357dd9f5
- (void)_controlMouseDown:(GSEventRef)down;	// 0x35882add
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x35882ae5
- (void)_controlMouseUp:(GSEventRef)up;	// 0x35882ae1
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x35882f41
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x35882f49
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x35882f45
- (void)_initImages;	// 0x357de8f1
- (void)_initSubviews;	// 0x357dea35
- (BOOL)_isThumbEnabled;	// 0x358832c9
- (void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;	// 0x357dcb29
- (id)_maximumTrackImageForState:(unsigned)state;	// 0x357dd9b5
- (id)_minimumTrackImageForState:(unsigned)state;	// 0x357ddd19
- (void)_populateArchivedSubviews:(id)subviews;	// 0x358816d9
- (id)_scriptingInfo;	// 0x358834b9
- (void)_sendDelayedActions;	// 0x3588244d
- (void)_setAlpha:(float)alpha remember:(BOOL)remember;	// 0x35882161
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x357de061
- (void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x357de285
- (void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x357de119
- (void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;	// 0x358831bd
- (void)_setThumbEnabled:(BOOL)enabled;	// 0x35883125
- (void)_setThumbImage:(id)image forStates:(unsigned)states;	// 0x357ddf49
- (void)_setThumbTintColor:(id)color forStates:(unsigned)states;	// 0x35883399
- (void)_setTrackEnabled:(BOOL)enabled;	// 0x358830f1
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x357de701
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x358823d1
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x358823b1
- (UIEdgeInsets)_thumbHitEdgeInsets;	// 0x358832e1
- (id)_thumbImageForState:(unsigned)state;	// 0x357ddc29
- (BOOL)_trackEnabled;	// 0x35883111
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x358824c1
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35882ae9
- (BOOL)cancelMouseTracking;	// 0x35882a55
- (BOOL)cancelTouchTracking;	// 0x35882f4d
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x35882895
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35882d69
- (id)createThumbView;	// 0x357debe9
// declared property getter: - (id)currentMaximumTrackImage;	// 0x357ddc69
// declared property getter: - (id)currentMinimumTrackImage;	// 0x357ddcb9
// declared property getter: - (id)currentThumbImage;	// 0x357ddbc9
- (void)dealloc;	// 0x357e11f1
- (id)description;	// 0x358819a5
- (void)didMoveToWindow;	// 0x3581e865
- (void)encodeWithCoder:(id)coder;	// 0x35881789
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x3588292d
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x35882e3d
- (BOOL)isAccessibilityElementByDefault;	// 0x358ff569
- (BOOL)isAnimatingValueChange;	// 0x35883001
// declared property getter: - (BOOL)isContinuous;	// 0x3588239d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x358ff56d
- (void)layoutSubviews;	// 0x357de85d
- (id)maximumTrackImageForState:(unsigned)state;	// 0x357dd9a5
// declared property getter: - (id)maximumTrackTintColor;	// 0x35882fc9
// declared property getter: - (float)maximumValue;	// 0x3581e581
// declared property getter: - (id)maximumValueImage;	// 0x35881df5
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;	// 0x357dde29
- (id)minimumTrackImageForState:(unsigned)state;	// 0x357ddd09
// declared property getter: - (id)minimumTrackTintColor;	// 0x35882fb9
// declared property getter: - (float)minimumValue;	// 0x3581e571
// declared property getter: - (id)minimumValueImage;	// 0x35881dad
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;	// 0x357ddd59
- (id)scriptingInfoWithChildren;	// 0x35883579
- (void)setAlpha:(float)alpha;	// 0x357ded29
- (void)setBounds:(CGRect)bounds;	// 0x358820b5
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x35882381
- (void)setEnabled:(BOOL)enabled;	// 0x358821fd
- (void)setFrame:(CGRect)frame;	// 0x357dca7d
- (void)setHighlighted:(BOOL)highlighted;	// 0x358822c1
- (void)setMaximumTrackImage:(id)image forState:(unsigned)state;	// 0x358202b9
- (void)setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x357de255
// declared property setter: - (void)setMaximumTrackTintColor:(id)color;	// 0x35881cfd
// declared property setter: - (void)setMaximumValue:(float)value;	// 0x3581e605
// declared property setter: - (void)setMaximumValueImage:(id)image;	// 0x3581e681
- (void)setMinimumTrackImage:(id)image forState:(unsigned)state;	// 0x358201bd
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x357de0e9
// declared property setter: - (void)setMinimumTrackTintColor:(id)color;	// 0x35881c4d
// declared property setter: - (void)setMinimumValue:(float)value;	// 0x3581e591
// declared property setter: - (void)setMinimumValueImage:(id)image;	// 0x3581e769
- (void)setSelected:(BOOL)selected;	// 0x35882321
- (void)setShowValue:(BOOL)value;	// 0x35883015
- (void)setThumbImage:(id)image forState:(unsigned)state;	// 0x358200c1
- (void)setThumbImage:(id)image forStates:(unsigned)states;	// 0x357ddf19
// declared property setter: - (void)setThumbTintColor:(id)color;	// 0x35881a3d
// declared property setter: - (void)setValue:(float)value;	// 0x3581e851
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x357de3c1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35881e3d
- (id)thumbImageForState:(unsigned)state;	// 0x357ddc19
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x357dda29
// declared property getter: - (id)thumbTintColor;	// 0x35882fd9
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x357dd7bd
// declared property getter: - (float)value;	// 0x357dda19
- (CGRect)valueTextRectForBounds:(CGRect)bounds;	// 0x35883059
@end
