/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRMenuItem.h> // Unknown library

@class ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVSignInSignOutMenuItem : BRMenuItem {
@private
	ATVMerchant *_merchant;	// 136 = 0x88
}
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x307ccb5d; S=0x307cce61; @synthesize=_merchant
- (void)_update;	// 0x307ccd85
- (BOOL)brEventAction:(id)action;	// 0x307ccb6d
- (void)controlWasActivated;	// 0x307ccd01
- (void)dealloc;	// 0x307ccd3d
// declared property getter: - (id)merchant;	// 0x307ccb5d
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x307cce61
@end

