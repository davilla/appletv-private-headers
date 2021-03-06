/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSingleton.h"

@class LTThermalNoticeController, NSTimer, NSArray, BRWindow;

__attribute__((visibility("hidden")))
@interface MEPowerManagement : BRSingleton {
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
@property(assign, nonatomic) BOOL playbackPreventsIdleSleep;	// G=0x1a475; S=0x1a485; @synthesize=_playbackPreventsIdleSleep
@property(retain, nonatomic) NSTimer *serverDisconnectAndIdleSleepTimer;	// G=0x1a43d; S=0x1a44d; @synthesize=_serverDisconnectAndIdleSleepTimer
@property(retain, nonatomic) NSTimer *timedSleepTimer;	// G=0x1a405; S=0x1a415; @synthesize=_timedSleepTimer
+ (void)checkInWithBackboardServices;	// 0x17f71
+ (void)setSingleton:(id)singleton;	// 0x17f4d
+ (void)showThermalLevelPopup;	// 0x18039
+ (id)singleton;	// 0x17f3d
+ (void)startManagement;	// 0x17fa1
- (id)init;	// 0x181d5
- (void).cxx_destruct;	// 0x1a495
- (void)_disconnectFromServersAndEnableIdleSleep;	// 0x198e1
- (void)_displayStateChanged:(id)changed;	// 0x18fd5
- (void)_enableConstantAudioDelayed;	// 0x19bc5
- (void)_enableIdleSleepAndWatchdog;	// 0x185a1
- (void)_enterLowPowerModeSoon:(id)soon;	// 0x18ccd
- (void)_handleExplicitWakeRequest:(id)request;	// 0x19e19
- (void)_handleIOPMCallbackMessage:(unsigned)message argument:(void *)argument;	// 0x19d7d
- (void)_handleThermalNotification;	// 0x19e3d
- (void)_mediaserverdDied:(id)died;	// 0x19079
- (void)_playerStateChanged:(id)changed;	// 0x18d61
- (void)_registerForPowerNotifications;	// 0x1889d
- (void)_registerForThermalNotifications;	// 0x18a39
- (void)_setAllowIdleSleep:(BOOL)sleep;	// 0x199dd
- (void)_setConstantAudioOutputEnabled:(BOOL)enabled;	// 0x19bed
- (void)_setMachineToLowPowerMode;	// 0x1911d
- (void)_setMachineToNormalPowerMode;	// 0x19411
- (void)_setShowSleepShroud:(BOOL)shroud;	// 0x1970d
- (void)_touchRemotePlayerStateChanged:(id)changed;	// 0x18d3d
- (void)_turnAirPlayBackOn;	// 0x19cf5
- (void)_unexpectedActivityWhileInLowPower:(id)lowPower;	// 0x19d79
- (void)_updateActivity:(id)activity;	// 0x190ad
- (void)_updateAllTimersDueToActivity:(id)activity;	// 0x18a89
- (void)_updateTimedSleepTimer:(id)timer;	// 0x18aad
- (id)_usageKeys;	// 0x1a249
- (void)dealloc;	// 0x184d9
// declared property getter: - (BOOL)playbackPreventsIdleSleep;	// 0x1a475
// declared property getter: - (id)serverDisconnectAndIdleSleepTimer;	// 0x1a43d
// declared property setter: - (void)setPlaybackPreventsIdleSleep:(BOOL)sleep;	// 0x1a485
// declared property setter: - (void)setServerDisconnectAndIdleSleepTimer:(id)timer;	// 0x1a44d
// declared property setter: - (void)setTimedSleepTimer:(id)timer;	// 0x1a415
// declared property getter: - (id)timedSleepTimer;	// 0x1a405
@end

