/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LTThermalNoticeController, BRWindow, NSArray, NSTimer;

__attribute__((visibility("hidden")))
@interface MEPowerManagement : XXUnknownSuperclass {
	NSTimer *_timer;	// 4 = 0x4
	BRWindow *_window;	// 8 = 0x8
	BOOL _inLowPowerMode;	// 12 = 0xc
	BOOL _setIdleSleepTime;	// 13 = 0xd
	NSTimer *_timedSleepTimer;	// 16 = 0x10
	NSArray *_usageKeys;	// 20 = 0x14
	LTThermalNoticeController *_thermalNoteController;	// 24 = 0x18
	unsigned _pmNoIdleSleepAssertionID;	// 28 = 0x1c
	unsigned _ioNotifier;	// 32 = 0x20
	unsigned _ioConnection;	// 36 = 0x24
	NSTimer *_serverDisconnectAndIdleSleepTimer;	// 40 = 0x28
	BOOL _playbackPreventsIdleSleep;	// 44 = 0x2c
}
@property(assign, nonatomic) BOOL playbackPreventsIdleSleep;	// G=0x18315; S=0x18325; @synthesize=_playbackPreventsIdleSleep
@property(retain, nonatomic) NSTimer *serverDisconnectAndIdleSleepTimer;	// G=0x182e1; S=0x182f1; @synthesize=_serverDisconnectAndIdleSleepTimer
@property(retain, nonatomic) NSTimer *timedSleepTimer;	// G=0x182ad; S=0x182bd; @synthesize=_timedSleepTimer
+ (void)setSingleton:(id)singleton;	// 0x15cd9
+ (void)showThermalLevelPopup;	// 0x15d9d
+ (id)singleton;	// 0x15cc9
+ (void)startManagement;	// 0x15cf1
- (id)init;	// 0x15f31
- (void).cxx_destruct;	// 0x18335
- (void)_disconnectFromServersAndEnableIdleSleep;	// 0x177d5
- (void)_displayStateChanged:(id)changed;	// 0x16d61
- (void)_enableConstantAudioDelayed;	// 0x17a69
- (void)_enableIdleSleepAndWatchdog;	// 0x16371
- (void)_enterLowPowerModeSoon:(id)soon;	// 0x16aa9
- (void)_handleExplicitWakeRequest:(id)request;	// 0x17cb1
- (void)_handleIOPMCallbackMessage:(unsigned)message argument:(void *)argument;	// 0x17c1d
- (void)_handleThermalNotification;	// 0x17cdd
- (void)_mediaserverdDied:(id)died;	// 0x16e01
- (void)_playerStateChanged:(id)changed;	// 0x16b45
- (void)_registerForPowerNotifications;	// 0x16655
- (void)_registerForThermalNotifications;	// 0x167e5
- (void)_setAllowIdleSleep:(BOOL)sleep;	// 0x17895
- (void)_setConstantAudioOutputEnabled:(BOOL)enabled;	// 0x17a95
- (void)_setDisplayBlanked:(BOOL)blanked;	// 0x176c5
- (void)_setMachineToLowPowerMode;	// 0x16ea5
- (void)_setMachineToNormalPowerMode;	// 0x171ad
- (void)_setShowSleepShroud:(BOOL)shroud;	// 0x17521
- (void)_touchRemotePlayerStateChanged:(id)changed;	// 0x16b19
- (void)_turnAirPlayBackOn;	// 0x17b95
- (void)_unexpectedActivityWhileInLowPower:(id)lowPower;	// 0x17c19
- (void)_updateActivity:(id)activity;	// 0x16e35
- (void)_updateAllTimersDueToActivity:(id)activity;	// 0x16835
- (void)_updateTimedSleepTimer:(id)timer;	// 0x16861
- (id)_usageKeys;	// 0x180f9
- (void)dealloc;	// 0x162a5
// declared property getter: - (BOOL)playbackPreventsIdleSleep;	// 0x18315
// declared property getter: - (id)serverDisconnectAndIdleSleepTimer;	// 0x182e1
// declared property setter: - (void)setPlaybackPreventsIdleSleep:(BOOL)sleep;	// 0x18325
// declared property setter: - (void)setServerDisconnectAndIdleSleepTimer:(id)timer;	// 0x182f1
// declared property setter: - (void)setTimedSleepTimer:(id)timer;	// 0x182bd
// declared property getter: - (id)timedSleepTimer;	// 0x182ad
@end

