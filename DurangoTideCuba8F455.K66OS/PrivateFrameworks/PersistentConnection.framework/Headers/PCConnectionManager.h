/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

#import "PCLoggingDelegate.h"
#import <NSObject.h> // Unknown library

@class PCDarwinNotificationRunLoopSource, NSRunLoop, PCPersistentTimer, NSString;
@protocol PCConnectionManagerDelegate, PCGrowthAlgorithm;

@interface PCConnectionManager : NSObject <PCLoggingDelegate> {
	int _connectionClass;	// 4 = 0x4
	id<PCConnectionManagerDelegate> _delegate;	// 8 = 0x8
	NSString *_serviceIdentifier;	// 12 = 0xc
	int _prefsStyle;	// 16 = 0x10
	int _onlyAllowedStyle;	// 20 = 0x14
	BOOL _onlyAllowedStyleSet;	// 24 = 0x18
	NSRunLoop *_runLoop;	// 28 = 0x1c
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm;	// 32 = 0x20
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm;	// 36 = 0x24
	PCDarwinNotificationRunLoopSource *_prefsChangedSource;	// 40 = 0x28
	PCPersistentTimer *_intervalTimer;	// 44 = 0x2c
	PCPersistentTimer *_reconnectWakeTimer;	// 48 = 0x30
	PCPersistentTimer *_delayTimer;	// 52 = 0x34
	unsigned _powerAssertionID;	// 56 = 0x38
	double _onTimeKeepAliveTime;	// 60 = 0x3c
	double _lastResumeTime;	// 68 = 0x44
	double _lastStopTime;	// 76 = 0x4c
	double _lastReachableTime;	// 84 = 0x54
	double _lastReconnectTime;	// 92 = 0x5c
	double _keepAliveGracePeriod;	// 100 = 0x64
	unsigned _reconnectIteration;	// 108 = 0x6c
	double _defaultPollingInterval;	// 112 = 0x70
	double _pollingIntervalOverride;	// 120 = 0x78
	BOOL _pollingIntervalOverrideSet;	// 128 = 0x80
	BOOL _hasStarted;	// 129 = 0x81
	BOOL _isRunning;	// 130 = 0x82
	BOOL _inCallback;	// 131 = 0x83
	BOOL _isInReconnectMode;	// 132 = 0x84
	BOOL _reconnectWithKeepAliveDelay;	// 133 = 0x85
	BOOL _forceManualWhenRoaming;	// 134 = 0x86
	BOOL _fallBackToAlternateInterface;	// 135 = 0x87
	BOOL _isReachable;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) double currentKeepAliveInterval;	// G=0x3062d0fd; 
@property(assign, nonatomic) BOOL fallBackToAlternateInterface;	// G=0x3062c30d; S=0x3062cd51; @synthesize=_fallBackToAlternateInterface
@property(assign, nonatomic) double keepAliveGracePeriod;	// G=0x3062c31d; S=0x3062cee9; @synthesize=_keepAliveGracePeriod
@property(readonly, assign, nonatomic) NSString *loggingIdentifier;	// G=0x3062c2fd; @synthesize=_serviceIdentifier
@property(assign) double maximumKeepAliveInterval;	// G=0x3062d025; S=0x3062cf8d; 
@property(assign, nonatomic) double minimumKeepAliveInterval;	// G=0x3062d0dd; S=0x3062d045; 
@property(readonly, assign, nonatomic) double pollingInterval;	// G=0x3062c219; 
+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)valid date:(id)date;	// 0x3062c35d
+ (id)_keepAliveCachePath;	// 0x3062f439
+ (Class)growthAlgorithmClass;	// 0x3062d83d
+ (id)intervalCacheDictionaries;	// 0x3062f239
- (id)initWithConnectionClass:(int)connectionClass delegate:(id)delegate serviceIdentifier:(id)identifier;	// 0x3062d4e5
- (void)_adjustInterfaceAssertions;	// 0x3062c4d5
- (void)_calloutWithEvent:(int)event;	// 0x3062c72d
- (void)_clearTimers;	// 0x3062c705
- (void)_clearTimersReleasingPowerAssertion:(BOOL)assertion;	// 0x3062dc9d
- (id)_currentGrowthAlgorithm;	// 0x3062d259
- (void)_delayTimerFired;	// 0x3062c8b9
- (double)_getCachedWWANKeepAliveInterval;	// 0x3062c3ad
- (void)_intervalTimerFired;	// 0x3062c915
- (void)_loadPreferencesGeneratingEvent:(BOOL)event;	// 0x3062d85d
- (void)_preferencesChanged;	// 0x3062d3b5
- (void)_releasePowerAssertion;	// 0x3062ee65
- (void)_resolveStateWithAction:(int)action;	// 0x3062c1b1
- (void)_saveWWANKeepAliveInterval:(double)interval;	// 0x3062ef65
- (void)_setupKeepAliveForReconnect;	// 0x3062e941
- (void)_setupTimerForPoll;	// 0x3062cb91
- (void)_setupTimerForPushWithKeepAliveInterval:(double)keepAliveInterval;	// 0x3062dd79
- (id)_stringForAction:(int)action;	// 0x3062c245
- (id)_stringForEvent:(int)event;	// 0x3062c2a5
- (void)_takePowerAssertion;	// 0x3062ed61
- (void)_validateActionForCurrentStyle:(int)currentStyle;	// 0x3062e809
- (void)cancelPollingIntervalOverride;	// 0x3062cdd5
// declared property getter: - (double)currentKeepAliveInterval;	// 0x3062d0fd
- (int)currentStyle;	// 0x3062d2e1
- (void)dealloc;	// 0x3062d3cd
// declared property getter: - (BOOL)fallBackToAlternateInterface;	// 0x3062c30d
- (void)interfaceManagerInHomeCountryStatusChanged:(id)homeCountryStatusChanged;	// 0x3062c601
- (void)interfaceManagerInternetReachabilityChanged:(id)changed;	// 0x3062db71
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)changed;	// 0x3062c619
// declared property getter: - (double)keepAliveGracePeriod;	// 0x3062c31d
- (void)log:(id)log;	// 0x3062f209
- (void)logAtLevel:(int)level format:(id)format;	// 0x3062f1d5
- (void)logAtLevel:(int)level format:(id)format arguments:(void *)arguments;	// 0x3062c32d
// declared property getter: - (id)loggingIdentifier;	// 0x3062c2fd
// declared property getter: - (double)maximumKeepAliveInterval;	// 0x3062d025
// declared property getter: - (double)minimumKeepAliveInterval;	// 0x3062d0dd
// declared property getter: - (double)pollingInterval;	// 0x3062c219
- (void)resumeManagerWithAction:(int)action;	// 0x3062e29d
// declared property setter: - (void)setFallBackToAlternateInterface:(BOOL)alternateInterface;	// 0x3062cd51
// declared property setter: - (void)setKeepAliveGracePeriod:(double)period;	// 0x3062cee9
// declared property setter: - (void)setMaximumKeepAliveInterval:(double)interval;	// 0x3062cf8d
// declared property setter: - (void)setMinimumKeepAliveInterval:(double)interval;	// 0x3062d045
- (void)setOnlyAllowedStyle:(int)style;	// 0x3062d2b1
- (void)setPollingIntervalOverride:(double)override;	// 0x3062ce41
- (BOOL)shouldClientScheduleReconnectDueToFailure;	// 0x3062e041
- (void)startManager;	// 0x3062d229
- (void)stopManager;	// 0x3062d121
@end

