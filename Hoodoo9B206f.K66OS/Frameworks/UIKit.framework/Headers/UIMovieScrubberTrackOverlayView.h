/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"


__attribute__((visibility("hidden")))
@interface UIMovieScrubberTrackOverlayView : UIView {
@private
	double _value;	// 48 = 0x30
	double _minimumValue;	// 56 = 0x38
	double _maximumValue;	// 64 = 0x40
	double _startValue;	// 72 = 0x48
	double _endValue;	// 80 = 0x50
	UIView *_leftFillView;	// 88 = 0x58
	UIView *_rightFillView;	// 92 = 0x5c
	UIView *_innerShadowView;	// 96 = 0x60
	CGRect _leftFillFrame;	// 100 = 0x64
	CGRect _rightFillFrame;	// 116 = 0x74
	unsigned _editingHandle;	// 132 = 0x84
	unsigned _editing : 1;	// 136 = 0x88
	unsigned _zoomed : 1;	// 136 = 0x88
}
- (id)initWithFrame:(CGRect)frame;	// 0x355a6555
- (void)_clampValueAndLayout;	// 0x355a6b3d
- (void)_updateLeftFill;	// 0x355a67f1
- (void)_updateRightFill;	// 0x355a6925
- (void)animateFillFramesAway;	// 0x355a6a59
- (void)layoutSubviews;	// 0x355a6d75
- (void)setEditing:(BOOL)editing;	// 0x355a6ba5
- (void)setEditingHandle:(int)handle;	// 0x355a6d65
- (void)setEndValue:(double)value;	// 0x355a6cc1
- (void)setFrame:(CGRect)frame;	// 0x355a675d
- (void)setIsZoomed:(BOOL)zoomed;	// 0x355a6d4d
- (void)setMaximumValue:(double)value;	// 0x355a6d25
- (void)setMinimumValue:(double)value;	// 0x355a6cfd
- (void)setStartValue:(double)value;	// 0x355a6c85
- (void)setValue:(double)value;	// 0x355a6c49
@end
