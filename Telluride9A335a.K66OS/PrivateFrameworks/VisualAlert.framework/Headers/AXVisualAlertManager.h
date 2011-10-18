/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSArray, AXTimer, AXNotificationHandler;
@protocol AXCameraTorchManager;

@interface AXVisualAlertManager : NSObject {
	unsigned _alertTypes;	// 4 = 0x4
	id<AXCameraTorchManager> _cameraTorchManager;	// 8 = 0x8
	AXTimer *_timer;	// 12 = 0xc
	AXTimer *_torchForceShutdownTimer;	// 16 = 0x10
	NSDictionary *_patterns;	// 20 = 0x14
	NSDictionary *_activePattern;	// 24 = 0x18
	unsigned _activePatternCursor;	// 28 = 0x1c
	BOOL _shouldRepeatPattern;	// 32 = 0x20
	NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 36 = 0x24
	NSArray *_notificationHandlers;	// 40 = 0x28
	AXNotificationHandler *_deviceLockStateChangedNotificationHandler;	// 44 = 0x2c
	BOOL _torchDeviceOpen;	// 48 = 0x30
	BOOL _torchDeviceOn;	// 49 = 0x31
	BOOL _isDeviceLocked;	// 50 = 0x32
	BOOL _captureSessionRunning;	// 51 = 0x33
	BOOL _conferenceCallRinging;	// 52 = 0x34
	BOOL _skipAutomaticStopOnUserInteraction;	// 53 = 0x35
}
@property(retain, nonatomic, setter=_setActivePattern:) NSDictionary *_activePattern;	// G=0x307a0631; S=0x307a0641; @synthesize
@property(retain, nonatomic, setter=_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:) NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// G=0x307a0665; S=0x307a0675; @synthesize
@property(readonly, assign, nonatomic) NSDictionary *_patterns;	// G=0x3079ec75; 
@property(assign, nonatomic, getter=_isTorchDeviceOn, setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;	// G=0x307a06a9; S=0x3079ebdd; @synthesize
@property(assign, nonatomic, getter=_isTorchDeviceOpen, setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;	// G=0x307a0699; S=0x3079eb45; @synthesize
+ (void)initialize;	// 0x3079e97d
+ (id)sharedVisualAlertManager;	// 0x3079edbd
- (id)init;	// 0x3079e9e1
// declared property getter: - (id)_activePattern;	// 0x307a0631
- (BOOL)_axHasConferenceCameraTorchManager;	// 0x307a0585
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;	// 0x307a05fd
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat;	// 0x3079f6fd
- (void)_beginVisualAlertWithPattern:(id)pattern repeat:(BOOL)repeat skipAutomaticStopOnUserInteraction:(BOOL)interaction;	// 0x3079f721
- (void)_endVisualAlert;	// 0x3079f8e5
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)sound;	// 0x3079fcc1
- (void)_handleBeginVisualAlertForIncomingCall;	// 0x3079fb8d
- (void)_handleBeginVisualAlertForIncomingConferenceCall;	// 0x3079fbfd
- (void)_handleCaptureSessionDidStartRunning;	// 0x3079ffa1
- (void)_handleCaptureSessionDidStopRunning;	// 0x3079ffb5
- (void)_handleDeviceWasLocked;	// 0x3079ff51
- (void)_handleDeviceWasUnlocked;	// 0x3079ff65
- (void)_handleEndVisualAlertForAlarm;	// 0x3079fd29
- (void)_handleEndVisualAlertForIncomingCall;	// 0x3079fbed
- (void)_handleEndVisualAlertForIncomingConferenceCall;	// 0x3079fc71
- (void)_handleFaceTimeCallRinging;	// 0x3079fecd
- (void)_handleLockButtonPressed;	// 0x3079ff15
- (void)_handleSecondaryVisualAlertManagerDidStart;	// 0x3079fe51
- (void)_handleVisualAlertForExternalApplication;	// 0x3079fdb5
- (void)_handleVisualAlertForIncomingMessage;	// 0x3079fdf1
- (void)_handleVisualAlertForRegularNotification;	// 0x3079fd55
- (void)_handleVolumeChanged;	// 0x3079ff41
- (void)_insertCustomLogicForSystemWideServer;	// 0x307a0085
// declared property getter: - (BOOL)_isTorchDeviceOn;	// 0x307a06a9
// declared property getter: - (BOOL)_isTorchDeviceOpen;	// 0x307a0699
- (id)_normalizedStrobePatternForOriginalPattern:(id)originalPattern;	// 0x307a02f5
// declared property getter: - (id)_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;	// 0x307a0665
// declared property getter: - (id)_patterns;	// 0x3079ec75
- (void)_processNextVisualAlertComponent;	// 0x3079f99d
// declared property setter: - (void)_setActivePattern:(id)pattern;	// 0x307a0641
// declared property setter: - (void)_setPatternToUseForVisualAlertAfterCaptureSessionStopsRunning:(id)visualAlertAfterCaptureSessionStopsRunning;	// 0x307a0675
// declared property setter: - (void)_setTorchDeviceOn:(BOOL)on;	// 0x3079ebdd
// declared property setter: - (void)_setTorchDeviceOpen:(BOOL)open;	// 0x3079eb45
- (void)_startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x3079edcd
- (void)_stop;	// 0x3079f531
- (void)dealloc;	// 0x3079eaa9
- (id)description;	// 0x3079ed2d
- (void)startForAlertTypes:(unsigned)alertTypes cameraTorchManager:(id)manager;	// 0x3079f5e9
- (void)stop;	// 0x3079f691
@end

