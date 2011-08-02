/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITableViewController;

__attribute__((visibility("hidden")))
@interface UITableViewControllerKeyboardSupport : NSObject {
@private
	UITableViewController *_tableViewController;	// 4 = 0x4
	float _adjustmentForKeyboard;	// 8 = 0x8
	unsigned _viewIsDisappearing : 1;	// 12 = 0xc
	unsigned _registeredForNotifications : 1;	// 12 = 0xc
}
@property(assign, nonatomic) float adjustmentForKeyboard;	// G=0x30127da5; S=0x30287589; @synthesize=_adjustmentForKeyboard
@property(assign, nonatomic) BOOL registeredForNotifications;	// G=0x30127d59; S=0x30127d6d; 
@property(assign, nonatomic) BOOL viewIsDisappearing;	// G=0x30287575; S=0x30127d89; 
- (id)initWithTableViewController:(id)tableViewController;	// 0x30127d1d
- (void)_keyboardDidHide:(id)_keyboard;	// 0x301b3fd9
- (void)_keyboardDidShow:(id)_keyboard;	// 0x301b37c9
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30287891
- (void)_keyboardWillShow:(id)_keyboard;	// 0x30287909
// declared property getter: - (float)adjustmentForKeyboard;	// 0x30127da5
// declared property getter: - (BOOL)registeredForNotifications;	// 0x30127d59
// declared property setter: - (void)setAdjustmentForKeyboard:(float)keyboard;	// 0x30287589
// declared property setter: - (void)setRegisteredForNotifications:(BOOL)notifications;	// 0x30127d6d
// declared property setter: - (void)setViewIsDisappearing:(BOOL)disappearing;	// 0x30127d89
// declared property getter: - (BOOL)viewIsDisappearing;	// 0x30287575
@end

