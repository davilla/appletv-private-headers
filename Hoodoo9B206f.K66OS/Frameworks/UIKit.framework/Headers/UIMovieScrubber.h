/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIMovieScrubberTrackViewDataSource.h"
#import "UIMovieScrubberTrackViewDelegate.h"
#import "UIControl.h"

@class UIImageView, UIMovieScrubberTrackView, UIMovieScrubberEditingView, UIImage, UILabel;
@protocol UIMovieScrubberDataSource, UIMovieScrubberDelegate;

@interface UIMovieScrubber : UIControl <UIMovieScrubberTrackViewDataSource, UIMovieScrubberTrackViewDelegate> {
	UIImageView *_thumbView;	// 72 = 0x48
	UIMovieScrubberTrackView *_trackView;	// 76 = 0x4c
	UIMovieScrubberEditingView *_editingView;	// 80 = 0x50
	UILabel *_elapsedLabel;	// 84 = 0x54
	UILabel *_remainingLabel;	// 88 = 0x58
	int _timeComponents;	// 92 = 0x5c
	UIImage *_fillImage;	// 96 = 0x60
	UIImage *_innerShadowImage;	// 100 = 0x64
	UIImage *_maskImage;	// 104 = 0x68
	UIImage *_shadowImage;	// 108 = 0x6c
	id<UIMovieScrubberDataSource> _dataSource;	// 112 = 0x70
	id<UIMovieScrubberDelegate> _delegate;	// 116 = 0x74
	CGRect _trackRect;	// 120 = 0x78
	float _hitOffset;	// 136 = 0x88
	float _zoomDelay;	// 140 = 0x8c
	BOOL _showTimeViews;	// 144 = 0x90
	BOOL _editable;	// 145 = 0x91
	double _value;	// 148 = 0x94
	double _maximumValue;	// 156 = 0x9c
	double _minimumValue;	// 164 = 0xa4
	CGPoint _touchLocationWhenTrackPressBegan;	// 172 = 0xac
	double _trimStartValue;	// 180 = 0xb4
	double _trimEndValue;	// 188 = 0xbc
	double _minTrimmedLength;	// 196 = 0xc4
	double _maxTrimmedLength;	// 204 = 0xcc
	double _zoomAnimationDuration;	// 212 = 0xd4
	double _zoomAnimationDelay;	// 220 = 0xdc
	struct {
		unsigned continuous : 1;
		unsigned animating : 1;
		unsigned creatingSnapshot : 1;
		unsigned needsReload : 1;
		unsigned layoutTimeViews : 1;
		unsigned computeTrackRect : 1;
		unsigned clampingTrimRange;
		unsigned zoomed : 1;
		unsigned zoomAnimating : 1;
		unsigned trackIsPressed : 1;
		unsigned trackAnimating : 1;
		unsigned thumbIsVisible : 1;
		unsigned handleIsPressed : 1;
		unsigned willBeginEditing : 1;
		unsigned editing : 1;
		unsigned editingHandle;
		unsigned rotationDisabled;
		unsigned isInNavigationBar : 1;
		unsigned delegateValueDidChange : 1;
		unsigned delegateStartValueDidChange : 1;
		unsigned delegateEndValueDidChange : 1;
		unsigned delegateWillBeginRequestingThumbnails : 1;
		unsigned delegateDidFinishRequestingThumbnails : 1;
		unsigned delegateWillBeginEditing : 1;
		unsigned delegateDidBeginEditing : 1;
		unsigned delegateDidCancelEditing : 1;
		unsigned delegateEditingAnimationFinished : 1;
		unsigned delegateWidthDeltaOriginXDelta : 1;
	} _sliderFlags;	// 228 = 0xe4
}
@property(assign, nonatomic, getter=isContinuous) BOOL continuous;	// G=0x355a7741; S=0x355a7729; 
@property(assign, nonatomic) id<UIMovieScrubberDataSource> dataSource;	// G=0x355a70f1; S=0x355a70c5; 
@property(assign, nonatomic) id<UIMovieScrubberDelegate> delegate;	// G=0x355a72ed; S=0x355a7151; 
@property(assign, nonatomic) double duration;	// G=0x355a95a1; S=0x355a95b9; @dynamic
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x355a7681; S=0x355a7691; 
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x355a8005; S=0x355a7ff1; 
@property(readonly, assign, nonatomic) BOOL isInsideNavigationBar;	// G=0x355a9161; 
@property(assign, nonatomic) double maximumTrimLength;	// G=0x355ab67d; S=0x355ab695; @synthesize=_maxTrimmedLength
@property(assign, nonatomic) double minimumTrimLength;	// G=0x355ab6a9; S=0x355ab6c1; @synthesize=_minTrimmedLength
@property(assign, nonatomic) BOOL showTimeViews;	// G=0x355ab65d; S=0x355ab66d; @synthesize=_showTimeViews
@property(assign, nonatomic) BOOL thumbIsVisible;	// G=0x355a75b9; S=0x355a75d1; 
@property(readonly, assign) CGRect trackRect;	// G=0x355a8135; converted property
@property(assign, nonatomic) double trimEndValue;	// G=0x355a9bf5; S=0x355a9cb1; @dynamic
@property(assign, nonatomic) double trimStartValue;	// G=0x355a9861; S=0x355a9929; @dynamic
@property(assign, nonatomic) double value;	// G=0x355a9179; S=0x355a9191; @dynamic
@property(assign, nonatomic) float zoomDelay;	// G=0x355ab63d; S=0x355ab64d; @synthesize=_zoomDelay
+ (id)timeStringForSeconds:(int)seconds forceFullWidthComponents:(BOOL)components isElapsed:(BOOL)elapsed;	// 0x355ab505
- (id)init;	// 0x355a6e9d
- (id)initWithFrame:(CGRect)frame;	// 0x355a6ecd
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x355aaf21
- (void)_animateAfterEdit:(BOOL)edit;	// 0x355a7755
- (void)_beginTrackPressWithTouch:(id)touch touchesBegan:(BOOL)began;	// 0x355aa355
- (void)_cancelTrackPress:(BOOL)press;	// 0x355aa46d
- (void)_cancelTrackPressIfNeccessaryWithTouch:(id)touch;	// 0x355aa549
- (void)_computeTrackRectForBounds:(CGRect)bounds;	// 0x355a803d
- (void)_controlTouchBegan:(id)began withEvent:(id)event;	// 0x355aaea9
- (void)_controlTouchEnded:(id)ended withEvent:(id)event;	// 0x355aaeb1
- (void)_controlTouchMoved:(id)moved withEvent:(id)event;	// 0x355aaead
- (float)_editingFrameDeltaXForValue:(float)value handle:(int)handle;	// 0x355a9691
- (int)_editingHandleWithTouch:(id)touch;	// 0x355aa68d
- (CGRect)_editingRect;	// 0x355a81c1
- (CGRect)_editingViewFrameForEndValueWithFrame:(CGRect)frame;	// 0x355a9c59
- (CGRect)_editingViewFrameForStartValueWithFrame:(CGRect)frame;	// 0x355a98c5
- (void)_initSubviews;	// 0x355a89d9
- (id)_scriptingInfo;	// 0x355a72fd
- (void)_sendDelayedActions;	// 0x355a9ff1
- (void)_setValue:(double)value andSendAction:(BOOL)action;	// 0x355a9499
- (void)_sliderAnimationDidStop:(id)_sliderAnimation finished:(id)finished context:(void *)context;	// 0x355a9f91
- (void)_sliderAnimationWillStart:(id)_sliderAnimation context:(void *)context;	// 0x355a9f79
- (void)_sliderValueDidChange:(id)_sliderValue;	// 0x355aaf4d
- (void)_trackPressWasHeld;	// 0x355aa239
- (void)_trimAnimationDidStop:(id)_trimAnimation finished:(id)finished context:(id)context;	// 0x355a7ead
- (void)_updateThumbLocation;	// 0x355a9421
- (void)_updateTimes;	// 0x355a8f95
- (float)_valueForTouch:(id)touch;	// 0x355aa065
- (void)animateAfterEdit;	// 0x355a7e85
- (void)animateCancelEdit;	// 0x355a7e99
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355aa721
- (BOOL)cancelTouchTracking;	// 0x355aaeb5
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355aaa81
// declared property getter: - (id)dataSource;	// 0x355a70f1
- (void)dealloc;	// 0x355a6ffd
// declared property getter: - (id)delegate;	// 0x355a72ed
- (void)didMoveToSuperview;	// 0x355a90b1
- (void)didMoveToWindow;	// 0x355a913d
// declared property getter: - (double)duration;	// 0x355a95a1
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x355aac1d
- (BOOL)isAnimatingValueChange;	// 0x355aaf39
// declared property getter: - (BOOL)isContinuous;	// 0x355a7741
// declared property getter: - (BOOL)isEditable;	// 0x355a7681
// declared property getter: - (BOOL)isEditing;	// 0x355a8005
// declared property getter: - (BOOL)isInsideNavigationBar;	// 0x355a9161
- (void)layoutSubviews;	// 0x355a85bd
// declared property getter: - (double)maximumTrimLength;	// 0x355ab67d
// declared property getter: - (double)minimumTrimLength;	// 0x355ab6a9
- (void)movieScrubberTrackView:(id)view clampedSizeWidthDelta:(float)delta actualSizeWidthDelta:(float)delta3 originXDelta:(float)delta4 minimumVisibleValue:(float)value maximumVisibleValue:(float)value6;	// 0x355ab0c9
- (id)movieScrubberTrackView:(id)view evenlySpacedTimestamps:(int)timestamps startingAt:(id)at endingAt:(id)at4;	// 0x355aaff1
- (void)movieScrubberTrackView:(id)view requestThumbnailImageForTimestamp:(id)timestamp;	// 0x355ab031
- (id)movieScrubberTrackView:(id)view timestampsStartingAt:(id)at endingAt:(id)at3 maxCount:(int)count;	// 0x355ab011
- (void)movieScrubberTrackViewDidCollapse:(id)movieScrubberTrackView;	// 0x355ab451
- (void)movieScrubberTrackViewDidExpand:(id)movieScrubberTrackView;	// 0x355ab42d
- (void)movieScrubberTrackViewDidFinishRequestingThumbnails:(id)movieScrubberTrackView;	// 0x355ab4c5
- (double)movieScrubberTrackViewDuration:(id)duration;	// 0x355aafa9
- (float)movieScrubberTrackViewThumbnailAspectRatio:(id)ratio;	// 0x355ab071
- (void)movieScrubberTrackViewWillBeginRequestingThumbnails:(id)movieScrubberTrackView;	// 0x355ab485
- (float)movieScrubberTrackViewZoomAnimationDelay:(id)delay;	// 0x355ab0ad
- (float)movieScrubberTrackViewZoomAnimationDuration:(id)duration;	// 0x355ab091
- (BOOL)pointInsideThumb:(CGPoint)thumb withEvent:(id)event;	// 0x355aa5e1
- (void)reloadData;	// 0x355a7101
- (id)scriptingInfoWithChildren;	// 0x355a741d
// declared property setter: - (void)setContinuous:(BOOL)continuous;	// 0x355a7729
// declared property setter: - (void)setDataSource:(id)source;	// 0x355a70c5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x355a7151
// declared property setter: - (void)setDuration:(double)duration;	// 0x355a95b9
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x355a7691
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x355a7ff1
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x355a79d5
- (void)setFrame:(CGRect)frame;	// 0x355a8401
// declared property setter: - (void)setMaximumTrimLength:(double)length;	// 0x355ab695
// declared property setter: - (void)setMinimumTrimLength:(double)length;	// 0x355ab6c1
- (void)setRotationDisabled:(BOOL)disabled;	// 0x355aa1b5
// declared property setter: - (void)setShowTimeViews:(BOOL)views;	// 0x355ab66d
// declared property setter: - (void)setThumbIsVisible:(BOOL)visible;	// 0x355a75d1
- (void)setThumbnailImage:(CGImageRef)image forTimestamp:(id)timestamp;	// 0x355ab051
// declared property setter: - (void)setTrimEndValue:(double)value;	// 0x355a9cb1
// declared property setter: - (void)setTrimStartValue:(double)value;	// 0x355a9929
// declared property setter: - (void)setValue:(double)value;	// 0x355a9191
- (void)setValue:(double)value animated:(BOOL)animated;	// 0x355a91b5
- (void)setZoomAnimationDuration:(float)duration;	// 0x355a801d
// declared property setter: - (void)setZoomDelay:(float)delay;	// 0x355ab64d
// declared property getter: - (BOOL)showTimeViews;	// 0x355ab65d
// declared property getter: - (BOOL)thumbIsVisible;	// 0x355a75b9
- (CGRect)thumbRectForValue:(float)value;	// 0x355a8279
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x355aae49
// converted property getter: - (CGRect)trackRect;	// 0x355a8135
// declared property getter: - (double)trimEndValue;	// 0x355a9bf5
// declared property getter: - (double)trimStartValue;	// 0x355a9861
// declared property getter: - (double)value;	// 0x355a9179
// declared property getter: - (float)zoomDelay;	// 0x355ab63d
@end

