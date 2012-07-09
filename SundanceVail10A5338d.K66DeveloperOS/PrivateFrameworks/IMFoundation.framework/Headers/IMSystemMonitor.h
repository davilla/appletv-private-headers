/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSMutableArray, NSTimer;

@interface IMSystemMonitor : NSObject {
	BOOL _receivesMemoryWarnings;	// 4 = 0x4
	BOOL _willSleep;	// 5 = 0x5
	BOOL _screenLocked;	// 6 = 0x6
	BOOL _screensaverActive;	// 7 = 0x7
	BOOL _active;	// 8 = 0x8
	BOOL _backingUp;	// 9 = 0x9
	BOOL _switchedOut;	// 10 = 0xa
	NSMutableArray *_listeners;	// 12 = 0xc
	NSDate *_idleStart;	// 16 = 0x10
	NSTimer *_timer;	// 20 = 0x14
	NSString *_userID;	// 24 = 0x18
	double _delayTime;	// 28 = 0x1c
	BOOL _idleOverride;	// 36 = 0x24
	NSMutableArray *_earlyListeners;	// 40 = 0x28
	BOOL _usesPowerNotifications;	// 44 = 0x2c
	BOOL _usesSystemIdleState;	// 45 = 0x2d
	BOOL _inBackground;	// 46 = 0x2e
}
@property(assign, nonatomic) double _delayTime;	// G=0x36941491; S=0x369414a9; @synthesize
@property(retain, nonatomic) NSMutableArray *_earlyListeners;	// G=0x369414dd; S=0x369414ed; @synthesize
@property(assign, nonatomic) BOOL _idleOverride;	// G=0x369414bd; S=0x369414cd; @synthesize
@property(retain, nonatomic) NSDate *_idleStart;	// G=0x36941431; S=0x36941441; @synthesize
@property(retain, nonatomic) NSMutableArray *_listeners;	// G=0x36941411; S=0x36941421; @synthesize
@property(retain, nonatomic) NSTimer *_timer;	// G=0x36941451; S=0x36941461; @synthesize
@property(retain, nonatomic) NSString *_userID;	// G=0x36941471; S=0x36941481; @synthesize
@property(assign, nonatomic, setter=setActive:) BOOL isActive;	// G=0x369413c1; S=0x369413d1; @synthesize=_active
@property(readonly, assign, nonatomic) BOOL isBackingUp;	// G=0x369413e1; @synthesize=_backingUp
@property(assign, nonatomic) BOOL isFastUserSwitched;	// G=0x369413f1; S=0x36941401; @synthesize=_switchedOut
@property(readonly, assign, nonatomic) BOOL isInBackground;	// G=0x3694151d; @synthesize=_inBackground
@property(readonly, assign, nonatomic) BOOL isScreenLocked;	// G=0x369413a1; @synthesize=_screenLocked
@property(readonly, assign, nonatomic) BOOL isScreenSaverActive;	// G=0x369413b1; @synthesize=_screensaverActive
@property(readonly, assign, nonatomic) BOOL isSetup;	// G=0x3694116d; 
@property(readonly, assign, nonatomic) BOOL isSystemIdle;	// G=0x36940955; 
@property(assign, nonatomic) BOOL receivesMemoryWarnings;	// G=0x36941381; S=0x36941231; @synthesize=_receivesMemoryWarnings
@property(readonly, assign, nonatomic) double systemIdleTime;	// G=0x36940989; 
@property(readonly, assign, nonatomic) BOOL systemIsShuttingDown;	// G=0x369409e1; 
@property(readonly, assign, nonatomic) BOOL systemIsSleeping;	// G=0x36941391; @synthesize=_willSleep
@property(assign, nonatomic) BOOL usesPowerNotifications;	// G=0x369414fd; S=0x36940541; @synthesize=_usesPowerNotifications
@property(assign, nonatomic) BOOL usesSystemIdleState;	// G=0x3694150d; S=0x36940565; @synthesize=_usesSystemIdleState
+ (id)sharedInstance;	// 0x3693f1e9
- (id)init;	// 0x3693f295
- (void)_addEarlyListener:(id)listener;	// 0x36940a0d
- (void)_applicationDidBecomeActive:(id)_application;	// 0x3693fef1
- (void)_applicationDidEnterBackground:(id)_application;	// 0x3694038d
- (void)_applicationDidRemoveDeactivationReason:(id)_application;	// 0x369404a9
- (void)_applicationWillAddDeactivationReason:(id)_application;	// 0x36940411
- (void)_applicationWillEnterForeground:(id)_application;	// 0x36940309
- (void)_applicationWillResignActive:(id)_application;	// 0x3693fe51
- (void)_checkRestoredFromBackup;	// 0x36940d75
// declared property getter: - (double)_delayTime;	// 0x36941491
- (void)_deliverNotificationSelector:(SEL)selector;	// 0x3693f93d
// declared property getter: - (id)_earlyListeners;	// 0x369414dd
- (void)_handleLoginWindowNotification:(id)notification;	// 0x369411cd
// declared property getter: - (BOOL)_idleOverride;	// 0x369414bd
// declared property getter: - (id)_idleStart;	// 0x36941431
// declared property getter: - (id)_listeners;	// 0x36941411
- (void)_notificationCenterDidDisappear:(id)_notificationCenter;	// 0x3694014d
- (void)_notificationCenterWillAppear:(id)_notificationCenter;	// 0x369400f5
- (void)_overrideAndDisableIdleTimer:(BOOL)timer;	// 0x369407b5
- (void)_postScreenLocked;	// 0x3693fced
- (void)_postScreenSaverStarted;	// 0x369401a5
- (void)_receivedMemoryNotification;	// 0x369411d9
- (void)_registerForLoginWindowNotifications;	// 0x369411d1
- (void)_registerForRestoreNotifications;	// 0x36940f65
- (void)_removeEarlyListener:(id)listener;	// 0x36940af9
- (void)_restoreDidStart;	// 0x36940e21
- (void)_restoreDidStop;	// 0x36940e51
- (void)_resume:(id)resume;	// 0x3694009d
- (void)_resumeEventsOnly:(id)only;	// 0x3693ffed
- (void)_screenLocked:(id)locked;	// 0x3693fd61
- (void)_screenSaverStarted:(id)started;	// 0x3694028d
- (void)_screenSaverStopped:(id)stopped;	// 0x36940219
- (void)_screenUnlocked:(id)unlocked;	// 0x3693fddd
- (void)_setIdleState:(BOOL)state;	// 0x369406a5
- (void)_setupStateChanged;	// 0x36940ee1
- (void)_suspend:(id)suspend;	// 0x36940045
- (void)_suspendEventsOnly:(id)only;	// 0x3693ff95
- (void)_systemDidWake;	// 0x3693fc8d
- (void)_systemWillShutdown;	// 0x369409f1
- (void)_systemWillSleep;	// 0x3693fcbd
// declared property getter: - (id)_timer;	// 0x36941451
- (void)_unregisterForLoginWindowNotifications;	// 0x369411d5
- (void)_unregisterForRestoreNotifications;	// 0x36941109
// declared property getter: - (id)_userID;	// 0x36941471
- (void)addListener:(id)listener;	// 0x36940bc1
- (void)dealloc;	// 0x3693f775
// declared property getter: - (BOOL)isActive;	// 0x369413c1
// declared property getter: - (BOOL)isBackingUp;	// 0x369413e1
// declared property getter: - (BOOL)isFastUserSwitched;	// 0x369413f1
// declared property getter: - (BOOL)isInBackground;	// 0x3694151d
// declared property getter: - (BOOL)isScreenLocked;	// 0x369413a1
// declared property getter: - (BOOL)isScreenSaverActive;	// 0x369413b1
// declared property getter: - (BOOL)isSetup;	// 0x3694116d
// declared property getter: - (BOOL)isSystemIdle;	// 0x36940955
// declared property getter: - (BOOL)receivesMemoryWarnings;	// 0x36941381
- (void)removeListener:(id)listener;	// 0x36940cad
// declared property setter: - (void)setActive:(BOOL)active;	// 0x369413d1
// declared property setter: - (void)setIsFastUserSwitched:(BOOL)switched;	// 0x36941401
// declared property setter: - (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x36941231
// declared property setter: - (void)setUsesPowerNotifications:(BOOL)notifications;	// 0x36940541
// declared property setter: - (void)setUsesSystemIdleState:(BOOL)state;	// 0x36940565
// declared property setter: - (void)set_delayTime:(double)time;	// 0x369414a9
// declared property setter: - (void)set_earlyListeners:(id)listeners;	// 0x369414ed
// declared property setter: - (void)set_idleOverride:(BOOL)override;	// 0x369414cd
// declared property setter: - (void)set_idleStart:(id)start;	// 0x36941441
// declared property setter: - (void)set_listeners:(id)listeners;	// 0x36941421
// declared property setter: - (void)set_timer:(id)timer;	// 0x36941461
// declared property setter: - (void)set_userID:(id)anId;	// 0x36941481
// declared property getter: - (double)systemIdleTime;	// 0x36940989
// declared property getter: - (BOOL)systemIsShuttingDown;	// 0x369409e1
// declared property getter: - (BOOL)systemIsSleeping;	// 0x36941391
// declared property getter: - (BOOL)usesPowerNotifications;	// 0x369414fd
// declared property getter: - (BOOL)usesSystemIdleState;	// 0x3694150d
@end
