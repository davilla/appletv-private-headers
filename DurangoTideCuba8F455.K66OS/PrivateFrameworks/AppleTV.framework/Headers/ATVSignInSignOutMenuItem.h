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
	ATVMerchant *_merchant;	// 140 = 0x8c
}
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x306fd6d1; S=0x306fdc01; @synthesize=_merchant
- (void)_update;	// 0x306fd765
- (BOOL)brEventAction:(id)action;	// 0x306fd835
- (void)controlWasActivated;	// 0x306fd6e1
- (void)dealloc;	// 0x306fd71d
// declared property getter: - (id)merchant;	// 0x306fd6d1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x306fdc01
@end

