/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIControl.h"
#import "UIKit-Structs.h"

@class NSMutableArray, UIImageView, UILabel, NSTimer;

@interface UICalloutView : UIControl {
	UIImageView *_leftCap;	// 68 = 0x44
	UIImageView *_rightCap;	// 72 = 0x48
	UIImageView *_topAnchor;	// 76 = 0x4c
	UIImageView *_bottomAnchor;	// 80 = 0x50
	UIImageView *_leftBackground;	// 84 = 0x54
	UIImageView *_rightBackground;	// 88 = 0x58
	UILabel *_title;	// 92 = 0x5c
	UILabel *_subtitle;	// 96 = 0x60
	UILabel *_temporary;	// 100 = 0x64
	UIView *_leftView;	// 104 = 0x68
	UIView *_rightView;	// 108 = 0x6c
	struct {
		CGPoint origin;
		CGPoint offset;
		int position;
		CGPoint desiredPoint;
		CGRect desiredBounds;
	} _anchor;	// 112 = 0x70
	CGRect _frame;	// 156 = 0x9c
	id _delegate;	// 172 = 0xac
	struct {
		unsigned shouldSendTouchPauseUp : 1;
		unsigned delegateViewHandleTapWithCountEvent : 1;
		unsigned delegateViewHandleTapWithCountEventFingerCount : 1;
		unsigned delegateViewHandleTouchPauseIsDown : 1;
		unsigned reserved : 28;
	} _flags;	// 176 = 0xb0
	NSMutableArray *_fadeInViews;	// 180 = 0xb4
	NSMutableArray *_fadeOutViews;	// 184 = 0xb8
	NSTimer *_layoutAnimationTimer;	// 188 = 0xbc
	float _maximumWidth;	// 192 = 0xc0
}
@property(readonly, assign, nonatomic) float UICalloutViewButtonPadding;	// G=0x3022cc95; 
@property(readonly, assign, nonatomic) float UICalloutViewCapHeight;	// G=0x3022cc7d; 
@property(readonly, assign, nonatomic) float UICalloutViewCapPaddingTop;	// G=0x3022cc85; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalMargin;	// G=0x3022cc9d; 
@property(readonly, assign, nonatomic) float UICalloutViewHorizontalPadding;	// G=0x3022cca5; 
@property(readonly, assign, nonatomic) float UICalloutViewLayoutDuration;	// G=0x3022cc8d; 
@property(readonly, assign, nonatomic) float UICalloutViewMinimumWidth;	// G=0x3022ccb5; 
@property(readonly, assign, nonatomic) float UICalloutViewVerticalMargin;	// G=0x3022ccad; 
@property(assign, nonatomic) BOOL canAnchorFromBottom;	// G=0x3022cced; S=0x301c5799; 
@property(assign) id delegate;	// G=0x3022cd01; S=0x301c5789; converted property
@property(retain, nonatomic) UIView *leftView;	// G=0x301c6aa1; S=0x301c59f1; @synthesize=_leftView
@property(assign, nonatomic) float maximumWidth;	// G=0x3022cd11; S=0x3022cd21; @synthesize=_maximumWidth
@property(assign) CGPoint offset;	// G=0x3022ccd5; S=0x3022ccbd; converted property
@property(retain, nonatomic) UIView *rightView;	// G=0x301c6a75; S=0x301c5b21; @synthesize=_rightView
@property(retain) UILabel *subtitle;	// G=0x301cacd1; S=0x301c58c9; converted property
@property(assign, nonatomic) int subtitleLineBreakMode;	// G=0x3022ce49; S=0x301c5769; 
@property(assign, nonatomic) int subtitleTextAlignment;	// G=0x3022cde9; S=0x301c6ab1; 
@property(retain) id temporaryTitle;	// G=0x3022ce89; S=0x3022cea9; converted property
@property(retain) UILabel *title;	// G=0x3022cec9; S=0x301c57b5; converted property
@property(assign, nonatomic) int titleLineBreakMode;	// G=0x3022ce69; S=0x301c5749; 
@property(assign, nonatomic) int titleTextAlignment;	// G=0x3022ce29; S=0x3022ce09; 
+ (id)_backgroundImage;	// 0x301c5735
+ (id)_bottomAnchorImage;	// 0x301c56e5
+ (id)_leftCapImage;	// 0x301c56f9
+ (id)_rightCapImage;	// 0x301c570d
+ (id)_topAnchorImage;	// 0x301c5721
+ (float)defaultHeight;	// 0x301c5091
+ (id)sharedCalloutView;	// 0x3022cee9
- (id)initWithFrame:(CGRect)frame;	// 0x301c5099
// declared property getter: - (float)UICalloutViewButtonPadding;	// 0x3022cc95
// declared property getter: - (float)UICalloutViewCapHeight;	// 0x3022cc7d
// declared property getter: - (float)UICalloutViewCapPaddingTop;	// 0x3022cc85
// declared property getter: - (float)UICalloutViewHorizontalMargin;	// 0x3022cc9d
// declared property getter: - (float)UICalloutViewHorizontalPadding;	// 0x3022cca5
// declared property getter: - (float)UICalloutViewLayoutDuration;	// 0x3022cc8d
// declared property getter: - (float)UICalloutViewMinimumWidth;	// 0x3022ccb5
// declared property getter: - (float)UICalloutViewVerticalMargin;	// 0x3022ccad
- (void)_fadeViewsIn:(BOOL)anIn;	// 0x301cae65
- (void)_layoutAnimation;	// 0x301cae0d
- (void)_layoutSubviews:(BOOL)subviews;	// 0x301c5c79
- (void)_markDidMoveCalled;	// 0x301c6f55
- (void)_scheduleLayoutAnimation;	// 0x301cad61
- (void)_scheduleViewToFadeIn:(id)anIn;	// 0x301cacf1
- (void)_scheduleViewToFadeOut:(id)fadeOut;	// 0x3022cf51
- (void)_setLayoutAnimationTimer:(id)timer;	// 0x301cadbd
- (void)_setLeftView:(id)view;	// 0x301cac81
- (void)_setOriginForScale:(float)scale;	// 0x301c6f91
- (void)_setRightView:(id)view;	// 0x301c5c29
- (void)addTarget:(id)target action:(SEL)action;	// 0x3022cd61
- (CGPoint)anchorPoint;	// 0x3022d0f5
- (void)animationDidStop:(id)animation finished:(id)finished context:(void *)context;	// 0x301c82b5
// declared property getter: - (BOOL)canAnchorFromBottom;	// 0x3022cced
- (void)completeBounceAnimation;	// 0x301c6df5
- (void)dealloc;	// 0x3022cfc1
// converted property getter: - (id)delegate;	// 0x3022cd01
- (void)fadeOutWithDuration:(float)duration;	// 0x301c8b49
- (void)getActualAnchorPoint:(CGPoint *)point frame:(CGRect *)frame position:(int *)position forDesiredAnchorPoint:(CGPoint)desiredAnchorPoint boundaryRect:(CGRect)rect;	// 0x301c65d1
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x3022d16d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x301c7031
// declared property getter: - (id)leftView;	// 0x301c6aa1
// declared property getter: - (float)maximumWidth;	// 0x3022cd11
// converted property getter: - (CGPoint)offset;	// 0x3022ccd5
- (void)removeTarget:(id)target;	// 0x3022cd31
// declared property getter: - (id)rightView;	// 0x301c6a75
- (void)setAnchorPoint:(CGPoint)point boundaryRect:(CGRect)rect animate:(BOOL)animate;	// 0x301c6ad1
// declared property setter: - (void)setCanAnchorFromBottom:(BOOL)bottom;	// 0x301c5799
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x301c5789
// declared property setter: - (void)setLeftView:(id)view;	// 0x301c59f1
- (void)setLeftView:(id)view animated:(BOOL)animated;	// 0x301c5a09
// declared property setter: - (void)setMaximumWidth:(float)width;	// 0x3022cd21
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x3022ccbd
// declared property setter: - (void)setRightView:(id)view;	// 0x301c5b21
- (void)setRightView:(id)view animated:(BOOL)animated;	// 0x301c5b39
// converted property setter: - (void)setSubtitle:(id)subtitle;	// 0x301c58c9
- (void)setSubtitle:(id)subtitle animated:(BOOL)animated;	// 0x301c58e1
// declared property setter: - (void)setSubtitleLineBreakMode:(int)mode;	// 0x301c5769
// declared property setter: - (void)setSubtitleTextAlignment:(int)alignment;	// 0x301c6ab1
// converted property setter: - (void)setTemporaryTitle:(id)title;	// 0x3022cea9
// converted property setter: - (void)setTitle:(id)title;	// 0x301c57b5
// declared property setter: - (void)setTitleLineBreakMode:(int)mode;	// 0x301c5749
// declared property setter: - (void)setTitleTextAlignment:(int)alignment;	// 0x3022ce09
// converted property getter: - (id)subtitle;	// 0x301cacd1
// declared property getter: - (int)subtitleLineBreakMode;	// 0x3022ce49
// declared property getter: - (int)subtitleTextAlignment;	// 0x3022cde9
// converted property getter: - (id)temporaryTitle;	// 0x3022ce89
// converted property getter: - (id)title;	// 0x3022cec9
// declared property getter: - (int)titleLineBreakMode;	// 0x3022ce69
// declared property getter: - (int)titleTextAlignment;	// 0x3022ce29
@end

