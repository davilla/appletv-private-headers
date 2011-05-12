/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"

@class UIImageView, UIImage;

@interface UISlider : UIControl <NSCoding> {
@private
	float _value;	// 68 = 0x44
	float _minValue;	// 72 = 0x48
	float _maxValue;	// 76 = 0x4c
	CFDictionaryRef _contentLookup;	// 80 = 0x50
	UIImageView *_minValueImageView;	// 84 = 0x54
	UIImageView *_maxValueImageView;	// 88 = 0x58
	UIImageView *_thumbView;	// 92 = 0x5c
	UIImageView *_minTrackView;	// 96 = 0x60
	UIImageView *_maxTrackView;	// 100 = 0x64
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned preparingToAnimate : 1;
		unsigned showValue : 1;
		unsigned trackEnabled : 1;
		unsigned creatingSnapshot : 1;
		unsigned thumbDisabled : 1;
		unsigned minTrackHidden : 1;
	} _sliderFlags;	// 104 = 0x68
	float _hitOffset;	// 108 = 0x6c
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x3212003d; S=0x32120021; 
@property(readonly, assign, nonatomic) UIImage *currentMaximumTrackImage;	// G=0x3206f289; 
@property(readonly, assign, nonatomic) UIImage *currentMinimumTrackImage;	// G=0x3206f2d1; 
@property(readonly, assign, nonatomic) UIImage *currentThumbImage;	// G=0x3206f1ed; 
@property(assign, nonatomic) float maximumValue;	// G=0x320707d1; S=0x3212055d; @dynamic
@property(retain, nonatomic) UIImage *maximumValueImage;	// G=0x32120615; S=0x32120651; 
@property(assign, nonatomic) float minimumValue;	// G=0x320707c1; S=0x321205b9; @dynamic
@property(retain, nonatomic) UIImage *minimumValueImage;	// G=0x3212073d; S=0x32120779; 
@property(assign, nonatomic) float value;	// G=0x3206f025; S=0x320707e1; @dynamic
- (id)init;	// 0x32121bf1
- (id)initWithCoder:(id)coder;	// 0x32120d45
- (id)initWithFrame:(CGRect)frame;	// 0x3206e01d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x321203f5
- (id)_contentForState:(unsigned)state;	// 0x3206f009
- (void)_controlMouseDown:(GSEventRef)down;	// 0x32120069
- (void)_controlMouseDragged:(GSEventRef)dragged;	// 0x32120071
- (void)_controlMouseUp:(GSEventRef)up;	// 0x3212006d
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x32073911
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x32120079
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x32120075
- (void)_initImages;	// 0x3206ff01
- (void)_initSubviews;	// 0x3207002d
- (BOOL)_isThumbEnabled;	// 0x321200c1
- (void)_layoutSubviewsForBoundsChange:(BOOL)boundsChange;	// 0x3206e1a5
- (id)_maximumTrackImageForState:(unsigned)state;	// 0x3206efc9
- (id)_minimumTrackImageForState:(unsigned)state;	// 0x3206f32d
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32120ca1
- (id)_scriptingInfo;	// 0x32120865
- (void)_sendDelayedActions;	// 0x32120919
- (void)_setContent:(id)content forState:(unsigned)state;	// 0x3206f751
- (void)_setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x3206f965
- (void)_setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x3206f80d
- (void)_setMinimumTrackVisible:(BOOL)visible withDuration:(double)duration;	// 0x3212022d
- (void)_setThumbEnabled:(BOOL)enabled;	// 0x32120331
- (void)_setThumbImage:(id)image forStates:(unsigned)states;	// 0x3206f649
- (void)_setTrackEnabled:(BOOL)enabled;	// 0x32120091
- (void)_setValue:(float)value andSendAction:(BOOL)action;	// 0x3206fd4d
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x321204f1
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x32120051
- (UIEdgeInsets)_thumbHitEdgeInsets;	// 0x32121a05
- (id)_thumbImageForState:(unsigned)state;	// 0x3206f249
- (BOOL)_trackEnabled;	// 0x321200ad
- (void)_updateAppearanceForEnabled:(BOOL)enabled;	// 0x3206f56d
- (BOOL)beginTrackingAt:(CGPoint)at withEvent:(GSEventRef)event;	// 0x32121709
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x32121511
- (BOOL)cancelMouseTracking;	// 0x32120471
- (BOOL)cancelTouchTracking;	// 0x3212040d
- (BOOL)continueTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x32121481
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x321213c5
- (id)createThumbView;	// 0x320701a9
// declared property getter: - (id)currentMaximumTrackImage;	// 0x3206f289
// declared property getter: - (id)currentMinimumTrackImage;	// 0x3206f2d1
// declared property getter: - (id)currentThumbImage;	// 0x3206f1ed
- (void)dealloc;	// 0x32070a45
- (id)description;	// 0x32120a7d
- (void)didMoveToWindow;	// 0x320711e5
- (void)encodeWithCoder:(id)coder;	// 0x32120b1d
- (void)endTrackingAt:(CGPoint)at previous:(CGPoint)previous withEvent:(GSEventRef)event;	// 0x321218f5
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x321212e9
- (BOOL)isAccessibilityElementByDefault;	// 0x3218c3b9
- (BOOL)isAnimatingValueChange;	// 0x3212007d
// declared property getter: - (BOOL)isContinuous;	// 0x3212003d
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3218c3bd
- (void)layoutSubviews;	// 0x3206fe79
- (id)maximumTrackImageForState:(unsigned)state;	// 0x3206efb5
// declared property getter: - (float)maximumValue;	// 0x320707d1
// declared property getter: - (id)maximumValueImage;	// 0x32120615
- (CGRect)maximumValueImageRectForBounds:(CGRect)bounds;	// 0x3206f451
- (id)minimumTrackImageForState:(unsigned)state;	// 0x3206f319
// declared property getter: - (float)minimumValue;	// 0x320707c1
// declared property getter: - (id)minimumValueImage;	// 0x3212073d
- (CGRect)minimumValueImageRectForBounds:(CGRect)bounds;	// 0x3206f36d
- (id)scriptingInfoWithChildren;	// 0x321200d9
- (void)setBounds:(CGRect)bounds;	// 0x32121b3d
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x32120021
- (void)setEnabled:(BOOL)enabled;	// 0x32120a29
- (void)setFrame:(CGRect)frame;	// 0x3206e0f1
- (void)setHighlighted:(BOOL)highlighted;	// 0x321209d5
- (void)setMaximumTrackImage:(id)image forState:(unsigned)state;	// 0x32070981
- (void)setMaximumTrackImage:(id)image forStates:(unsigned)states;	// 0x3206f93d
// declared property setter: - (void)setMaximumValue:(float)value;	// 0x3212055d
// declared property setter: - (void)setMaximumValueImage:(id)image;	// 0x32120651
- (void)setMinimumTrackImage:(id)image forState:(unsigned)state;	// 0x320708bd
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x3206f7e5
// declared property setter: - (void)setMinimumValue:(float)value;	// 0x321205b9
// declared property setter: - (void)setMinimumValueImage:(id)image;	// 0x32120779
- (void)setSelected:(BOOL)selected;	// 0x32120981
- (void)setShowValue:(BOOL)value;	// 0x321203b5
- (void)setThumbImage:(id)image forState:(unsigned)state;	// 0x320707f9
- (void)setThumbImage:(id)image forStates:(unsigned)states;	// 0x3206f621
// declared property setter: - (void)setValue:(float)value;	// 0x320707e1
- (void)setValue:(float)value animated:(BOOL)animated;	// 0x3206fa95
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32120f31
- (id)thumbImageForState:(unsigned)state;	// 0x3206f235
- (CGRect)thumbRectForBounds:(CGRect)bounds trackRect:(CGRect)rect value:(float)value;	// 0x3206f035
- (CGRect)trackRectForBounds:(CGRect)bounds;	// 0x3206edfd
// declared property getter: - (float)value;	// 0x3206f025
- (CGRect)valueTextRectForBounds:(CGRect)bounds;	// 0x32121ab5
@end

