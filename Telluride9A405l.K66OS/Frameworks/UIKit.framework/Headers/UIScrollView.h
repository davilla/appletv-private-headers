/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIView.h"

@class UIImageView, UIPanGestureRecognizer, UIPinchGestureRecognizer, NSArray;
@protocol UIScrollViewDelegate;

@interface UIScrollView : UIView <NSCoding> {
@private
	CGSize _contentSize;	// 48 = 0x30
	UIEdgeInsets _contentInset;	// 56 = 0x38
	id _delegate;	// 72 = 0x48
	UIImageView *_verticalScrollIndicator;	// 76 = 0x4c
	UIImageView *_horizontalScrollIndicator;	// 80 = 0x50
	UIEdgeInsets _scrollIndicatorInset;	// 84 = 0x54
	struct {
		unsigned tracking : 1;
		unsigned dragging : 1;
		unsigned verticalBounceEnabled : 1;
		unsigned horizontalBounceEnabled : 1;
		unsigned verticalBouncing : 1;
		unsigned horizontalBouncing : 1;
		unsigned bouncesZoom : 1;
		unsigned zoomBouncing : 1;
		unsigned alwaysBounceHorizontal : 1;
		unsigned alwaysBounceVertical : 1;
		unsigned canCancelContentTouches : 1;
		unsigned delaysContentTouches : 1;
		unsigned programmaticScrollDisabled : 1;
		unsigned scrollDisabled : 1;
		unsigned zoomDisabled : 1;
		unsigned scrollTriggered : 1;
		unsigned scrollDisabledOnTouchBegan : 1;
		unsigned ignoreNextTouchesMoved : 1;
		unsigned cancelNextContentTouchEnded : 1;
		unsigned inContentViewCall : 1;
		unsigned dontSelect : 1;
		unsigned contentTouched : 1;
		unsigned cantCancel : 1;
		unsigned directionalLockEnabled : 1;
		unsigned directionalLockAutoEnabled : 1;
		unsigned lockVertical : 1;
		unsigned lockHorizontal : 1;
		unsigned keepLocked : 1;
		unsigned showsHorizontalScrollIndicator : 1;
		unsigned showsVerticalScrollIndicator : 1;
		unsigned indicatorStyle : 2;
		unsigned inZoom : 1;
		unsigned hideIndicatorsInZoom : 1;
		unsigned pushedTrackingMode : 1;
		unsigned multipleDrag : 1;
		unsigned displayingScrollIndicators : 1;
		unsigned verticalIndicatorShrunk : 1;
		unsigned horizontalIndicatorShrunk : 1;
		unsigned contentFitDisableScrolling : 1;
		unsigned pagingEnabled : 1;
		unsigned pagingLeft : 1;
		unsigned pagingRight : 1;
		unsigned pagingUp : 1;
		unsigned pagingDown : 1;
		unsigned lastHorizontalDirection : 1;
		unsigned lastVerticalDirection : 1;
		unsigned dontScrollToTop : 1;
		unsigned scrollingToTop : 1;
		unsigned useGestureRecognizers : 1;
		unsigned autoscrolling : 1;
		unsigned automaticContentOffsetAdjustmentDisabled : 1;
		unsigned skipStartOffsetAdjustment : 1;
		unsigned delegateScrollViewDidScroll : 1;
		unsigned delegateScrollViewDidZoom : 1;
		unsigned delegateContentSizeForZoomScale : 1;
		unsigned preserveCenterDuringRotation : 1;
		unsigned delaysTrackingWhileDecelerating : 1;
		unsigned pinnedZoomMin : 1;
		unsigned pinnedXMin : 1;
		unsigned pinnedYMin : 1;
		unsigned pinnedXMax : 1;
		unsigned pinnedYMax : 1;
		unsigned skipLinkChecks : 1;
		unsigned staysCenteredDuringPinch : 1;
		unsigned wasDelayingPinchForSystemGestures : 1;
		unsigned systemGesturesRecognitionPossible : 1;
		unsigned disableContentOffsetRounding : 1;
		unsigned adjustedDecelerationTargetX : 1;
		unsigned adjustedDecelerationTargetY : 1;
	} _scrollViewFlags;	// 100 = 0x64
	float _farthestDistance;	// 112 = 0x70
	CGPoint _initialTouchPosition;	// 116 = 0x74
	CGPoint _startTouchPosition;	// 124 = 0x7c
	double _startTouchTime;	// 132 = 0x84
	double _startOffsetX;	// 140 = 0x8c
	double _startOffsetY;	// 148 = 0x94
	double _lastUpdateOffsetX;	// 156 = 0x9c
	double _lastUpdateOffsetY;	// 164 = 0xa4
	CGPoint _lastTouchPosition;	// 172 = 0xac
	double _lastTouchTime;	// 180 = 0xb4
	double _lastUpdateTime;	// 188 = 0xbc
	UIView *_contentView;	// 196 = 0xc4
	float _minimumZoomScale;	// 200 = 0xc8
	float _maximumZoomScale;	// 204 = 0xcc
	UIView *_zoomView;	// 208 = 0xd0
	double _horizontalVelocity;	// 212 = 0xd4
	double _verticalVelocity;	// 220 = 0xdc
	double _previousHorizontalVelocity;	// 228 = 0xe4
	double _previousVerticalVelocity;	// 236 = 0xec
	void *_scrollHeartbeat;	// 244 = 0xf4
	CGPoint _pageDecelerationTarget;	// 248 = 0xf8
	CGSize _decelerationFactor;	// 256 = 0x100
	CGPoint _adjustedDecelerationTarget;	// 264 = 0x108
	CGSize _adjustedDecelerationFactor;	// 272 = 0x110
	double _decelerationLnFactorH;	// 280 = 0x118
	double _decelerationLnFactorV;	// 288 = 0x120
	NSArray *_deferredBeginTouchesInfo;	// 296 = 0x128
	id *_shadows;	// 300 = 0x12c
	id _scrollNotificationViews;	// 304 = 0x130
	double _contentOffsetAnimationDuration;	// 308 = 0x134
	id _animation;	// 316 = 0x13c
	id _pinch;	// 320 = 0x140
	id _pan;	// 324 = 0x144
	id _swipe;	// 328 = 0x148
	float _pagingSpringPull;	// 332 = 0x14c
	float _pagingFriction;	// 336 = 0x150
	int _fastScrollCount;	// 340 = 0x154
	float _fastScrollMultiplier;	// 344 = 0x158
	float _fastScrollStartMultiplier;	// 348 = 0x15c
	double _fastScrollEndTime;	// 352 = 0x160
	CGPoint _parentAdjustment;	// 360 = 0x168
	CGPoint _rotationCenterPoint;	// 368 = 0x170
	float _accuracy;	// 376 = 0x178
	float _hysteresis;	// 380 = 0x17c
	unsigned _zoomAnimationCount;	// 384 = 0x180
	CADoublePoint _zoomAnchorPoint;	// 388 = 0x184
}
@property(assign) BOOL allowsMultipleFingers;	// G=0x32e3aae9; S=0x32e3aabd; converted property
@property(assign, nonatomic) BOOL alwaysBounceHorizontal;	// G=0x32c9f609; S=0x32dfabdd; 
@property(assign, nonatomic) BOOL alwaysBounceVertical;	// G=0x32c9f75d; S=0x32d1e491; 
@property(assign) CGPoint autoscrollContentOffset;	// G=0x32e3dbf9; S=0x32e3dc19; converted property
@property(assign, nonatomic) BOOL bounces;	// G=0x32e3a929; S=0x32d3a175; 
@property(assign) BOOL bouncesHorizontally;	// G=0x32e3a945; S=0x32e1d2f1; converted property
@property(assign) BOOL bouncesVertically;	// G=0x32e3a971; S=0x32e3a959; converted property
@property(assign, nonatomic) BOOL bouncesZoom;	// G=0x32e3c61d; S=0x32d1e479; 
@property(assign, nonatomic) BOOL canCancelContentTouches;	// G=0x32e3c631; S=0x32e3c645; 
@property(assign, nonatomic) UIEdgeInsets contentInset;	// G=0x32c9ef31; S=0x32ceb309; @synthesize=_contentInset
@property(assign, nonatomic) CGPoint contentOffset;	// G=0x32c99221; S=0x32c9f0ed; 
@property(assign, nonatomic) CGSize contentSize;	// G=0x32ce1af9; S=0x32cc8ac1; @synthesize=_contentSize
@property(readonly, assign, nonatomic, getter=isDecelerating) BOOL decelerating;	// G=0x32cfa751; 
@property(assign, nonatomic) float decelerationRate;	// G=0x32e3aa75; S=0x32d46389; 
@property(assign, nonatomic) BOOL delaysContentTouches;	// G=0x32d74b79; S=0x32d1d751; 
@property(assign, nonatomic) id<UIScrollViewDelegate> delegate;	// G=0x32cbfe19; S=0x32cbfe29; @synthesize=_delegate
@property(assign, nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;	// G=0x32e3a6e1; S=0x32d1d70d; 
@property(readonly, assign, nonatomic, getter=isDragging) BOOL dragging;	// G=0x32cfa769; 
@property(assign) float horizontalScrollDecelerationFactor;	// G=0x32e3aa99; S=0x32d1d6e9; converted property
@property(assign, nonatomic) int indicatorStyle;	// G=0x32e3aa85; S=0x32e3a9c1; 
@property(readonly, assign, nonatomic, getter=_isAnimatingScroll) BOOL isAnimatingScroll;	// G=0x32dfce7d; 
@property(readonly, assign, nonatomic, getter=_isAnimatingZoom) BOOL isAnimatingZoom;	// G=0x32e0814d; 
@property(readonly, assign, nonatomic, getter=_isHorizontalBouncing) BOOL isHorizontalBouncing;	// G=0x32dfe2fd; 
@property(readonly, assign, nonatomic, getter=_isVerticalBouncing) BOOL isVerticalBouncing;	// G=0x32e3a985; 
@property(assign, nonatomic) float maximumZoomScale;	// G=0x32e3a689; S=0x32d21609; @synthesize=_maximumZoomScale
@property(assign, nonatomic) float minimumZoomScale;	// G=0x32e3a679; S=0x32d215cd; 
@property(assign) CGPoint offset;	// G=0x32dc3731; S=0x32e3cfb1; converted property
@property(assign, nonatomic, getter=isPagingEnabled) BOOL pagingEnabled;	// G=0x32dfefcd; S=0x32d46341; 
@property(readonly, assign, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;	// G=0x32d07369; @synthesize=_pan
@property(readonly, assign, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;	// G=0x32e3cfa1; @synthesize=_pinch
@property(assign) BOOL preservesCenterDuringRotation;	// G=0x32e3b2f5; S=0x32dfc391; converted property
@property(assign, nonatomic, getter=isProgrammaticScrollEnabled) BOOL programmaticScrollEnabled;	// G=0x32e3a73d; S=0x32db46a9; 
@property(assign, nonatomic, getter=isScrollEnabled) BOOL scrollEnabled;	// G=0x32d5fa65; S=0x32d3a401; 
@property(assign, nonatomic) UIEdgeInsets scrollIndicatorInsets;	// G=0x32d1f63d; S=0x32ceb9dd; 
@property(assign, nonatomic) BOOL scrollsToTop;	// G=0x32e3c65d; S=0x32ceb291; 
@property(assign, nonatomic) BOOL showsHorizontalScrollIndicator;	// G=0x32e3a999; S=0x32cc89b9; 
@property(assign, nonatomic) BOOL showsVerticalScrollIndicator;	// G=0x32e3a9ad; S=0x32cc8a3d; 
@property(readonly, assign, nonatomic, getter=isTracking) BOOL tracking;	// G=0x32c9f0d9; 
@property(assign) BOOL tracksImmediatelyWhileDecelerating;	// G=0x32d9d415; S=0x32e3ab19; converted property
@property(assign) BOOL usesGestureRecognizers;	// G=0x32cbc905; S=0x32cbc91d; converted property
@property(assign) float verticalScrollDecelerationFactor;	// G=0x32e3aaa9; S=0x32d1d6f9; converted property
@property(assign, nonatomic, getter=_zoomAnchorPoint, setter=_setZoomAnchorPoint:) CADoublePoint zoomAnchorPoint;	// G=0x32d3b41d; S=0x32d3a819; @synthesize=_zoomAnchorPoint
@property(readonly, assign, nonatomic, getter=isZoomBouncing) BOOL zoomBouncing;	// G=0x32e3cee1; 
@property(assign, getter=isZoomEnabled) BOOL zoomEnabled;	// G=0x32e3a725; S=0x32d21905; converted property
@property(assign, nonatomic) float zoomScale;	// G=0x32d1f571; S=0x32dfc4d9; 
@property(readonly, assign, nonatomic, getter=isZooming) BOOL zooming;	// G=0x32d3a56d; 
+ (float)_cancelSelectDistance;	// 0x32dfddfd
+ (SEL)_panGestureAction;	// 0x32cbd41d
+ (SEL)_pinchGestureAction;	// 0x32d21645
- (id)initWithCoder:(id)coder;	// 0x32e39ab1
- (id)initWithFrame:(CGRect)frame;	// 0x32cbbf39
- (int)_abuttedEdgesForContentOffset:(CGPoint)contentOffset;	// 0x32e3a755
- (int)_abuttedPagingEdges;	// 0x32e3a8b5
- (void)_addContentSubview:(id)subview atBack:(BOOL)back;	// 0x32cc5765
- (void)_addScrollNotificationView:(id)view;	// 0x32d04d31
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible;	// 0x32d1d969
- (void)_adjustBackgroundShadowsForContentSizeForcedVisible:(BOOL)contentSizeForcedVisible withOffset:(float)offset;	// 0x32d1d9a1
- (void)_adjustContentOffsetIfNecessary;	// 0x32c9e5b9
- (void)_adjustContentSizeForView:(id)view atScale:(float)scale;	// 0x32d3b361
- (void)_adjustForAutomaticKeyboardInfo:(id)automaticKeyboardInfo animated:(BOOL)animated lastAdjustment:(float *)adjustment;	// 0x32db6b09
- (void)_adjustScrollerIndicators:(BOOL)indicators alwaysShowingThem:(BOOL)them;	// 0x32cd0799
- (void)_adjustShadowsIfNecessary;	// 0x32c9f49d
- (void)_adjustShadowsIfNecessaryForOffset:(float)offset;	// 0x32e3dcf1
- (id)_backgroundShadowForSlideAnimation;	// 0x32e3dd25
- (void)_beginTouchesInContentView:(id)contentView touches:(id)touches withEvent:(id)event;	// 0x32e3d79d
- (BOOL)_beginTrackingWithEvent:(id)event;	// 0x32d739cd
- (BOOL)_canCancelContentTouches:(id)touches;	// 0x32d99ec9
- (BOOL)_canScrollX;	// 0x32c9f4c9
- (BOOL)_canScrollY;	// 0x32c9f61d
- (BOOL)_cancelContentTouchWithEvent:(id)event forced:(BOOL)forced;	// 0x32db9151
- (void)_centerContentIfNecessary;	// 0x32cf740d
- (void)_changedGesture:(id)gesture withEvent:(id)event;	// 0x32e3d089
- (void)_clearContentOffsetAnimation;	// 0x32e0bd55
- (double)_contentOffsetAnimationDuration;	// 0x32dd5d65
- (BOOL)_continueScrollingAtOffset:(CGPoint)offset;	// 0x32e3e091
- (int)_currentlyAbuttedContentEdges;	// 0x32e3a865
- (id)_defaultHitTest:(CGPoint)test withEvent:(id)event;	// 0x32d9ee09
- (void)_deferredBeginTouchesInContentView;	// 0x32e3e15d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x32c9e1c5
- (void)_disableScrollingIfNecessary;	// 0x32f4174d
- (void)_enableScrollingIfNecessary;	// 0x32f41715
- (void)_endGesture:(id)gesture withEvent:(id)event;	// 0x32e3d37d
- (void)_endPanWithEvent:(id)event;	// 0x32d7c215
- (void)_forceDelegateScrollViewDidZoom:(BOOL)_forceDelegateScrollView;	// 0x32e1c9ad
- (BOOL)_gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32d7395d
- (BOOL)_gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x32d77d51
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x32e3b369
- (BOOL)_getBouncingDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval lastUpdateOffset:(double)offset3 min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor7 velocity:(double *)velocity;	// 0x32d9d025
- (id)_getDelegateZoomView;	// 0x32cf75e5
- (BOOL)_getPagingDecelerationOffset:(CADoublePoint *)offset forTimeInterval:(double)timeInterval;	// 0x32dfe419
- (void)_getStandardDecelerationOffset:(double *)offset forTimeInterval:(double)timeInterval min:(double)min max:(double)max decelerationFactor:(double)factor decelerationLnFactor:(double)factor6 velocity:(double *)velocity;	// 0x32df3995
- (void)_handleSwipe:(id)swipe;	// 0x32e3c565
- (void)_hideScrollIndicators;	// 0x32ce6575
- (id)_hitTestForContentView:(CGPoint)contentView withEvent:(id)event;	// 0x32e3d765
- (double)_horizontalVelocity;	// 0x32dc6bc1
- (BOOL)_ignoreLinkedOnChecks;	// 0x32e3c679
// declared property getter: - (BOOL)_isAnimatingScroll;	// 0x32dfce7d
// declared property getter: - (BOOL)_isAnimatingZoom;	// 0x32e0814d
- (BOOL)_isAutoscrolling;	// 0x32e3dbe1
// declared property getter: - (BOOL)_isHorizontalBouncing;	// 0x32dfe2fd
- (BOOL)_isRectFullyVisible:(CGRect)visible;	// 0x32e3a5c1
- (BOOL)_isScrollingEnabled;	// 0x32e17561
// declared property getter: - (BOOL)_isVerticalBouncing;	// 0x32e3a985
- (void)_markScrollViewAnimationForKey:(id)key ofView:(id)view;	// 0x32df9c6d
- (void)_moveContentSubview:(id)subview toBack:(BOOL)back;	// 0x32d1401d
- (void)_notifyDidScroll;	// 0x32cd0721
- (CGPoint)_originalOffsetForAnimatedSetContentOffset;	// 0x32e0b7fd
- (BOOL)_ownsAnimationForKey:(id)key ofView:(id)view;	// 0x32e08185
- (CGPoint)_pageDecelerationTarget;	// 0x32e3e075
- (BOOL)_pagingLeft;	// 0x32dfd161
- (BOOL)_pagingRight;	// 0x32dfd179
- (id)_panGestureRecognizer;	// 0x32dfefbd
- (id)_parentScrollView;	// 0x32d75c5d
- (void)_pinContentOffsetToClosestPageBoundary;	// 0x32e3de61
- (void)_popTrackingRunLoopMode;	// 0x32d9df29
- (void)_populateArchivedSubviews:(id)subviews;	// 0x32e3a0c9
- (void)_prepareToPageWithHorizontalVelocity:(float)horizontalVelocity verticalVelocity:(float)velocity;	// 0x32d7ba21
- (CGRect)_rectForPageContainingView:(id)pageContainingView;	// 0x32e3dee1
- (void)_registerForRotation:(BOOL)rotation ofWindow:(id)window;	// 0x32dfc3e5
- (void)_removeScrollNotificationView:(id)view;	// 0x32d92c49
- (BOOL)_resetScrollingForGestureEvent:(id)gestureEvent;	// 0x32e3d6ad
- (void)_resetScrollingWithEvent:(GSEventRef)event;	// 0x32e3d57d
- (void)_resetScrollingWithUIEvent:(id)uievent;	// 0x32d74129
- (CADoublePoint)_rubberBandContentOffsetForOffset:(CADoublePoint)offset outsideX:(BOOL *)x outsideY:(BOOL *)y;	// 0x32d3b4bd
- (void)_runLoopModePopped:(id)popped;	// 0x32e3e095
- (float)_scrollHysteresis;	// 0x32da7d69
- (BOOL)_scrollToTop;	// 0x32e1689d
- (void)_scrollViewAnimationEnded;	// 0x32e0bc6d
- (void)_scrollViewDidEndDecelerating;	// 0x32d9e005
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x32d9bc6d
- (void)_scrollViewDidEndZooming;	// 0x32df33cd
- (id)_scrollViewTouchDelayGesture;	// 0x32d3a495
- (void)_scrollViewWillBeginDragging;	// 0x32d9b4e1
- (void)_scrollViewWillBeginZooming;	// 0x32df30fd
- (BOOL)_scrollsToMakeFirstResponderVisible;	// 0x32d5fa61
- (void)_setAutomaticContentOffsetAdjustmentEnabled:(BOOL)enabled;	// 0x32db408d
- (void)_setAutoscrolling:(BOOL)autoscrolling;	// 0x32e3db4d
- (void)_setContentOffset:(CGPoint)offset animated:(BOOL)animated animationCurve:(int)curve;	// 0x32cd2ed9
- (void)_setContentOffset:(CGPoint)offset duration:(double)duration animationCurve:(int)curve;	// 0x32e3d6c5
- (void)_setContentOffsetAnimationDuration:(double)duration;	// 0x32dd5d7d
- (void)_setContentOffsetPinned:(CGPoint)pinned;	// 0x32dc3989
- (void)_setIgnoreLinkedOnChecks:(BOOL)checks;	// 0x32d3a159
- (void)_setShowsBackgroundShadow:(BOOL)shadow;	// 0x32d1d769
- (void)_setStaysCenteredDuringPinch:(BOOL)pinch;	// 0x32e3c545
// declared property setter: - (void)_setZoomAnchorPoint:(CADoublePoint)point;	// 0x32d3a819
- (float)_shadowHeightOffset;	// 0x32d1d99d
- (void)_shiftOffset:(CGSize)offset;	// 0x32e3da89
- (BOOL)_showsBackgroundShadow;	// 0x32d389d1
- (void)_skipNextStartOffsetAdjustment;	// 0x32e0bc11
- (void)_smoothScroll:(id)scroll;	// 0x32d9c025
- (void)_startGesture:(id)gesture withEvent:(id)event;	// 0x32e3cfd1
- (void)_startTimer:(BOOL)timer;	// 0x32d9bd31
- (BOOL)_staysCenteredDuringPinch;	// 0x32df307d
- (void)_stopScrollDecelerationNotify:(BOOL)notify;	// 0x32d9dbb1
- (void)_stopScrollingAndZoomingAnimations;	// 0x32e07f0d
- (void)_stopScrollingAndZoomingAnimationsPinningToContentViewport:(BOOL)contentViewport;	// 0x32e07f21
- (void)_stopScrollingNotify:(BOOL)notify dealloc:(BOOL)dealloc pin:(BOOL)pin;	// 0x32c9e4b1
- (void)_systemGestureStateChanged:(id)changed;	// 0x32d9759d
- (double)_touchDelayForScrollDetection;	// 0x32d74b8d
- (CGPoint)_touchPositionForTouches:(id)touches;	// 0x32dcdabd
- (id)_touchedContentView;	// 0x32da12bd
- (void)_touchesEnded:(id)ended withEvent:(id)event wasCancelled:(BOOL)cancelled;	// 0x32da130d
- (void)_updatePagingGesture;	// 0x32cbd8b1
- (void)_updatePanGesture;	// 0x32d9a8c1
- (void)_updatePinchGesture;	// 0x32cbd719
- (void)_updatePinchGestureForState:(int)state;	// 0x32df2559
- (BOOL)_updateTouchPanWithStartDelta:(CGSize)startDelta event:(id)event ignoringDirectionalScroll:(BOOL)scroll;	// 0x32e3b3e9
- (BOOL)_usesDifferentHitTestForGestures;	// 0x32dcd8d9
- (double)_verticalVelocity;	// 0x32dc6ba9
- (void)_webCustomViewWillBeRemovedFromSuperview;	// 0x32e3a699
- (void)_willMoveToWindow:(id)window;	// 0x32c9e149
// declared property getter: - (CADoublePoint)_zoomAnchorPoint;	// 0x32d3b41d
- (void)_zoomAnimationDidStop;	// 0x32df9cd1
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x32e3c795
- (float)_zoomRubberBandScaleForScale:(float)scale;	// 0x32e3c68d
- (float)_zoomScaleForRubberBandScale:(float)rubberBandScale;	// 0x32e3c70d
- (float)_zoomScaleFromPresentationLayer:(BOOL)presentationLayer;	// 0x32d1f585
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration;	// 0x32df9a39
- (void)_zoomToCenter:(CGPoint)center scale:(float)scale duration:(double)duration force:(BOOL)force;	// 0x32df9a71
// converted property getter: - (BOOL)allowsMultipleFingers;	// 0x32e3aae9
// declared property getter: - (BOOL)alwaysBounceHorizontal;	// 0x32c9f609
// declared property getter: - (BOOL)alwaysBounceVertical;	// 0x32c9f75d
// converted property getter: - (CGPoint)autoscrollContentOffset;	// 0x32e3dbf9
// declared property getter: - (BOOL)bounces;	// 0x32e3a929
// converted property getter: - (BOOL)bouncesHorizontally;	// 0x32e3a945
// converted property getter: - (BOOL)bouncesVertically;	// 0x32e3a971
// declared property getter: - (BOOL)bouncesZoom;	// 0x32e3c61d
// declared property getter: - (BOOL)canCancelContentTouches;	// 0x32e3c631
- (BOOL)canHandleSwipes;	// 0x32cfc459
- (BOOL)cancelMouseTracking;	// 0x32de5155
- (void)cancelNextContentTouchEnded;	// 0x32e3c605
- (BOOL)cancelTouchTracking;	// 0x32db8e9d
- (id)commonHitTest:(id)test;	// 0x32d736e1
- (CGRect)contentFrameForView:(id)view;	// 0x32e3dc29
// declared property getter: - (UIEdgeInsets)contentInset;	// 0x32c9ef31
// declared property getter: - (CGPoint)contentOffset;	// 0x32c99221
// declared property getter: - (CGSize)contentSize;	// 0x32ce1af9
- (void)dealloc;	// 0x32db2b75
// declared property getter: - (float)decelerationRate;	// 0x32e3aa75
- (void)delayed:(id)delayed;	// 0x32e3ab41
// declared property getter: - (BOOL)delaysContentTouches;	// 0x32d74b79
// declared property getter: - (id)delegate;	// 0x32cbfe19
- (id)description;	// 0x32e3cef5
- (void)didFinishGesture:(int)gesture inView:(id)view forEvent:(GSEventRef)event;	// 0x32e3d4e5
- (void)encodeWithCoder:(id)coder;	// 0x32e3a19d
- (void)flashScrollIndicators;	// 0x32ce6401
- (BOOL)gestureRecognizer:(id)recognizer canPreventGestureRecognizer:(id)recognizer2;	// 0x32d91d95
- (BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;	// 0x32d739c9
- (void)gestureRecognizerFailed:(id)failed;	// 0x32d7b889
- (void)handlePan:(id)pan;	// 0x32d9a795
- (void)handlePinch:(id)pinch;	// 0x32df2529
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x32e3b31d
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x32d73239
// converted property getter: - (float)horizontalScrollDecelerationFactor;	// 0x32e3aa99
// declared property getter: - (int)indicatorStyle;	// 0x32e3aa85
// declared property getter: - (BOOL)isDecelerating;	// 0x32cfa751
// declared property getter: - (BOOL)isDirectionalLockEnabled;	// 0x32e3a6e1
// declared property getter: - (BOOL)isDragging;	// 0x32cfa769
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x32f01611
// declared property getter: - (BOOL)isPagingEnabled;	// 0x32dfefcd
// declared property getter: - (BOOL)isProgrammaticScrollEnabled;	// 0x32e3a73d
// declared property getter: - (BOOL)isScrollEnabled;	// 0x32d5fa65
// declared property getter: - (BOOL)isTracking;	// 0x32c9f0d9
// declared property getter: - (BOOL)isZoomBouncing;	// 0x32e3cee1
// converted property getter: - (BOOL)isZoomEnabled;	// 0x32e3a725
// declared property getter: - (BOOL)isZooming;	// 0x32d3a56d
- (void)layoutSubviews;	// 0x32cf73cd
- (float)maxVelocityInDirection:(int)direction;	// 0x32f4fdcd
// declared property getter: - (float)maximumZoomScale;	// 0x32e3a689
// declared property getter: - (float)minimumZoomScale;	// 0x32e3a679
// converted property getter: - (CGPoint)offset;	// 0x32dc3731
// declared property getter: - (id)panGestureRecognizer;	// 0x32d07369
// declared property getter: - (id)pinchGestureRecognizer;	// 0x32e3cfa1
// converted property getter: - (BOOL)preservesCenterDuringRotation;	// 0x32e3b2f5
- (void)removeFromSuperview;	// 0x32db2029
// declared property getter: - (UIEdgeInsets)scrollIndicatorInsets;	// 0x32d1f63d
- (void)scrollRectToVisible:(CGRect)visible animated:(BOOL)animated;	// 0x32d70c05
- (int)scrollableDirections;	// 0x32f4fcf1
// declared property getter: - (BOOL)scrollsToTop;	// 0x32e3c65d
// converted property setter: - (void)setAllowsMultipleFingers:(BOOL)fingers;	// 0x32e3aabd
// declared property setter: - (void)setAlwaysBounceHorizontal:(BOOL)horizontal;	// 0x32dfabdd
// declared property setter: - (void)setAlwaysBounceVertical:(BOOL)vertical;	// 0x32d1e491
// converted property setter: - (void)setAutoscrollContentOffset:(CGPoint)offset;	// 0x32e3dc19
// declared property setter: - (void)setBounces:(BOOL)bounces;	// 0x32d3a175
// converted property setter: - (void)setBouncesHorizontally:(BOOL)horizontally;	// 0x32e1d2f1
// converted property setter: - (void)setBouncesVertically:(BOOL)vertically;	// 0x32e3a959
// declared property setter: - (void)setBouncesZoom:(BOOL)zoom;	// 0x32d1e479
- (void)setBounds:(CGRect)bounds;	// 0x32ccf419
// declared property setter: - (void)setCanCancelContentTouches:(BOOL)touches;	// 0x32e3c645
// declared property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x32ceb309
// declared property setter: - (void)setContentOffset:(CGPoint)offset;	// 0x32c9f0ed
- (void)setContentOffset:(CGPoint)offset animated:(BOOL)animated;	// 0x32cd2eb5
// declared property setter: - (void)setContentSize:(CGSize)size;	// 0x32cc8ac1
// declared property setter: - (void)setDecelerationRate:(float)rate;	// 0x32d46389
// declared property setter: - (void)setDelaysContentTouches:(BOOL)touches;	// 0x32d1d751
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32cbfe29
// declared property setter: - (void)setDirectionalLockEnabled:(BOOL)enabled;	// 0x32d1d70d
- (void)setFrame:(CGRect)frame;	// 0x32cbc281
// converted property setter: - (void)setHorizontalScrollDecelerationFactor:(float)factor;	// 0x32d1d6e9
// declared property setter: - (void)setIndicatorStyle:(int)style;	// 0x32e3a9c1
// declared property setter: - (void)setMaximumZoomScale:(float)scale;	// 0x32d21609
// declared property setter: - (void)setMinimumZoomScale:(float)scale;	// 0x32d215cd
// converted property setter: - (void)setOffset:(CGPoint)offset;	// 0x32e3cfb1
// declared property setter: - (void)setPagingEnabled:(BOOL)enabled;	// 0x32d46341
// converted property setter: - (void)setPreservesCenterDuringRotation:(BOOL)rotation;	// 0x32dfc391
// declared property setter: - (void)setProgrammaticScrollEnabled:(BOOL)enabled;	// 0x32db46a9
// declared property setter: - (void)setScrollEnabled:(BOOL)enabled;	// 0x32d3a401
// declared property setter: - (void)setScrollIndicatorInsets:(UIEdgeInsets)insets;	// 0x32ceb9dd
- (void)setScrollViewOffsetPinned:(CGPoint)pinned;	// 0x3300fab1
- (void)setScrollingEnabled:(BOOL)enabled;	// 0x32e3cfc1
// declared property setter: - (void)setScrollsToTop:(BOOL)top;	// 0x32ceb291
- (void)setShowBackgroundShadow:(BOOL)shadow;	// 0x32e3b30d
// declared property setter: - (void)setShowsHorizontalScrollIndicator:(BOOL)indicator;	// 0x32cc89b9
// declared property setter: - (void)setShowsVerticalScrollIndicator:(BOOL)indicator;	// 0x32cc8a3d
// converted property setter: - (void)setTracksImmediatelyWhileDecelerating:(BOOL)decelerating;	// 0x32e3ab19
// converted property setter: - (void)setUsesGestureRecognizers:(BOOL)recognizers;	// 0x32cbc91d
// converted property setter: - (void)setVerticalScrollDecelerationFactor:(float)factor;	// 0x32d1d6f9
// converted property setter: - (void)setZoomEnabled:(BOOL)enabled;	// 0x32d21905
// declared property setter: - (void)setZoomScale:(float)scale;	// 0x32dfc4d9
- (void)setZoomScale:(float)scale animated:(BOOL)animated;	// 0x32d3a585
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate;	// 0x32d3a901
- (void)setZoomScale:(float)scale withAnchorPoint:(CADoublePoint)anchorPoint validatingScrollOffset:(BOOL)offset allowRubberbanding:(BOOL)rubberbanding animated:(BOOL)animated duration:(double)duration notifyDelegate:(BOOL)delegate force:(BOOL)force;	// 0x32d3a951
// declared property getter: - (BOOL)showsHorizontalScrollIndicator;	// 0x32e3a999
// declared property getter: - (BOOL)showsVerticalScrollIndicator;	// 0x32e3a9ad
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x32e3c5b9
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x32da092d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x32dcafb1
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x32da12e9
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x32df3541
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x32d77429
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x32dde1d9
// converted property getter: - (BOOL)tracksImmediatelyWhileDecelerating;	// 0x32d9d415
// converted property getter: - (BOOL)usesGestureRecognizers;	// 0x32cbc905
// converted property getter: - (float)verticalScrollDecelerationFactor;	// 0x32e3aaa9
- (void)willAnimateRotationToInterfaceOrientation:(id)interfaceOrientation;	// 0x32e3afb5
- (void)willRotateToInterfaceOrientation:(id)interfaceOrientation;	// 0x32e3ab45
// declared property getter: - (float)zoomScale;	// 0x32d1f571
- (void)zoomToRect:(CGRect)rect animated:(BOOL)animated;	// 0x32e3c835
@end

