/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITextEffectsOrdering.h"
#import "NSCoding.h"
#import "UIResponder.h"

@class NSMutableArray, UIViewController, CALayer, NSArray;

@interface UIView : UIResponder <UITextEffectsOrdering, NSCoding> {
@private
	CALayer *_layer;	// 4 = 0x4
	id _tapInfo;	// 8 = 0x8
	id _gestureInfo;	// 12 = 0xc
	NSMutableArray *_gestureRecognizers;	// 16 = 0x10
	NSArray *_subviewCache;	// 20 = 0x14
	float _charge;	// 24 = 0x18
	int _tag;	// 28 = 0x1c
	UIViewController *_viewDelegate;	// 32 = 0x20
	struct {
		unsigned userInteractionDisabled : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsDidScroll : 1;
		unsigned implementsMouseTracking : 1;
		unsigned hasBackgroundColor : 1;
		unsigned isOpaque : 1;
		unsigned becomeFirstResponderWhenCapable : 1;
		unsigned interceptMouseEvent : 1;
		unsigned deallocating : 1;
		unsigned debugFlash : 1;
		unsigned debugSkippedSetNeedsDisplay : 1;
		unsigned debugScheduledDisplayIsRequired : 1;
		unsigned isInAWindow : 1;
		unsigned isAncestorOfFirstResponder : 1;
		unsigned dontAutoresizeSubviews : 1;
		unsigned autoresizeMask : 6;
		unsigned patternBackground : 1;
		unsigned fixedBackgroundPattern : 1;
		unsigned dontAnimate : 1;
		unsigned superLayerIsView : 1;
		unsigned layerKitPatternDrawing : 1;
		unsigned multipleTouchEnabled : 1;
		unsigned exclusiveTouch : 1;
		unsigned hasViewController : 1;
		unsigned needsDidAppearOrDisappear : 1;
		unsigned gesturesEnabled : 1;
		unsigned deliversTouchesForGesturesToSuperview : 1;
		unsigned chargeEnabled : 1;
		unsigned skipsSubviewEnumeration : 1;
		unsigned needsDisplayOnBoundsChange : 1;
		unsigned hasTiledLayer : 1;
		unsigned hasLargeContent : 1;
		unsigned alwaysScaleContent : 1;
	} _viewFlags;	// 36 = 0x24
}
@property(assign) float alpha;	// G=0x3007c555; S=0x3007c535; converted property
@property(assign) BOOL autoresizesSubviews;	// G=0x3017fa2d; S=0x30105e99; converted property
@property(assign) unsigned autoresizingMask;	// G=0x300ce1f1; S=0x3009d92d; converted property
@property(retain) id backgroundColor;	// G=0x300f02f5; S=0x300b49fd; converted property
@property(assign) CGRect bounds;	// G=0x3007c1ad; S=0x300aeec9; converted property
@property(assign) CGPoint center;	// G=0x30099235; S=0x300af355; converted property
@property(assign) float charge;	// G=0x300919cd; S=0x300af4fd; converted property
@property(assign) BOOL clearsContextBeforeDrawing;	// G=0x301db955; S=0x301209a5; converted property
@property(assign) BOOL clipsToBounds;	// G=0x3017fa09; S=0x3008a061; converted property
@property(assign) int contentMode;	// G=0x300a94f1; S=0x3009d745; converted property
@property(assign) float contentScaleFactor;	// G=0x300977dd; S=0x3009cb39; converted property
@property(assign) CGRect contentStretch;	// G=0x301dc001; S=0x300aa3e5; converted property
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;	// G=0x300922fd; S=0x300efa3d; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x300bde7d; S=0x300a1489; converted property
@property(assign) int enabledGestures;	// G=0x300fd13d; S=0x300fe8e1; converted property
@property(assign, getter=isExclusiveTouch) BOOL exclusiveTouch;	// G=0x30091dc9; S=0x300efa59; converted property
@property(assign) CGRect frame;	// G=0x3007c239; S=0x3007c399; converted property
@property(assign) CGPoint frameOrigin;	// G=0x30175801; S=0x3007c1e5; converted property
@property(assign) id gestureDelegate;	// G=0x302161d5; S=0x300f8735; converted property
@property(retain) NSMutableArray *gestureRecognizers;	// G=0x30092311; S=0x301dc199; converted property
@property(assign, nonatomic) BOOL gesturesEnabled;	// G=0x30119695; S=0x30092f3d; 
@property(assign, getter=isHidden) BOOL hidden;	// G=0x30090e21; S=0x300a0065; converted property
@property(readonly, retain, nonatomic) CALayer *layer;	// G=0x3007c605; @synthesize=_layer
@property(assign, getter=isMultipleTouchEnabled) BOOL multipleTouchEnabled;	// G=0x3019addd; S=0x300c4d49; converted property
@property(assign) BOOL needsDisplayOnBoundsChange;	// G=0x30186ce9; S=0x300b1c65; converted property
@property(assign, getter=isOpaque) BOOL opaque;	// G=0x3009cb25; S=0x3009ffad; converted property
@property(assign) CGPoint origin;	// G=0x301757e9; S=0x3007c1d1; converted property
@property(assign) CGPoint position;	// G=0x301cafcd; S=0x301dbb7d; converted property
@property(assign) CGSize size;	// G=0x3008cb41; S=0x300c21c5; converted property
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;	// G=0x301daaa1; S=0x301daab9; 
@property(assign, nonatomic) int tag;	// G=0x300d4391; S=0x300bec61; @synthesize=_tag
@property(assign) id tapDelegate;	// G=0x301da951; S=0x301dbde5; converted property
@property(assign) CGAffineTransform transform;	// G=0x300a2f59; S=0x30099259; converted property
@property(assign, nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;	// G=0x30090e09; S=0x3008bb2d; 
@property(assign, nonatomic, getter=_viewDelegate, setter=_setViewDelegate:) UIViewController *viewDelegate;	// G=0x300b8189; S=0x300b09f1; 
+ (void)_animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x3015bfa5
+ (void)_beginDisablingPromoteDescendantToFirstResponder;	// 0x301273ed
+ (float)_currentAnimationDuration;	// 0x301da9b9
+ (void)_endDisablingPromoteDescendantToFirstResponder;	// 0x301273fd
+ (void)_inheritAnimationParameters;	// 0x30176369
+ (BOOL)_invalidatesViewUponCreation;	// 0x300fc561
+ (BOOL)_isInAnimationBlock;	// 0x3007c615
+ (void)_performWithoutAnimation:(id)animation;	// 0x300af375
+ (void)_setAnimationAttributes:(id)attributes;	// 0x301db80d
+ (void)_setAnimationFilter:(int)filter forView:(id)view;	// 0x301db721
+ (void)_setAnimationFilterValue:(float)value;	// 0x301daa4d
+ (void)_setInvalidatesViewUponCreation:(BOOL)creation;	// 0x300fc571
+ (void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;	// 0x3007d6a5
+ (void)_setupAnimationWithDuration:(double)duration delay:(double)delay view:(id)view options:(unsigned)options animations:(id)animations start:(id)start completion:(id)completion;	// 0x3009a155
+ (id)_tintColorForStyle:(int)style;	// 0x301daaf5
+ (id)_topMostView:(id)view;	// 0x301dba15
+ (void)animateWithDuration:(double)duration animations:(id)animations;	// 0x301db6c1
+ (void)animateWithDuration:(double)duration animations:(id)animations completion:(id)completion;	// 0x30198759
+ (void)animateWithDuration:(double)duration delay:(double)delay options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x3009a10d
+ (BOOL)areAnimationsEnabled;	// 0x3008e78d
+ (void)beginAnimations:(id)animations;	// 0x3009a939
+ (void)beginAnimations:(id)animations context:(void *)context;	// 0x3008e3d9
+ (void)commitAnimations;	// 0x3008ed65
+ (void)disableAnimation;	// 0x3009ecc1
+ (void)enableAnimation;	// 0x30100f01
+ (void)endAnimations;	// 0x30116bd5
+ (void)flush;	// 0x301dbfd1
+ (Class)layerClass;	// 0x3009cb05
+ (void)setAnimationAutoreverses:(BOOL)autoreverses;	// 0x301db7c1
+ (void)setAnimationBeginsFromCurrentState:(BOOL)currentState;	// 0x3008e519
+ (void)setAnimationCurve:(int)curve;	// 0x3009a979
+ (void)setAnimationDelay:(double)delay;	// 0x3016da4d
+ (void)setAnimationDelegate:(id)delegate;	// 0x3008e4b5
+ (void)setAnimationDidStopSelector:(SEL)stopSelector;	// 0x3008e4fd
+ (void)setAnimationDuration:(double)duration;	// 0x3008e495
+ (void)setAnimationFrameInterval:(double)interval;	// 0x301741c5
+ (void)setAnimationFromCurrentState:(BOOL)currentState;	// 0x301ae9e5
+ (void)setAnimationPosition:(CGPoint)position;	// 0x301da9e9
+ (void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;	// 0x301daa25
+ (void)setAnimationRepeatCount:(float)count;	// 0x301daa09
+ (void)setAnimationRoundsToInteger:(BOOL)integer;	// 0x300cf7d5
+ (void)setAnimationStartDate:(id)date;	// 0x301db7d9
+ (void)setAnimationStartTime:(double)time;	// 0x3009a959
+ (void)setAnimationTransition:(int)transition forView:(id)view;	// 0x301db4f5
+ (void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;	// 0x301db75d
+ (void)setAnimationWillStartSelector:(SEL)startSelector;	// 0x301cc9dd
+ (void)setAnimationsEnabled:(BOOL)enabled;	// 0x3008e7a1
+ (void)throttledFlush;	// 0x301dbf85
+ (void)transitionFromView:(id)view toView:(id)view2 duration:(double)duration options:(unsigned)options completion:(id)completion;	// 0x301db555
+ (void)transitionWithView:(id)view duration:(double)duration options:(unsigned)options animations:(id)animations completion:(id)completion;	// 0x301db67d
- (id)init;	// 0x300a7529
- (id)initWithCoder:(id)coder;	// 0x301dd919
- (id)initWithFrame:(CGRect)frame;	// 0x3009c44d
- (id)initWithSize:(CGSize)size;	// 0x300fdf3d
- (void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;	// 0x3007c975
- (BOOL)_alwaysHandleInteractionEvents;	// 0x301daa6d
- (BOOL)_alwaysHandleScrollerMouseEvent;	// 0x30141e75
- (void)_animateToScrollPoint:(CGPoint)scrollPoint;	// 0x30217109
- (void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;	// 0x30216311
- (BOOL)_animationIsPaused;	// 0x3015d4b9
- (void)_appendDescriptionToString:(id)string atLevel:(int)level;	// 0x301dc395
- (id)_autoresizingDescription;	// 0x301db101
- (CGColorRef)_backgroundCGColor;	// 0x300a140d
- (id)_backgroundColor;	// 0x300a13dd
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x30099141
- (BOOL)_canDrawContent;	// 0x3008a0dd
- (BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;	// 0x301db2cd
- (BOOL)_canStartRotationFromEvent:(GSEventRef)event;	// 0x30218435
- (BOOL)_canStartZoomFromEvent:(GSEventRef)event;	// 0x302180dd
- (BOOL)_cancelTapDelegateTracking;	// 0x3014acc1
- (void)_clearAnimationFilters;	// 0x301c8c1d
- (void)_clearBecomeFirstResponderWhenCapable;	// 0x30098fad
- (void)_clearBecomeFirstResponderWhenCapableOnSubtree;	// 0x30103345
- (void)_collectKeyViews:(id)views;	// 0x301dc289
- (CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;	// 0x30218861
- (BOOL)_containedInAbsoluteResponderChain;	// 0x3007d5f9
- (int)_containerStyle;	// 0x3011c1ad
- (id)_containingScrollView;	// 0x300f16a1
- (CGPoint)_convertOffset:(CGPoint)offset fromView:(id)view;	// 0x301dce79
- (CGPoint)_convertOffset:(CGPoint)offset toView:(id)view;	// 0x301dcf01
- (void *)_createIOSurfaceWithPadding:(UIEdgeInsets)padding;	// 0x301dd229
- (void)_createLayerWithFrame:(CGRect)frame;	// 0x3009c831
- (int)_depthFirstCompare:(id)compare;	// 0x3011923d
- (void)_didMoveFromWindow:(id)window toWindow:(id)window2;	// 0x300973ad
- (void)_didRemoveSubview:(id)subview;	// 0x3009ed05
- (void)_didScroll;	// 0x301daa69
- (BOOL)_doesViewControllerExistForAncestorOfView:(id)view;	// 0x300b8139
- (void)_enableLayerKitPatternDrawing:(BOOL)drawing;	// 0x300fbc21
- (id)_enclosingScrollableScrollerIncludingSelf;	// 0x301bcf4d
- (id)_enclosingScrollerIncludingSelf;	// 0x301dbf05
- (id)_findFirstSubviewWantingToBecomeFirstResponder;	// 0x3008bc81
- (void)_gestureChanged:(int)changed event:(GSEventRef)event;	// 0x30216e69
- (void)_gestureEnded:(GSEventRef)ended;	// 0x3009770d
- (id)_gestureInfo;	// 0x300f8759
- (id)_gestureRecognizers;	// 0x30119355
- (id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;	// 0x30141f41
- (id)_interceptEvent:(id)event;	// 0x301db3d5
- (id)_interceptMouseEvent:(GSEventRef)event;	// 0x301db415
- (float)_internalScaleForScale:(float)scale;	// 0x302169d5
- (void)_invalidateLayerContents;	// 0x301db455
- (void)_invalidateSubviewCache;	// 0x3007cd2d
- (BOOL)_isAncestorOfFirstResponder;	// 0x3007cd15
- (BOOL)_isChargeEnabled;	// 0x301174cd
- (BOOL)_isInAWindow;	// 0x301daa71
- (BOOL)_isRootForKeyResponderCycle;	// 0x301daa89
- (BOOL)_isRubberBanding;	// 0x30216ad9
- (BOOL)_isScrollingEnabled;	// 0x301daad9
- (id)_layer;	// 0x300918fd
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;	// 0x3007cda1
- (void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;	// 0x3007cdc9
- (float)_minimumZoomScaleDelta;	// 0x302161b5
- (void)_mouseDown:(GSEventRef)down;	// 0x301db355
- (void)_mouseDragged:(GSEventRef)dragged;	// 0x301db325
- (void)_mouseUp:(GSEventRef)up;	// 0x301db2f5
- (void)_movedToFront;	// 0x300d3efd
- (id)_nextKeyResponder;	// 0x301dbcb9
- (void)_populateArchivedSubviews:(id)subviews;	// 0x301db255
- (void)_postMovedFromSuperview:(id)superview;	// 0x300972c5
- (id)_previousKeyResponder;	// 0x301dbb91
- (Class)_printFormatterClass;	// 0x3034b46d
- (void)_promoteDescendantToFirstResponderIfNecessary;	// 0x3008bc39
- (void)_removeAllAnimations:(BOOL)animations;	// 0x300e1789
- (void)_removeFirstResponderFromSubtree;	// 0x3018f4fd
- (void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;	// 0x301dd06d
- (void)_resetZoomingWithEvent:(GSEventRef)event;	// 0x30218029
- (id)_rootForKeyResponderCycle;	// 0x301db385
- (void)_rotateFromEvent:(GSEventRef)event;	// 0x302182d1
- (void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;	// 0x30216765
- (float)_rubberBandScaleForScale:(float)scale;	// 0x30217cd1
- (void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;	// 0x30217af5
- (float)_scaleForInternalScale:(float)internalScale;	// 0x302168bd
- (id)_scriptingInfo;	// 0x3017e1ad
- (CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;	// 0x30217795
- (id)_scroller;	// 0x300fede9
- (CGSize)_scrollerContentSize;	// 0x302174ad
- (void)_setAlwaysScaleContent:(BOOL)content;	// 0x300b1d09
- (void)_setBackgroundCGColor:(CGColorRef)color;	// 0x300b4a6d
- (void)_setBackgroundColor:(id)color;	// 0x300b4a11
- (void)_setChargeEnabled:(BOOL)enabled;	// 0x301732b1
- (void)_setContentImage:(id)image;	// 0x300c2f89
- (void)_setContentsTransform:(CGAffineTransform)transform;	// 0x301db281
- (void)_setGestureInfoZoomScale:(float)scale;	// 0x30216b3d
- (void)_setInterceptMouseEvent:(BOOL)event;	// 0x300e12f9
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x3007d751
- (void)_setRotationAnimationProgress:(id)progress;	// 0x302166e1
- (void)_setShouldRasterize:(BOOL)_set;	// 0x301db99d
// declared property setter: - (void)_setViewDelegate:(id)delegate;	// 0x300b09f1
- (void)_setZoomAnimationProgress:(id)progress;	// 0x30217ea9
- (void)_setZoomScale:(float)scale duration:(double)duration;	// 0x3021892d
- (BOOL)_shouldAnimatePropertyWithKey:(id)key;	// 0x3009a995
- (BOOL)_shouldResignFirstResponderWithInteractionDisabled;	// 0x30098e1d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3007cd01
- (void)_startGesture:(int)gesture event:(GSEventRef)event;	// 0x30216fd1
- (BOOL)_startRotationFromEvent:(GSEventRef)event;	// 0x3021668d
- (BOOL)_startZoomFromEvent:(GSEventRef)event;	// 0x30218181
- (void)_stopGesture:(int)gesture event:(GSEventRef)event;	// 0x30216ed1
- (void)_stopRotationFromEvent:(GSEventRef)event;	// 0x30216599
- (void)_stopZoomFromEvent:(GSEventRef)event;	// 0x30217551
- (int)_style;	// 0x3011c1f5
- (BOOL)_subclassImplementsDrawRect;	// 0x3009c7fd
- (void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x3007cd71
- (id)_syntheticTouch;	// 0x3024c991
- (id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;	// 0x3024cc49
- (int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;	// 0x301dcce5
- (void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;	// 0x30097295
- (void)_updateNeedsDisplayOnBoundsChange;	// 0x300b1c95
- (BOOL)_usesDifferentHitTestForGestures;	// 0x3009193d
- (id)_viewControllerForAncestor;	// 0x301db475
// declared property getter: - (id)_viewDelegate;	// 0x300b8189
- (id)_viewIndexPath;	// 0x301dbabd
- (void)_willMoveToWindow:(id)window;	// 0x300971bd
- (void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;	// 0x300970f5
- (id)_window;	// 0x3007d831
- (float)_zoomAnimationDurationForScale:(float)scale;	// 0x30217c31
- (float)_zoomAnimationProgress;	// 0x302162ed
- (float)_zoomScale;	// 0x30216221
- (void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;	// 0x30217bc9
- (void)_zoomToScale:(float)scale event:(GSEventRef)event;	// 0x302176c9
- (void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;	// 0x302172b9
- (void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;	// 0x30217239
- (BOOL)_zoomWithEvent:(GSEventRef)event;	// 0x30218a89
- (id)actionForLayer:(id)layer forKey:(id)key;	// 0x3007c829
- (void)addAnimation:(id)animation forKey:(id)key;	// 0x301db701
- (void)addGestureRecognizer:(id)recognizer;	// 0x300c5819
- (void)addSubview:(id)subview;	// 0x3007c955
// converted property getter: - (float)alpha;	// 0x3007c555
- (void)animator:(id)animator startAnimation:(id)animation;	// 0x301479ed
- (void)animator:(id)animator stopAnimation:(id)animation;	// 0x30216b61
// converted property getter: - (BOOL)autoresizesSubviews;	// 0x3017fa2d
// converted property getter: - (unsigned)autoresizingMask;	// 0x300ce1f1
// converted property getter: - (id)backgroundColor;	// 0x300f02f5
// converted property getter: - (CGRect)bounds;	// 0x3007c1ad
- (void)bringSubviewToFront:(id)front;	// 0x300d3e09
- (BOOL)canHandleGestures;	// 0x302161bd
- (BOOL)canHandleSwipes;	// 0x30097709
- (BOOL)cancelMouseTracking;	// 0x301da971
- (BOOL)cancelTouchTracking;	// 0x301da989
// converted property getter: - (CGPoint)center;	// 0x30099235
// converted property getter: - (float)charge;	// 0x300919cd
// converted property getter: - (BOOL)clearsContextBeforeDrawing;	// 0x301db955
// converted property getter: - (BOOL)clipsToBounds;	// 0x3017fa09
- (int)compareTextEffectsOrdering:(id)ordering;	// 0x3015fc99
- (BOOL)containsView:(id)view;	// 0x300eab29
// converted property getter: - (int)contentMode;	// 0x300a94f1
// converted property getter: - (float)contentScaleFactor;	// 0x300977dd
// converted property getter: - (CGRect)contentStretch;	// 0x301dc001
- (CGPoint)convertPoint:(CGPoint)point fromView:(id)view;	// 0x30090fd5
- (CGPoint)convertPoint:(CGPoint)point toView:(id)view;	// 0x3012bb91
- (CGRect)convertRect:(CGRect)rect fromView:(id)view;	// 0x300ef3c9
- (CGRect)convertRect:(CGRect)rect toView:(id)view;	// 0x300b882d
- (CGSize)convertSize:(CGSize)size fromView:(id)view;	// 0x301dcf89
- (CGSize)convertSize:(CGSize)size toView:(id)view;	// 0x301dc0b5
- (CGImageRef)createSnapshotWithRect:(CGRect)rect;	// 0x301db4b5
- (void)dealloc;	// 0x3009ed49
- (void)deferredBecomeFirstResponder;	// 0x3019b8d1
// declared property getter: - (BOOL)deliversTouchesForGesturesToSuperview;	// 0x300922fd
- (id)description;	// 0x3017f4bd
- (void)didAddSubview:(id)subview;	// 0x3007cf41
- (void)didMoveToSuperview;	// 0x30097805
- (void)didMoveToWindow;	// 0x300977fd
- (void)drawLayer:(id)layer inContext:(CGContextRef)context;	// 0x3008c8fd
- (void)drawRect:(CGRect)rect;	// 0x301da9ad
- (void)drawRect:(CGRect)rect forViewPrintFormatter:(id)viewPrintFormatter;	// 0x3034b3e9
// converted property getter: - (int)enabledGestures;	// 0x300fd13d
- (void)encodeWithCoder:(id)coder;	// 0x301dd445
- (BOOL)endEditing:(BOOL)editing;	// 0x3010f541
- (void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;	// 0x3014cdc5
- (CGRect)extent;	// 0x301dd3b1
- (void)forceDisplayIfNeeded;	// 0x301db8a9
// converted property getter: - (CGRect)frame;	// 0x3007c239
// converted property getter: - (CGPoint)frameOrigin;	// 0x30175801
- (void)gestureChanged:(GSEventRef)changed;	// 0x30218635
// converted property getter: - (id)gestureDelegate;	// 0x302161d5
- (void)gestureEnded:(GSEventRef)ended;	// 0x302185f5
// converted property getter: - (id)gestureRecognizers;	// 0x30092311
- (void)gestureStarted:(GSEventRef)started;	// 0x30218745
// declared property getter: - (BOOL)gesturesEnabled;	// 0x30119695
- (CGRect)hitRect;	// 0x30176aed
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30141be9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x30090c95
- (BOOL)ignoresMouseEvents;	// 0x30090da1
- (void)insertSubview:(id)subview above:(id)above;	// 0x301dbb5d
- (void)insertSubview:(id)subview aboveSubview:(id)subview2;	// 0x300ab205
- (void)insertSubview:(id)subview atIndex:(int)index;	// 0x300a0089
- (void)insertSubview:(id)subview below:(id)below;	// 0x3016da2d
- (void)insertSubview:(id)subview belowSubview:(id)subview2;	// 0x300b07b1
- (BOOL)isAccessibilityElementByDefault;	// 0x3028f421
- (BOOL)isDescendantOfView:(id)view;	// 0x30092ed5
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f425
// converted property getter: - (BOOL)isEnabled;	// 0x300bde7d
// converted property getter: - (BOOL)isExclusiveTouch;	// 0x30091dc9
// converted property getter: - (BOOL)isHidden;	// 0x30090e21
- (BOOL)isHiddenOrHasHiddenAncestor;	// 0x301db8ed
// converted property getter: - (BOOL)isMultipleTouchEnabled;	// 0x3019addd
// converted property getter: - (BOOL)isOpaque;	// 0x3009cb25
// declared property getter: - (BOOL)isUserInteractionEnabled;	// 0x30090e09
// declared property getter: - (id)layer;	// 0x3007c605
- (void)layoutBelowIfNeeded;	// 0x300af3c9
- (void)layoutIfNeeded;	// 0x3007c5c1
- (void)layoutSublayersOfLayer:(id)layer;	// 0x3007c5e1
- (void)layoutSubviews;	// 0x30095a01
- (void)movedFromSuperview:(id)superview;	// 0x30097801
- (void)movedFromWindow:(id)window;	// 0x3009ed01
- (void)movedToSuperview:(id)superview;	// 0x3007cf3d
- (void)movedToWindow:(id)window;	// 0x300977d9
- (BOOL)needsDisplay;	// 0x301db979
// converted property getter: - (BOOL)needsDisplayOnBoundsChange;	// 0x30186ce9
- (BOOL)needsWebDocumentViewEventsDirectly;	// 0x3024d441
- (CGImageRef)newSnapshotWithRect:(CGRect)rect;	// 0x301dc6bd
- (id)nextResponder;	// 0x3007d435
// converted property getter: - (CGPoint)origin;	// 0x301757e9
- (BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;	// 0x30141d3d
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x30090e45
// converted property getter: - (CGPoint)position;	// 0x301cafcd
- (id)recursiveDescription;	// 0x301db0c9
- (void)recursivelyForceDisplayIfNeeded;	// 0x301db82d
- (void)reduceWidth:(float)width;	// 0x301bd7f9
- (void)removeAllGestureRecognizers;	// 0x3009ef21
- (void)removeFromSuperview;	// 0x3008b489
- (void)removeGestureRecognizer:(id)recognizer;	// 0x300fe1c9
- (void)resizeSubviewsWithOldSize:(CGSize)oldSize;	// 0x30097045
- (void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;	// 0x300cacfd
- (void)rotateToDegrees:(float)degrees;	// 0x3021827d
- (float)rotationDegrees;	// 0x302161f9
- (id)scriptingInfoWithChildren;	// 0x3017e07d
- (void)sendSubviewToBack:(id)back;	// 0x300d3cc5
// converted property setter: - (void)setAlpha:(float)alpha;	// 0x3007c535
// converted property setter: - (void)setAutoresizesSubviews:(BOOL)subviews;	// 0x30105e99
// converted property setter: - (void)setAutoresizingMask:(unsigned)mask;	// 0x3009d92d
// converted property setter: - (void)setBackgroundColor:(id)color;	// 0x300b49fd
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x300aeec9
// converted property setter: - (void)setCenter:(CGPoint)center;	// 0x300af355
// converted property setter: - (void)setCharge:(float)charge;	// 0x300af4fd
- (void)setClearsContext:(BOOL)context;	// 0x301db8c9
// converted property setter: - (void)setClearsContextBeforeDrawing:(BOOL)drawing;	// 0x301209a5
- (void)setClipsSubviews:(BOOL)subviews;	// 0x300b4fa1
// converted property setter: - (void)setClipsToBounds:(BOOL)bounds;	// 0x3008a061
// converted property setter: - (void)setContentMode:(int)mode;	// 0x3009d745
// converted property setter: - (void)setContentScaleFactor:(float)factor;	// 0x3009cb39
// converted property setter: - (void)setContentStretch:(CGRect)stretch;	// 0x300aa3e5
- (void)setContentsPosition:(int)position;	// 0x300b4e01
// declared property setter: - (void)setDeliversTouchesForGesturesToSuperview:(BOOL)superview;	// 0x300efa3d
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x300a1489
// converted property setter: - (void)setEnabledGestures:(int)gestures;	// 0x300fe8e1
// converted property setter: - (void)setExclusiveTouch:(BOOL)touch;	// 0x300efa59
- (void)setFixedBackgroundPattern:(BOOL)pattern;	// 0x30110db5
// converted property setter: - (void)setFrame:(CGRect)frame;	// 0x3007c399
- (void)setFrame:(CGRect)frame forFields:(int)fields;	// 0x301dc025
// converted property setter: - (void)setFrameOrigin:(CGPoint)origin;	// 0x3007c1e5
// converted property setter: - (void)setGestureDelegate:(id)delegate;	// 0x300f8735
// converted property setter: - (void)setGestureRecognizers:(id)recognizers;	// 0x301dc199
// declared property setter: - (void)setGesturesEnabled:(BOOL)enabled;	// 0x30092f3d
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x300a0065
// converted property setter: - (void)setMultipleTouchEnabled:(BOOL)enabled;	// 0x300c4d49
- (void)setNeedsDisplay;	// 0x3008a085
- (void)setNeedsDisplayInRect:(CGRect)rect;	// 0x30093fbd
// converted property setter: - (void)setNeedsDisplayOnBoundsChange:(BOOL)change;	// 0x300b1c65
- (void)setNeedsLayout;	// 0x3007c5a1
// converted property setter: - (void)setOpaque:(BOOL)opaque;	// 0x3009ffad
// converted property setter: - (void)setOrigin:(CGPoint)origin;	// 0x3007c1d1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x301dbb7d
- (void)setRotationBy:(float)by;	// 0x301dc511
- (void)setRotationDegrees:(float)degrees duration:(double)duration;	// 0x302163c9
// converted property setter: - (void)setSize:(CGSize)size;	// 0x300c21c5
// declared property setter: - (void)setSkipsSubviewEnumeration:(BOOL)enumeration;	// 0x301daab9
// declared property setter: - (void)setTag:(int)tag;	// 0x300bec61
// converted property setter: - (void)setTapDelegate:(id)delegate;	// 0x301dbde5
// converted property setter: - (void)setTransform:(CGAffineTransform)transform;	// 0x30099259
// declared property setter: - (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x3008bb2d
- (void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;	// 0x300febe1
- (void)setValue:(id)value forKey:(id)key;	// 0x301dc815
// converted property getter: - (CGSize)size;	// 0x3008cb41
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x301c7329
- (void)sizeToFit;	// 0x300a2e91
// declared property getter: - (BOOL)skipsSubviewEnumeration;	// 0x301daaa1
- (void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;	// 0x30177bcd
- (int)stateForGestureType:(int)gestureType;	// 0x30216249
- (void)stopHeartbeat:(SEL)heartbeat;	// 0x3017dd5d
- (id)subviews;	// 0x30090e69
- (id)superview;	// 0x3007c179
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x301da9a1
// declared property getter: - (int)tag;	// 0x300d4391
// converted property getter: - (id)tapDelegate;	// 0x301da951
- (int)textEffectsVisibilityLevel;	// 0x3015fd0d
- (int)textEffectsVisibilityLevelWhenKey;	// 0x3028c4c5
- (id)textInputView;	// 0x3015b1ed
// converted property getter: - (CGAffineTransform)transform;	// 0x300a2f59
- (BOOL)useBlockyMagnificationInClassic;	// 0x301daad5
- (id)valueForGestureAttribute:(int)gestureAttribute;	// 0x30216441
- (void)viewDidMoveToSuperview;	// 0x301da9a9
- (id)viewPrintFormatter;	// 0x3034b429
- (void)viewWillMoveToSuperview:(id)view;	// 0x301da9a5
- (id)viewWithTag:(int)tag;	// 0x300b9955
- (CGRect)visibleBounds;	// 0x300d0d0d
- (void)willMoveToSuperview:(id)superview;	// 0x30097291
- (void)willMoveToWindow:(id)window;	// 0x3009728d
- (void)willRemoveSubview:(id)subview;	// 0x3009ecd1
- (id)window;	// 0x3007ccf5
- (void)zoomToScale:(float)scale;	// 0x302179a9
@end
