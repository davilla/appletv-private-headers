/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class _UIInputViewContent;

@interface UIInputView : UIView {
@private
	_UIInputViewContent *_leftContentView;	// 84 = 0x54
	_UIInputViewContent *_rightContentView;	// 88 = 0x58
	float _contentRatio;	// 92 = 0x5c
	CGSize _leftContentSize;	// 96 = 0x60
	CGSize _rightContentSize;	// 104 = 0x68
	CGSize _defaultSize;	// 112 = 0x70
	float _gapWidth;	// 120 = 0x78
	float _leftOffset;	// 124 = 0x7c
	BOOL _isTransitioning;	// 128 = 0x80
	float _transitionGap;	// 132 = 0x84
	float _transitionLeftOffset;	// 136 = 0x88
	float _transitionRatio;	// 140 = 0x8c
}
@property(assign, nonatomic) float contentRatio;	// G=0x304afafd; S=0x304afb0d; @synthesize=_contentRatio
@property(readonly, assign, nonatomic) UIView *leftContentView;	// G=0x304afadd; @synthesize=_leftContentView
@property(assign, nonatomic) CGSize leftContentViewSize;	// G=0x304af9bd; S=0x304afb1d; @synthesize=_leftContentSize
@property(readonly, assign, nonatomic) UIView *rightContentView;	// G=0x304afaed; @synthesize=_rightContentView
@property(assign, nonatomic) CGSize rightContentViewSize;	// G=0x304afa49; S=0x304afb31; @synthesize=_rightContentSize
- (id)initWithFrame:(CGRect)frame;	// 0x304aefd1
- (float)_additionalClipHeight;	// 0x304af9a1
- (void)_beginSplitTransitionIfNeeded:(float)needed gapWidth:(float)width;	// 0x304af70d
- (int)_clipCornersOfView:(id)view;	// 0x304af951
- (CGSize)_defaultSize;	// 0x304af9a5
- (void)_endSplitTransitionIfNeeded:(BOOL)needed;	// 0x304af785
- (BOOL)_isTransitioning;	// 0x304af6fd
- (void)_setLeftOffset:(float)offset gapWidth:(float)width;	// 0x304af291
- (void)_setNeedsContentSizeUpdate;	// 0x304af145
- (void)_setProgress:(float)progress boundedBy:(float)by;	// 0x304af569
- (BOOL)_supportsSplit;	// 0x304af229
- (void)_updateClipCorners;	// 0x304af911
// declared property getter: - (float)contentRatio;	// 0x304afafd
- (void)dealloc;	// 0x304aef6d
- (void)didEndSplitTransition;	// 0x304afad9
// declared property getter: - (id)leftContentView;	// 0x304afadd
// declared property getter: - (CGSize)leftContentViewSize;	// 0x304af9bd
// declared property getter: - (id)rightContentView;	// 0x304afaed
// declared property getter: - (CGSize)rightContentViewSize;	// 0x304afa49
// declared property setter: - (void)setContentRatio:(float)ratio;	// 0x304afb0d
- (void)setFrame:(CGRect)frame;	// 0x304af851
// declared property setter: - (void)setLeftContentViewSize:(CGSize)size;	// 0x304afb1d
// declared property setter: - (void)setRightContentViewSize:(CGSize)size;	// 0x304afb31
- (void)willBeginSplitTransition;	// 0x304afad5
@end

