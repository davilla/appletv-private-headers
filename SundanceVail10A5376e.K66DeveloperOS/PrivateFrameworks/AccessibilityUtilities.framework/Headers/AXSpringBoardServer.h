/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "AXServer.h"
#import "AccessibilityUtilities-Structs.h"

@class NSMutableArray;

@interface AXSpringBoardServer : AXServer {
	id _currentAlertHandler;	// 16 = 0x10
	NSMutableArray *_gestureOverrides;	// 20 = 0x14
	NSMutableArray *_actionHandlers;	// 24 = 0x18
}
+ (id)server;	// 0x341a2011
- (id)init;	// 0x341a207d
- (BOOL)_connectIfNecessary;	// 0x341a28b5
- (void)_connectServerIfNecessary;	// 0x341a262d
- (id)_handleActionResult:(id)result;	// 0x341a2401
- (id)_handleGestureOverrideResult:(id)result;	// 0x341a2209
- (id)_handleReplyResult:(id)result;	// 0x341a2169
- (id)_serviceName;	// 0x341a2159
- (BOOL)_shouldValidateEntitlements;	// 0x341a2629
- (int)activeApplicationOrientation;	// 0x341a4185
- (void)cleanupAlertHandler;	// 0x341a3049
- (void)dealloc;	// 0x341a210d
- (void)hideAlert;	// 0x341a3079
- (BOOL)isMakingEmergencyCall;	// 0x341a2c3d
- (BOOL)isOrientationLocked;	// 0x341a2d31
- (BOOL)isPointInsideAccessibilityInspector:(XXStruct_uk_lJC *)inspector;	// 0x341a408d
- (BOOL)isRingerMuted;	// 0x341a2e69
- (BOOL)isScreenLockedWithPasscode:(BOOL *)passcode;	// 0x341a2e81
- (BOOL)isSideSwitchUsedForOrientation;	// 0x341a2e51
- (BOOL)isSystemSleeping;	// 0x341a2d19
- (BOOL)isVideoPlaying;	// 0x341a2e25
- (BOOL)isVoiceControlRunning;	// 0x341a2c25
- (void)openAppSwitcher;	// 0x341a2ab9
- (void)openAssistiveTouchCustomGestureCreation;	// 0x341a2acd
- (void)openSiri;	// 0x341a2a91
- (void)openVoiceControl;	// 0x341a2aa5
- (int)pid;	// 0x341a4091
- (void)registerOverrideIntentForGesture:(int)gesture withHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x341a3da9
- (void)registerSpringBoardActionHandler:(id)handler withIdentifierCallback:(id)identifierCallback;	// 0x341a3591
- (void)removeActionHandler:(NSString *)handler;	// 0x341a33dd
- (void)removeOverrideIntent:(NSString *)intent;	// 0x341a3941
- (void)resetDimTimer;	// 0x341a2e3d
- (void)setCancelGestureActivation:(int)activation cancelEnabled:(BOOL)enabled;	// 0x341a3c05
- (void)setSystemGesturesEnabled:(BOOL)enabled;	// 0x341a2d49
- (void)setVolume:(float)volume;	// 0x341a2ae1
- (void)showAlert:(int)alert withHandler:(id)handler;	// 0x341a3175
- (void)showAlert:(int)alert withHandler:(id)handler withData:(id)data;	// 0x341a3199
- (void)takeScreenshot;	// 0x341a2a7d
- (void)toggleGuidedAccess;	// 0x341a2b69
- (void)toggleHearingControl;	// 0x341a2ae5
- (int)topEventPidOverride;	// 0x341a2c55
- (float)volumeLevel;	// 0x341a2f85
@end

