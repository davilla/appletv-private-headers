/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIResponder.h"
#import "UIActionSheetDelegate.h"

@class UIStatusBarWindow, NSMutableSet, NSArray, NSTimer, UIStatusBar, NSString, NSMutableArray, UIWindow, UIEvent;
@protocol UIApplicationDelegate;

@interface UIApplication : UIResponder <UIActionSheetDelegate> {
@private
	id<UIApplicationDelegate> _delegate;	// 4 = 0x4
	CFDictionaryRef _touchMap;	// 8 = 0x8
	NSMutableSet *_exclusiveTouchWindows;	// 12 = 0xc
	UIEvent *_event;	// 16 = 0x10
	UIEvent *_touchesEvent;	// 20 = 0x14
	UIEvent *_motionEvent;	// 24 = 0x18
	UIEvent *_remoteControlEvent;	// 28 = 0x1c
	int _remoteControlEventObservers;	// 32 = 0x20
	NSArray *_topLevelNibObjects;	// 36 = 0x24
	int _networkResourcesCurrentlyLoadingCount;	// 40 = 0x28
	NSTimer *_hideNetworkActivityIndicatorTimer;	// 44 = 0x2c
	id _editAlertView;	// 48 = 0x30
	UIStatusBar *_statusBar;	// 52 = 0x34
	UIStatusBarWindow *_statusBarWindow;	// 56 = 0x38
	NSMutableArray *_observerBlocks;	// 60 = 0x3c
	NSString *_mainStoryboardName;	// 64 = 0x40
	struct {
		unsigned deactivatingReasonFlags : 8;
		unsigned isSuspended : 1;
		unsigned isSuspendedEventsOnly : 1;
		unsigned isLaunchedSuspended : 1;
		unsigned calledNonSuspendedLaunchDelegate : 1;
		unsigned isHandlingURL : 1;
		unsigned isHandlingRemoteNotification : 1;
		unsigned isHandlingLocalNotification : 1;
		unsigned statusBarShowsProgress : 1;
		unsigned statusBarRequestedStyle : 4;
		unsigned statusBarHidden : 1;
		unsigned blockInteractionEvents : 4;
		unsigned receivesMemoryWarnings : 1;
		unsigned showingProgress : 1;
		unsigned receivesPowerMessages : 1;
		unsigned launchEventReceived : 1;
		unsigned systemIsAnimatingApplicationLifecycleEvent : 1;
		unsigned isResuming : 1;
		unsigned isSuspendedUnderLock : 1;
		unsigned shouldExitAfterSendSuspend : 1;
		unsigned shouldExitAfterTaskCompletion : 1;
		unsigned terminating : 1;
		unsigned isHandlingShortCutURL : 1;
		unsigned idleTimerDisabled : 1;
		unsigned deviceOrientation : 3;
		unsigned delegateShouldBeReleasedUponSet : 1;
		unsigned delegateHandleOpenURL : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateDidReceiveMemoryWarning : 1;
		unsigned delegateWillTerminate : 1;
		unsigned delegateSignificantTimeChange : 1;
		unsigned delegateWillChangeInterfaceOrientation : 1;
		unsigned delegateDidChangeInterfaceOrientation : 1;
		unsigned delegateWillChangeStatusBarFrame : 1;
		unsigned delegateDidChangeStatusBarFrame : 1;
		unsigned delegateDeviceAccelerated : 1;
		unsigned delegateDeviceChangedOrientation : 1;
		unsigned delegateDidBecomeActive : 1;
		unsigned delegateWillResignActive : 1;
		unsigned delegateDidEnterBackground : 1;
		unsigned delegateDidEnterBackgroundWasSent : 1;
		unsigned delegateWillEnterForeground : 1;
		unsigned delegateWillSuspend : 1;
		unsigned delegateDidResume : 1;
		unsigned userDefaultsSyncDisabled : 1;
		unsigned headsetButtonClickCount : 4;
		unsigned isHeadsetButtonDown : 1;
		unsigned isFastForwardActive : 1;
		unsigned isRewindActive : 1;
		unsigned shakeToEdit : 1;
		unsigned isClassic : 1;
		unsigned zoomInClassicMode : 1;
		unsigned ignoreHeadsetClicks : 1;
		unsigned touchRotationDisabled : 1;
		unsigned taskSuspendingUnsupported : 1;
		unsigned taskSuspendingOnLockUnsupported : 1;
		unsigned isUnitTests : 1;
		unsigned requiresHighResolution : 1;
		unsigned disableViewContentScaling : 1;
		unsigned singleUseLaunchOrientation : 3;
		unsigned defaultInterfaceOrientation : 3;
		unsigned delegateWantsNextResponder : 1;
		unsigned isRunningInApplicationSwitcher : 1;
		unsigned isSendingEventForProgrammaticTouchCancellation : 1;
		unsigned calledInitializationDelegates : 1;
	} _applicationFlags;	// 68 = 0x44
}
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x301c9ebd; S=0x300cc5f9; 
@property(readonly, assign, nonatomic) int applicationState;	// G=0x300c56b1; 
@property(assign, nonatomic) BOOL applicationSupportsShakeToEdit;	// G=0x301c9ed9; S=0x30048ad1; 
@property(readonly, assign, nonatomic) double backgroundTimeRemaining;	// G=0x301cbc21; 
@property(assign) float backlightLevel;	// G=0x301caf05; S=0x301caea1; converted property
@property(assign, nonatomic) id<UIApplicationDelegate> delegate;	// G=0x3003e365; S=0x3004a269; 
@property(assign) int doubleHeightMode;	// G=0x301c8979; S=0x301c8965; converted property
@property(assign, nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;	// G=0x301c7969; S=0x300c3d51; 
@property(assign) BOOL ignoresInteractionEvents;	// G=0x301cadb5; S=0x300b3595; converted property
@property(readonly, assign, nonatomic) UIWindow *keyWindow;	// G=0x3005dfd9; 
@property(assign, nonatomic, getter=isNetworkActivityIndicatorVisible) BOOL networkActivityIndicatorVisible;	// G=0x301c85d1; S=0x300e2db1; 
@property(readonly, assign, nonatomic, getter=isProtectedDataAvailable) BOOL protectedDataAvailable;	// G=0x300f3cf1; 
@property(assign, nonatomic, getter=isProximitySensingEnabled) BOOL proximitySensingEnabled;	// G=0x301cc031; S=0x301cbff9; 
@property(retain) id scheduledLocalNotifications;	// G=0x300cc649; S=0x301cb9e1; converted property
@property(assign) unsigned simpleRemoteRoutingPriority;	// G=0x301c8dd5; S=0x301c8df1; converted property
@property(readonly, retain) UIStatusBar *statusBar;	// G=0x3001ed05; converted property
@property(readonly, assign, nonatomic) CGRect statusBarFrame;	// G=0x300dccfd; 
@property(assign, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;	// G=0x300521c1; S=0x3009805d; 
@property(assign, nonatomic) int statusBarOrientation;	// G=0x300266cd; S=0x301c5d39; 
@property(readonly, assign, nonatomic) double statusBarOrientationAnimationDuration;	// G=0x3019b699; 
@property(assign, nonatomic) int statusBarStyle;	// G=0x300b47a5; S=0x300b43a1; 
@property(readonly, retain) UIStatusBarWindow *statusBarWindow;	// G=0x30044469; converted property
@property(readonly, assign, nonatomic) int userInterfaceLayoutDirection;	// G=0x301c9ef1; 
@property(assign) BOOL usesBackgroundNetwork;	// G=0x301c95a9; S=0x301723a9; converted property
@property(readonly, assign, nonatomic) NSArray *windows;	// G=0x300e45d5; 
+ (void)_installAfterCACommitHandler;	// 0x301c7a09
+ (BOOL)_isAfterCACommitHandlerInstalled;	// 0x3005cfd1
+ (void)_noteInterfaceOrientationChangingTo:(int)to;	// 0x301c7981
+ (void)_startWindowServerIfNecessary;	// 0x30048249
+ (int)interfaceOrientationForString:(id)string;	// 0x300495b1
+ (BOOL)isRunningEventPump;	// 0x300481e5
+ (BOOL)isRunningInStoreDemoMode;	// 0x301bf6d9
+ (BOOL)registerForSystemEvents;	// 0x300481a9
+ (BOOL)rendersLocally;	// 0x300483f1
+ (id)sharedApplication;	// 0x300266bd
+ (BOOL)shouldMakeUIForDefaultPNG;	// 0x3004524d
+ (int)statusBarStyleForString:(id)string;	// 0x300494c1
+ (id)stringForInterfaceOrientation:(int)interfaceOrientation;	// 0x301c9fe5
+ (id)stringForStatusBarStyle:(int)statusBarStyle;	// 0x301c9fb5
- (id)init;	// 0x30048585
- (BOOL)_accessibilityApplicationIsSystemWideServer;	// 0x3004ab85
- (Class)_accessibilityBundlePrincipalClass;	// 0x300f3d9d
- (BOOL)_accessibilityCaptureSimulatorEvent:(GSEventRef)event;	// 0x30030d99
- (void)_accessibilityInit;	// 0x3004a901
- (void)_accessibilitySetUpQuickSpeak;	// 0x30088071
- (id)_accessibilitySettingsBundle;	// 0x300f3d09
- (void)_accessibilityStatusChanged:(id)changed;	// 0x3013a8e9
- (void)_addAfterCACommitBlockForViewController:(id)viewController;	// 0x3005d00d
- (void)_addRecorder:(id)recorder;	// 0x301cb3d9
- (void)_alertSheetStackChanged;	// 0x30152af5
- (BOOL)_alertWindowShouldRotate;	// 0x301ca475
- (void)_applicationOpenURL:(id)url event:(GSEventRef)event;	// 0x301c9529
- (void)_applicationOpenURL:(id)url payload:(id)payload;	// 0x301c93f9
- (id)_backgroundModes;	// 0x301cbc71
- (void)_beginShowingNetworkActivityIndicator;	// 0x301cba5d
- (void)_callApplicationResumeHandlersForURL:(id)url payload:(id)payload;	// 0x300f5bdd
- (void)_callInitializationDelegatesForURL:(id)url payload:(id)payload suspended:(BOOL)suspended;	// 0x3005180d
- (BOOL)_canOpenURL:(id)url publicURLsOnly:(BOOL)only;	// 0x301c930d
- (void)_cancelAllTouches;	// 0x30089a45
- (void)_cancelCurrentTouchEvent;	// 0x301cae4d
- (void)_cancelGestureRecognizers:(id)recognizers;	// 0x3001b231
- (void)_cancelGestureRecognizersForView:(id)view;	// 0x3001b1c9
- (void)_cancelTouches:(id)touches withEvent:(id)event;	// 0x30089a95
- (void)_cancelTouches:(id)touches withEvent:(id)event includingGestures:(BOOL)gestures notificationBlock:(id)block;	// 0x30089aed
- (void)_cancelViewProcessingOfTouches:(id)touches withEvent:(id)event sendingTouchesCancelledToViewsOfTouches:(id)touches3;	// 0x3011ee6d
- (void)_clearTouchesForView:(id)view;	// 0x3001c31d
- (CGImageRef)_createDefaultImageSnapshot;	// 0x301c9621
- (void)_createHangTracerTimerWithDuration:(double)duration;	// 0x301c7b65
- (void)_createStatusBarWithRequestedStyle:(int)requestedStyle orientation:(int)orientation hidden:(BOOL)hidden;	// 0x3004bbd1
- (int)_currentExpectedInterfaceOrientation;	// 0x3005d4fd
- (id)_currentTests;	// 0x300ce415
- (void)_deactivateForReason:(int)reason;	// 0x300899b1
- (void)_deactivateForReason:(int)reason notify:(BOOL)notify;	// 0x30048af5
- (BOOL)_didEatCurrentTouch;	// 0x30031375
- (void)_dumpScreenContents:(GSEventRef)contents;	// 0x301cb029
- (void)_dumpUIHierarchy:(GSEventRef)hierarchy;	// 0x301caf51
- (void)_eatCurrentTouch;	// 0x301cb451
- (void)_endShowingNetworkActivityIndicator;	// 0x301cbaf1
- (id)_event;	// 0x30019341
- (id)_exclusiveTouchWindows;	// 0x30033d75
- (BOOL)_executableWasLinkedWithUIKit;	// 0x301cbc05
- (id)_extendLaunchTest;	// 0x300879f5
- (id)_fallbackPresentationViewController;	// 0x301cbf8d
- (void)_fetchInfoPlistFlags;	// 0x30048c75
- (int)_frontMostAppOrientation;	// 0x3008f5fd
- (unsigned)_frontmostApplicationPort;	// 0x301c8ad9
- (xpc_connection_s *)_getHangTracerConnection;	// 0x301c7a6d
- (int)_getSpringBoardOrientation;	// 0x301ca769
- (void *)_getSymbol:(id)symbol forFramework:(id)framework;	// 0x300f4d51
- (void)_handleAccessoryKeyStateChanged:(GSEventRef)changed;	// 0x301c8bf5
- (void)_handleApplicationResumeEvent:(GSEventRef)event;	// 0x300f4f0d
- (void)_handleApplicationSuspend:(GSEventRef)suspend eventInfo:(void *)info;	// 0x30088f3d
- (void)_handleHeadsetButtonClick;	// 0x301c9049
- (void)_handleHeadsetButtonDoubleClick;	// 0x301c90c5
- (void)_handleHeadsetButtonDown:(GSEventRef)down;	// 0x301c8ec1
- (void)_handleHeadsetButtonTripleClick;	// 0x301c9155
- (void)_handleHeadsetButtonUp:(GSEventRef)up;	// 0x301c8ee9
- (void)_handleKeyEvent:(GSEventRef)event;	// 0x30132215
- (void)_handleUserDefaultsDidChange:(id)_handleUserDefaults;	// 0x3003c66d
- (BOOL)_hasApplicationCalledLaunchDelegate;	// 0x300fccb5
- (BOOL)_hasStoryboard;	// 0x3005176d
- (void)_hideNetworkActivityIndicator;	// 0x301cba49
- (void)_installAutoreleasePoolsIfNecessaryForMode:(CFStringRef)mode;	// 0x3004af61
- (BOOL)_isActivated;	// 0x300c570d
- (BOOL)_isClassic;	// 0x30031049
- (BOOL)_isInteractionEvent:(GSEventRef)event;	// 0x30087f91
- (BOOL)_isLaunchedSuspended;	// 0x300f59e9
- (BOOL)_isMotionEvent:(GSEventRef)event;	// 0x30019329
- (BOOL)_isResuming;	// 0x300f59d5
- (BOOL)_isSendingEventForProgrammaticTouchCancellation;	// 0x300337b5
- (BOOL)_isSensitiveUIEnabled;	// 0x301caed9
- (BOOL)_isSpringBoard;	// 0x301c79bd
- (BOOL)_isSpringBoardShowingAnAlert;	// 0x3005179d
- (BOOL)_isTouchEvent:(GSEventRef)event;	// 0x300192e5
- (BOOL)_isTrackingAnyTouch;	// 0x301a0c5d
- (BOOL)_isViewContentScalingDisabled;	// 0x301cba15
- (BOOL)_isWindowServerHostingManaged;	// 0x300440ad
- (id)_launchTestName;	// 0x300ce6fd
- (void)_leak;	// 0x3020a1d9
- (int)_loadMainInterfaceFile;	// 0x3005160d
- (int)_loadMainNibFileNamed:(id)named bundle:(id)bundle;	// 0x301c8361
- (int)_loadMainStoryboardFileNamed:(id)named bundle:(id)bundle;	// 0x301c83c1
- (id)_localCachesDirectory;	// 0x301c95c9
- (id)_mainStoryboardName;	// 0x300516f1
- (id)_motionEvent;	// 0x301ca041
- (void)_noteAnimationFinished:(id)finished;	// 0x30207fbd
- (void)_noteAnimationStarted:(id)started;	// 0x30207f45
- (void)_notifyDidChangeStatusBarFrame:(CGRect)_notify;	// 0x3018d2f5
- (void)_notifySpringBoardOfStatusBarOrientationChangeAndFenceWithAnimationDuration:(double)animationDuration;	// 0x3018d149
- (void)_notifyWillChangeStatusBarFrame:(CGRect)_notify;	// 0x3018d059
- (void)_overrideDefaultInterfaceOrientationWithOrientation:(int)orientation;	// 0x301c58b9
- (id)_pathForFrameworkName:(id)frameworkName inPrivate:(BOOL)aPrivate;	// 0x300f4e45
- (void)_performMemoryWarning;	// 0x301cb09d
- (void)_playbackEvents:(id)events atPlaybackRate:(float)playbackRate messageWhenDone:(id)done withSelector:(SEL)selector;	// 0x3013a985
- (void)_playbackTimerCallback:(id)callback;	// 0x3013ac6d
- (void)_postSimpleRemoteNotificationForAction:(int)action andContext:(int)context;	// 0x301c8e05
- (void)_processScriptEvent:(GSEventRef)event;	// 0x3013a8f9
- (void)_purgeSharedInstances;	// 0x3008be89
- (CFMessagePortRef)_purplePPTServerPort;	// 0x30088455
- (void)_receivedMemoryNotification;	// 0x301cb139
- (void)_registerForAlertItemStateChangeNotification;	// 0x3004ad21
- (void)_registerForKeyBagLockStatusNotification;	// 0x3004ad5d
- (void)_registerForLanguageChangedNotification;	// 0x3004ac69
- (void)_registerForLocaleChangedNotification;	// 0x3004ace1
- (void)_registerForLocaleWillChangeNotification;	// 0x3004aca5
- (void)_registerForSignificantTimeChangeNotification;	// 0x3004ac2d
- (void)_registerForUserDefaultsChanges;	// 0x3004abd1
- (id)_remoteControlEvent;	// 0x301ca165
- (void)_removeDefaultInterfaceOrientatationOverride;	// 0x301c60e5
- (void)_removeRecorder:(id)recorder;	// 0x301cb435
- (void)_removeSnapshotImage;	// 0x300f62f9
- (void)_reportAppLaunchFinished;	// 0x3005e0e5
- (void)_reportResults:(id)results;	// 0x30088171
- (BOOL)_requiresHighResolution;	// 0x301cba19
- (BOOL)_rotationDisabledDuringTouch;	// 0x30033d85
- (void)_run;	// 0x3004a645
- (void)_runWithURL:(id)url payload:(id)payload launchOrientation:(int)orientation statusBarStyle:(int)style statusBarHidden:(BOOL)hidden;	// 0x3004b645
- (BOOL)_saveSnapshotWithName:(id)name;	// 0x3008b839
- (void)_sendMotionBegan:(int)began;	// 0x301ca051
- (void)_sendMotionCancelled:(int)cancelled;	// 0x301ca109
- (void)_sendMotionEnded:(int)ended;	// 0x301ca0ad
- (void)_sendOrderedOutContexts;	// 0x30087e7d
- (void)_sendRemoteControlEvent:(int)event;	// 0x301ca175
- (void)_setDelegate:(id)delegate assumeOwnership:(BOOL)ownership;	// 0x300ea239
- (void)_setHandlingURL:(BOOL)url url:(id)url2;	// 0x300f6291
- (void)_setIgnoreHeadsetClicks:(BOOL)clicks;	// 0x301cbbad
- (void)_setIsClassic:(BOOL)classic;	// 0x3004b0fd
- (void)_setRotationDisabledDuringTouch:(BOOL)touch;	// 0x300e37e9
- (void)_setShouldZoom:(BOOL)_set;	// 0x3004b1b1
- (void)_setStatusBarMode:(int)mode;	// 0x301ca02d
- (void)_setStatusBarShowsProgress:(BOOL)progress;	// 0x300e37d5
- (void)_setSuspended:(BOOL)suspended;	// 0x300899c5
- (void)_setSuspendedEventsOnly:(BOOL)only;	// 0x301c8a65
- (void)_setSuspendedUnderLock:(BOOL)lock;	// 0x3008991d
- (void)_setTouchMap:(CFDictionaryRef)map;	// 0x30032ea1
- (void)_setUserDefaultsSyncEnabled:(BOOL)enabled;	// 0x300c5689
- (void)_sheetWithRemoteIdentifierDidDismiss:(id)_sheetWithRemoteIdentifier;	// 0x302c3285
- (BOOL)_shouldHandleTestURL:(id)url;	// 0x30088a8d
- (BOOL)_shouldIgnoreHeadsetClicks;	// 0x301cbbd1
- (BOOL)_shouldUseDefaultFirstResponder;	// 0x3004445d
- (BOOL)_shouldUseKeyWindowStack;	// 0x3003c74d
- (BOOL)_shouldUseNextFirstResponder;	// 0x3003bc61
- (BOOL)_shouldZoom;	// 0x301cb9fd
- (void)_showEditAlertView;	// 0x301ca1d1
- (void)_startHangTracer;	// 0x301c7e65
- (void)_startPlaybackTimer;	// 0x3013abbd
- (void)_stopDeactivatingForReason:(int)reason;	// 0x3005db75
- (void)_stopHangTracer;	// 0x301c7d41
- (void)_stopPlayback;	// 0x301cb2ed
- (BOOL)_supportsShakesWhenNotActive;	// 0x30089f85
- (id)_targetInChainForAction:(SEL)action sender:(id)sender;	// 0x30172231
- (BOOL)_taskSuspendingUnsupported;	// 0x301cba31
- (void)_terminateWithStatus:(int)status;	// 0x3008cea1
- (CFDictionaryRef)_touchMap;	// 0x300193ad
- (id)_touchesEvent;	// 0x30030d9d
- (void)_unregisterForLanguageChangedNotification;	// 0x301c82e5
- (void)_unregisterForLocaleChangedNotification;	// 0x301c830d
- (void)_unregisterForSignificantTimeChangeNotification;	// 0x301c82bd
- (void)_unregisterForTimeChangedNotification;	// 0x301c8335
- (void)_unregisterForUserDefaultsChanges;	// 0x301cae51
- (void)_updateAccessibilityItunesSettings;	// 0x302a8125
- (void)_updateAccessibilitySettingsLoader;	// 0x3004aa51
- (void)_updateApplicationAccessibility;	// 0x3004aac1
- (BOOL)_updateDefaultImage;	// 0x3008b7fd
- (void)_updateLargeTextNotification;	// 0x3004ab39
- (void)_updateOrientation;	// 0x30087fe1
- (BOOL)_usesEmoji;	// 0x301cab99
- (BOOL)_usesPreMTAlertBehavior;	// 0x30152cd1
- (int)_validateStatusBarStyle:(int)style;	// 0x3003cf05
- (void)_wakeTimerFired;	// 0x301cbd19
- (void)_writeApplicationDefaultPNGSnapshot;	// 0x301c97c1
- (void)acceleratedInX:(float)x Y:(float)y Z:(float)z;	// 0x301c8bed
- (void)accessoryKeyStateChanged:(GSEventRef)changed;	// 0x301c8dc5
- (int)activeInterfaceOrientation;	// 0x301ca74d
- (void)addStatusBarImageNamed:(id)named;	// 0x301c9d2d
- (void)addStatusBarImageNamed:(id)named removeOnExit:(BOOL)exit;	// 0x301c9dc1
- (void)addStatusBarItem:(int)item;	// 0x30185c19
- (void)addStatusBarItem:(int)item removeOnExit:(BOOL)exit;	// 0x301c9e85
- (void)addStatusBarStyleOverrides:(int)overrides;	// 0x301c87b5
- (void)addWebClipToHomeScreen:(id)homeScreen;	// 0x301c9f65
- (int)alertInterfaceOrientation;	// 0x30172c7d
- (int)alertOrientation;	// 0x30172c25
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x301ca2b1
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x301ca3a5
- (void)alertViewCancel:(id)cancel;	// 0x301ca40d
- (void)anotherApplicationFinishedLaunching:(GSEventRef)launching;	// 0x301c8b35
- (void)applicationDidBeginSuspendAnimation;	// 0x30088f39
- (void)applicationDidEndResumeAnimation;	// 0x300f692d
- (void)applicationDidOrderOutContext:(id)application;	// 0x3004d495
- (void)applicationDidResume;	// 0x300f5b9d
- (void)applicationDidResumeForEventsOnly;	// 0x301c8a61
- (void)applicationDidResumeFromUnderLock;	// 0x301c8a5d
- (void)applicationExited:(GSEventRef)exited;	// 0x301c8ae5
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x301c9ebd
- (void)applicationOpenToShortCut:(id)shortCut;	// 0x301c93f1
- (void)applicationOpenURL:(id)url;	// 0x301c93f5
- (void)applicationResume:(GSEventRef)resume;	// 0x300f5ba1
- (CGRect)applicationSnapshotRectForOrientation:(int)orientation;	// 0x3008bc91
// declared property getter: - (int)applicationState;	// 0x300c56b1
// declared property getter: - (BOOL)applicationSupportsShakeToEdit;	// 0x301c9ed9
- (void)applicationSuspend:(GSEventRef)suspend;	// 0x300cc60d
- (void)applicationSuspended:(GSEventRef)suspended;	// 0x301c8add
- (void)applicationSuspendedSettingsUpdated:(GSEventRef)updated;	// 0x301c8ae1
- (void)applicationWillOrderInContext:(id)application windowLevel:(float)level windowOutput:(int)output;	// 0x3004d3b5
- (void)applicationWillSuspend;	// 0x30089f1d
- (void)applicationWillSuspendForEventsOnly;	// 0x301c8a55
- (void)applicationWillSuspendUnderLock;	// 0x301c8a59
- (void)applicationWillTerminate;	// 0x3008d0e5
// declared property getter: - (double)backgroundTimeRemaining;	// 0x301cbc21
// converted property getter: - (float)backlightLevel;	// 0x301caf05
- (void)batteryStatusDidChange:(id)batteryStatus;	// 0x301c58b5
- (unsigned)beginBackgroundTaskWithExpirationHandler:(id)expirationHandler;	// 0x300c5329
- (void)beginIgnoringInteractionEvents;	// 0x3003d8fd
- (void)beginReceivingRemoteControlEvents;	// 0x300cc665
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info;	// 0x302c2e7d
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application;	// 0x302c2ea9
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application opaque:(BOOL)opaque presentAnimated:(BOOL)animated;	// 0x302c2f19
- (void)beginRemoteSheet:(id)sheet delegate:(id)delegate didEndSelector:(SEL)selector contextInfo:(void *)info requireTopApplication:(BOOL)application presentAnimated:(BOOL)animated;	// 0x302c2ee1
- (unsigned)blockInteractionEventsCount;	// 0x300b3581
- (BOOL)canOpenURL:(id)url;	// 0x301c93d9
- (BOOL)canShowAlerts;	// 0x30155769
- (void)cancelAllLocalNotifications;	// 0x301cb9c5
- (void)cancelLocalNotification:(id)notification;	// 0x301cb9a9
- (void)clearKeepAliveTimeout;	// 0x301cbdfd
- (void)dealloc;	// 0x301c78f9
- (id)defaultFirstResponder;	// 0x301cb699
- (double)defaultImageSnapshotExpiration;	// 0x300898e9
// declared property getter: - (id)delegate;	// 0x3003e365
- (void)didDismissMiniAlert;	// 0x30178fa9
- (void)didReceiveMemoryWarning;	// 0x301cb0f5
- (id)displayIDForURLScheme:(id)urlscheme isPublic:(BOOL)aPublic;	// 0x301cb739
- (id)displayIdentifier;	// 0x300c6b3d
// converted property getter: - (int)doubleHeightMode;	// 0x301c8979
- (void)enableFramebufferStatisticsGathering;	// 0x3016b639
- (int)enabledRemoteNotificationTypes;	// 0x301cb8b5
- (void)endBackgroundTask:(unsigned)task;	// 0x300c550d
- (void)endIgnoringInteractionEvents;	// 0x300344e5
- (void)endReceivingRemoteControlEvents;	// 0x301c5e69
- (void)endRemoteSheet:(id)sheet;	// 0x302c3145
- (void)endRemoteSheet:(id)sheet returnCode:(int)code;	// 0x302c3159
- (void)endRemoteSheet:(id)sheet returnCode:(int)code dismissAnimated:(BOOL)animated;	// 0x302c317d
- (void)failedTest:(id)test;	// 0x30209e55
- (void)failedTest:(id)test withResults:(id)results;	// 0x30209e69
- (void)finishedSubTest:(id)test forTest:(id)test2;	// 0x302084a5
- (void)finishedTest:(id)test;	// 0x30209de9
- (void)finishedTest:(id)test extraResults:(id)results;	// 0x300879f9
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification;	// 0x30209e31
- (void)finishedTest:(id)test extraResults:(id)results waitForNotification:(id)notification withTeardownBlock:(id)teardownBlock;	// 0x30208711
- (void)finishedTest:(id)test extraResults:(id)results withTeardownBlock:(id)teardownBlock;	// 0x30209e0d
- (BOOL)firstLaunchAfterBoot;	// 0x301c7959
- (BOOL)handleDoubleHeightStatusBarTap:(int)tap;	// 0x301c85e5
- (BOOL)handleEvent:(GSEventRef)event;	// 0x301cb681
- (BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;	// 0x300196d1
- (void)handleKeyEvent:(GSEventRef)event;	// 0x301321a1
- (BOOL)handleTestURL:(id)url;	// 0x30088b05
- (void)headsetAvailabilityChanged:(GSEventRef)changed;	// 0x301c8b49
- (void)headsetButtonDown:(GSEventRef)down;	// 0x301c8b41
- (void)headsetButtonUp:(GSEventRef)up;	// 0x301c8b45
- (BOOL)homeScreenCanAddIcons;	// 0x301c9f95
// converted property getter: - (BOOL)ignoresInteractionEvents;	// 0x301cadb5
- (int)interfaceOrientation;	// 0x3008bc81
- (BOOL)isHandlingOpenShortCut;	// 0x301c9549
- (BOOL)isHandlingURL;	// 0x3005da7d
// declared property getter: - (BOOL)isIdleTimerDisabled;	// 0x301c7969
- (BOOL)isIgnoringInteractionEvents;	// 0x300193bd
- (BOOL)isLocked;	// 0x3017769d
// declared property getter: - (BOOL)isNetworkActivityIndicatorVisible;	// 0x301c85d1
- (BOOL)isPasscodeRequiredToUnlock;	// 0x301cb6ed
// declared property getter: - (BOOL)isProtectedDataAvailable;	// 0x300f3cf1
// declared property getter: - (BOOL)isProximitySensingEnabled;	// 0x301cc031
- (BOOL)isRunningInTaskSwitcher;	// 0x300dc009
- (BOOL)isRunningQuitTest;	// 0x3008c78d
- (BOOL)isRunningSuspendTest;	// 0x3008c7f9
- (BOOL)isRunningTest;	// 0x300e46b1
- (BOOL)isRunningTest:(id)test;	// 0x300e9a99
// declared property getter: - (BOOL)isStatusBarHidden;	// 0x300521c1
- (BOOL)isSuspended;	// 0x30049fbd
- (BOOL)isSuspendedEventsOnly;	// 0x300cc5e5
- (BOOL)isSuspendedUnderLock;	// 0x30089a31
// declared property getter: - (id)keyWindow;	// 0x3005dfd9
- (BOOL)launchApplicationWithIdentifier:(id)identifier suspended:(BOOL)suspended;	// 0x30145a69
- (BOOL)launchedToTest;	// 0x3004680d
- (void)lockButtonDown:(GSEventRef)down;	// 0x301c8b39
- (void)lockButtonUp:(GSEventRef)up;	// 0x301c8b3d
- (void)lockDevice:(GSEventRef)device;	// 0x301c8dc9
- (void)mediaKeyDown:(GSEventRef)down;	// 0x301c8ae9
- (void)mediaKeyUp:(GSEventRef)up;	// 0x301c8b31
- (void)menuButtonDown:(GSEventRef)down;	// 0x301c8b4d
- (void)menuButtonUp:(GSEventRef)up;	// 0x301c8b51
- (void)motionEnded:(int)ended withEvent:(id)event;	// 0x301ca479
- (id)nameOfDefaultImageToUpdateAtSuspension;	// 0x3008b835
- (id)nextResponder;	// 0x3001e461
- (BOOL)openURL:(id)url;	// 0x301c9369
- (int)orientation;	// 0x300f7179
- (id)pathToDefaultImageNamed:(id)defaultImageNamed;	// 0x300c6911
- (void)performDisablingStatusBarStyleValidation:(id)validation;	// 0x300cd6ed
- (void)popRunLoopMode:(id)mode;	// 0x301418cd
- (void)prepareForDefaultImageSnapshot;	// 0x3008bbf1
- (void)presentLocalNotificationNow:(id)now;	// 0x301cb90d
- (void)proximityStateChanged:(BOOL)changed;	// 0x301c8bf1
- (void)pushRunLoopMode:(id)mode;	// 0x3013eebd
- (void)quitTopApplication:(GSEventRef)application;	// 0x301c8dcd
- (void)registerForRemoteNotificationTypes:(int)remoteNotificationTypes;	// 0x301cb8d1
- (void)removeDefaultImage:(id)image;	// 0x300c68e1
- (void)removeStatusBarImageNamed:(id)named;	// 0x301c9df1
- (void)removeStatusBarItem:(int)item;	// 0x301854a5
- (void)removeStatusBarStyleOverrides:(int)overrides;	// 0x301c87fd
- (BOOL)reportApplicationSuspended;	// 0x3008c865
- (void)requestDeviceUnlock;	// 0x301cb729
- (void)resetIdleTimerAndUndim;	// 0x301c8dd1
- (id)resultsForTest:(id)test;	// 0x30208351
- (void)ringerChanged:(int)changed;	// 0x301c8b59
- (id)roleID;	// 0x301c9309
- (BOOL)rotateIfNeeded:(int)needed;	// 0x3020a351
- (void)runModal:(id)modal;	// 0x301cb7bd
- (void)runTest:(id)test forAnimation:(id)animation;	// 0x302080cd
- (BOOL)runTest:(id)test options:(id)options;	// 0x30088dad
- (void)runTest:(id)test startingBeforeAnimation:(id)animation stoppingAfterAnimation:(id)animation3;	// 0x302080e9
- (void)scheduleLocalNotification:(id)notification;	// 0x301cb98d
// converted property getter: - (id)scheduledLocalNotifications;	// 0x300cc649
- (void)sendAction:(SEL)action fromSender:(id)sender toTarget:(id)target forEvent:(GSEventRef)event;	// 0x30157661
- (BOOL)sendAction:(SEL)action to:(id)to from:(id)from forEvent:(id)event;	// 0x30034dc9
- (BOOL)sendAction:(SEL)action toTarget:(id)target fromSender:(id)sender forEvent:(id)event;	// 0x30034da5
- (void)sendEvent:(id)event;	// 0x30019531
- (void)setApplicationBadgeString:(id)string;	// 0x300acafd
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x300cc5f9
// declared property setter: - (void)setApplicationSupportsShakeToEdit:(BOOL)edit;	// 0x30048ad1
// converted property setter: - (void)setBacklightLevel:(float)level;	// 0x301caea1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3004a269
- (void)setDeviceOrientation:(int)orientation;	// 0x3020a3c9
// converted property setter: - (void)setDoubleHeightMode:(int)mode;	// 0x301c8965
- (void)setDoubleHeightMode:(int)mode glowAnimationEnabled:(BOOL)enabled;	// 0x301c887d
- (void)setDoubleHeightPrefixText:(id)text;	// 0x301c8991
- (void)setDoubleHeightStatusText:(id)text;	// 0x301c89a5
- (void)setDoubleHeightStatusText:(id)text forStyle:(int)style;	// 0x301c8861
- (void)setExpectsFaceContact:(BOOL)contact;	// 0x301cb6a9
- (void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;	// 0x301cb6bd
- (void)setGlowAnimationEnabled:(BOOL)enabled forStyle:(int)style;	// 0x301c8845
- (void)setHardwareKeyboardLayoutName:(id)name;	// 0x30095025
- (void)setHasMiniAlerts:(BOOL)alerts;	// 0x30152ae1
// declared property setter: - (void)setIdleTimerDisabled:(BOOL)disabled;	// 0x300c3d51
// converted property setter: - (void)setIgnoresInteractionEvents:(BOOL)events;	// 0x300b3595
- (BOOL)setKeepAliveTimeout:(double)timeout handler:(id)handler;	// 0x301cbd39
// declared property setter: - (void)setNetworkActivityIndicatorVisible:(BOOL)visible;	// 0x300e2db1
- (void)setNewsstandIconImage:(id)image;	// 0x301c9bd5
- (void)setProximityEventsEnabled:(BOOL)enabled;	// 0x300ac925
// declared property setter: - (void)setProximitySensingEnabled:(BOOL)enabled;	// 0x301cbff9
- (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x3005157d
// converted property setter: - (void)setScheduledLocalNotifications:(id)notifications;	// 0x301cb9e1
// converted property setter: - (void)setSimpleRemoteRoutingPriority:(unsigned)priority;	// 0x301c8df1
// declared property setter: - (void)setStatusBarHidden:(BOOL)hidden;	// 0x3009805d
- (void)setStatusBarHidden:(BOOL)hidden animated:(BOOL)animated;	// 0x301cc065
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters;	// 0x300980fd
- (void)setStatusBarHidden:(BOOL)hidden animationParameters:(id)parameters changeApplicationFlag:(BOOL)flag;	// 0x30098121
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration;	// 0x301886a1
- (void)setStatusBarHidden:(BOOL)hidden duration:(double)duration changeApplicationFlag:(BOOL)flag;	// 0x301886c5
- (void)setStatusBarHidden:(BOOL)hidden withAnimation:(int)animation;	// 0x30098071
- (void)setStatusBarMode:(int)mode duration:(float)duration;	// 0x301cab5d
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration;	// 0x301cab2d
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId;	// 0x301caaf1
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation;	// 0x301ca779
- (void)setStatusBarMode:(int)mode orientation:(int)orientation duration:(float)duration fenceID:(int)anId animation:(int)animation startTime:(double)time;	// 0x301ca7bd
// declared property setter: - (void)setStatusBarOrientation:(int)orientation;	// 0x301c5d39
- (void)setStatusBarOrientation:(int)orientation animated:(BOOL)animated;	// 0x301c8749
- (void)setStatusBarOrientation:(int)orientation animation:(int)animation duration:(double)duration;	// 0x3018cb5d
- (void)setStatusBarOrientation:(int)orientation animationParameters:(id)parameters;	// 0x3018cc0d
- (void)setStatusBarShowsProgress:(BOOL)progress;	// 0x300e4c41
// declared property setter: - (void)setStatusBarStyle:(int)style;	// 0x300b43a1
- (void)setStatusBarStyle:(int)style animated:(BOOL)animated;	// 0x3003cd9d
- (void)setStatusBarStyle:(int)style animation:(int)animation;	// 0x301c86c5
- (void)setStatusBarStyle:(int)style animation:(int)animation startTime:(double)time duration:(double)duration curve:(int)curve;	// 0x301c85e9
- (void)setStatusBarStyle:(int)style animationParameters:(id)parameters;	// 0x3003ce09
- (void)setStatusBarStyle:(int)style duration:(double)duration;	// 0x300cd711
- (void)setSuspensionAnimationDelay:(double)delay;	// 0x301caf39
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled;	// 0x301c3f05
- (void)setSystemVolumeHUDEnabled:(BOOL)enabled forAudioCategory:(id)audioCategory;	// 0x3018559d
// converted property setter: - (void)setUsesBackgroundNetwork:(BOOL)network;	// 0x301723a9
- (void)setWantsVolumeButtonEvents:(BOOL)events;	// 0x301c8b5d
- (BOOL)shouldFenceStatusBarRotation;	// 0x301cbbe9
- (BOOL)shouldLaunchSafe;	// 0x3005da6d
- (BOOL)shouldRecordExtendedLaunchTime;	// 0x300ce671
- (void)showNetworkPromptsIfNecessary:(BOOL)necessary;	// 0x301c9595
- (void)showTTYPromptForNumber:(id)number withID:(int)anId;	// 0x301c9561
- (void)significantTimeChange;	// 0x301cadd1
// converted property getter: - (unsigned)simpleRemoteRoutingPriority;	// 0x301c8dd5
- (void)startCHUDRecording:(id)recording;	// 0x30209ffd
- (void)startLeaking;	// 0x3020a249
- (void)startedSubTest:(id)test forTest:(id)test2;	// 0x302083d1
- (void)startedTest:(id)test;	// 0x3004b1d5
// converted property getter: - (id)statusBar;	// 0x3001ed05
- (void)statusBar:(id)bar didAnimateFromHeight:(float)height toHeight:(float)height3 animation:(int)animation;	// 0x301ca6c1
- (int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;	// 0x3003d431
- (void)statusBar:(id)bar willAnimateFromHeight:(float)height toHeight:(float)height3 duration:(double)duration animation:(int)animation;	// 0x301ca4c5
// declared property getter: - (CGRect)statusBarFrame;	// 0x300dccfd
- (CGRect)statusBarFrameForOrientation:(int)orientation;	// 0x300dcd41
- (float)statusBarHeight;	// 0x30052171
- (float)statusBarHeightForOrientation:(int)orientation;	// 0x3005b001
- (float)statusBarHeightForOrientation:(int)orientation ignoreHidden:(BOOL)hidden;	// 0x300c369d
- (int)statusBarMode;	// 0x3008be11
- (void)statusBarMouseUp:(GSEventRef)up;	// 0x301ba405
// declared property getter: - (int)statusBarOrientation;	// 0x300266cd
// declared property getter: - (double)statusBarOrientationAnimationDuration;	// 0x3019b699
- (void)statusBarReturnActionTap:(GSEventRef)tap;	// 0x301c8b55
// declared property getter: - (int)statusBarStyle;	// 0x300b47a5
// converted property getter: - (id)statusBarWindow;	// 0x30044469
- (void)stopCHUDRecording;	// 0x3020a16d
- (void)stopLeaking;	// 0x3020a30d
- (void)stopModal;	// 0x301cb845
- (void)suspend;	// 0x301c8ab1
- (void)suspendReturningToLastApp:(BOOL)lastApp;	// 0x301c8ac5
- (BOOL)systemIsAnimatingApplicationLifecycleEvent;	// 0x300193d9
- (void)terminateWithSuccess;	// 0x300c5675
- (void)testPrep:(id)prep options:(id)options;	// 0x3020a34d
- (void)unregisterForRemoteNotifications;	// 0x301cb8ed
- (void)updateSuspendedSettings:(id)settings;	// 0x300dc289
- (void)updateTouchDiagnostics;	// 0x301cab9d
- (id)userCachesDirectory;	// 0x300dc511
- (void)userDefaultsDidChange:(id)userDefaults;	// 0x3003c6f5
- (id)userHomeDirectory;	// 0x30165cbd
// declared property getter: - (int)userInterfaceLayoutDirection;	// 0x301c9ef1
- (id)userLibraryDirectory;	// 0x300c1849
// converted property getter: - (BOOL)usesBackgroundNetwork;	// 0x301c95a9
- (void)vibrateForDuration:(int)duration;	// 0x301cae9d
- (void)volumeChanged:(GSEventRef)changed;	// 0x301c8b71
- (void)willDismissMiniAlert:(int *)alert andShowAnother:(BOOL)another;	// 0x30178a55
- (void)willDisplayMiniAlert:(int *)alert;	// 0x30177a59
- (double)windowRotationDuration;	// 0x300c52d1
// declared property getter: - (id)windows;	// 0x300e45d5
@end

