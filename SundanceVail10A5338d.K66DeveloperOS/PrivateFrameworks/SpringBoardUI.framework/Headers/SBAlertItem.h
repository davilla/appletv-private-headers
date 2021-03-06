/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library
#import "UIAlertViewDelegate.h"

@class UIAlertView, NSArray;

@interface SBAlertItem : NSObject <UIAlertViewDelegate> {
	UIAlertView *_alertSheet;	// 4 = 0x4
	BOOL _orderOverSBAlert;	// 8 = 0x8
	BOOL _preventLockOver;	// 9 = 0x9
	BOOL _didEverActivate;	// 10 = 0xa
	BOOL _ignoreIfAlreadyDisplaying;	// 11 = 0xb
	BOOL _didPlayPresentationSound;	// 12 = 0xc
	BOOL _allowInSetup;	// 13 = 0xd
	BOOL _pendInSetupIfNotAllowed;	// 14 = 0xe
	NSArray *_allowedBundleIDs;	// 16 = 0x10
}
@property(readonly, retain) UIAlertView *alertSheet;	// G=0x3308e401; converted property
@property(assign, nonatomic) BOOL allowInSetup;	// G=0x3308e885; S=0x3308e895; @synthesize=_allowInSetup
@property(retain, nonatomic) NSArray *allowedBundleIDs;	// G=0x3308e8c5; S=0x3308e8d5; @synthesize=_allowedBundleIDs
@property(readonly, assign) BOOL didPlayPresentationSound;	// G=0x3308e5c1; converted property
@property(assign, nonatomic) BOOL ignoreIfAlreadyDisplaying;	// G=0x3308e865; S=0x3308e875; @synthesize=_ignoreIfAlreadyDisplaying
@property(assign, nonatomic) BOOL pendInSetupIfNotAllowed;	// G=0x3308e8a5; S=0x3308e8b5; @synthesize=_pendInSetupIfNotAllowed
@property(assign) BOOL preventLockOver;	// G=0x3308e6d5; S=0x3308e6e5; converted property
+ (id)_alertItemsController;	// 0x3308e391
+ (void)activateAlertItem:(id)item;	// 0x3308e3b9
- (id)init;	// 0x3308e4c9
- (BOOL)_didEverActivate;	// 0x3308e721
- (void)_playPresentationSound;	// 0x3308e5d1
- (id)alertItemNotificationDate;	// 0x3308e811
- (id)alertItemNotificationSender;	// 0x3308e815
- (int)alertItemNotificationType;	// 0x3308e80d
- (int)alertPriority;	// 0x3308e829
// converted property getter: - (id)alertSheet;	// 0x3308e401
- (Class)alertSheetClass;	// 0x3308e3e5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3308e855
- (BOOL)allowAutoUnlock;	// 0x3308e5a1
// declared property getter: - (BOOL)allowInSetup;	// 0x3308e885
- (BOOL)allowMenuButtonDismissal;	// 0x3308e59d
// declared property getter: - (id)allowedBundleIDs;	// 0x3308e8c5
- (double)autoDismissInterval;	// 0x3308e689
- (BOOL)behavesSuperModally;	// 0x3308e81d
- (void)buttonDismissed;	// 0x3308e78d
- (void)cleanPreviousConfiguration;	// 0x3308e61d
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0x3308e65d
- (void)dealloc;	// 0x3308e525
- (void)didActivate;	// 0x3308e785
- (void)didDeactivateForReason:(int)reason;	// 0x3308e805
- (void)didFailToActivate;	// 0x3308e7fd
// converted property getter: - (BOOL)didPlayPresentationSound;	// 0x3308e5c1
- (void)dismiss;	// 0x3308e7a1
- (void)dismiss:(int)dismiss;	// 0x3308e7b5
- (BOOL)dismissOnLock;	// 0x3308e5b9
- (BOOL)dismissOnModalDisplayActivation;	// 0x3308e5bd
- (BOOL)forcesModalAlertAppearance;	// 0x3308e819
- (BOOL)hasActiveKeyboardOnScreen;	// 0x3308e82d
// declared property getter: - (BOOL)ignoreIfAlreadyDisplaying;	// 0x3308e865
- (id)lockLabel;	// 0x3308e661
- (float)lockLabelFontSize;	// 0x3308e669
- (void)noteVolumeOrLockPressed;	// 0x3308e809
// declared property getter: - (BOOL)pendInSetupIfNotAllowed;	// 0x3308e8a5
- (void)performUnlockAction;	// 0x3308e6a1
- (void)playPresentationSound;	// 0x3308e5d5
// converted property getter: - (BOOL)preventLockOver;	// 0x3308e6d5
- (BOOL)reappearsAfterLock;	// 0x3308e821
- (BOOL)reappearsAfterUnlock;	// 0x3308e825
- (void)screenWillUndim;	// 0x3308e7f9
// declared property setter: - (void)setAllowInSetup:(BOOL)setup;	// 0x3308e895
// declared property setter: - (void)setAllowedBundleIDs:(id)ids;	// 0x3308e8d5
// declared property setter: - (void)setIgnoreIfAlreadyDisplaying:(BOOL)displaying;	// 0x3308e875
- (void)setOrderOverSBAlert:(BOOL)alert;	// 0x3308e6a5
// declared property setter: - (void)setPendInSetupIfNotAllowed:(BOOL)setupIfNotAllowed;	// 0x3308e8b5
// converted property setter: - (void)setPreventLockOver:(BOOL)over;	// 0x3308e6e5
- (id)shortLockLabel;	// 0x3308e665
- (BOOL)shouldShowInEmergencyCall;	// 0x3308e5a9
- (BOOL)shouldShowInLockScreen;	// 0x3308e5a5
- (BOOL)togglesMediaControls;	// 0x3308e5b5
- (BOOL)undimsScreen;	// 0x3308e5ad
- (BOOL)unlocksScreen;	// 0x3308e5b1
- (void)willActivate;	// 0x3308e731
- (void)willDeactivateForReason:(int)reason;	// 0x3308e801
- (void)willRelockForButtonPress:(BOOL)buttonPress;	// 0x3308e789
@end

