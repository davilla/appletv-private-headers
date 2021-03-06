/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"

@class NSMutableArray, NSTimer, CADisplay, NSString;

@interface BRDisplayManager : BRSingleton {
@private
	CADisplay *_display;	// 4 = 0x4
	int _modeChangeFailureCount;	// 8 = 0x8
	NSTimer *_modeChangeFailureRetryTimer;	// 12 = 0xc
	BOOL _computingAllModes;	// 16 = 0x10
	BOOL _settingCurrentMode;	// 17 = 0x11
	NSMutableArray *_nonVirtualModes;	// 20 = 0x14
	NSMutableArray *_virtualModes;	// 24 = 0x18
	NSString *_displayIDMatchingModes;	// 28 = 0x1c
}
+ (void)setSingleton:(id)singleton;	// 0x3329d671
+ (id)singleton;	// 0x3329d661
- (id)init;	// 0x3329d4d5
- (void)_availableModesDidChange;	// 0x3329e521
- (void)_clearUserPreferredModeForCurrentDisplay;	// 0x3329f859
- (void)_computeAllModesForDisplay;	// 0x3329eee5
- (BOOL)_currentModeIsValid;	// 0x3329e611
- (void)_displayModeDidChange;	// 0x3329e3b5
- (BOOL)_setCurrentMode:(id)mode;	// 0x3329e669
- (void)_setDisplay:(id)display;	// 0x3329e2ed
- (void)_setDisplayToDefaultColorMode;	// 0x3329ed3d
- (void)_setDisplayToDefaultMode;	// 0x3329e919
- (id)_uniqueDisplayID;	// 0x3329edc9
- (id)_userPreferredModeForCurrentDisplay;	// 0x3329f41d
- (id)_windowServerDisplay;	// 0x3329ee21
- (id)allPotentialModes;	// 0x3329df71
- (int)colorMode;	// 0x3329dd29
- (id)currentMode;	// 0x3329db4d
- (BOOL)currentModeIsAuto;	// 0x3329dc19
- (void)dealloc;	// 0x3329d5b9
- (BOOL)displayModeSupported:(id)supported;	// 0x3329e0b9
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3329e111
- (BOOL)setColorMode:(int)mode;	// 0x3329ddb9
- (BOOL)setCurrentModeToAuto;	// 0x3329dcc1
- (BOOL)setUserPreferredMode:(id)mode;	// 0x3329d80d
- (id)stringForDisplayMode:(id)displayMode;	// 0x3329d741
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x3329d681
@end

