/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSTimer, NSDate, NSString, NSMutableArray;

@interface IMSystemMonitor : NSObject {
	BOOL _watchesScreenLightState;	// 4 = 0x4
	BOOL _receivesMemoryWarnings;	// 5 = 0x5
	BOOL _willSleep;	// 6 = 0x6
	BOOL _screenLocked;	// 7 = 0x7
	BOOL _screensaverActive;	// 8 = 0x8
	BOOL _watchesSystemLockState;	// 9 = 0x9
	BOOL _active;	// 10 = 0xa
	BOOL _backingUp;	// 11 = 0xb
	BOOL _switchedOut;	// 12 = 0xc
	NSMutableArray *_listeners;	// 16 = 0x10
	NSDate *_idleStart;	// 20 = 0x14
	NSTimer *_timer;	// 24 = 0x18
	BOOL _screenLit;	// 28 = 0x1c
	NSDate *_dateScreenLightLastChanged;	// 32 = 0x20
	NSDate *_dateSystemLockLastChanged;	// 36 = 0x24
	BOOL _systemLocked;	// 40 = 0x28
	NSString *_userID;	// 44 = 0x2c
	double _delayTime;	// 48 = 0x30
	BOOL _idleOverride;	// 56 = 0x38
	NSMutableArray *_earlyListeners;	// 60 = 0x3c
	BOOL _usesPowerNotifications;	// 64 = 0x40
	BOOL _usesSystemIdleState;	// 65 = 0x41
	BOOL _inBackground;	// 66 = 0x42
}
@property(assign, nonatomic) double _delayTime;	// G=0x36eb6f11; S=0x36eb6f29; @synthesize
@property(retain, nonatomic) NSMutableArray *_earlyListeners;	// G=0x36eb6f5d; S=0x36eb6f6d; @synthesize
@property(assign, nonatomic) BOOL _idleOverride;	// G=0x36eb6f3d; S=0x36eb6f4d; @synthesize
@property(retain, nonatomic) NSDate *_idleStart;	// G=0x36eb6e71; S=0x36eb6e81; @synthesize
@property(retain, nonatomic) NSMutableArray *_listeners;	// G=0x36eb6e51; S=0x36eb6e61; @synthesize
@property(retain, nonatomic) NSTimer *_timer;	// G=0x36eb6e91; S=0x36eb6ea1; @synthesize
@property(retain, nonatomic) NSString *_userID;	// G=0x36eb6ef1; S=0x36eb6f01; @synthesize
@property(readonly, assign, nonatomic) NSDate *dateScreenLightLastChanged;	// G=0x36eb6ec1; @synthesize=_dateScreenLightLastChanged
@property(readonly, assign, nonatomic) NSDate *dateSystemLockLastChanged;	// G=0x36eb6ed1; @synthesize=_dateSystemLockLastChanged
@property(assign, nonatomic, setter=setActive:) BOOL isActive;	// G=0x36eb6e01; S=0x36eb6e11; @synthesize=_active
@property(readonly, assign, nonatomic) BOOL isBackingUp;	// G=0x36eb6e21; @synthesize=_backingUp
@property(assign, nonatomic) BOOL isFastUserSwitched;	// G=0x36eb6e31; S=0x36eb6e41; @synthesize=_switchedOut
@property(readonly, assign, nonatomic) BOOL isInBackground;	// G=0x36eb6f9d; @synthesize=_inBackground
@property(readonly, assign, nonatomic) BOOL isScreenLit;	// G=0x36eb6eb1; @synthesize=_screenLit
@property(readonly, assign, nonatomic) BOOL isScreenLocked;	// G=0x36eb6dd1; @synthesize=_screenLocked
@property(readonly, assign, nonatomic) BOOL isScreenSaverActive;	// G=0x36eb6de1; @synthesize=_screensaverActive
@property(readonly, assign, nonatomic) BOOL isSetup;	// G=0x36eb6b8d; 
@property(readonly, assign, nonatomic) BOOL isSystemIdle;	// G=0x36eb6379; 
@property(readonly, assign, nonatomic) BOOL isSystemLocked;	// G=0x36eb6ee1; @synthesize=_systemLocked
@property(assign, nonatomic) BOOL receivesMemoryWarnings;	// G=0x36eb6db1; S=0x36eb6c51; @synthesize=_receivesMemoryWarnings
@property(readonly, assign, nonatomic) double systemIdleTime;	// G=0x36eb63a9; 
@property(readonly, assign, nonatomic) BOOL systemIsShuttingDown;	// G=0x36eb6401; 
@property(readonly, assign, nonatomic) BOOL systemIsSleeping;	// G=0x36eb6dc1; @synthesize=_willSleep
@property(assign, nonatomic) BOOL usesPowerNotifications;	// G=0x36eb6f7d; S=0x36eb5cbd; @synthesize=_usesPowerNotifications
@property(assign, nonatomic) BOOL usesSystemIdleState;	// G=0x36eb6f8d; S=0x36eb5f89; @synthesize=_usesSystemIdleState
@property(assign, nonatomic) BOOL watchesScreenLightState;	// G=0x36eb6da1; S=0x36eb5bed; @synthesize=_watchesScreenLightState
@property(assign, nonatomic) BOOL watchesSystemLockState;	// G=0x36eb6df1; S=0x36eb5b31; @synthesize=_watchesSystemLockState
+ (id)sharedInstance;	// 0x36eb4799
- (id)init;	// 0x36eb4845
- (void)_addEarlyListener:(id)listener;	// 0x36eb642d
- (void)_applicationDidBecomeActive:(id)_application;	// 0x36eb54e1
- (void)_applicationDidEnterBackground:(id)_application;	// 0x36eb597d
- (void)_applicationDidRemoveDeactivationReason:(id)_application;	// 0x36eb5a99
- (void)_applicationWillAddDeactivationReason:(id)_application;	// 0x36eb5a01
- (void)_applicationWillEnterForeground:(id)_application;	// 0x36eb58f9
- (void)_applicationWillResignActive:(id)_application;	// 0x36eb5441
- (void)_checkRestoredFromBackup;	// 0x36eb6795
// declared property getter: - (double)_delayTime;	// 0x36eb6f11
- (void)_deliverNotificationSelector:(SEL)selector;	// 0x36eb4f2d
// declared property getter: - (id)_earlyListeners;	// 0x36eb6f5d
- (void)_handleLoginWindowNotification:(id)notification;	// 0x36eb6bed
// declared property getter: - (BOOL)_idleOverride;	// 0x36eb6f3d
// declared property getter: - (id)_idleStart;	// 0x36eb6e71
// declared property getter: - (id)_listeners;	// 0x36eb6e51
- (void)_notificationCenterDidDisappear:(id)_notificationCenter;	// 0x36eb573d
- (void)_notificationCenterWillAppear:(id)_notificationCenter;	// 0x36eb56e5
- (void)_overrideAndDisableIdleTimer:(BOOL)timer;	// 0x36eb61d9
- (void)_postScreenLocked;	// 0x36eb52dd
- (void)_postScreenSaverStarted;	// 0x36eb5795
- (void)_receivedMemoryNotification;	// 0x36eb6bf9
- (void)_registerForLoginWindowNotifications;	// 0x36eb6bf1
- (void)_registerForRestoreNotifications;	// 0x36eb6985
- (void)_removeEarlyListener:(id)listener;	// 0x36eb6519
- (void)_restoreDidStart;	// 0x36eb6841
- (void)_restoreDidStop;	// 0x36eb6871
- (void)_resume:(id)resume;	// 0x36eb568d
- (void)_resumeEventsOnly:(id)only;	// 0x36eb55dd
- (void)_screenLocked:(id)locked;	// 0x36eb5351
- (void)_screenSaverStarted:(id)started;	// 0x36eb587d
- (void)_screenSaverStopped:(id)stopped;	// 0x36eb5809
- (void)_screenUnlocked:(id)unlocked;	// 0x36eb53cd
- (void)_setIdleState:(BOOL)state;	// 0x36eb60c9
- (void)_setSystemLockState:(BOOL)state;	// 0x36eb5e35
- (void)_setSystemScreenState:(BOOL)state;	// 0x36eb5ce1
- (void)_setupStateChanged;	// 0x36eb6901
- (void)_suspend:(id)suspend;	// 0x36eb5635
- (void)_suspendEventsOnly:(id)only;	// 0x36eb5585
- (void)_systemDidWake;	// 0x36eb527d
- (void)_systemWillShutdown;	// 0x36eb6411
- (void)_systemWillSleep;	// 0x36eb52ad
// declared property getter: - (id)_timer;	// 0x36eb6e91
- (void)_unregisterForLoginWindowNotifications;	// 0x36eb6bf5
- (void)_unregisterForRestoreNotifications;	// 0x36eb6b29
// declared property getter: - (id)_userID;	// 0x36eb6ef1
- (void)addListener:(id)listener;	// 0x36eb65e1
// declared property getter: - (id)dateScreenLightLastChanged;	// 0x36eb6ec1
// declared property getter: - (id)dateSystemLockLastChanged;	// 0x36eb6ed1
- (void)dealloc;	// 0x36eb4d25
// declared property getter: - (BOOL)isActive;	// 0x36eb6e01
// declared property getter: - (BOOL)isBackingUp;	// 0x36eb6e21
// declared property getter: - (BOOL)isFastUserSwitched;	// 0x36eb6e31
// declared property getter: - (BOOL)isInBackground;	// 0x36eb6f9d
// declared property getter: - (BOOL)isScreenLit;	// 0x36eb6eb1
// declared property getter: - (BOOL)isScreenLocked;	// 0x36eb6dd1
// declared property getter: - (BOOL)isScreenSaverActive;	// 0x36eb6de1
// declared property getter: - (BOOL)isSetup;	// 0x36eb6b8d
// declared property getter: - (BOOL)isSystemIdle;	// 0x36eb6379
// declared property getter: - (BOOL)isSystemLocked;	// 0x36eb6ee1
// declared property getter: - (BOOL)receivesMemoryWarnings;	// 0x36eb6db1
- (void)removeListener:(id)listener;	// 0x36eb66cd
// declared property setter: - (void)setActive:(BOOL)active;	// 0x36eb6e11
// declared property setter: - (void)setIsFastUserSwitched:(BOOL)switched;	// 0x36eb6e41
// declared property setter: - (void)setReceivesMemoryWarnings:(BOOL)warnings;	// 0x36eb6c51
// declared property setter: - (void)setUsesPowerNotifications:(BOOL)notifications;	// 0x36eb5cbd
// declared property setter: - (void)setUsesSystemIdleState:(BOOL)state;	// 0x36eb5f89
// declared property setter: - (void)setWatchesScreenLightState:(BOOL)state;	// 0x36eb5bed
// declared property setter: - (void)setWatchesSystemLockState:(BOOL)state;	// 0x36eb5b31
// declared property setter: - (void)set_delayTime:(double)time;	// 0x36eb6f29
// declared property setter: - (void)set_earlyListeners:(id)listeners;	// 0x36eb6f6d
// declared property setter: - (void)set_idleOverride:(BOOL)override;	// 0x36eb6f4d
// declared property setter: - (void)set_idleStart:(id)start;	// 0x36eb6e81
// declared property setter: - (void)set_listeners:(id)listeners;	// 0x36eb6e61
// declared property setter: - (void)set_timer:(id)timer;	// 0x36eb6ea1
// declared property setter: - (void)set_userID:(id)anId;	// 0x36eb6f01
// declared property getter: - (double)systemIdleTime;	// 0x36eb63a9
// declared property getter: - (BOOL)systemIsShuttingDown;	// 0x36eb6401
// declared property getter: - (BOOL)systemIsSleeping;	// 0x36eb6dc1
// declared property getter: - (BOOL)usesPowerNotifications;	// 0x36eb6f7d
// declared property getter: - (BOOL)usesSystemIdleState;	// 0x36eb6f8d
// declared property getter: - (BOOL)watchesScreenLightState;	// 0x36eb6da1
// declared property getter: - (BOOL)watchesSystemLockState;	// 0x36eb6df1
@end
