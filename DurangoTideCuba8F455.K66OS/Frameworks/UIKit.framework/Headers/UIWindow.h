/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIColor, NSMutableArray, UIViewController, CALayer, UIScreen, UIResponder, NSUndoManager;

@interface UIWindow : UIView {
@private
	id _delegate;	// 44 = 0x2c
	float _windowLevel;	// 48 = 0x30
	float _windowSublevel;	// 52 = 0x34
	id _layerContext;	// 56 = 0x38
	UIView *_lastMouseDownView;	// 60 = 0x3c
	UIView *_lastMouseEnteredView;	// 64 = 0x40
	UIResponder *_firstResponder;	// 68 = 0x44
	id _fingerInfo;	// 72 = 0x48
	id _touchData;	// 76 = 0x4c
	int _viewOrientation;	// 80 = 0x50
	UIView *_exclusiveTouchView;	// 84 = 0x54
	NSUndoManager *_undoManager;	// 88 = 0x58
	UIScreen *_screen;	// 92 = 0x5c
	CALayer *_transformLayer;	// 96 = 0x60
	NSMutableArray *_rotationViewControllers;	// 100 = 0x64
	UIViewController *_rootViewController;	// 104 = 0x68
	UIColor *_savedBackgroundColor;	// 108 = 0x6c
	struct {
		unsigned delegateWillRotate : 1;
		unsigned delegateDidRotate : 1;
		unsigned delegateWillAnimateFirstHalf : 1;
		unsigned delegateDidAnimationFirstHalf : 1;
		unsigned delegateWillAnimateSecondHalf : 1;
		unsigned autorotatesToPortrait : 1;
		unsigned autorotatesToPortraitUpsideDown : 1;
		unsigned autorotatesToLandscapeLeft : 1;
		unsigned autorotatesToLandscapeRight : 1;
		unsigned dontBecomeKeyOnOrderFront : 1;
		unsigned output : 1;
		unsigned inGesture : 1;
		unsigned trackingStatusBar : 1;
		unsigned cancelScroller : 1;
		unsigned bitsPerComponent : 4;
		unsigned autorotates : 1;
		unsigned isRotating : 1;
		unsigned isUsingOnePartRotationAnimation : 1;
		unsigned isHandlingContentRotation : 1;
		unsigned disableAutorotationCount : 4;
		unsigned needsAutorotationWhenReenabled : 1;
		unsigned forceTwoPartRotationAnimation : 1;
		unsigned orderKeyboardInAfterRotating : 1;
		unsigned roundedCorners : 4;
		unsigned resizesToFullScreen : 1;
		unsigned keepContextInBackground : 1;
		unsigned ignoreSetHidden : 1;
		unsigned forceVisibleOnInit : 1;
		unsigned settingFirstResponder : 1;
	} _windowFlags;	// 112 = 0x70
	id _windowController;	// 120 = 0x78
}
@property(assign) BOOL autorotates;	// G=0x301d6a65; S=0x301d7319; converted property
@property(retain) id contentView;	// G=0x301d70a1; S=0x300f88c1; converted property
@property(assign) id delegate;	// G=0x300b9fc5; S=0x300ba005; converted property
@property(readonly, retain) UIResponder *firstResponder;	// G=0x3007d4ed; converted property
@property(assign) BOOL keepContextInBackground;	// G=0x300e39f1; S=0x301d8c09; converted property
@property(readonly, assign, nonatomic, getter=isKeyWindow) BOOL keyWindow;	// G=0x3007d845; 
@property(assign) float level;	// G=0x3009a7b1; S=0x301ca651; converted property
@property(assign) BOOL resizesToFullScreen;	// G=0x301d6ac1; S=0x301d6ad9; converted property
@property(retain, nonatomic) UIViewController *rootViewController;	// G=0x300baff5; S=0x301d7499; @synthesize=_rootViewController
@property(retain, nonatomic) UIScreen *screen;	// G=0x30090b39; S=0x301d76dd; 
@property(readonly, retain) NSUndoManager *undoManager;	// G=0x301d7055; converted property
@property(assign, nonatomic) float windowLevel;	// G=0x300910a9; S=0x300ac215; 
+ (void)_clearKeyWindowStack;	// 0x301d8cb5
+ (id)_findWithDisplayPoint:(CGPoint)displayPoint;	// 0x301d6ead
+ (id)_hitTestToPoint:(CGPoint)point pathIndex:(int)index forEvent:(id)event;	// 0x300909d9
+ (id)_ioSurfacePropertyDictionaryForRect:(CGRect)rect usePurpleGfx:(BOOL)gfx;	// 0x301d8ccd
+ (unsigned)_keyWindowStackSize;	// 0x3014e535
+ (void)_noteStatusBarHeightChanged:(float)changed oldHeight:(float)height;	// 0x301d89f1
+ (void)_popKeyWindow;	// 0x3018f645
+ (void)_prepareWindowsForAppResume;	// 0x301d8c5d
+ (void)_prepareWindowsForAppSuspend;	// 0x300e395d
+ (void)_pushKeyWindow:(id)window;	// 0x3018dde9
+ (void)_setKeyWindowStackEnabled:(BOOL)enabled;	// 0x3019b911
+ (id)allWindowsIncludingInternalWindows:(BOOL)windows onlyVisibleWindows:(BOOL)windows2;	// 0x3009a689
+ (CGRect)constrainFrameToScreen:(CGRect)screen;	// 0x30101b39
+ (void *)createIOSurfaceWithContextId:(unsigned)contextId frame:(CGRect)frame;	// 0x301d6fb1
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame;	// 0x301d6f75
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame outTransform:(CGAffineTransform *)transform;	// 0x301d6f39
+ (void *)createIOSurfaceWithContextIds:(const unsigned *)contextIds count:(unsigned)count frame:(CGRect)frame usePurpleGfx:(BOOL)gfx outTransform:(CGAffineTransform *)transform;	// 0x301d8ead
+ (void *)createRotatedCGImageFromIOSurface:(void *)iosurface;	// 0x301da451
+ (void *)createScreenIOSurface;	// 0x301d90b9
+ (id)keyWindow;	// 0x300badcd
+ (void)setAllWindowsKeepContextInBackground:(BOOL)background;	// 0x301d8a79
- (id)initWithCoder:(id)coder;	// 0x301d7ac5
- (id)initWithContentRect:(CGRect)contentRect;	// 0x300f86b9
- (id)initWithFrame:(CGRect)frame;	// 0x300a75fd
- (void)_addRotationViewController:(id)controller;	// 0x301d73e5
- (BOOL)_becomeFirstResponderWhenPossible;	// 0x301d6a9d
- (void)_beginModalSession;	// 0x301d892d
- (BOOL)_canStealStatusBarTap:(GSEventRef)tap location:(CGPoint)location;	// 0x301d814d
- (BOOL)_clearMouseView;	// 0x3009a7c1
- (void)_clearPendingKeyboardChanges;	// 0x301d6a31
- (id)_clientsForRotation;	// 0x300ba8bd
- (void)_commonInit;	// 0x300a772d
- (BOOL)_containedInAbsoluteResponderChain;	// 0x301d6a2d
- (unsigned)_contextId;	// 0x300ac395
- (CGPoint)_convertOffset:(CGPoint)offset fromWindow:(id)window;	// 0x301da215
- (CGPoint)_convertOffset:(CGPoint)offset toWindow:(id)window;	// 0x301d79b9
- (void)_createContext;	// 0x300a7b55
- (int)_degreesToRotateFromInterfaceOrientation:(int)interfaceOrientation toInterfaceOrientation:(int)interfaceOrientation2;	// 0x30123e79
- (void)_destroyContext;	// 0x300e3a1d
- (BOOL)_disableEdgeAntialiasing;	// 0x300a8129
- (BOOL)_disableGroupOpacity;	// 0x300acb49
- (BOOL)_disableViewScaling;	// 0x301d756d
- (void)_endModalSession;	// 0x301d7c05
- (id)_exclusiveTouchView;	// 0x300922ed
- (void)_finishedFirstHalfRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x301d7e05
- (void)_finishedFullRotation:(id)rotation finished:(id)finished context:(id)context;	// 0x30126b91
- (id)_firstResponder;	// 0x3007d4b9
- (void)_forceTwoPartRotationAnimation:(BOOL)animation;	// 0x301d6a49
- (void)_handleDeviceOrientationChange:(id)change;	// 0x300bb739
- (void)_handleMouseDown:(GSEventRef)down;	// 0x301d84bd
- (void)_handleMouseDragged:(GSEventRef)dragged;	// 0x301d7479
- (void)_handleMouseEntered:(GSEventRef)entered;	// 0x301d8349
- (void)_handleMouseExited:(GSEventRef)exited;	// 0x301d7445
- (void)_handleMouseMoved:(GSEventRef)moved;	// 0x301d8269
- (void)_handleMouseUp:(GSEventRef)up;	// 0x301d8415
- (void)_handleStatusBarOrientationChange:(id)change;	// 0x3017b9e1
- (BOOL)_hasContext;	// 0x301d6a19
- (BOOL)_ignoresHitTest;	// 0x30090b35
- (BOOL)_isAnyWindowRotating;	// 0x3017ba25
- (BOOL)_isClassicControllerWindow;	// 0x301d6a15
- (BOOL)_isScrollingEnabledForView:(id)view;	// 0x301d85fd
- (BOOL)_isSettingFirstResponder;	// 0x3007d47d
- (BOOL)_isStatusBarWindow;	// 0x301d6aa1
- (BOOL)_isTextEffectsWindow;	// 0x3028c279
- (BOOL)_isWindowServerHostingManaged;	// 0x300a8165
- (void)_matchDeviceBounds;	// 0x3028c46d
- (void)_orderFrontWithoutMakingKey;	// 0x300ac27d
- (BOOL)_pointInStatusBar:(CGPoint)statusBar;	// 0x301d80d5
- (void)_positionHeaderView:(id)view andFooterView:(id)view2 outsideContentViewForInterfaceOrientation:(int)interfaceOrientation;	// 0x301d9ee5
- (void)_registerChargedView:(id)view;	// 0x300b898d
- (void)_registerScrollToTopView:(id)topView;	// 0x300cec65
- (void)_registerSwipeView:(id)view;	// 0x300cec15
- (void)_removeRotationViewController:(id)controller;	// 0x301d73c5
- (id)_rotationViewControllers;	// 0x300ba28d
- (void)_sendGesturesForEvent:(id)event;	// 0x300925b9
- (void)_sendTouchesForEvent:(id)event;	// 0x30092a85
- (void)_setCancelScroller:(BOOL)scroller;	// 0x301d6aa5
- (void)_setExclusiveTouchView:(id)view;	// 0x3015ddd1
- (void)_setFirstResponder:(id)responder;	// 0x3007d651
- (void)_setHidden:(BOOL)hidden forced:(BOOL)forced;	// 0x300a827d
- (void)_setIsSettingFirstResponder:(BOOL)responder;	// 0x3007d585
- (void)_setLayerHidden:(BOOL)hidden;	// 0x300a839d
- (void)_setMouseDownView:(id)view withEvent:(GSEventRef)event;	// 0x3014393d
- (void)_setMouseEnteredView:(id)view;	// 0x3009a8fd
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x301d70f9
- (void)_setRotatableClient:(id)client toOrientation:(int)orientation updateStatusBar:(BOOL)bar duration:(double)duration force:(BOOL)force;	// 0x30122fa5
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration;	// 0x301d72e5
- (void)_setRotatableViewOrientation:(int)orientation duration:(double)duration force:(BOOL)force;	// 0x30127641
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x300ba795
- (void)_slideFooterFromOrientation:(int)orientation toOrientation:(int)orientation2 startSnapshot:(id)snapshot endSnapshot:(id)snapshot4 duration:(double)duration;	// 0x301da571
- (void)_slideHeaderView:(id)view andFooterView:(id)view2 offScreen:(BOOL)screen forInterfaceOrientation:(int)interfaceOrientation;	// 0x301d9d55
- (void)_springBoardWorkaroundRemoveFromKeyWindowStack;	// 0x301d6a99
- (void)_statusBarMouseDown:(GSEventRef)down;	// 0x301d95a9
- (void)_statusBarMouseUp:(GSEventRef)up;	// 0x301d8861
- (void)_tagAsSpringboardPresentationWindow;	// 0x301d75d9
- (id)_touchData;	// 0x30091d35
- (CGPoint)_transformDisplayToWindowCoordinates:(CGPoint)windowCoordinates;	// 0x301d9579
- (void)_unregisterChargedView:(id)view;	// 0x300f7c11
- (void)_unregisterScrollToTopView:(id)topView;	// 0x300f7bf9
- (void)_unregisterSwipeView:(id)view;	// 0x300f7aa9
- (void)_updateInterfaceOrientationFromDeviceOrientation;	// 0x301d7331
- (void)_updateInterfaceOrientationFromDeviceOrientation:(BOOL)deviceOrientation;	// 0x300bb7f5
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x301d712d
- (void)_updateStatusBarToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration fenceID:(int)anId animation:(int)animation;	// 0x301d7169
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;	// 0x301d7349
- (void)_updateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration force:(BOOL)force;	// 0x300bb8a1
- (void)_updateTransformLayer;	// 0x300a77f1
- (void)_updateTransformLayerForClassicPresentation;	// 0x301d7cc1
- (id)_window;	// 0x30202795
- (void)addRootViewControllerViewIfPossible;	// 0x300ac295
// converted property getter: - (BOOL)autorotates;	// 0x301d6a65
- (void)awakeFromNib;	// 0x301d7a41
- (void)becomeKeyWindow;	// 0x300bae3d
- (void)beginDisablingInterfaceAutorotation;	// 0x300cea5d
- (int)bitsPerComponent;	// 0x301d6a7d
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x301c1025
// converted property getter: - (id)contentView;	// 0x301d70a1
- (CGPoint)convertDeviceToWindow:(CGPoint)window;	// 0x301d78f9
- (CGPoint)convertPoint:(CGPoint)point fromWindow:(id)window;	// 0x30091881
- (CGPoint)convertPoint:(CGPoint)point toWindow:(id)window;	// 0x3009553d
- (CGRect)convertRect:(CGRect)rect fromWindow:(id)window;	// 0x301032a5
- (CGRect)convertRect:(CGRect)rect toWindow:(id)window;	// 0x300b889d
- (CGPoint)convertWindowToDevice:(CGPoint)device;	// 0x301d7959
- (void *)createIOSurface;	// 0x301d767d
- (void *)createIOSurfaceWithFrame:(CGRect)frame;	// 0x301d6ed9
- (void)dealloc;	// 0x3017daf1
- (id)defaultFirstResponder;	// 0x300bafb9
// converted property getter: - (id)delegate;	// 0x300b9fc5
- (void)encodeWithCoder:(id)coder;	// 0x301d75f5
- (void)endDisablingInterfaceAutorotation;	// 0x300cfabd
- (void)endDisablingInterfaceAutorotationAnimated:(BOOL)animated;	// 0x300cfad5
// converted property getter: - (id)firstResponder;	// 0x3007d4ed
- (void)handleStatusBarChangeFromHeight:(float)height toHeight:(float)height2;	// 0x301da29d
- (int)interfaceOrientation;	// 0x3008b3fd
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x3028f42d
- (BOOL)isInterfaceAutorotationDisabled;	// 0x300bb7d1
- (BOOL)isInternalWindow;	// 0x300e306d
// declared property getter: - (BOOL)isKeyWindow;	// 0x3007d845
- (BOOL)isRotating;	// 0x300b86d9
- (BOOL)isUsingOnePartRotationAnimation;	// 0x3015bf69
// converted property getter: - (BOOL)keepContextInBackground;	// 0x300e39f1
// converted property getter: - (float)level;	// 0x3009a7b1
- (void)makeKey:(id)key;	// 0x3018fd51
- (void)makeKeyAndOrderFront:(id)front;	// 0x3010ece1
- (void)makeKeyAndVisible;	// 0x300bac51
- (void)makeKeyWindow;	// 0x300bac79
- (void)matchDeviceOrientation;	// 0x3028c2dd
- (id)nextResponder;	// 0x3007dc65
- (void)orderFront:(id)front;	// 0x30103161
- (void)orderOut:(id)anOut;	// 0x3018fc19
- (void)redo:(id)redo;	// 0x301d6ff5
- (void)removeFromSuperview;	// 0x301d6af5
- (id)representation;	// 0x3017df9d
- (void)resignKeyWindow;	// 0x3018deb1
// converted property getter: - (BOOL)resizesToFullScreen;	// 0x301d6ac1
// declared property getter: - (id)rootViewController;	// 0x300baff5
// declared property getter: - (id)screen;	// 0x30090b39
- (void)sendEvent:(id)event;	// 0x30092469
// converted property setter: - (void)setAutorotates:(BOOL)autorotates;	// 0x301d7319
- (void)setAutorotates:(BOOL)autorotates forceUpdateInterfaceOrientation:(BOOL)orientation;	// 0x300ba335
- (void)setBecomeKeyOnOrderFront:(BOOL)front;	// 0x301046b1
// converted property setter: - (void)setContentView:(id)view;	// 0x300f88c1
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x300ba005
- (void)setHidden:(BOOL)hidden;	// 0x300a8265
// converted property setter: - (void)setKeepContextInBackground:(BOOL)background;	// 0x301d8c09
// converted property setter: - (void)setLevel:(float)level;	// 0x301ca651
// converted property setter: - (void)setResizesToFullScreen:(BOOL)fullScreen;	// 0x301d6ad9
// declared property setter: - (void)setRootViewController:(id)controller;	// 0x301d7499
// declared property setter: - (void)setScreen:(id)screen;	// 0x301d76dd
// declared property setter: - (void)setWindowLevel:(float)level;	// 0x300ac215
- (void)synchronizeDrawingWithID:(int)anId;	// 0x3015bf81
- (void)synchronizeDrawingWithID:(int)anId count:(unsigned)count;	// 0x301d70d9
- (void)undo:(id)undo;	// 0x301d7025
// converted property getter: - (id)undoManager;	// 0x301d7055
- (void)updateForOrientation:(int)orientation;	// 0x30104179
- (CGPoint)warpPoint:(CGPoint)point;	// 0x300911f5
// declared property getter: - (float)windowLevel;	// 0x300910a9
- (int)windowOutput;	// 0x300a80c9
@end

